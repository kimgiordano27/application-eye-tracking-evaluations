/*
FUNCTION_NAME: FUN_0685bf7c
ENTRY_POINT: 0685bf7c
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0685bf7c(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double __x;
  double local_68;
  
  puVar3 = OVRPlugin_OVRP_1_65_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_64_0_TypeInfo;
  puVar1 = PTR_DAT_06d03010;
  if ((DAT_071d6b60 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071d6b60 = 1;
  }
  iVar4 = FUN_0470c5d0(param_3,*(undefined8 *)puVar2);
  iVar5 = FUN_0470c66c(param_3,*(undefined8 *)puVar3);
  lVar6 = FUN_066c3008((long)param_5,(long)iVar4,(long)iVar5,0);
  uVar8 = FUN_066c2ca0(param_4 == 0,param_4 == 2,0);
  iVar4 = (**(code **)(*param_3 + 0x7e8))(param_3,*(undefined8 *)(*param_3 + 0x7f0));
  fVar7 = (float)FUN_066c2cc4(param_1,param_2,uVar8,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  __x = (double)lVar6 * (double)fVar7;
  dVar9 = modf(__x,&local_68);
  if (0.0 <= __x) {
    if (dVar9 != 0.5) {
      local_68 = (double)(long)(__x + 0.5);
      goto LAB_0685c100;
    }
    dVar9 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      local_68 = (double)(long)(__x + -0.5);
      goto LAB_0685c100;
    }
    dVar9 = -1.0;
  }
  if (((long)local_68 & 1U) != 0) {
    local_68 = local_68 + dVar9;
  }
LAB_0685c100:
  iVar5 = 0;
  if (local_68 != INFINITY) {
    iVar5 = (int)(long)local_68;
  }
                    /* WARNING: Could not recover jumptable at 0x0685c144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x7f8))(param_3,iVar5 + iVar4,*(undefined8 *)(*param_3 + 0x800));
  return;
}


