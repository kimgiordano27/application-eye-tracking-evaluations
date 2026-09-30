/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox3D
ENTRY_POINT: 06977084
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox3D(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined4 in_w9;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x23;
  long *unaff_x24;
  undefined8 unaff_d8;
  
  *(undefined4 *)(unaff_x23 + 0x24) = in_w9;
  *(undefined8 *)(unaff_x23 + 0x18) = param_1;
  *unaff_x22 = unaff_x23;
  thunk_FUN_03afed3c();
  plVar5 = (long *)(unaff_x20 + 0x38);
  if ((*plVar5 == 0) || ((unaff_x19 & 1) != 0)) {
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b74b8);
    *(undefined8 *)(lVar2 + 0x18) = unaff_d8;
    *(undefined4 *)(lVar2 + 0x24) = 0x3fc00000;
    FUN_0679343c(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = unaff_d8;
    *(undefined4 *)(lVar2 + 0x24) = 0x3fb33333;
    *plVar5 = lVar2;
    thunk_FUN_03afed3c(plVar5,lVar2);
  }
  puVar4 = (undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *puVar4;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_07c9e200(uVar6,0,0);
  if (((uVar3 & 1) != 0) || ((unaff_x19 & 1) != 0)) {
    uVar6 = FUN_04717ed0(*(undefined8 *)PTR_DAT_084b74e0,*(undefined8 *)PTR_DAT_084b74c8);
    *puVar4 = uVar6;
    thunk_FUN_03afed3c(puVar4,uVar6);
  }
  if (*unaff_x21 != 0) {
    lVar2 = *(long *)(*unaff_x21 + 0x18);
    if (lVar2 == 0) {
      bVar1 = true;
    }
    else {
      lVar2 = FUN_07c420b4(lVar2,0);
      if (lVar2 == 0) goto LAB_069771cc;
      bVar1 = *(int *)(lVar2 + 0x18) == 0;
    }
    if (!bVar1 && (unaff_x19 & 1) == 0) {
      return;
    }
    lVar2 = *unaff_x21;
    uVar6 = FUN_0697a228();
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x18);
      *puVar4 = uVar6;
      thunk_FUN_03afed3c(puVar4,uVar6);
      return;
    }
  }
LAB_069771cc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


