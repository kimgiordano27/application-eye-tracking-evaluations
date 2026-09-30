/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$get_HapticsClip
ENTRY_POINT: 0728f400
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__get_HapticsClip(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int in_w9;
  int in_w10;
  uint in_w11;
  int in_w12;
  long in_x13;
  long lVar4;
  long in_x14;
  long in_x15;
  long lVar5;
  long in_x16;
  uint in_w17;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  while (*(long *)(in_x15 + 0x40) != 0) {
    if (*(uint *)(in_x14 + 0x18) <= in_w17) goto LAB_0728f484;
    lVar5 = *(long *)(in_x15 + 0x38);
    in_w12 = in_w12 + 1;
    *(undefined4 *)(in_x14 + in_x16 * 0x10 + 0x2c) =
         *(undefined4 *)(*(long *)(in_x15 + 0x40) + 0x44);
    in_x15 = lVar5;
    if (lVar5 == in_x13) {
      lVar5 = *unaff_x20;
      if (lVar5 == 0) break;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 <= in_w11) goto LAB_0728f484;
      uVar1 = in_w11 + 1;
      *(int *)(lVar5 + (long)(int)in_w11 * 4 + 0x20) = in_w9;
      if (uVar2 <= uVar1) goto LAB_0728f484;
      lVar4 = *(long *)(unaff_x19 + 0x18);
      in_w10 = in_w10 + in_w12;
      in_w11 = in_w11 + 2;
      in_w9 = in_w9 + in_w12;
      *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = in_w12;
      do {
        if (lVar4 == 0) goto LAB_0728f474;
        param_1 = *(long *)(param_1 + 0x18);
        if (param_1 == *(long *)(lVar4 + 0x18)) {
          return;
        }
        if (param_1 == 0) goto LAB_0728f474;
      } while (*(char *)(param_1 + 0x35) == '\0');
      in_x13 = *(long *)(param_1 + 0x20);
      in_x14 = *unaff_x21;
      in_w12 = 0;
      in_x15 = in_x13;
    }
    if (((in_x14 == 0) || (in_x15 == 0)) || (lVar5 = *(long *)(in_x15 + 0x40), lVar5 == 0)) break;
    in_w17 = in_w10 + in_w12;
    if (*(uint *)(in_x14 + 0x18) <= in_w17) {
LAB_0728f484:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    in_x16 = (long)(int)in_w17;
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    lVar4 = in_x14 + in_x16 * 0x10;
    *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    in_x14 = *unaff_x21;
    if (in_x14 == 0) break;
  }
LAB_0728f474:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


