/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_set
ENTRY_POINT: 0901a678
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_set
          (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04447ba8(PTR_DAT_09f265f0);
  *(undefined1 *)(unaff_x20 + 0x61e) = 1;
  puVar1 = PTR_DAT_09f265f0;
  if (unaff_x19 == 0) {
    return 0;
  }
                    /* try { // try from 0901a694 to 0911a737 has its CatchHandler @ 0901af64 */
  uVar2 = FUN_078b4450(*(undefined8 *)PTR_DAT_09f265f0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_09fc00e8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar3 = FUN_0901a7c0();
    return uVar3;
  }
  lVar4 = FUN_07b6d64c();
  if (lVar4 != 0) {
    uVar2 = FUN_07b6de5c(lVar4,*(undefined8 *)puVar1,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    if ((uVar2 & 1) == 0) {
      thunk_FUN_044adef4(PTR_DAT_09f273a8);
      uVar3 = thunk_FUN_0448520c();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc00f8);
      uVar7 = thunk_FUN_044adef4(PTR_DAT_09f265f0);
      FUN_07a603a8(uVar3,uVar6,uVar7,0);
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09fc0100);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar3,uVar6);
    }
    if ((lVar4 != 0) &&
       (plVar5 = (long *)FUN_07b6d26c(lVar4,*(undefined8 *)puVar1,0), plVar5 != (long *)0x0)) {
      uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_09fc00e8 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09fc00e8);
      }
      uVar3 = FUN_0901ad54(uVar3);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


