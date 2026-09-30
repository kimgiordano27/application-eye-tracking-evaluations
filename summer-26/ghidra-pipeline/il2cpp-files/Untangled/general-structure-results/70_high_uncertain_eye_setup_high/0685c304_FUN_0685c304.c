/*
FUNCTION_NAME: FUN_0685c304
ENTRY_POINT: 0685c304
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_19
*/


void FUN_0685c304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_071d6b62 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_68_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_70_0_TypeInfo);
    DAT_071d6b62 = 1;
  }
  fVar11 = (float)(**(code **)(*param_5 + 0x8f8))(param_5,*(undefined8 *)(*param_5 + 0x900));
  if (DAT_071bac60 == '\0') {
    FUN_02f07e70(PTR_DAT_06d034e8);
    DAT_071bac60 = '\x01';
  }
  fVar13 = ABS(fVar11);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar14 = **(float **)(*(long *)PTR_DAT_06d034e8 + 0xb8) * 8.0;
  fVar12 = fVar13 * DAT_013f6cfc;
  if (fVar13 * DAT_013f6cfc <= fVar14) {
    fVar12 = fVar14;
  }
  if (ABS(0.0 - fVar11) < fVar12) {
    FUN_0470e504(param_1,param_2,param_3,param_4,param_5,
                 *(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo);
    return;
  }
  if (ABS((float)param_1 - (float)param_2) < DAT_013f6a48) {
    return;
  }
  fVar11 = (float)(**(code **)(*param_5 + 0x8f8))(param_5,*(undefined8 *)(*param_5 + 0x900));
  puVar3 = OVRPlugin_OVRP_1_64_0_TypeInfo;
  iVar10 = -0x80000000;
  if (fVar11 != INFINITY) {
    iVar10 = (int)fVar11;
  }
  iVar6 = FUN_0470c5d0(param_5,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
  puVar4 = OVRPlugin_OVRP_1_65_0_TypeInfo;
  iVar7 = FUN_0470c66c(param_5,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
  if ((iVar7 < iVar6) &&
     (uVar8 = FUN_0470caa4(param_5,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo), (uVar8 & 1) == 0)
     ) {
LAB_0685c55c:
    iVar10 = -iVar10;
  }
  else {
    iVar6 = FUN_0470c5d0(param_5,*(undefined8 *)puVar3);
    iVar7 = FUN_0470c66c(param_5,*(undefined8 *)puVar4);
    if (((iVar6 < iVar7) &&
        (uVar8 = FUN_0470caa4(param_5,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo),
        (uVar8 & 1) != 0)) ||
       ((iVar6 = FUN_0470c9c8(param_5,*(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo), iVar6 == 1 &&
        (uVar8 = FUN_0470caa4(param_5,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo),
        (uVar8 & 1) == 0)))) goto LAB_0685c55c;
  }
  puVar3 = OVRPlugin_OVRP_1_69_0_TypeInfo;
  fVar11 = (float)param_4;
  fVar13 = (float)param_3;
  bVar5 = (float)param_2 + fVar13 < fVar11;
  uVar8 = FUN_0470caa4(param_5,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo);
  bVar1 = bVar5;
  if ((uVar8 & 1) == 0) {
    bVar1 = fVar11 < fVar13;
  }
  uVar8 = FUN_0470caa4(param_5,*(undefined8 *)puVar3);
  bVar2 = fVar11 < fVar13;
  if ((uVar8 & 1) == 0) {
    bVar2 = bVar5;
  }
  if (bVar1) {
    lVar9 = param_5[0x92];
    if (lVar9 == 0) goto LAB_0685c668;
    if (*(int *)(lVar9 + 0x80) != 1) {
      *(undefined4 *)(lVar9 + 0x80) = 2;
      iVar6 = (**(code **)(*param_5 + 0x7e8))(param_5,*(undefined8 *)(*param_5 + 0x7f0));
      lVar9 = *param_5;
      iVar6 = iVar6 - iVar10;
      goto LAB_0685c640;
    }
  }
  if (bVar2) {
    lVar9 = param_5[0x92];
    if (lVar9 == 0) {
LAB_0685c668:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(lVar9 + 0x80) != 2) {
      *(undefined4 *)(lVar9 + 0x80) = 1;
      iVar6 = (**(code **)(*param_5 + 0x7e8))(param_5,*(undefined8 *)(*param_5 + 0x7f0));
      lVar9 = *param_5;
      iVar6 = iVar6 + iVar10;
LAB_0685c640:
                    /* WARNING: Could not recover jumptable at 0x0685c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 0x7f8))(param_5,iVar6,*(undefined8 *)(lVar9 + 0x800));
      return;
    }
  }
  return;
}


