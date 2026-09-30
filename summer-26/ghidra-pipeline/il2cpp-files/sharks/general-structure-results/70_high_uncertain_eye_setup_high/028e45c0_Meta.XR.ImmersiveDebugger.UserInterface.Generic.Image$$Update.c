/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Image$$Update
ENTRY_POINT: 028e45c0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Image__Update(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *unaff_x20;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
  if (lVar1 != 0) {
    FUN_02171ca8(lVar1,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698);
    if (in_stack_00000008 != 0) {
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


