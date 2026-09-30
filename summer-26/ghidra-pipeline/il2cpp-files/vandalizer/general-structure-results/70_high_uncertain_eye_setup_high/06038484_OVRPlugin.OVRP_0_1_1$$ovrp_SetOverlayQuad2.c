/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$ovrp_SetOverlayQuad2
ENTRY_POINT: 06038484
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_1__ovrp_SetOverlayQuad2(void)

{
  uint uVar1;
  undefined *puVar2;
  bool in_CY;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x9;
  long in_x10;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  
  if (in_CY) {
    FUN_04752754();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_06038648;
  }
  else {
    *unaff_x20 = (int)in_x10 + 1;
    *(undefined4 *)(in_x9 + in_x10 * 4 + 0x20) = 2;
    *unaff_x24 = *unaff_x24 + 1;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
                    /* try { // try from 060384f4 to 0613865b has its CatchHandler @ 060384f4
                       catch() { ... } // from try @ 060384f4 with catch @ 060384f4
                       catch() { ... } // from try @ 060386d4 with catch @ 060384f4
                       catch() { ... } // from try @ 0603870c with catch @ 060384f4
                       catch() { ... } // from try @ 0603874c with catch @ 060384f4
                       catch() { ... } // from try @ 0603877c with catch @ 060384f4 */
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 3;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_04752754();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_06038648;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 4;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_04752754();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) {
LAB_06038648:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
  puVar2 = PTR_DAT_075f7b40;
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 5;
  }
  else {
    FUN_04752754();
  }
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_0329bf60();
  uVar3 = FUN_031f21dc(*unaff_x22,5);
  FUN_05d2c79c(uVar3,*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_0329bf60(puVar4,uVar3);
  return;
}


