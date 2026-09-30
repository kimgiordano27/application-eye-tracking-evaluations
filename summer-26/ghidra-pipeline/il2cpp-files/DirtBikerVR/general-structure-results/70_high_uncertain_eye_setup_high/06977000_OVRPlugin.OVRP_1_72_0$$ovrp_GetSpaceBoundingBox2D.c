/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox2D
ENTRY_POINT: 06977000
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox2D(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *puVar6;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar7;
  long *unaff_x24;
  undefined8 uVar8;
  
  lVar4 = thunk_FUN_03ac74bc();
  uVar2 = _UNK_015c89e8;
  uVar1 = _DAT_015c89e0;
  uVar8 = _DAT_015c89d0;
  *(undefined8 *)(lVar4 + 0x18) = _UNK_015c89d8;
  *(undefined8 *)(lVar4 + 0x10) = uVar8;
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar1;
  FUN_0679343c(lVar4,0);
  *unaff_x22 = lVar4;
  thunk_FUN_03afed3c();
  uVar8 = NEON_fmov(0x3f800000,4);
  plVar7 = (long *)(unaff_x20 + 0x40);
  if ((*plVar7 == 0) || ((unaff_x19 & 1) != 0)) {
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b74b8);
    *(undefined8 *)(lVar4 + 0x18) = uVar8;
    *(undefined4 *)(lVar4 + 0x24) = 0x3fc00000;
    FUN_0679343c(lVar4,0);
    uVar1 = DAT_015c4ba8;
    *(undefined4 *)(lVar4 + 0x24) = 0x3fe66666;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    *plVar7 = lVar4;
    thunk_FUN_03afed3c(plVar7,lVar4);
  }
  plVar7 = (long *)(unaff_x20 + 0x38);
  if ((*plVar7 == 0) || ((unaff_x19 & 1) != 0)) {
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b74b8);
    *(undefined8 *)(lVar4 + 0x18) = uVar8;
    *(undefined4 *)(lVar4 + 0x24) = 0x3fc00000;
    FUN_0679343c(lVar4,0);
    *(undefined8 *)(lVar4 + 0x18) = uVar8;
    *(undefined4 *)(lVar4 + 0x24) = 0x3fb33333;
    *plVar7 = lVar4;
    thunk_FUN_03afed3c(plVar7,lVar4);
  }
  puVar6 = (undefined8 *)(unaff_x20 + 0x68);
  uVar8 = *puVar6;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_07c9e200(uVar8,0,0);
  if (((uVar5 & 1) != 0) || ((unaff_x19 & 1) != 0)) {
    uVar8 = FUN_04717ed0(*(undefined8 *)PTR_DAT_084b74e0,*(undefined8 *)PTR_DAT_084b74c8);
    *puVar6 = uVar8;
    thunk_FUN_03afed3c(puVar6,uVar8);
  }
  if (*unaff_x21 != 0) {
    lVar4 = *(long *)(*unaff_x21 + 0x18);
    if (lVar4 == 0) {
      bVar3 = true;
    }
    else {
      lVar4 = FUN_07c420b4(lVar4,0);
      if (lVar4 == 0) goto LAB_069771cc;
      bVar3 = *(int *)(lVar4 + 0x18) == 0;
    }
    if (!bVar3 && (unaff_x19 & 1) == 0) {
      return;
    }
    lVar4 = *unaff_x21;
    uVar8 = FUN_0697a228();
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x18);
      *puVar6 = uVar8;
      thunk_FUN_03afed3c(puVar6,uVar8);
      return;
    }
  }
LAB_069771cc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


