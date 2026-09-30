/*
FUNCTION_NAME: FUN_07caa83c
ENTRY_POINT: 07caa83c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_07caa83c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_09f51160;
  puVar2 = PTR_DAT_09f51158;
  puVar1 = PTR_DAT_09f51150;
  if ((DAT_0a526a45 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f51168);
    FUN_04447ba8(PTR_DAT_09f51158);
    FUN_04447ba8(PTR_DAT_09f51150);
    FUN_04447ba8(PTR_DAT_09f51160);
    DAT_0a526a45 = 1;
  }
  uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_061c63c0(uVar4,param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName(uVar4);
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar1 = PTR_DAT_09f51168;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_07caa944:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(long *)(lVar5 + 0x20) != 0) {
      FUN_04cc9f40(*(long *)(lVar5 + 0x20),0,*(undefined8 *)PTR_DAT_09f51168);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07caa944;
        if (*(long *)(lVar5 + 0x28) != 0) {
          FUN_04cc9f40(*(long *)(lVar5 + 0x28),0,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


