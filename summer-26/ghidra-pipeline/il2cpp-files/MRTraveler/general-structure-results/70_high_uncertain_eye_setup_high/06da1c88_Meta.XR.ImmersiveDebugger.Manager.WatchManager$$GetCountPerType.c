/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$GetCountPerType
ENTRY_POINT: 06da1c88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__GetCountPerType(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 in_w8;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long unaff_x19;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint uVar18;
  long unaff_x24;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  
  *(undefined1 *)(unaff_x19 + 0xad7) = in_w8;
  lVar3 = FUN_03c8f97c(*unaff_x20,2);
  iVar14 = *(int *)(unaff_x21 + 0xa0) + -1;
  if ((iVar14 == 0) || (*(int *)(unaff_x21 + 0x28) == 1)) {
    if (lVar3 == 0) goto LAB_06da20ac;
    if (*(int *)(lVar3 + 0x18) == 0) goto thunk_FUN_03c8fb38;
    *(long *)(lVar3 + 0x20) = unaff_x24;
    thunk_FUN_03d233cc();
    uVar18 = 0;
    iVar14 = 0;
LAB_06da1cdc:
    puVar2 = PTR_DAT_08e8fbc8;
    uVar6 = (ulong)*(uint *)(unaff_x21 + 0xa8);
    do {
      if ((int)uVar6 < 1) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        iVar15 = 0;
        lVar20 = (long)(int)uVar18;
        do {
          iVar5 = 0;
          do {
            iVar16 = iVar15;
            uVar6 = 0;
            do {
              lVar7 = *(long *)(unaff_x21 + 0xd8);
              if (lVar7 == 0) goto LAB_06da20ac;
              if (*(uint *)(lVar7 + 0x18) <= uVar18) goto thunk_FUN_03c8fb38;
              lVar7 = *(long *)(lVar7 + lVar20 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_06da20ac;
              if (*(uint *)(lVar7 + 0x18) <= uVar6) goto thunk_FUN_03c8fb38;
              uVar17 = *(uint *)(lVar7 + uVar6 * 4 + 0x20);
              if (uVar17 == 0) {
                lVar7 = *(long *)(unaff_x21 + 0xd0);
                if (lVar7 == 0) goto LAB_06da20ac;
                fVar21 = 0.0;
                if (*(uint *)(lVar7 + 0x18) <= uVar6) goto thunk_FUN_03c8fb38;
              }
              else {
                if ((int)uVar17 < 0) {
                  lVar4 = *(long *)puVar2;
                  iVar1 = -uVar17;
                  iVar15 = iVar1;
                  if (iVar1 < 0) {
                    iVar15 = iVar1 + 1;
                  }
                  uVar17 = (iVar1 % 2 + (iVar15 >> 1)) - 1;
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                    lVar4 = *(long *)puVar2;
                  }
                  plVar8 = *(long **)(lVar4 + 0xb8);
                  plVar10 = plVar8 + 1;
                }
                else {
                  lVar4 = *(long *)puVar2;
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                    lVar4 = *(long *)puVar2;
                  }
                  plVar8 = (long *)(*(long *)(lVar4 + 0xb8) + 0x10);
                  plVar10 = (long *)(*(long *)(lVar4 + 0xb8) + 0x18);
                }
                lVar9 = *plVar8;
                if (lVar9 == 0) goto LAB_06da20ac;
                if (*(uint *)(lVar9 + 0x18) <= uVar17) goto thunk_FUN_03c8fb38;
                lVar7 = *(long *)(unaff_x21 + 0xc0);
                if (lVar7 == 0) goto LAB_06da20ac;
                if (*(uint *)(lVar7 + 0x18) <= uVar18) goto thunk_FUN_03c8fb38;
                lVar12 = *(long *)(lVar7 + lVar20 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_06da20ac;
                uVar13 = iVar16 + (int)uVar6;
                if (*(uint *)(lVar12 + 0x18) <= uVar13) goto thunk_FUN_03c8fb38;
                lVar11 = *plVar10;
                if (lVar11 == 0) goto LAB_06da20ac;
                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto thunk_FUN_03c8fb38;
                lVar7 = *(long *)(unaff_x21 + 0xd0);
                iVar15 = *(int *)(lVar12 + (long)(int)uVar13 * 4 + 0x20);
                fVar21 = *(float *)(lVar9 + (long)(int)uVar17 * 4 + 0x20);
                fVar22 = *(float *)(lVar11 + (long)(int)uVar17 * 4 + 0x20);
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar4 = *(long *)puVar2;
                }
                lVar9 = *(long *)(unaff_x21 + 200);
                if (lVar9 == 0) goto LAB_06da20ac;
                if (*(uint *)(lVar9 + 0x18) <= uVar18) goto thunk_FUN_03c8fb38;
                lVar9 = *(long *)(lVar9 + lVar20 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_06da20ac;
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto thunk_FUN_03c8fb38;
                lVar9 = *(long *)(lVar9 + uVar19 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_06da20ac;
                if (*(uint *)(lVar9 + 0x18) <= uVar6) goto thunk_FUN_03c8fb38;
                lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
                if (lVar4 == 0) goto LAB_06da20ac;
                uVar13 = *(uint *)(lVar9 + uVar6 * 4 + 0x20);
                if (*(uint *)(lVar4 + 0x18) <= uVar13) goto thunk_FUN_03c8fb38;
                if (lVar7 == 0) goto LAB_06da20ac;
                if (*(uint *)(lVar7 + 0x18) <= uVar6) goto thunk_FUN_03c8fb38;
                fVar21 = fVar21 * ((float)(iVar15 << (ulong)(0x10 - uVar17 & 0x1f)) * 3.0517578e-05
                                  + fVar22) * *(float *)(lVar4 + (long)(int)uVar13 * 4 + 0x20);
              }
              lVar4 = uVar6 * 4;
              uVar6 = uVar6 + 1;
              *(float *)(lVar7 + lVar4 + 0x20) = fVar21;
            } while (uVar6 != 0x20);
            FUN_06d9e508();
            if (*(uint *)(lVar3 + 0x18) <= uVar18) goto thunk_FUN_03c8fb38;
            FUN_0712485c(*(undefined8 *)(unaff_x21 + 0xd0),0,
                         *(undefined8 *)(lVar3 + (long)(int)uVar18 * 8 + 0x20),iVar16,0x20,0);
            iVar5 = iVar5 + 1;
            iVar15 = iVar16 + 0x20;
          } while (iVar5 != 0xc);
          uVar6 = (ulong)*(int *)(unaff_x21 + 0xa8);
          uVar19 = uVar19 + 1;
          iVar15 = iVar16 + 0x20;
        } while ((long)uVar19 < (long)uVar6);
        uVar19 = (ulong)(iVar16 + 0x20);
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 <= iVar14);
  }
  else {
    if (lVar3 == 0) goto LAB_06da20ac;
    if (*(int *)(unaff_x21 + 0x28) == 2) {
      if (*(uint *)(lVar3 + 0x18) < 2) goto thunk_FUN_03c8fb38;
      uVar18 = 1;
      lVar20 = unaff_x24;
    }
    else {
      if (*(uint *)(lVar3 + 0x18) == 0) {
thunk_FUN_03c8fb38:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(long *)(lVar3 + 0x20) = unaff_x24;
      thunk_FUN_03d233cc((long *)(lVar3 + 0x20));
      if (*(uint *)(lVar3 + 0x18) < 2) goto thunk_FUN_03c8fb38;
      uVar18 = 0;
      lVar20 = unaff_x22;
    }
    *(long *)(lVar3 + 0x28) = lVar20;
    thunk_FUN_03d233cc();
    if ((int)uVar18 <= iVar14) goto LAB_06da1cdc;
    uVar19 = 0;
  }
  if (((*(int *)(unaff_x21 + 0xa0) == 2) && (*(int *)(unaff_x21 + 0x28) == 3)) && (0 < (int)uVar19))
  {
    if (unaff_x24 == 0) {
LAB_06da20ac:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar18 = *(uint *)(unaff_x24 + 0x18);
    uVar6 = 0;
    do {
      if (uVar18 <= uVar6) goto thunk_FUN_03c8fb38;
      if (unaff_x22 == 0) goto LAB_06da20ac;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto thunk_FUN_03c8fb38;
      *(float *)(unaff_x24 + 0x20 + uVar6 * 4) =
           (*(float *)(unaff_x24 + 0x20 + uVar6 * 4) + *(float *)(unaff_x22 + 0x20 + uVar6 * 4)) *
           0.5;
      uVar6 = uVar6 + 1;
    } while (uVar19 != uVar6);
  }
  return;
}


