/*
FUNCTION_NAME: OVRManager$$get_eyeTextureFormat
ENTRY_POINT: 05730c88
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRManager__get_eyeTextureFormat(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  while (*(long *)(param_1 + -8) == param_3) {
    uVar2 = FUN_05464bbc(unaff_x23[0xc]);
    if ((uVar2 & 1) != 0) {
      return unaff_x23;
    }
    unaff_w22 = unaff_w22 + 1;
    if (*(long *)(unaff_x21 + 0x58) == 0) {
LAB_05730cb8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar1 = FUN_049950e8(*(long *)(unaff_x21 + 0x58),*unaff_x24);
    if (iVar1 <= unaff_w22) {
      return (long *)0x0;
    }
    if ((*(long *)(unaff_x21 + 0x58) == 0) ||
       (unaff_x23 = (long *)FUN_04995178(*(long *)(unaff_x21 + 0x58),unaff_w22,*unaff_x25),
       unaff_x23 == (long *)0x0)) goto LAB_05730cb8;
    param_3 = *unaff_x26;
    if (*(byte *)(*unaff_x23 + 0x130) < *(byte *)(param_3 + 0x130)) break;
    param_1 = *(long *)(*unaff_x23 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440(unaff_x23);
}


