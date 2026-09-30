/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 0517921c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  long lVar6;
  long unaff_x27;
  long unaff_x29;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    lVar4 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x1c);
    uVar2 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
      uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x21 + 0x20);
    }
    uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar3 = *(long *)(lVar3 + 0xc0);
    *(undefined4 *)(unaff_x29 + -0x24) = uVar1;
    lVar3 = *(long *)(lVar3 + 0x18);
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x24;
    (**(code **)(lVar3 + 0x10))(uVar5,lVar3,lVar6,unaff_x29 + -0x30,unaff_x29 + -0x20);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x20);
    *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x20 + 8) = uVar5;
    memcpy(unaff_x24,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x23,unaff_x22);
    memcpy(unaff_x19,unaff_x23,unaff_x22);
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


