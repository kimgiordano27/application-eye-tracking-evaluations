/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsDesc
ENTRY_POINT: 0316c3e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsDesc(float param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar2 = FUN_03120f18(param_2,0);
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar3);
    lVar3 = *unaff_x21;
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (param_1 <= 0.0) {
    if (unaff_w22 == 2) {
      puVar4 = (undefined4 *)(unaff_x19 + 0xcc);
      puVar5 = (undefined4 *)(unaff_x19 + 0xd0);
      puVar6 = (undefined4 *)(unaff_x19 + 0xd4);
      puVar7 = (undefined4 *)(unaff_x19 + 0xd8);
    }
    else {
      puVar4 = (undefined4 *)(unaff_x19 + 0xbc);
      puVar5 = (undefined4 *)(unaff_x19 + 0xc0);
      puVar6 = (undefined4 *)(unaff_x19 + 0xc4);
      puVar7 = (undefined4 *)(unaff_x19 + 200);
    }
    if (lVar2 == 0) goto LAB_0316c558;
    thunk_FUN_038fd510(*puVar4,*puVar5,*puVar6,*puVar7,lVar2,uVar1,0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0316c558;
    lVar2 = FUN_03120f18(*(long *)(unaff_x19 + 0x88),0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x21);
    }
    if (lVar2 == 0) goto LAB_0316c558;
    uVar10 = *(undefined4 *)(unaff_x19 + 0xb4);
    uVar11 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar8 = *(undefined4 *)(unaff_x19 + 0xac);
    uVar9 = *(undefined4 *)(unaff_x19 + 0xb0);
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
  }
  else {
    if (lVar2 == 0) goto LAB_0316c558;
    thunk_FUN_038fd510(*(undefined4 *)(unaff_x19 + 0xac),*(undefined4 *)(unaff_x19 + 0xb0),
                       *(undefined4 *)(unaff_x19 + 0xb4),*(undefined4 *)(unaff_x19 + 0xb8),lVar2,
                       uVar1,0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_0316c558;
    lVar2 = FUN_03120f18(*(long *)(unaff_x19 + 0x88),0);
    if (unaff_w22 == 2) {
      puVar4 = (undefined4 *)(unaff_x19 + 0xcc);
      puVar5 = (undefined4 *)(unaff_x19 + 0xd0);
      puVar6 = (undefined4 *)(unaff_x19 + 0xd4);
      puVar7 = (undefined4 *)(unaff_x19 + 0xd8);
    }
    else {
      puVar4 = (undefined4 *)(unaff_x19 + 0xbc);
      puVar5 = (undefined4 *)(unaff_x19 + 0xc0);
      puVar6 = (undefined4 *)(unaff_x19 + 0xc4);
      puVar7 = (undefined4 *)(unaff_x19 + 200);
    }
    if (lVar2 == 0) goto LAB_0316c558;
    uVar11 = *puVar7;
    uVar10 = *puVar6;
    uVar9 = *puVar5;
    uVar8 = *puVar4;
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
  }
  thunk_FUN_038fd510(uVar8,uVar9,uVar10,uVar11,lVar2,uVar1,0);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    FUN_03120f88(*(long *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_03120f88(*(long *)(unaff_x19 + 0x88),0);
      return;
    }
  }
LAB_0316c558:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


