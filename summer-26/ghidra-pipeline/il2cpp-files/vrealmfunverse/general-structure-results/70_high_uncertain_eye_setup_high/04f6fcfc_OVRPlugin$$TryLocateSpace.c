/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 04f6fcfc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__TryLocateSpace(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  if ((DAT_066c9b6e & 1) == 0) {
    FUN_02b3c81c(UnityEngine_InputSystem_IInputInteraction_var);
    DAT_066c9b6e = 1;
  }
  plVar5 = (long *)(param_1 + 0x70);
  if (*plVar5 == 0) {
    if (param_2 == 0) goto LAB_04f6ff9c;
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
  }
  else {
    if (param_2 == 0) {
LAB_04f6ff9c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_2 + 0x18) <= *(int *)(*plVar5 + 0x18)) goto LAB_04f6fd7c;
  }
  lVar8 = FUN_02b3c908(*(undefined8 *)UnityEngine_InputSystem_IInputInteraction_var,uVar3);
  *plVar5 = lVar8;
  thunk_FUN_02bb0e9c(plVar5,lVar8);
  uVar3 = (ulong)*(uint *)(param_2 + 0x18);
LAB_04f6fd7c:
  puVar2 = PTR_DAT_06312c90;
  fVar15 = 0.0;
  if (1 < (int)uVar3) {
    pfVar6 = (float *)(param_2 + 0x34);
    uVar7 = 1;
    do {
      if ((uVar3 & 0xffffffff) <= uVar7) goto LAB_04f6ff98;
      fVar14 = *pfVar6;
      uVar16 = *(undefined8 *)(pfVar6 + -2);
      uVar17 = *(undefined8 *)(pfVar6 + -5);
      fVar18 = pfVar6[-3];
      if (DAT_066c1d9c == '\0') {
        FUN_02b3c81c(puVar2);
        DAT_066c1d9c = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      fVar9 = (float)uVar16 - (float)uVar17;
      fVar11 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      uVar3 = *(ulong *)(param_2 + 0x18);
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 3;
      fVar15 = fVar15 + SQRT(fVar9 * fVar9 + fVar11 * fVar11 + (fVar14 - fVar18) * (fVar14 - fVar18)
                            );
    } while ((long)uVar7 < (long)(int)uVar3);
  }
  if (0 < (int)uVar3) {
    uVar7 = 0;
    pfVar6 = (float *)(param_2 + 0x28);
    lVar8 = 0x20;
    do {
      if (lVar8 == 0x20) {
        if ((uint)uVar3 < 2) goto LAB_04f6ff98;
        fVar18 = *(float *)(param_2 + 0x34);
        uVar16 = *(undefined8 *)(param_2 + 0x2c);
        uVar17 = *(undefined8 *)(param_2 + 0x20);
        fVar14 = *(float *)(param_2 + 0x28);
      }
      else {
        if ((uVar3 & 0xffffffff) <= uVar7) {
LAB_04f6ff98:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        fVar18 = *pfVar6;
        uVar16 = *(undefined8 *)(pfVar6 + -2);
        uVar17 = *(undefined8 *)(pfVar6 + -5);
        fVar14 = pfVar6[-3];
      }
      fVar9 = (float)uVar16 - (float)uVar17;
      fVar11 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      fVar18 = fVar18 - fVar14;
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_04f6ff9c;
      if (((uVar3 & 0xffffffff) <= uVar7) || (*(uint *)(lVar4 + 0x18) <= uVar7)) goto LAB_04f6ff98;
      fVar12 = *pfVar6;
      *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(pfVar6 + -2);
      *(float *)((undefined8 *)(lVar4 + lVar8) + 1) = fVar12;
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_04f6ff9c;
      fVar12 = fVar11;
      fVar13 = fVar18;
      uVar10 = FUN_05c7bb74(0);
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_04f6ff98;
      lVar4 = lVar4 + lVar8;
      *(undefined4 *)(lVar4 + 0xc) = uVar10;
      *(float *)(lVar4 + 0x10) = fVar12;
      *(float *)(lVar4 + 0x14) = fVar13;
      *(float *)(lVar4 + 0x18) = fVar14;
      lVar4 = *plVar5;
      if (lVar4 == 0) goto LAB_04f6ff9c;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (lVar8 == 0x20) {
        fVar14 = 0.0;
        if ((ulong)uVar1 == 0) goto LAB_04f6ff98;
      }
      else {
        if ((uVar1 <= uVar7) || (uVar1 <= (int)uVar7 - 1U)) goto LAB_04f6ff98;
        fVar14 = *(float *)(lVar4 + lVar8 + -4);
        if (DAT_066c1d9c == '\0') {
          FUN_02b3c81c(puVar2);
          DAT_066c1d9c = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar14 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar18 * fVar18) / fVar15 + fVar14;
      }
      uVar3 = *(ulong *)(param_2 + 0x18);
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + lVar8;
      lVar8 = lVar8 + 0x20;
      pfVar6 = pfVar6 + 3;
      *(float *)(lVar4 + 0x1c) = fVar14;
    } while ((long)uVar7 < (long)(int)uVar3);
  }
  return;
}


