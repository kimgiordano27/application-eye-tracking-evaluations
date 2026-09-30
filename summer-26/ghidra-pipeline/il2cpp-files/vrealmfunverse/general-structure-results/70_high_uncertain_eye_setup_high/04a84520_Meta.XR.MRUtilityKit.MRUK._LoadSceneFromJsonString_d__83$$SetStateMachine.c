/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromJsonString>d__83$$SetStateMachine
ENTRY_POINT: 04a84520
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromJsonString>d__83__SetStateMachine
               (void *param_1,undefined8 param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  void *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(unaff_x21 + 0x98) + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(param_1,unaff_x25,param_3);
  if (*(uint *)(unaff_x26 + 3) <= unaff_w19) goto LAB_04a8463c;
  FUN_02b3c844((long)unaff_x26 + (ulong)*(uint *)(*unaff_x26 + 0x104) * unaff_x27 + 0x20,
               *(long *)(*(long *)(unaff_x21 + 0x90) + 0x80) + 0x40);
  plVar3 = *(long **)(unaff_x20 + 0x18);
  if (plVar3 != (long *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if (lVar4 != 0) {
      iVar2 = 0;
      if (unaff_w28 != 0) {
        iVar2 = unaff_w22 / unaff_w28;
      }
      uVar1 = unaff_w22 - iVar2 * unaff_w28;
      if ((uVar1 < *(uint *)(lVar4 + 0x18)) && (unaff_w19 < *(uint *)(plVar3 + 3))) {
        FUN_02766590((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x27 + 0x20,
                     *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) +
                                                  0xc0) + 0x90) + 0x80) + 0x20,
                     *(int *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) + -1);
        lVar4 = *(long *)(unaff_x20 + 0x10);
        if (lVar4 == 0) goto LAB_04a84630;
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = unaff_w19 + 1;
          if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
          goto LAB_04a84670;
        }
      }
LAB_04a8463c:
      if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_04a84670;
    }
  }
LAB_04a84630:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_04a84670:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


