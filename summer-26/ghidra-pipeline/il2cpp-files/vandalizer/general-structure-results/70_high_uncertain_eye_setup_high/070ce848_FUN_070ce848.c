/*
FUNCTION_NAME: FUN_070ce848
ENTRY_POINT: 070ce848
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070ce848(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,undefined4 param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  double __x;
  double local_38;
  
  puVar2 = OVRPlugin_OVRP_1_41_0_TypeInfo;
  puVar1 = PTR_DAT_0759b370;
  if ((DAT_07a5a98e & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b370);
    FUN_031f20f4(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_41_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_43_0_TypeInfo);
    DAT_07a5a98e = 1;
  }
  lVar4 = FUN_06e4c520(param_5,0);
  uVar10 = FUN_06e4c284(param_4 == 0,param_4 == 2,0);
  uVar5 = FUN_0512c378(param_3,*(undefined8 *)puVar2);
  uVar6 = (**(code **)(*param_3 + 0x9b8))(param_3,uVar5,*(undefined8 *)(*param_3 + 0x9c0));
  fVar9 = (float)FUN_06e4c2a8(param_1,param_2,uVar10,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  __x = (double)lVar4 * (double)fVar9;
  dVar11 = modf(__x,&local_38);
  if (0.0 <= __x) {
    if (dVar11 != 0.5) {
      local_38 = (double)(long)(__x + 0.5);
      goto LAB_070ce9b4;
    }
    dVar11 = 1.0;
  }
  else {
    if (dVar11 != -0.5) {
      local_38 = (double)(long)(__x + -0.5);
      goto LAB_070ce9b4;
    }
    dVar11 = -1.0;
  }
  if (((long)local_38 & 1U) != 0) {
    local_38 = local_38 + dVar11;
  }
LAB_070ce9b4:
  lVar4 = -0x8000000000000000;
  if (local_38 != INFINITY) {
    lVar4 = (long)local_38;
  }
  lVar7 = FUN_070ce770(param_3);
  if (lVar7 != 0) {
    lVar4 = lVar4 + (uVar6 & 0xffffffff);
    uVar6 = FUN_05156804(lVar7,*(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo);
    if ((uVar6 & 1) != 0) {
      uVar3 = FUN_06e47fa0(lVar4,0);
      uVar5 = (**(code **)(*param_3 + 0x9f8))(param_3,uVar3,*(undefined8 *)(*param_3 + 0xa00));
      FUN_0512c39c(param_3,uVar5,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo);
      return;
    }
    plVar8 = (long *)FUN_070ce770(param_3);
    uVar3 = FUN_06e47fa0(lVar4,0);
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x070cea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0xa38))(plVar8,uVar3,*(undefined8 *)(*plVar8 + 0xa40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


