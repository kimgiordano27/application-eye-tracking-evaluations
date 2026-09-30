/*
FUNCTION_NAME: FUN_07659e2c
ENTRY_POINT: 07659e2c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


undefined8 FUN_07659e2c(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long extraout_x1;
  long lVar4;
  int iVar5;
  
  puVar1 = System_Xml_Schema_XsdDuration_DurationType_TypeInfo;
  if ((DAT_08270d0c & 1) == 0) {
    FUN_0373b518(
                Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_TypeInfo
                );
    FUN_0373b518(Unity_Mathematics_math_ShuffleComponent_TypeInfo);
    FUN_0373b518(Unity_Collections_xxHash3_Hash128Long_00000A7A_BurstDirectCall_TypeInfo);
    FUN_0373b518(Unity_Collections_xxHash3_Hash128Long_00000A7A_PostfixBurstDelegate_TypeInfo);
    FUN_0373b518(System_Xml_Schema_XsdDuration_DurationType_TypeInfo);
    DAT_08270d0c = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = **(long **)(lVar3 + 0xb8);
  if (lVar4 == 0) {
LAB_07659f6c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (param_2 < *(int *)(lVar4 + 0x18)) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) goto LAB_07659f6c;
    }
    FUN_04b8f684(lVar4,param_2,
                 *(undefined8 *)
                  Unity_Collections_xxHash3_Hash128Long_00000A7A_BurstDirectCall_TypeInfo);
    puVar1 = Unity_Collections_xxHash3_Hash128Long_00000A7A_PostfixBurstDelegate_TypeInfo;
    if (extraout_x1 == 0) goto LAB_07659f6c;
    if (0 < *(int *)(extraout_x1 + 0x18)) {
      iVar5 = 0;
      do {
        iVar2 = System_Collections_Generic_List<Vector3>__set_Item
                          (extraout_x1,iVar5,*(undefined8 *)puVar1);
        if (iVar2 == param_3) {
          *(int *)(param_1 + 0x20) = param_2;
          *(int *)(param_1 + 0x24) = param_3;
          return 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(extraout_x1 + 0x18));
    }
  }
  return 0;
}


