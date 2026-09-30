/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$set_MemberInfo
ENTRY_POINT: 052c10d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedMember__set_MemberInfo
               (undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *unaff_x24;
  long *plVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_066cd30c(uVar11,0);
  if ((uVar4 & 1) != 0) {
    FUN_052c13d0();
    lVar12 = *(long *)(unaff_x19 + 0x30);
    if (lVar12 == 0) {
LAB_052c13bc:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar17 = *(long *)(lVar12 + 0x80);
    if ((lVar17 == 0) || (*(long *)(lVar17 + 0x18) == 0)) {
      FUN_052c35a0(lVar12);
      lVar17 = *(long *)(lVar12 + 0x80);
      if (lVar17 == 0) goto LAB_052c13bc;
    }
    puVar3 = PTR_DAT_06d090f0;
    puVar2 = PTR_DAT_06d02c10;
    uVar1 = *(uint *)(lVar17 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      uVar15 = 0;
      do {
        if (uVar1 <= uVar9) {
LAB_052c13c0:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar12 = *(long *)(lVar17 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_052c13bc;
        uVar11 = *(undefined8 *)(lVar12 + 0x18);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar4 = FUN_066cd30c(uVar11,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = *(long *)(lVar12 + 0x20);
          if (lVar7 == 0) goto LAB_052c13bc;
          iVar16 = 0;
          while (unaff_x24 = (long *)PTR_DAT_06d01e20, iVar16 < *(int *)(lVar7 + 0x18)) {
            plVar14 = *(long **)(unaff_x19 + 0x80);
            lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d09120);
            FUN_0407a9d4(lVar7,*(undefined8 *)PTR_DAT_06d09108);
            if (plVar14 == (long *)0x0) goto LAB_052c13bc;
            if ((lVar7 != 0) &&
               (lVar5 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar5 == 0)) {
              uVar11 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
              FUN_02f07f94(uVar11,0);
            }
            if (*(uint *)(plVar14 + 3) <= uVar15) goto LAB_052c13c0;
            plVar14[(long)(int)uVar15 + 4] = lVar7;
            thunk_FUN_02f411dc(plVar14 + (long)(int)uVar15 + 4,lVar7);
            if (DAT_071babf5 == '\0') {
              FUN_02f07e70(puVar2);
              DAT_071babf5 = '\x01';
            }
            lVar7 = *(long *)(lVar12 + 0x20);
            if (lVar7 == 0) goto LAB_052c13bc;
            puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            uVar11 = *puVar8;
            fVar23 = *(float *)(puVar8 + 1);
            if (iVar16 == *(int *)(lVar7 + 0x18) + -1) {
              lVar7 = *(long *)(lVar12 + 0x18);
            }
            else {
              lVar7 = FUN_03fd09cc(lVar7,iVar16 + 1,*(undefined8 *)PTR_DAT_06d3d370);
              if (lVar7 == 0) goto LAB_052c13bc;
              lVar7 = *(long *)(lVar7 + 0x10);
            }
            if (lVar7 == 0) goto LAB_052c13bc;
            fVar18 = (float)FUN_066d3ed0(lVar7,0);
            iVar6 = *(int *)(unaff_x19 + 0x24);
            if (0 < iVar6) {
              iVar13 = 0;
              fVar21 = (float)uVar11;
              fVar22 = (float)((ulong)uVar11 >> 0x20);
              fVar24 = param_2 - fVar22;
              fVar25 = param_3 - fVar23;
              do {
                lVar7 = *(long *)(unaff_x19 + 0x80);
                fVar19 = ((float)iVar13 + 1.0) / (float)iVar6;
                fVar20 = fVar19;
                if (1.0 < fVar19) {
                  fVar20 = 1.0;
                }
                if (fVar19 < 0.0) {
                  fVar20 = 0.0;
                }
                if (lVar7 == 0) goto LAB_052c13bc;
                if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_052c13c0;
                lVar7 = *(long *)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_052c13bc;
                lVar10 = *(long *)(lVar7 + 0x10);
                lVar5 = *(long *)puVar3;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_052c13bc;
                uVar1 = *(uint *)(lVar7 + 0x18);
                fVar19 = fVar25 * fVar20;
                param_2 = fVar22 + fVar24 * fVar20;
                param_3 = fVar23 + fVar19;
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar1 * 0xc;
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(ulong *)(lVar10 + 0x20) = CONCAT44(param_2,fVar21 + (fVar18 - fVar21) * fVar20);
                  *(float *)(lVar10 + 0x28) = param_3;
                  param_2 = fVar19;
                }
                else {
                  FUN_0407b268(lVar7,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                iVar6 = *(int *)(unaff_x19 + 0x24);
                iVar13 = iVar13 + 1;
              } while (iVar13 < iVar6);
            }
            lVar7 = *(long *)(lVar12 + 0x20);
            uVar15 = uVar15 + 1;
            iVar16 = iVar16 + 1;
            if (lVar7 == 0) goto LAB_052c13bc;
          }
        }
        uVar1 = *(uint *)(lVar17 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
  }
  return;
}


