/*
FUNCTION_NAME: FUN_070cf2a8
ENTRY_POINT: 070cf2a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070cf2a8(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,undefined8 param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined8 uVar8;
  double local_38;
  
  puVar2 = OVRPlugin_OVRP_1_5_0_TypeInfo;
  puVar1 = PTR_DAT_0759b370;
  if ((DAT_07a5a99b & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b370);
    FUN_031f20f4(OVRPlugin_OVRP_1_60_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_5_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_61_0_TypeInfo);
    DAT_07a5a99b = 1;
  }
  uVar3 = FUN_06e4c5c8(param_5,0);
  uVar8 = FUN_06e4c284(param_4 == 0,param_4 == 2,0);
  uVar4 = FUN_0512fe48(param_3,*(undefined8 *)puVar2);
  (**(code **)(*param_3 + 0x9b8))(param_3,uVar4,*(undefined8 *)(*param_3 + 0x9c0));
  fVar7 = (float)FUN_06e4c2a8(param_1,param_2,uVar8,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  modf((double)uVar3 * (double)fVar7,&local_38);
  uVar4 = FUN_070cf4dc();
  lVar5 = FUN_070cf1d0(param_3);
  if (lVar5 != 0) {
    uVar3 = FUN_0515b81c(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
    if ((uVar3 & 1) != 0) {
      uVar4 = (**(code **)(*param_3 + 0x9f8))(param_3,uVar4,*(undefined8 *)(*param_3 + 0xa00));
      FUN_0512fe6c(param_3,uVar4,*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
      return;
    }
    plVar6 = (long *)FUN_070cf1d0(param_3);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x070cf4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0xa38))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0xa40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


