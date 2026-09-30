/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Toggle$$get_StateChanged
ENTRY_POINT: 04c1d5ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Toggle__get_StateChanged(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  
  if (2 < in_w8) {
    unaff_x19[6] = unaff_x21;
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 != 0) {
      lVar2 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar2 == 0) goto LAB_04c1d674;
      in_w8 = *(uint *)(unaff_x19 + 3);
    }
    if (3 < in_w8) {
      unaff_x19[7] = lVar4;
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (lVar4 != 0) {
        lVar2 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar2 == 0) {
LAB_04c1d674:
          uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar3,0);
        }
        in_w8 = *(uint *)(unaff_x19 + 3);
      }
      puVar1 = PTR_DAT_065e5960;
      if (4 < in_w8) {
        unaff_x19[8] = lVar4;
        FUN_04db9b3c(*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


