/*
FUNCTION_NAME: FUN_0766c6e0
ENTRY_POINT: 0766c6e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_0766c6e0(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  if ((DAT_08270fc9 & 1) == 0) {
    FUN_0373b518(Unity_Multiplayer_Tools_NetStats_EventMetric<SceneEventMetric>_TypeInfo);
    FUN_0373b518(PTR_DAT_07da58e8);
    FUN_0373b518(System_Xml_XmlWellFormedWriter_AttributeValueCache_Item_TypeInfo);
    FUN_0373b518(Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>_TypeInfo);
    FUN_0373b518(PTR_DAT_07df27b0);
    FUN_0373b518(Unity_Multiplayer_Tools_NetStats_EventMetric<UnnamedMessageEvent>_TypeInfo);
    DAT_08270fc9 = 1;
  }
  iVar5 = param_2;
  if (0x3ffe < param_2) {
    iVar5 = 0x3fff;
  }
  if ((param_3 & 1) == 0) {
    iVar5 = param_2;
  }
  iVar8 = iVar5 << 2;
  *(int *)(param_1 + 0x30) = iVar8;
  if (*(int *)(param_1 + 0x58) == 1) {
    FUN_03e046e0(param_1 + 8,iVar8,
                 *(undefined8 *)System_Xml_XmlWellFormedWriter_AttributeValueCache_Item_TypeInfo);
    return;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    iVar3 = *(int *)(lVar6 + 0x18);
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    iVar2 = iVar2 >> 2;
    FUN_03e0536c((long *)(param_1 + 0x18),iVar8,*(undefined8 *)PTR_DAT_07df27b0);
    FUN_03e05490(param_1 + 0x38,iVar8,
                 *(undefined8 *)
                  Unity_Multiplayer_Tools_NetStats_EventMetric<UnnamedMessageEvent>_TypeInfo);
    System_Net_Http_Headers_CollectionParser__TryParse<object>
              (param_1 + 0x40,iVar8,
               *(undefined8 *)Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>_TypeInfo)
    ;
    Unity_Collections_CollectionHelper__CreateNativeArray<AttachmentDescriptor>
              (param_1 + 0x48,iVar8,
               *(undefined8 *)
                Unity_Multiplayer_Tools_NetStats_EventMetric<SceneEventMetric>_TypeInfo);
    FUN_03e01dd0((long *)(param_1 + 0x50),iVar5 * 6,*(undefined8 *)PTR_DAT_07da58e8);
    if (iVar2 < iVar5) {
      lVar6 = *(long *)(param_1 + 0x50);
      if (lVar6 == 0) goto LAB_0766c90c;
      uVar4 = *(uint *)(lVar6 + 0x18);
      uVar7 = iVar2 * 6 + 2;
      iVar8 = iVar2 << 2;
      iVar5 = iVar5 - iVar2;
      do {
        if (uVar4 <= uVar7 - 2) {
LAB_0766c908:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        *(int *)(lVar6 + (long)(int)(uVar7 - 2) * 4 + 0x20) = iVar8;
        if ((uVar4 <= uVar7 - 1) ||
           (*(int *)(lVar6 + (long)(int)(uVar7 - 1) * 4 + 0x20) = iVar8 + 1, uVar4 <= uVar7))
        goto LAB_0766c908;
        *(int *)(lVar6 + (long)(int)uVar7 * 4 + 0x20) = iVar8 + 2;
        if (uVar4 <= uVar7 + 1) goto LAB_0766c908;
        *(int *)(lVar6 + (long)(int)(uVar7 + 1) * 4 + 0x20) = iVar8 + 2;
        if (uVar4 <= uVar7 + 2) goto LAB_0766c908;
        uVar1 = uVar7 + 3;
        *(int *)(lVar6 + (long)(int)(uVar7 + 2) * 4 + 0x20) = iVar8 + 3;
        if (uVar4 <= uVar1) goto LAB_0766c908;
        uVar7 = uVar7 + 6;
        iVar5 = iVar5 + -1;
        *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = iVar8;
        iVar8 = iVar8 + 4;
      } while (iVar5 != 0);
    }
    return;
  }
LAB_0766c90c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


