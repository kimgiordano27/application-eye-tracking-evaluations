/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$get_Transparent
ENTRY_POINT: 0728eb08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__get_Transparent(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  ulong uVar5;
  long lVar6;
  float extraout_s0;
  float extraout_s0_00;
  
  do {
    uVar5 = *(ulong *)(param_1 + 0x28);
    if ((uVar5 == 0) || (*(long *)(uVar5 + 0x28) == 0)) break;
    uVar2 = FUN_072890dc(*(undefined8 *)(*(long *)(uVar5 + 0x28) + 0x40),
                         *(undefined8 *)(uVar5 + 0x40));
    if ((uVar2 & 1) == 0) goto LAB_0728eb1c;
    param_1 = *(long *)(uVar5 + 0x30);
  } while (param_1 != 0);
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
joined_r0x0728eb38:
  if (uVar1 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  lVar6 = *(long *)(uVar3 + 0x28);
  while( true ) {
    if (*(long *)(uVar5 + 0x38) == lVar6) goto LAB_0728ec94;
    if ((*(long *)(uVar5 + 0x28) == 0) || (lVar6 == 0))
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
    uVar2 = FUN_072890dc(*(undefined8 *)(*(long *)(uVar5 + 0x28) + 0x40),
                         *(undefined8 *)(lVar6 + 0x40));
    if ((uVar2 & 1) != 0) break;
    if (*(ulong *)(lVar6 + 0x38) != uVar5) {
      do {
        if ((uVar5 == 0) || (*(long *)(uVar5 + 0x30) == 0))
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
        uVar2 = FUN_07289354(*(undefined8 *)(*(long *)(uVar5 + 0x30) + 0x28));
        if ((uVar2 & 1) == 0) {
          if (((*(long *)(uVar5 + 0x28) == 0) || (*(long *)(uVar5 + 0x30) == 0)) ||
             (lVar4 = *(long *)(*(long *)(uVar5 + 0x30) + 0x28), lVar4 == 0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
          uVar2 = FUN_07289198(*(undefined8 *)(*(long *)(uVar5 + 0x28) + 0x40),
                               *(undefined8 *)(uVar5 + 0x40),*(undefined8 *)(lVar4 + 0x40));
          if (extraout_s0 < 0.0) goto LAB_0728ebf4;
        }
        if (((*(long *)(uVar5 + 0x30) == 0) || (*(long *)(unaff_x19 + 0x18) == 0)) ||
           (uVar2 = FUN_0728aa54(uVar2,*(undefined8 *)(unaff_x19 + 0x10),uVar5,
                                 *(undefined8 *)(*(long *)(uVar5 + 0x30) + 0x28)), uVar2 == 0))
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
        uVar5 = *(ulong *)(uVar2 + 0x28);
      } while (*(ulong *)(lVar6 + 0x38) != uVar5);
      if (uVar5 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
    }
LAB_0728ebf4:
    uVar5 = *(ulong *)(uVar5 + 0x38);
    if (uVar5 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  }
  while (uVar2 = *(ulong *)(lVar6 + 0x38), uVar2 != uVar5) {
    uVar2 = FUN_07289314();
    if ((uVar2 & 1) == 0) {
      if (((*(long *)(lVar6 + 0x28) == 0) || (*(long *)(lVar6 + 0x38) == 0)) ||
         (lVar4 = *(long *)(*(long *)(lVar6 + 0x38) + 0x28), lVar4 == 0))
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
      uVar2 = FUN_07289198(*(undefined8 *)(lVar6 + 0x40),
                           *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x40),
                           *(undefined8 *)(lVar4 + 0x40));
      if (0.0 < extraout_s0_00) break;
    }
    if (((*(long *)(unaff_x19 + 0x18) == 0) ||
        (lVar6 = FUN_0728aa54(uVar2,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(lVar6 + 0x38),
                              lVar6), lVar6 == 0)) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0))
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  }
  uVar3 = *(ulong *)(lVar6 + 0x30);
  uVar1 = uVar5;
  if (uVar3 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  goto joined_r0x0728eb38;
LAB_0728ec94:
  if ((lVar6 == 0) || (lVar4 = *(long *)(lVar6 + 0x38), lVar4 == 0))
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  if (*(ulong *)(lVar4 + 0x38) == uVar5) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x18) == 0) ||
     (uVar2 = FUN_0728aa54(uVar2,*(undefined8 *)(unaff_x19 + 0x10),lVar4,lVar6), uVar2 == 0))
  goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append;
  lVar6 = *(long *)(uVar2 + 0x28);
  goto LAB_0728ec94;
  while( true ) {
    uVar2 = FUN_072890dc(*(undefined8 *)(uVar5 + 0x40),
                         *(undefined8 *)(*(long *)(uVar5 + 0x28) + 0x40));
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(uVar5 + 0x30);
      uVar1 = uVar3;
      goto joined_r0x0728eb38;
    }
    uVar5 = *(ulong *)(uVar5 + 0x38);
    if (uVar5 == 0) break;
LAB_0728eb1c:
    if (*(long *)(uVar5 + 0x28) == 0) break;
  }
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__Append:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


