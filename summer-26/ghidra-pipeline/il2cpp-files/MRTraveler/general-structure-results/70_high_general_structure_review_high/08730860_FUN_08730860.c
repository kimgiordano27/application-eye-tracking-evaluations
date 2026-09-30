/*
FUNCTION_NAME: FUN_08730860
ENTRY_POINT: 08730860
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4
*/


void FUN_08730860(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_0943c95a & 1) == 0) {
    FUN_03c8f898(System_Xml_Schema_XmlAtomicValue___var);
    FUN_03c8f898(UnityEngine_Pool_CollectionPool<List<RectMask2D>,_RectMask2D>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e85b40);
    FUN_03c8f898(System_Comparison<XmlReflectionMember>_TypeInfo);
    FUN_03c8f898(System_Comparison<DecalEntityManager_CombinedChunks>_TypeInfo);
    FUN_03c8f898(System_Comparison<Huffman_HuffmanListNode>_TypeInfo);
    FUN_03c8f898(System_Comparison<NetworkMessageManager_MessageWithHandler>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e85b48);
    FUN_03c8f898(System_Comparison<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_03c8f898(System_Comparison<TimeNotificationBehaviour_NotificationEntry>_TypeInfo);
    FUN_03c8f898(System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo);
    FUN_03c8f898(System_Comparison<VisualElementFocusRing_FocusRingRecord>_TypeInfo);
    FUN_03c8f898(UnityEngine_Pool_CollectionPool<List<int>,_int>_TypeInfo);
    DAT_0943c95a = 1;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    uVar2 = FUN_06a4e574(*(long *)(param_1 + 0x400),param_2,
                         *(undefined8 *)System_Comparison<Huffman_HuffmanListNode>_TypeInfo);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = thunk_FUN_03cf5234(*(undefined8 *)
                                UnityEngine_Pool_CollectionPool<List<int>,_int>_TypeInfo);
    FUN_0873150c(lVar3,param_2);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)
                                System_Comparison<VisualElementFocusRing_FocusRingRecord>_TypeInfo);
    FUN_08731cdc();
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e85b48);
    FUN_04ca52e4(uVar5,param_1,
                 *(undefined8 *)
                  System_Comparison<TimeNotificationBehaviour_NotificationEntry>_TypeInfo,0);
    if (lVar3 != 0) {
      FUN_045d5b30(lVar3,uVar5,0,*(undefined8 *)PTR_DAT_08e85b40);
      lVar6 = *(long *)(lVar3 + 1000);
      uVar5 = thunk_FUN_03cf5234(*(undefined8 *)System_Xml_Schema_XmlAtomicValue___var);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                (uVar5,param_1,*(undefined8 *)System_Comparison<OVRRaycaster_RaycastHit>_TypeInfo,0)
      ;
      if (lVar6 != 0) {
        FUN_086a5480(lVar6,uVar5,0);
        lVar6 = *(long *)(lVar3 + 0x3f0);
        uVar5 = thunk_FUN_03cf5234(*(undefined8 *)
                                    UnityEngine_Pool_CollectionPool<List<RectMask2D>,_RectMask2D>_TypeInfo
                                  );
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  (uVar5,param_1,
                   *(undefined8 *)System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo,0);
        if ((lVar6 != 0) && (FUN_0872b6ec(lVar6,uVar5,0), lVar4 != 0)) {
          uVar7 = *(undefined8 *)(lVar4 + 0x3c8);
          uVar5 = thunk_FUN_03cf5234(*(undefined8 *)
                                      System_Comparison<DecalEntityManager_CombinedChunks>_TypeInfo)
          ;
          FUN_0872dfc4(uVar5,param_2);
          FUN_086e4a0c(uVar7,uVar5,0);
          lVar8 = *(long *)(param_1 + 0x400);
          lVar6 = thunk_FUN_03cf5234(*(undefined8 *)System_Comparison<XmlReflectionMember>_TypeInfo)
          ;
          FUN_07145224(lVar6,0);
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = lVar3;
            thunk_FUN_03d233cc((long *)(lVar6 + 0x10),lVar3);
            *(long *)(lVar6 + 0x18) = lVar4;
            thunk_FUN_03d233cc((long *)(lVar6 + 0x18),lVar4);
            if ((lVar8 != 0) &&
               (FUN_06a4e36c(lVar8,param_2,lVar6,
                             *(undefined8 *)
                              System_Comparison<NetworkMessageManager_MessageWithHandler>_TypeInfo),
               param_2 != 0)) {
              if (*(char *)(param_2 + 0x40) == '\0') {
                FUN_08731dd8(param_1,param_2);
LAB_08730b68:
                FUN_08730d60(param_1);
                FUN_08730cf0(param_1);
                return;
              }
              lVar6 = *(long *)(param_1 + 0x410);
              uVar1 = FUN_087419bc(param_2,0);
              if (lVar6 != 0) {
                FUN_087ccf80(lVar6,uVar1,lVar3,0);
                lVar3 = *(long *)(param_1 + 0x418);
                uVar1 = FUN_087419bc(param_2,0);
                if (lVar3 != 0) {
                  FUN_087ccf80(lVar3,uVar1,lVar4,0);
                  goto LAB_08730b68;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


