/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$set_Visibility
ENTRY_POINT: 0728ec64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__set_Visibility(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  float extraout_s0;
  float extraout_s0_00;
  
code_r0x0728ec64:
  if (!(bool)in_CY || (bool)in_ZR) goto LAB_0728ec00;
  while ((*(long *)(unaff_x21 + 0x30) != 0 && (unaff_x20 != 0))) {
    unaff_x21 = *(long *)(*(long *)(unaff_x21 + 0x30) + 0x28);
    while( true ) {
      if (*(long *)(unaff_x20 + 0x38) == unaff_x21) goto LAB_0728ec94;
      if ((*(long *)(unaff_x20 + 0x28) == 0) || (unaff_x21 == 0))
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
      param_1 = FUN_072890dc(*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x40),
                             *(undefined8 *)(unaff_x21 + 0x40));
      if ((param_1 & 1) != 0) break;
      if (*(ulong *)(unaff_x21 + 0x38) != unaff_x20) {
        do {
          if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x30) == 0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
          param_1 = FUN_07289354(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x28));
          if ((param_1 & 1) == 0) {
            if (((*(long *)(unaff_x20 + 0x28) == 0) || (*(long *)(unaff_x20 + 0x30) == 0)) ||
               (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x28), lVar1 == 0))
            goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
            param_1 = FUN_07289198(*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x40),
                                   *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar1 + 0x40));
            if (extraout_s0 < 0.0) goto LAB_0728ebf4;
          }
          if (((*(long *)(unaff_x20 + 0x30) == 0) || (*(long *)(unaff_x19 + 0x18) == 0)) ||
             (param_1 = FUN_0728aa54(param_1,*(undefined8 *)(unaff_x19 + 0x10),unaff_x20,
                                     *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x28)),
             param_1 == 0)) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
          unaff_x20 = *(ulong *)(param_1 + 0x28);
        } while (*(ulong *)(unaff_x21 + 0x38) != unaff_x20);
        if (unaff_x20 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
      }
LAB_0728ebf4:
      unaff_x20 = *(ulong *)(unaff_x20 + 0x38);
      if (unaff_x20 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
    }
    while (param_1 = *(ulong *)(unaff_x21 + 0x38), param_1 != unaff_x20) {
      param_1 = FUN_07289314();
      if ((param_1 & 1) == 0) {
        if (((*(long *)(unaff_x21 + 0x28) == 0) || (*(long *)(unaff_x21 + 0x38) == 0)) ||
           (lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28), lVar1 == 0))
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
        param_1 = FUN_07289198(*(undefined8 *)(unaff_x21 + 0x40),
                               *(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x40),
                               *(undefined8 *)(lVar1 + 0x40));
        in_ZR = false;
        in_CY = true;
        if (!NAN(extraout_s0_00)) {
          in_ZR = extraout_s0_00 == 0.0;
          in_CY = 0.0 <= extraout_s0_00;
        }
        goto code_r0x0728ec64;
      }
LAB_0728ec00:
      if (((*(long *)(unaff_x19 + 0x18) == 0) ||
          (lVar1 = FUN_0728aa54(param_1,*(undefined8 *)(unaff_x19 + 0x10),
                                *(undefined8 *)(unaff_x21 + 0x38),unaff_x21), lVar1 == 0)) ||
         (unaff_x21 = *(long *)(lVar1 + 0x28), unaff_x21 == 0))
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
    }
  }
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_0728ec94:
  if ((unaff_x21 == 0) || (lVar1 = *(long *)(unaff_x21 + 0x38), lVar1 == 0))
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  if (*(ulong *)(lVar1 + 0x38) == unaff_x20) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x18) == 0) ||
     (param_1 = FUN_0728aa54(param_1,*(undefined8 *)(unaff_x19 + 0x10),lVar1,unaff_x21),
     param_1 == 0)) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  unaff_x21 = *(long *)(param_1 + 0x28);
  goto LAB_0728ec94;
}


