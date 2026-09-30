/*
FUNCTION_NAME: FUN_088cf324
ENTRY_POINT: 088cf324
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_088cf324(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_0943e26a & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f06d10);
    FUN_03c8f898(PTR_DAT_08f06d18);
    FUN_03c8f898(PTR_DAT_08f06d20);
    FUN_03c8f898(PTR_DAT_08ea6ef0);
    FUN_03c8f898(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e698f0);
    FUN_03c8f898(UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo);
    FUN_03c8f898(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_03c8f898(Unity_Netcode_NetworkList_OnListChangedDelegate<ulong>_TypeInfo);
    FUN_03c8f898(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<bool>_TypeInfo);
    FUN_03c8f898(Unity_Netcode_NetworkVariable_OnValueChangedDelegate<FixedString128Bytes>_TypeInfo)
    ;
    DAT_0943e26a = 1;
  }
  *(long *)(param_1 + 0x10) = (long)param_2;
  thunk_FUN_03d233cc((long *)(param_1 + 0x10),param_2);
  *(long *)(param_1 + 0x48) = param_3;
  thunk_FUN_03d233cc((long *)(param_1 + 0x48),param_3);
  puVar2 = UnityEngine_Rendering_ObservableList<DebugUI_Widget>_TypeInfo;
  puVar1 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo;
  if (param_2 != (long *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
    plVar6 = (long *)(param_1 + 0x58);
    *plVar6 = lVar3;
    thunk_FUN_03d233cc(plVar6,lVar3);
    lVar3 = *plVar6;
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    System_Collections_Generic_HashSet<Vector3Int>__System_Collections_Generic_ICollection<T>_Add
              (uVar4,param_1,*(undefined8 *)puVar2,0);
    if (lVar3 != 0) {
      FUN_088903dc(lVar3,uVar4,0);
      if (*plVar6 != 0) {
        FUN_08890830(*plVar6,*(undefined1 *)(param_1 + 0x20),0);
        if (*(long *)(param_1 + 0x58) != 0) {
          FUN_088904e4(*(long *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x30),0);
          if (((*(long *)(param_1 + 0x58) != 0) &&
              (FUN_08891004(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x40),0),
              puVar1 = PTR_DAT_08e698f0, param_3 != 0)) && (*plVar6 != 0)) {
            uVar7 = *(undefined8 *)(param_3 + 0x48);
            uVar4 = FUN_08891168(*plVar6,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)puVar1);
            }
            uVar5 = FUN_071189a4(uVar7,uVar4,0);
            if ((uVar5 & 1) != 0) {
              if (*plVar6 == 0) goto LAB_088cf634;
              FUN_08891170(*plVar6,uVar7,0);
            }
            puVar1 = 
            Unity_Netcode_NetworkVariable_OnValueChangedDelegate<FixedString128Bytes>_TypeInfo;
            lVar3 = *(long *)(param_1 + 0x58);
            uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ea6ef0);
            FUN_070e8c88(uVar4,param_1,*(undefined8 *)puVar1,0);
            puVar2 = Unity_Netcode_NetworkVariable_OnValueChangedDelegate<bool>_TypeInfo;
            puVar1 = PTR_DAT_08f06d18;
            if (lVar3 != 0) {
              FUN_0889179c(lVar3,uVar4,0);
              lVar3 = *(long *)(param_1 + 0x58);
              uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
              FUN_04ca5a64(uVar4,param_1,*(undefined8 *)puVar2,0);
              puVar2 = Unity_Netcode_NetworkList_OnListChangedDelegate<ulong>_TypeInfo;
              puVar1 = PTR_DAT_08f06d20;
              if (lVar3 != 0) {
                FUN_08891634(lVar3,uVar4,0);
                lVar3 = *(long *)(param_1 + 0x58);
                uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                FUN_04ca5a64(uVar4,param_1,*(undefined8 *)puVar2,0);
                puVar2 = OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo;
                puVar1 = PTR_DAT_08f06d10;
                if (lVar3 != 0) {
                  FUN_088914cc(lVar3,uVar4,0);
                  lVar3 = *(long *)(param_1 + 0x58);
                  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                  FUN_04ca5a64(uVar4,param_1,*(undefined8 *)puVar2,0);
                  if (lVar3 != 0) {
                    FUN_08891364(lVar3,uVar4,0);
                    if (*plVar6 != 0) {
                      FUN_08898870(*plVar6,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_088cf634:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


