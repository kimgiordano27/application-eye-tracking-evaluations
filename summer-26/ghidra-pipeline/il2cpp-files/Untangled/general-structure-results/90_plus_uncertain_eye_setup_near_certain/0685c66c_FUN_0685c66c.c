/*
FUNCTION_NAME: FUN_0685c66c
ENTRY_POINT: 0685c66c
PROGRAM: Untangled-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_4;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_0685c66c(long *param_1,uint param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  float fVar5;
  float fVar6;
  double dVar7;
  double __x;
  double local_48;
  
  if ((DAT_071d6b63 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_72_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_5_0_TypeInfo);
    DAT_071d6b63 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_2 == 6) {
    iVar2 = FUN_0470c66c(param_1,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
  }
  else {
    if (param_2 != 1) {
      iVar2 = FUN_0470c66c(param_1,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
      iVar3 = FUN_0470c5d0(param_1,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
      puVar1 = OVRPlugin_OVRP_1_5_0_TypeInfo;
      fVar5 = (float)(iVar2 - iVar3) * DAT_013f6e08;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_5_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar5 = (float)FUN_0470d234(ABS(fVar5),*(undefined8 *)OVRPlugin_OVRP_1_71_0_TypeInfo);
      if (fVar5 <= 1.0) {
        fVar5 = 1.0;
      }
      if ((param_2 == 5) || (param_2 == 2)) {
        fVar6 = (float)(**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
        fVar6 = fVar5 * fVar6;
      }
      else {
        fVar6 = fVar5 * 10.0;
        if ((param_3 & 1) == 0) {
          fVar6 = fVar5;
        }
      }
      fVar5 = -fVar6;
      if ((param_2 & 0xfffffffe) != 2) {
        fVar5 = fVar6;
      }
      iVar2 = (**(code **)(*param_1 + 0x7e8))(param_1,*(undefined8 *)(*param_1 + 0x7f0));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      fVar5 = (float)FUN_0470d330(fVar5 * DAT_013f6b60 + (float)iVar2,ABS(fVar6),
                                  *(undefined8 *)OVRPlugin_OVRP_1_72_0_TypeInfo);
      if (DAT_071bb833 == '\0') {
        FUN_02f07e70(PTR_DAT_06d03010);
        DAT_071bb833 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      __x = (double)fVar5;
      dVar7 = modf(__x,&local_48);
      if (0.0 <= fVar5) {
        if (dVar7 == 0.5) {
          dVar7 = 1.0;
          goto LAB_0685c8e4;
        }
        local_48 = (double)(long)(__x + 0.5);
      }
      else if (dVar7 == -0.5) {
        dVar7 = -1.0;
LAB_0685c8e4:
        if (((long)local_48 & 1U) != 0) {
          local_48 = local_48 + dVar7;
        }
      }
      else {
        local_48 = (double)(long)(__x + -0.5);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x7f8);
      uVar4 = *(undefined8 *)(*param_1 + 0x800);
      iVar2 = -0x80000000;
      if (local_48 != INFINITY) {
        iVar2 = (int)local_48;
      }
      goto LAB_0685c930;
    }
    iVar2 = FUN_0470c5d0(param_1,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x7f8);
  uVar4 = *(undefined8 *)(*param_1 + 0x800);
LAB_0685c930:
                    /* WARNING: Could not recover jumptable at 0x0685c948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,iVar2,uVar4);
  return;
}


