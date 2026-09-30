/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StopFaceTracking2
ENTRY_POINT: 01dbdbd0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_StopFaceTracking2(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  ulong unaff_x20;
  long lVar5;
  long *unaff_x21;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar1 = PTR_DAT_0235a8f8;
  if (unaff_x22 == *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8)) {
    FUN_01dbdd74();
    return;
  }
  if ((unaff_x20 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar3 = FUN_01dc0060(0);
    if (lVar3 == *(long *)(unaff_x19 + 0x20)) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_01db3690();
      uVar2 = uVar2 & 1;
    }
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02350790);
    FUN_0131039c(lVar5,uVar6,*(undefined8 *)PTR_DAT_0235a8f0,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    lVar3 = thunk_FUN_0106e12c(plVar4,lVar5);
  }
  lVar3 = FUN_01dbde94(lVar3,lVar5,*(undefined8 *)(unaff_x19 + 0x18),
                       *(undefined8 *)(unaff_x19 + 0x20));
  if (uVar2 != 0) {
    FUN_01dbd1a8(lVar3,0);
    return;
  }
  if (lVar3 != 0) {
    FUN_01db7f40(lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


