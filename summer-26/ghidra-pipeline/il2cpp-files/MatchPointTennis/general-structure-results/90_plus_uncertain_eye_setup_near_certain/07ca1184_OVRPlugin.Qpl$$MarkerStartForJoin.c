/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 07ca1184
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin(code *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  uint uVar17;
  long *plVar18;
  long *unaff_x26;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  uVar7 = (*param_1)();
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f50e78,0x1a);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
  thunk_FUN_044bb4b4();
  lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e730);
  FUN_0952aff4(lVar9,*(undefined8 *)PTR_DAT_09f50e80,0);
  if (lVar9 != 0) {
    lVar9 = FUN_0952a094(lVar9,0);
    uVar8 = FUN_095258d0();
    if (lVar9 != 0) {
      FUN_0953acf8(lVar9,uVar8,0,0);
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      FUN_09539338(*puVar13,puVar13[1],puVar13[2],lVar9,0);
      if (DAT_0a51bf45 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1eb60);
        DAT_0a51bf45 = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)PTR_DAT_09f1eb60 + 0xb8);
      FUN_0953a418(*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar9,0);
      lVar9 = FUN_095259a0(lVar9,0);
      if (lVar9 != 0) {
        FUN_0952a218(lVar9,*(undefined4 *)(unaff_x19 + 0x4c),0);
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e70);
        FUN_05bad680(lVar9,0x1a,*(undefined8 *)PTR_DAT_09f50e68);
        plVar18 = (long *)(unaff_x19 + 0x68);
        *plVar18 = lVar9;
        thunk_FUN_044bb4b4(plVar18,lVar9);
        if (*plVar18 != 0) {
          uVar8 = FUN_05bae06c(*plVar18,*(undefined8 *)PTR_DAT_09f50e60);
          *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
          thunk_FUN_044bb4b4();
          puVar6 = PTR_DAT_09f50e58;
          puVar5 = PTR_DAT_09f50e50;
          puVar4 = PTR_DAT_09f4d0a0;
          uVar7 = 2;
          do {
            lVar9 = *(long *)puVar4;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar9 = *(long *)puVar4;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
            if (lVar9 == 0) goto LAB_07ca16ac;
            if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_07ca16b0:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar1 = *(uint *)(lVar9 + uVar7 * 4 + 0x20);
            if ((uVar1 != 0xffffffff) &&
               (uVar17 = (uint)uVar7,
               (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar17 & 0x1f) & 1) != 0)) {
              plVar18 = *(long **)(unaff_x19 + 0x38);
              if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
              lVar9 = *plVar18;
              uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *unaff_x26) {
                    puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                    goto LAB_07ca13dc;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_044822ac(plVar18,*unaff_x26,9);
LAB_07ca13dc:
              (*(code *)*puVar10)(plVar18,uVar1,&stack0x00000050,puVar10[1]);
              uVar14 = FUN_07ca16c0();
              if ((uVar14 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
                in_stack_00000018 = in_stack_00000058;
                uStack0000000000000024 = uStack0000000000000064;
                uStack0000000000000020 = uStack0000000000000060;
                lVar9 = FUN_07ca1788();
                plVar18 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000078 = lVar9;
                if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
                if ((lVar9 != 0) &&
                   (lVar11 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar18 + 0x40)), lVar11 == 0
                   )) {
                  uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar8,0);
                }
                if (*(uint *)(plVar18 + 3) <= uVar1) goto LAB_07ca16b0;
                plVar18[(long)(int)uVar1 + 4] = lVar9;
                thunk_FUN_044bb4b4(plVar18 + (long)(int)uVar1 + 4,lVar9);
              }
              uStack000000000000000c = uVar1;
              uVar8 = thunk_FUN_04484e3c(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = uVar17;
              uVar12 = thunk_FUN_04484e3c(*(undefined8 *)puVar5,&stack0x00000008);
              FUN_078b5afc(*(undefined8 *)PTR_DAT_09f50e88,uVar8,uVar12,0);
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07ca16ac;
              uVar8 = FUN_07ca36c8(*(long *)(unaff_x19 + 0x40),uVar1,0);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              plVar18 = *(long **)(unaff_x19 + 0x38);
              fVar2 = (float)uVar8;
              if (uVar1 != 0) {
                fVar2 = 0.0;
              }
              fVar3 = -(float)uVar8;
              if ((0x108421U >> (ulong)(uVar17 - 5 & 0x1f) & (uint)(uVar17 - 5 < 0x15)) == 0) {
                fVar3 = fVar2;
              }
              if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
              lVar9 = *plVar18;
              uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *unaff_x26) {
                    puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                    goto LAB_07ca1568;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)FUN_044822ac(plVar18,*unaff_x26,9);
LAB_07ca1568:
              (*(code *)*puVar10)(plVar18,uVar7 & 0xffffffff,&stack0x00000030,puVar10[1]);
              if (in_stack_00000078 == 0) goto LAB_07ca16ac;
              FUN_095258d0(in_stack_00000078,0);
              uVar8 = FUN_07ca1948(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                                   uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                                   uVar8,fVar3);
              lVar9 = in_stack_00000078;
              uVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e48);
              FUN_07ca2304(uVar12,uVar1,uVar7 & 0xffffffff,lVar9,uVar8,0);
              lVar9 = *(long *)(unaff_x19 + 0x68);
              if (lVar9 == 0) goto LAB_07ca16ac;
              lVar11 = *(long *)(lVar9 + 0x10);
              lVar15 = *(long *)puVar6;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_07ca16ac;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *puVar10 = uVar12;
                thunk_FUN_044bb4b4(puVar10,uVar12);
              }
              else {
                FUN_05bade44(lVar9,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x1a);
          FUN_07ca1bb0();
          lVar9 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
            ;
            return;
          }
        }
      }
    }
  }
LAB_07ca16ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


