/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 0748729c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__TryLocateSpace(void)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
code_r0x0748729c:
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x26 + 0x2c8) = unaff_w27;
LAB_074872a4:
  pfVar3 = *(float **)(*unaff_x21 + 0xb8);
  fVar4 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar10 = pfVar3[3];
  pfVar3 = unaff_x24;
  do {
    if (unaff_x29 == 0) {
LAB_07487310:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x23) goto LAB_0748730c;
    lVar2 = unaff_x29 + unaff_x22 * 4;
    unaff_x22 = unaff_x22 + 4;
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = pfVar3 + 7;
    *(float *)(lVar2 + 0x20) = fVar4;
    *(float *)(lVar2 + 0x24) = fVar6;
    *(float *)(lVar2 + 0x28) = fVar8;
    *(float *)(lVar2 + 0x2c) = fVar10;
    if (unaff_x22 == 0x68) {
      return 1;
    }
    lVar2 = *unaff_x25;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *unaff_x25;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 == 0) goto LAB_07487310;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) {
LAB_0748730c:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar1 = *(uint *)(lVar2 + unaff_x22 + 0x20);
    unaff_x29 = *unaff_x19;
    if ((int)uVar1 < 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_0748730c;
    lVar2 = unaff_x20 + (ulong)uVar1 * unaff_x28;
    fVar5 = *(float *)(lVar2 + 0x30);
    fVar7 = *(float *)(lVar2 + 0x34);
    fVar9 = *(float *)(lVar2 + 0x38);
    fVar10 = (float)UnityEngine_UIElements_DoubleField_DoubleInput__StringToValue
                              (*(undefined4 *)(lVar2 + 0x2c),0);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) goto LAB_0748730c;
    fVar11 = pfVar3[4];
    fVar14 = pfVar3[5];
    fVar13 = pfVar3[6];
    fVar12 = *unaff_x24;
    fVar4 = (fVar5 * fVar13 + fVar9 * fVar11 + fVar10 * fVar12) - fVar7 * fVar14;
    fVar6 = (fVar7 * fVar11 + fVar9 * fVar14 + fVar5 * fVar12) - fVar10 * fVar13;
    fVar8 = (fVar10 * fVar14 + fVar9 * fVar13 + fVar7 * fVar12) - fVar5 * fVar11;
    fVar10 = ((fVar9 * fVar12 - fVar10 * fVar11) - fVar5 * fVar14) - fVar7 * fVar13;
    pfVar3 = unaff_x24;
  } while( true );
  if (*(char *)(unaff_x26 + 0x2c8) == '\0') goto code_r0x0748729c;
  goto LAB_074872a4;
}


