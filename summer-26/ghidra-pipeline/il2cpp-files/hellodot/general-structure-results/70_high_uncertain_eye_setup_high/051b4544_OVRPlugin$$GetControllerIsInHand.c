/*
FUNCTION_NAME: OVRPlugin$$GetControllerIsInHand
ENTRY_POINT: 051b4544
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetControllerIsInHand(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_06a7131a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608a30);
    DAT_06a7131a = 1;
  }
  puVar3 = PTR_DAT_06608a40;
  puVar2 = PTR_DAT_06604c40;
  uVar10 = 0;
  bVar1 = false;
  fVar14 = 1.0;
  fVar15 = 0.0;
  do {
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_051b4808;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    iVar4 = FUN_051cd8c0();
    if (iVar4 == 0) {
      lVar7 = *param_2;
      if (lVar7 == 0) goto LAB_051b4808;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_051b480c;
      *(undefined4 *)(lVar7 + uVar10 * 4 + 0x20) = 0;
    }
    else {
      plVar11 = *(long **)(param_1 + 0x130);
      if (plVar11 == (long *)0x0) {
LAB_051b4808:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_051b467c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar3,0);
LAB_051b467c:
      fVar12 = (float)(*(code *)*puVar5)(plVar11,uVar10 & 0xffffffff,puVar5[1]);
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_051b4808;
      fVar13 = *(float *)(*(long *)(param_1 + 0xd0) + 0xd8);
      lVar7 = *param_2;
      fVar13 = (fVar12 - fVar13) / (1.0 - fVar13);
      fVar12 = fVar13;
      if (1.0 < fVar13) {
        fVar12 = 1.0;
      }
      if (fVar13 < 0.0) {
        fVar12 = 0.0;
      }
      if (lVar7 == 0) goto LAB_051b4808;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_051b480c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(float *)(lVar7 + uVar10 * 4 + 0x20) = fVar12;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iVar4 = FUN_051cd8c0();
      if (iVar4 == 2) {
        lVar7 = *param_2;
        if (lVar7 == 0) goto LAB_051b4808;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_051b480c;
        fVar12 = *(float *)(lVar7 + uVar10 * 4 + 0x20);
        bVar1 = true;
        if (fVar12 <= fVar14) {
          fVar14 = fVar12;
        }
      }
      else {
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_051b4808;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar4 = FUN_051cd8c0();
        lVar7 = *param_2;
        if (iVar4 == 1) {
          if (lVar7 == 0) goto LAB_051b4808;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_051b480c;
          fVar12 = *(float *)(lVar7 + uVar10 * 4 + 0x20);
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
        }
        else if (lVar7 == 0) goto LAB_051b4808;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_051b480c;
      uVar6 = 1 << (ulong)((uint)uVar10 & 0x1f);
      if (*(float *)(lVar7 + uVar10 * 4 + 0x20) <= 0.0) {
        uVar6 = *(uint *)(param_1 + 0x158) & (uVar6 ^ 0xffffffff);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x158) | uVar6;
      }
      *(uint *)(param_1 + 0x158) = uVar6;
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 5) {
      if (!bVar1) {
        fVar14 = fVar15;
      }
      return fVar14;
    }
  } while( true );
}


