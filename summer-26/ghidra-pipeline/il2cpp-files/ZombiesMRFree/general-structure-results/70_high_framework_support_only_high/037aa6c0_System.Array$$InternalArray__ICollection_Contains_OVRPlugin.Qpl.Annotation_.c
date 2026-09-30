/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 037aa6c0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation>
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  int unaff_w25;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  uVar28 = param_3._4_4_;
  fVar17 = param_3._0_4_;
  uVar24 = param_2._4_4_;
  fVar22 = param_2._0_4_;
  do {
    lVar9 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f97058) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          fVar19 = fVar22;
          fVar27 = fVar17;
          goto LAB_037aa714;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
    fVar19 = fVar22;
    fVar27 = fVar17;
LAB_037aa714:
    iVar5 = (*(code *)*puVar8)();
    puVar4 = PTR_DAT_06f97068;
    puVar3 = PTR_DAT_06f6d5d8;
    if (iVar5 <= unaff_w25) {
      if (in_stack_00000010._4_4_ <= unaff_w23) goto LAB_037aaefc;
      while (plVar12 = *(long **)(unaff_x19 + 0x28), plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_037aadd4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar4,0);
LAB_037aadd4:
        fStack0000000000000058 = (float)(*(code *)*puVar8)(plVar12,unaff_w23,puVar8[1]);
        fStack000000000000005c = fVar19;
        in_stack_00000060 = fVar27;
        fStack0000000000000048 =
             (float)FUN_050453cc(in_stack_00000018,unaff_w23,*(undefined8 *)PTR_DAT_06f95ae8);
        fStack000000000000004c = fVar19;
        in_stack_00000050 = fVar27;
        FUN_068ea6fc(&stack0x00000058,&stack0x00000048,0);
        if (fStack0000000000000048 * fStack0000000000000048 +
            fStack000000000000004c * fStack000000000000004c + in_stack_00000050 * in_stack_00000050
            == 0.0) {
          if (DAT_0738e661 == '\0') {
            FUN_02fe925c(puVar3);
            DAT_0738e661 = '\x01';
          }
          lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
          fStack0000000000000048 = *(float *)(lVar9 + 0x3c);
          fStack000000000000004c = *(float *)(lVar9 + 0x40);
          in_stack_00000050 = *(float *)(lVar9 + 0x44);
        }
        fVar27 = in_stack_00000050 * fStack0000000000000058;
        fVar17 = fStack000000000000004c * fStack0000000000000058;
        fVar22 = fStack0000000000000048 * fStack000000000000005c;
        FUN_050453cc(unaff_x21,unaff_w23,*(undefined8 *)PTR_DAT_06f95ae8);
        fVar19 = (fVar17 - fVar22) * fVar27;
        FUN_03782ba8();
        unaff_w23 = unaff_w23 + 1;
        if (unaff_w23 == in_stack_00000010._4_4_) {
LAB_037aaefc:
          FUN_0377c2d0(in_stack_00000018,0);
          FUN_0377c2d0(unaff_x21,0);
          return;
        }
      }
LAB_037aaf44:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar9 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x20) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aa774;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_037aa774:
    iVar5 = (*(code *)*puVar8)();
    lVar9 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x20) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aa7d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_037aa7d4:
    iVar6 = (*(code *)*puVar8)();
    lVar9 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x20) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aa834;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8();
LAB_037aa834:
    iVar7 = (*(code *)*puVar8)();
    iVar1 = iVar6;
    if (iVar7 <= iVar6) {
      iVar1 = iVar7;
    }
    plVar12 = *(long **)(unaff_x19 + 0x20);
    iVar2 = iVar5;
    if (iVar1 <= iVar5) {
      iVar2 = iVar1;
    }
    if (iVar2 <= unaff_w23) {
      unaff_w23 = iVar2;
    }
    if (plVar12 == (long *)0x0) goto LAB_037aaf44;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f95930) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aa8bc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f95930,0);
LAB_037aa8bc:
    in_stack_00000068 = (*(code *)*puVar8)(plVar12,iVar5,puVar8[1]);
    in_stack_00000070 = CONCAT44(uVar24,fVar19);
    in_stack_00000078 = CONCAT44(uVar28,fVar27);
    if (*(int *)(*(long *)PTR_DAT_06f958a0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar13 = (float)FUN_0377e790(&stack0x00000068,0);
    plVar12 = *(long **)(unaff_x19 + 0x20);
    if (plVar12 == (long *)0x0) goto LAB_037aaf44;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    fVar20 = fVar19;
    fVar25 = fVar27;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f95930) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aa960;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f95930,0);
LAB_037aa960:
    in_stack_00000068 = (*(code *)*puVar8)(plVar12,iVar6,puVar8[1]);
    in_stack_00000070 = CONCAT44(uVar24,fVar20);
    in_stack_00000078 = CONCAT44(uVar28,fVar25);
    fVar14 = (float)FUN_0377e790(&stack0x00000068,0);
    plVar12 = *(long **)(unaff_x19 + 0x20);
    if (plVar12 == (long *)0x0) goto LAB_037aaf44;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    fVar21 = fVar20;
    fVar23 = fVar25;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f95930) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aa9ec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f95930,0);
LAB_037aa9ec:
    in_stack_00000068 = (*(code *)*puVar8)(plVar12,iVar7,puVar8[1]);
    in_stack_00000070 = CONCAT44(uVar24,fVar21);
    in_stack_00000078 = CONCAT44(uVar28,fVar23);
    fVar15 = (float)FUN_0377e790(&stack0x00000068,0);
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 == (long *)0x0) goto LAB_037aaf44;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    fVar30 = fVar21;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f97078) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aaa7c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f97078,0);
LAB_037aaa7c:
    fVar16 = (float)(*(code *)*puVar8)(plVar12,iVar5,puVar8[1]);
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 == (long *)0x0) goto LAB_037aaf44;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    fVar29 = fVar30;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f97078) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aaaf4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f97078,0);
LAB_037aaaf4:
    fVar17 = (float)(*(code *)*puVar8)(plVar12,iVar6,puVar8[1]);
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 == (long *)0x0) goto LAB_037aaf44;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    fVar22 = fVar29;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f97078) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037aab68;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f97078,0);
LAB_037aab68:
    fVar18 = (float)(*(code *)*puVar8)(plVar12,iVar7,puVar8[1]);
    puVar3 = PTR_DAT_06f95ae8;
    fVar17 = fVar17 - fVar16;
    uVar28 = 0;
    fVar18 = fVar18 - fVar16;
    fVar29 = fVar29 - fVar30;
    fVar22 = fVar22 - fVar30;
    uVar24 = 0;
    fVar30 = fVar17 * fVar22 - fVar29 * fVar18;
    if (fVar30 != 0.0) {
      fVar30 = 1.0 / fVar30;
      fVar26 = (fVar23 - fVar27) * fVar17;
      fVar23 = (fVar25 - fVar27) * fVar22 - (fVar23 - fVar27) * fVar29;
      fVar31 = ((fVar14 - fVar13) * fVar22 - (fVar15 - fVar13) * fVar29) * fVar30;
      fVar16 = ((fVar20 - fVar19) * fVar22 - (fVar21 - fVar19) * fVar29) * fVar30;
      fVar29 = fVar23 * fVar30;
      fVar13 = ((fVar15 - fVar13) * fVar17 - (fVar14 - fVar13) * fVar18) * fVar30;
      fVar22 = ((fVar21 - fVar19) * fVar17 - (fVar20 - fVar19) * fVar18) * fVar30;
      fVar30 = (fVar26 - (fVar25 - fVar27) * fVar18) * fVar30;
      fVar17 = (float)FUN_050453cc(in_stack_00000018,iVar5,*(undefined8 *)PTR_DAT_06f95ae8);
      puVar4 = PTR_DAT_06f97088;
      fVar23 = fVar16 + fVar23;
      fVar26 = fVar29 + fVar26;
      FUN_05045408(fVar31 + fVar17,in_stack_00000018,iVar5,*(undefined8 *)PTR_DAT_06f97088);
      fVar17 = (float)FUN_050453cc(in_stack_00000018,iVar6,*(undefined8 *)puVar3);
      fVar23 = fVar16 + fVar23;
      fVar26 = fVar29 + fVar26;
      FUN_05045408(fVar31 + fVar17,in_stack_00000018,iVar6,*(undefined8 *)puVar4);
      fVar17 = (float)FUN_050453cc(in_stack_00000018,iVar7,*(undefined8 *)puVar3);
      fVar16 = fVar16 + fVar23;
      fVar29 = fVar29 + fVar26;
      FUN_05045408(fVar31 + fVar17,in_stack_00000018,iVar7,*(undefined8 *)puVar4);
      fVar17 = (float)FUN_050453cc(unaff_x21,iVar5,*(undefined8 *)puVar3);
      fVar16 = fVar22 + fVar16;
      fVar29 = fVar30 + fVar29;
      FUN_05045408(fVar13 + fVar17,unaff_x21,iVar5,*(undefined8 *)puVar4);
      fVar17 = (float)FUN_050453cc(unaff_x21,iVar6,*(undefined8 *)puVar3);
      fVar16 = fVar22 + fVar16;
      fVar29 = fVar30 + fVar29;
      FUN_05045408(fVar13 + fVar17,unaff_x21,iVar6,*(undefined8 *)puVar4);
      fVar19 = (float)FUN_050453cc(unaff_x21,iVar7,*(undefined8 *)puVar3);
      fVar22 = fVar22 + fVar16;
      uVar24 = 0;
      fVar17 = fVar30 + fVar29;
      uVar28 = 0;
      FUN_05045408(fVar13 + fVar19,unaff_x21,iVar7,*(undefined8 *)puVar4);
    }
    unaff_w25 = unaff_w25 + 3;
    unaff_x20 = (long *)PTR_DAT_06f96150;
  } while( true );
}


