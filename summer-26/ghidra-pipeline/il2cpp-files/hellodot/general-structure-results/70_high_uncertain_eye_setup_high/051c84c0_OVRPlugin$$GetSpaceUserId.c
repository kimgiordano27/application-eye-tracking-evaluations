/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUserId
ENTRY_POINT: 051c84c0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceUserId(long param_1,float param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined2 unaff_w23;
  undefined2 unaff_w24;
  long unaff_x25;
  
  do {
    lVar1 = unaff_x21;
    if ((param_2 < *(float *)(param_1 + 0x10)) && (*(char *)(unaff_x25 + 0x20) != '\0')) {
      *(undefined2 *)(unaff_x25 + 0x20) = unaff_w24;
    }
LAB_051c84d8:
    unaff_x21 = lVar1 + 1;
    if (unaff_x21 == 9) {
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x28);
    if (lVar2 == 0) goto LAB_051c84f8;
    if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar1 - 3U) {
LAB_051c84fc:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (*(long *)(lVar2 + unaff_x21 * 8) == 0) {
LAB_051c84f8:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_051c8708();
    lVar2 = *(long *)(unaff_x20 + 0x28);
    if (lVar2 == 0) goto LAB_051c84f8;
    if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar1 - 3U) goto LAB_051c84fc;
    lVar1 = *unaff_x22;
    unaff_x25 = *(long *)(lVar2 + unaff_x21 * 8);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar1 = *unaff_x22;
    }
    if (unaff_x25 == 0) goto LAB_051c84f8;
    param_1 = *(long *)(lVar1 + 0xb8);
    param_2 = *(float *)(unaff_x25 + 0x1c);
  } while (param_2 <= *(float *)(param_1 + 0xc));
  lVar1 = unaff_x21;
  if (*(char *)(unaff_x25 + 0x20) == '\0') {
    *(undefined2 *)(unaff_x25 + 0x20) = unaff_w23;
  }
  goto LAB_051c84d8;
}


