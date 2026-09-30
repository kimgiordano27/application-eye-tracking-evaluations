/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 0569472c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<__Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>___ctor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(in_x9 + 0x60) + 0x28)) {
    unaff_x25 = (undefined8 *)*unaff_x25;
  }
  if (-1 < *(int *)(*(long *)(in_x9 + 0x68) + 0x28)) {
                    /* try { // try from 05694748 to 05794753 has its CatchHandler @ 056949a0 */
    unaff_x28 = (undefined8 *)*unaff_x28;
  }
  puVar1 = *(undefined8 **)(in_x9 + 0x88);
  if (-1 < *(int *)(*(long *)(in_x9 + 0x70) + 0x28)) {
    unaff_x26 = (undefined8 *)*unaff_x26;
  }
                    /* try { // try from 05694760 to 0579476f has its CatchHandler @ 05694990 */
  uVar2 = *puVar1;
  if (-1 < *(int *)(*(long *)(in_x9 + 0x78) + 0x28)) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
                    /* try { // try from 05694774 to 05794783 has its CatchHandler @ 056948f0 */
  if (-1 < *(int *)(*(long *)(in_x9 + 0x80) + 0x28)) {
    param_1 = (undefined8 *)*param_1;
  }
                    /* try { // try from 05694784 to 05794813 has its CatchHandler @ 05694338 */
  *(undefined8 *)(unaff_x29 + -0x40) = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x25;
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x28;
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x26;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x22;
  *(undefined8 **)(unaff_x29 + -0x18) = param_1;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  (*(code *)puVar1[2])(uVar2,puVar1,param_3,unaff_x29 + -0x40);
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
  if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


