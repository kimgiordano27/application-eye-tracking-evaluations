/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 0574ae28
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreatePassthroughColorLut(long param_1)

{
  bool in_ZR;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long in_x9;
  long in_x15;
  undefined8 *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long in_stack_00000008;
  long in_stack_00000018;
  
  if (((((in_ZR) || (in_x15 == *(long *)PTR_DAT_06d040b0)) || (in_x15 == *(long *)PTR_DAT_06d04140))
      || (((in_x15 == *(long *)PTR_DAT_06d04170 || (in_x15 == *(long *)PTR_DAT_06d04158)) ||
          (in_x15 == *(long *)PTR_DAT_06d02c80)))) ||
     ((unaff_x21 != (long *)0x0 &&
      (((lVar1 = *unaff_x21, lVar1 == param_1 || (lVar1 == in_x9)) ||
       ((lVar1 == *(long *)PTR_DAT_06d040b0 ||
        ((((lVar1 == *(long *)PTR_DAT_06d04140 || (lVar1 == *(long *)PTR_DAT_06d04170)) ||
          (lVar1 == *(long *)PTR_DAT_06d04158)) || (lVar1 == *(long *)PTR_DAT_06d02c80)))))))))) {
    if ((unaff_x22 == 0) || (unaff_x21 == (long *)0x0)) {
      *unaff_x19 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_055b5920(0);
      if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
      }
      lVar1 = FUN_0556b4a4();
      FUN_055b5920(0);
      lVar2 = FUN_0556b4a4();
      if (unaff_w20 < 0x2b) {
        if (unaff_w20 < 0xd) {
          if (unaff_w20 == 0) goto LAB_0574b4d0;
          if (unaff_w20 == 0xc) goto LAB_0574b4b0;
        }
        else {
          if (unaff_w20 == 0x1a) goto LAB_0574b4c0;
          if (unaff_w20 == 0x2a) goto LAB_0574b440;
        }
        goto LAB_0574b48c;
      }
      if (unaff_w20 < 0x42) {
        if (unaff_w20 != 0x3f) {
          if (unaff_w20 == 0x41) {
LAB_0574b4b0:
            in_stack_00000008 = 0;
            if (lVar2 != 0) {
              in_stack_00000008 = lVar1 / lVar2;
            }
            goto LAB_0574b4dc;
          }
          goto LAB_0574b48c;
        }
LAB_0574b4d0:
        in_stack_00000008 = lVar2 + lVar1;
      }
      else if (unaff_w20 == 0x45) {
LAB_0574b4c0:
        in_stack_00000008 = lVar2 * lVar1;
      }
      else {
        if (unaff_w20 != 0x49) goto LAB_0574b48c;
LAB_0574b440:
        in_stack_00000008 = lVar1 - lVar2;
      }
LAB_0574b4dc:
      uVar3 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d040b0,&stack0x00000008);
      *unaff_x19 = uVar3;
    }
    thunk_FUN_02f411dc();
    uVar3 = 1;
  }
  else {
LAB_0574b48c:
    *unaff_x19 = 0;
    thunk_FUN_02f411dc();
    uVar3 = 0;
  }
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


