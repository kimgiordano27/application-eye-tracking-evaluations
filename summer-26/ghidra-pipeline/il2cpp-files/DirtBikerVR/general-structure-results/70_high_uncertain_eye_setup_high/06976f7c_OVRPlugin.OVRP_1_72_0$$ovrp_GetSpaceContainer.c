/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceContainer
ENTRY_POINT: 06976f7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceContainer(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *puVar7;
  undefined8 *unaff_x21;
  long *plVar8;
  long *plVar9;
  long *unaff_x24;
  
  uVar4 = thunk_FUN_03ac74bc(*param_1);
  FUN_06976b40();
  *unaff_x21 = uVar4;
  thunk_FUN_03afed3c();
  plVar8 = (long *)(unaff_x20 + 0x20);
  if ((*plVar8 == 0) || ((unaff_x19 & 1) != 0)) {
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b74d0);
    *(undefined8 *)(lVar5 + 0x24) = DAT_015c4cf0;
    FUN_0679343c(lVar5,0);
    *plVar8 = lVar5;
    thunk_FUN_03afed3c(plVar8,lVar5);
  }
  plVar9 = (long *)(unaff_x20 + 0x28);
  if ((*plVar9 == 0) || ((unaff_x19 & 1) != 0)) {
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b74b0);
    uVar2 = _UNK_015c89e8;
    uVar1 = _DAT_015c89e0;
    uVar4 = _DAT_015c89d0;
    *(undefined8 *)(lVar5 + 0x18) = _UNK_015c89d8;
    *(undefined8 *)(lVar5 + 0x10) = uVar4;
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    *(undefined8 *)(lVar5 + 0x20) = uVar1;
    FUN_0679343c(lVar5,0);
    *plVar9 = lVar5;
    thunk_FUN_03afed3c(plVar9,lVar5);
  }
  uVar4 = NEON_fmov(0x3f800000,4);
  plVar9 = (long *)(unaff_x20 + 0x40);
  if ((*plVar9 == 0) || ((unaff_x19 & 1) != 0)) {
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b74b8);
    *(undefined8 *)(lVar5 + 0x18) = uVar4;
    *(undefined4 *)(lVar5 + 0x24) = 0x3fc00000;
    FUN_0679343c(lVar5,0);
    uVar1 = DAT_015c4ba8;
    *(undefined4 *)(lVar5 + 0x24) = 0x3fe66666;
    *(undefined8 *)(lVar5 + 0x18) = uVar1;
    *plVar9 = lVar5;
    thunk_FUN_03afed3c(plVar9,lVar5);
  }
  plVar9 = (long *)(unaff_x20 + 0x38);
  if ((*plVar9 == 0) || ((unaff_x19 & 1) != 0)) {
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b74b8);
    *(undefined8 *)(lVar5 + 0x18) = uVar4;
    *(undefined4 *)(lVar5 + 0x24) = 0x3fc00000;
    FUN_0679343c(lVar5,0);
    *(undefined8 *)(lVar5 + 0x18) = uVar4;
    *(undefined4 *)(lVar5 + 0x24) = 0x3fb33333;
    *plVar9 = lVar5;
    thunk_FUN_03afed3c(plVar9,lVar5);
  }
  puVar7 = (undefined8 *)(unaff_x20 + 0x68);
  uVar4 = *puVar7;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_07c9e200(uVar4,0,0);
  if (((uVar6 & 1) != 0) || ((unaff_x19 & 1) != 0)) {
    uVar4 = FUN_04717ed0(*(undefined8 *)PTR_DAT_084b74e0,*(undefined8 *)PTR_DAT_084b74c8);
    *puVar7 = uVar4;
    thunk_FUN_03afed3c(puVar7,uVar4);
  }
  if (*plVar8 != 0) {
    lVar5 = *(long *)(*plVar8 + 0x18);
    if (lVar5 == 0) {
      bVar3 = true;
    }
    else {
      lVar5 = FUN_07c420b4(lVar5,0);
      if (lVar5 == 0) goto LAB_069771cc;
      bVar3 = *(int *)(lVar5 + 0x18) == 0;
    }
    if (!bVar3 && (unaff_x19 & 1) == 0) {
      return;
    }
    lVar5 = *plVar8;
    uVar4 = FUN_0697a228();
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar5 + 0x18);
      *puVar7 = uVar4;
      thunk_FUN_03afed3c(puVar7,uVar4);
      return;
    }
  }
LAB_069771cc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


