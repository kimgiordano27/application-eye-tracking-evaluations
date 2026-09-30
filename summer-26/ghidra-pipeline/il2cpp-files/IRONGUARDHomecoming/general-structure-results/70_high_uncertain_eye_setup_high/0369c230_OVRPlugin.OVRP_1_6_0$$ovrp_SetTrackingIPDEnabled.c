/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 0369c230
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int in_w9;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float unaff_s8;
  
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  if (unaff_s8 <= 0.0) {
    if (unaff_w22 == 2) {
      puVar3 = (undefined4 *)(unaff_x19 + 0xcc);
      puVar4 = (undefined4 *)(unaff_x19 + 0xd0);
      puVar5 = (undefined4 *)(unaff_x19 + 0xd4);
      puVar6 = (undefined4 *)(unaff_x19 + 0xd8);
    }
    else {
      puVar3 = (undefined4 *)(unaff_x19 + 0xbc);
      puVar4 = (undefined4 *)(unaff_x19 + 0xc0);
      puVar5 = (undefined4 *)(unaff_x19 + 0xc4);
      puVar6 = (undefined4 *)(unaff_x19 + 200);
    }
    if (unaff_x20 == 0) goto LAB_0369c390;
    thunk_FUN_0404b1d4(*puVar3,*puVar4,*puVar5,*puVar6);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0369c390;
    lVar2 = FUN_0365102c(*(long *)(unaff_x19 + 0x88),0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x21);
    }
    if (lVar2 == 0) goto LAB_0369c390;
    uVar9 = *(undefined4 *)(unaff_x19 + 0xb4);
    uVar10 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar7 = *(undefined4 *)(unaff_x19 + 0xac);
    uVar8 = *(undefined4 *)(unaff_x19 + 0xb0);
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
  }
  else {
    if (unaff_x20 == 0) goto LAB_0369c390;
    thunk_FUN_0404b1d4(*(undefined4 *)(unaff_x19 + 0xac),*(undefined4 *)(unaff_x19 + 0xb0),
                       *(undefined4 *)(unaff_x19 + 0xb4),*(undefined4 *)(unaff_x19 + 0xb8));
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0369c390;
    lVar2 = FUN_0365102c(*(long *)(unaff_x19 + 0x88),0);
    if (unaff_w22 == 2) {
      puVar3 = (undefined4 *)(unaff_x19 + 0xcc);
      puVar4 = (undefined4 *)(unaff_x19 + 0xd0);
      puVar5 = (undefined4 *)(unaff_x19 + 0xd4);
      puVar6 = (undefined4 *)(unaff_x19 + 0xd8);
    }
    else {
      puVar3 = (undefined4 *)(unaff_x19 + 0xbc);
      puVar4 = (undefined4 *)(unaff_x19 + 0xc0);
      puVar5 = (undefined4 *)(unaff_x19 + 0xc4);
      puVar6 = (undefined4 *)(unaff_x19 + 200);
    }
    if (lVar2 == 0) goto LAB_0369c390;
    uVar10 = *puVar6;
    uVar9 = *puVar5;
    uVar8 = *puVar4;
    uVar7 = *puVar3;
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
  }
  thunk_FUN_0404b1d4(uVar7,uVar8,uVar9,uVar10,lVar2,uVar1,0);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    FUN_0365109c(*(long *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_0365109c(*(long *)(unaff_x19 + 0x88),0);
      return;
    }
  }
LAB_0369c390:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


