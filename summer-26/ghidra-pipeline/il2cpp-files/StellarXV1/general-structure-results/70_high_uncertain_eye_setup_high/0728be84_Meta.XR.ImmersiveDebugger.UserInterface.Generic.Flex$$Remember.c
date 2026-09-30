/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$Remember
ENTRY_POINT: 0728be84
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__Remember(long param_1)

{
  undefined8 uVar1;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  
  while( true ) {
    if (in_w8 == 0) {
      FUN_0728bdd8();
      return unaff_x21;
    }
    if ((*(long *)(unaff_x21 + 0x30) == 0) || (*(long *)(unaff_x19 + 0x18) == 0)) break;
    unaff_x24 = FUN_0728aa54(param_1,*(undefined8 *)(unaff_x19 + 0x10),
                             *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x28),
                             *(undefined8 *)(unaff_x24 + 0x28));
    param_1 = FUN_0728bb14();
    do {
      if (*(long *)(unaff_x21 + 0x30) != unaff_x24) {
        if ((((unaff_x24 == 0) || (*(long *)(unaff_x24 + 0x28) == 0)) ||
            (*(long *)(unaff_x19 + 0x18) == 0)) ||
           (uVar1 = FUN_0728a2f0(param_1,*(undefined8 *)(unaff_x19 + 0x10),
                                 *(undefined8 *)(*(long *)(unaff_x24 + 0x28) + 0x38),unaff_x24),
           *(long *)(unaff_x19 + 0x18) == 0))
        goto Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel___ctor;
        FUN_0728a2f0(uVar1,*(undefined8 *)(unaff_x19 + 0x10),unaff_x21,unaff_x24);
      }
      uVar1 = FUN_0728bdd8();
      unaff_x21 = *(long *)(unaff_x23 + 0x10);
      if (unaff_x23 == unaff_x20) {
        return unaff_x21;
      }
      *(undefined1 *)(unaff_x23 + 0x27) = 0;
      param_1 = FUN_0728b8fc(uVar1,unaff_x23);
      if (((param_1 == 0) || (unaff_x24 = *(long *)(param_1 + 0x10), unaff_x24 == 0)) ||
         (unaff_x21 == 0)) goto Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel___ctor;
      unaff_x23 = param_1;
    } while (*(long *)(unaff_x24 + 0x40) == *(long *)(unaff_x21 + 0x40));
    in_w8 = (uint)*(byte *)(param_1 + 0x27);
  }
Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


