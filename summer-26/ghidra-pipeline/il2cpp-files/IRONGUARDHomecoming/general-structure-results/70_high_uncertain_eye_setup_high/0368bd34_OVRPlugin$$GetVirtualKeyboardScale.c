/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 0368bd34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetVirtualKeyboardScale(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long lVar1;
  int in_w8;
  float *pfVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float unaff_s8;
  float fVar11;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float unaff_s12;
  float fVar14;
  float unaff_s13;
  float fVar15;
  float unaff_s14;
  float fVar16;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x22 + 0xe9b) = 1;
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar3 = SQRT(unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13);
  fStack000000000000000c = unaff_s8;
  in_stack_00000078 = unaff_s11;
  fStack000000000000007c = param_3;
  if (fVar3 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar2 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar14 = *pfVar2;
    fVar15 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    fVar14 = unaff_s12 / fVar3;
    fVar15 = unaff_s13 / fVar3;
    fVar3 = unaff_s14 / fVar3;
  }
  fVar16 = unaff_x21[2];
  fVar11 = *unaff_x21;
  fVar12 = unaff_x21[1];
  fVar13 = fVar3 * unaff_x21[5] + fVar14 * unaff_x21[3] + fVar15 * unaff_x21[4];
  if (DAT_0482ef73 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482ef73 = '\x01';
  }
  fVar6 = ABS(fVar13);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = **(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8) * 8.0;
  fVar4 = fVar6 * DAT_00c927dc;
  if (fVar6 * DAT_00c927dc <= fVar7) {
    fVar4 = fVar7;
  }
  if (fVar4 <= ABS(0.0 - fVar13)) {
    uVar10 = (ulong)(uint)(fVar14 * fVar11);
    fVar11 = fVar3 * fVar16 + fVar14 * fVar11 + fVar15 * fVar12;
    uVar8 = (ulong)(uint)fVar11;
    fVar13 = ((fStack000000000000007c * fVar3 + unaff_s10 * fVar14 + in_stack_00000078 * fVar15) -
             fVar11) / fVar13;
    if ((0.0 < fVar13) && ((fStack000000000000000c <= 0.0 || (fVar13 <= fStack000000000000000c)))) {
      in_stack_00000018 = *(undefined8 *)(unaff_x21 + 2);
      in_stack_00000010 = *(undefined8 *)unaff_x21;
      in_stack_00000020 = *(undefined8 *)(unaff_x21 + 4);
      uVar5 = FUN_04043b74(fVar13,&stack0x00000010,0);
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = uVar8;
      fVar11 = (float)FUN_0407e9e4(uVar5,uVar8,uVar10,lVar1,0);
      if ((ABS(fVar11) <= *(float *)(unaff_x20 + 0x28)) &&
         (ABS((float)uVar9) <= *(float *)(unaff_x20 + 0x28))) {
        *unaff_x19 = (int)uVar5;
        unaff_x19[1] = (int)uVar8;
        unaff_x19[2] = (int)uVar10;
        unaff_x19[3] = fVar14;
        unaff_x19[4] = fVar15;
        unaff_x19[5] = fVar3;
        unaff_x19[6] = fVar13;
        return 1;
      }
    }
  }
  return 0;
}


