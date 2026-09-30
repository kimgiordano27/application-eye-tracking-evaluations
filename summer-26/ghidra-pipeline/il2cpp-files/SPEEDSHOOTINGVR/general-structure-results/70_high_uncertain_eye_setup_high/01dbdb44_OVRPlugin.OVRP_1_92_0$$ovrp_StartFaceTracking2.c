/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartFaceTracking2
ENTRY_POINT: 01dbdb44
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_StartFaceTracking2
               (ulong param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long unaff_x21;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  plVar4 = *(long **)(unaff_x21 + 0x680);
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02350790);
    FUN_00fdc2e4(PTR_DAT_0234c680);
    FUN_00fdc2e4(PTR_DAT_0235a8f0);
    FUN_00fdc2e4(PTR_DAT_0235a8f8);
    *(undefined1 *)(unaff_x22 + 0xa73) = 1;
    param_3 = extraout_x1;
  }
  lVar6 = *(long *)(param_2 + 0x20);
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    param_3 = extraout_x1_00;
  }
  if (DAT_0247b102 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234c680);
    DAT_0247b102 = '\x01';
    param_3 = extraout_x1_01;
  }
  lVar3 = *plVar4;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar3 = *plVar4;
    param_3 = extraout_x1_02;
  }
  puVar1 = PTR_DAT_0235a8f8;
  if (lVar6 == *(long *)(*(long *)(lVar3 + 0xb8) + 8)) {
    FUN_01dbdd74(param_2,param_3,param_4 & 1);
    return;
  }
  if ((param_4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar6 = FUN_01dc0060(0);
    if (lVar6 == *(long *)(param_2 + 0x20)) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_01db3690();
      uVar2 = uVar2 & 1;
    }
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar6 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar6 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar6 + 0xb8);
    lVar3 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02350790);
    FUN_0131039c(lVar3,uVar5,*(undefined8 *)PTR_DAT_0235a8f0,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar3;
    lVar6 = thunk_FUN_0106e12c(plVar4,lVar3);
  }
  lVar6 = FUN_01dbde94(lVar6,lVar3,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  if (uVar2 != 0) {
    FUN_01dbd1a8(lVar6,0);
    return;
  }
  if (lVar6 != 0) {
    FUN_01db7f40(lVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


