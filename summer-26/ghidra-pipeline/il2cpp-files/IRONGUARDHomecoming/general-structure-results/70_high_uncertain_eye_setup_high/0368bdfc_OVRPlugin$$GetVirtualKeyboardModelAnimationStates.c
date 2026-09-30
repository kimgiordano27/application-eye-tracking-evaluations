/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 0368bdfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetVirtualKeyboardModelAnimationStates(float param_1,float param_2,float param_3)

{
  long lVar1;
  int in_w8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float unaff_s8;
  float unaff_s9;
  float fVar9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar9 = unaff_s14 * param_3 + unaff_s12 * param_1 + unaff_s13 * param_2;
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    *(undefined1 *)(unaff_x22 + 0xf73) = 1;
  }
  fVar4 = ABS(fVar9);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = **(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8) * 8.0;
  fVar2 = fVar4 * DAT_00c927dc;
  if (fVar4 * DAT_00c927dc <= fVar5) {
    fVar2 = fVar5;
  }
  if (fVar2 <= ABS(0.0 - fVar9)) {
    uVar8 = (ulong)(uint)(unaff_s12 * unaff_s8);
    fVar4 = unaff_s14 * unaff_s15 + unaff_s12 * unaff_s8 + unaff_s13 * unaff_s9;
    uVar6 = (ulong)(uint)fVar4;
    fVar9 = ((fStack000000000000007c * unaff_s14 +
             unaff_s11 * unaff_s12 + fStack0000000000000078 * unaff_s13) - fVar4) / fVar9;
    if ((0.0 < fVar9) && ((in_stack_00000008._4_4_ <= 0.0 || (fVar9 <= in_stack_00000008._4_4_)))) {
      in_stack_00000018 = unaff_x21[1];
      in_stack_00000010 = *unaff_x21;
      in_stack_00000020 = unaff_x21[2];
      uVar3 = FUN_04043b74(fVar9,&stack0x00000010,0);
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = uVar6;
      fVar4 = (float)FUN_0407e9e4(uVar3,uVar6,uVar8,lVar1,0);
      if ((ABS(fVar4) <= *(float *)(unaff_x20 + 0x28)) &&
         (ABS((float)uVar7) <= *(float *)(unaff_x20 + 0x28))) {
        *unaff_x19 = (int)uVar3;
        unaff_x19[1] = (int)uVar6;
        unaff_x19[2] = (int)uVar8;
        unaff_x19[3] = unaff_s12;
        unaff_x19[4] = unaff_s13;
        unaff_x19[5] = unaff_s14;
        unaff_x19[6] = fVar9;
        return 1;
      }
    }
  }
  return 0;
}


