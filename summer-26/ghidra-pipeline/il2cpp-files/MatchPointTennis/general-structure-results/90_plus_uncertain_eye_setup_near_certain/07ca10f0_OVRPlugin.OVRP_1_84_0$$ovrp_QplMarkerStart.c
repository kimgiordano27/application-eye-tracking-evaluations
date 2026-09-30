/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 07ca10f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long *plVar18;
  uint uVar19;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  FUN_04447ba8(PTR_DAT_09f50e88);
  *(undefined1 *)(unaff_x20 + 0x9ee) = 1;
  puVar5 = PTR_DAT_09f4d1c0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  plVar18 = *(long **)(unaff_x19 + 0x38);
  if (plVar18 != (long *)0x0) {
    lVar11 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_09f4d1c0) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar17 + 0x11) * 0x10 + 0x138);
          goto LAB_07ca1180;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(plVar18,*(long *)PTR_DAT_09f4d1c0,0x11);
LAB_07ca1180:
    uVar14 = (*(code *)*puVar8)(plVar18,puVar8[1]);
    if ((uVar14 & 1) == 0) {
      return;
    }
    uVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f50e78,0x1a);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
    thunk_FUN_044bb4b4();
    lVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e730);
    FUN_0952aff4(lVar11,*(undefined8 *)PTR_DAT_09f50e80,0);
    if (lVar11 != 0) {
      lVar11 = FUN_0952a094(lVar11,0);
      uVar9 = FUN_095258d0();
      if (lVar11 != 0) {
        FUN_0953acf8(lVar11,uVar9,0,0);
        if (DAT_0a51bf43 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e740);
          DAT_0a51bf43 = '\x01';
        }
        puVar12 = *(undefined4 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
        FUN_09539338(*puVar12,puVar12[1],puVar12[2],lVar11,0);
        if (DAT_0a51bf45 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1eb60);
          DAT_0a51bf45 = '\x01';
        }
        puVar12 = *(undefined4 **)(*(long *)PTR_DAT_09f1eb60 + 0xb8);
        FUN_0953a418(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar11,0);
        lVar11 = FUN_095259a0(lVar11,0);
        if (lVar11 != 0) {
          FUN_0952a218(lVar11,*(undefined4 *)(unaff_x19 + 0x4c),0);
          lVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e70);
          FUN_05bad680(lVar11,0x1a,*(undefined8 *)PTR_DAT_09f50e68);
          plVar18 = (long *)(unaff_x19 + 0x68);
          *plVar18 = lVar11;
          thunk_FUN_044bb4b4(plVar18,lVar11);
          if (*plVar18 != 0) {
            uVar9 = FUN_05bae06c(*plVar18,*(undefined8 *)PTR_DAT_09f50e60);
            *(undefined8 *)(unaff_x19 + 0x70) = uVar9;
            thunk_FUN_044bb4b4();
            puVar7 = PTR_DAT_09f50e58;
            puVar6 = PTR_DAT_09f50e50;
            puVar4 = PTR_DAT_09f4d0a0;
            uVar14 = 2;
            do {
              lVar11 = *(long *)puVar4;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar11 = *(long *)puVar4;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
              if (lVar11 == 0) goto LAB_07ca16ac;
              if (*(uint *)(lVar11 + 0x18) <= uVar14) {
LAB_07ca16b0:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar1 = *(uint *)(lVar11 + uVar14 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar19 = (uint)uVar14,
                 (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar19 & 0x1f) & 1) != 0)) {
                plVar18 = *(long **)(unaff_x19 + 0x38);
                if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
                lVar13 = *plVar18;
                lVar11 = *(long *)puVar5;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar11) {
                      puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                      goto LAB_07ca13dc;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_044822ac(plVar18,lVar11,9);
LAB_07ca13dc:
                (*(code *)*puVar8)(plVar18,uVar1,&stack0x00000050,puVar8[1]);
                uVar15 = FUN_07ca16c0();
                if ((uVar15 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar11 = FUN_07ca1788();
                  plVar18 = *(long **)(unaff_x19 + 0x78);
                  in_stack_00000078 = lVar11;
                  if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
                  if ((lVar11 != 0) &&
                     (lVar13 = thunk_FUN_04485110(lVar11,*(undefined8 *)(*plVar18 + 0x40)),
                     lVar13 == 0)) {
                    uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar9,0);
                  }
                  if (*(uint *)(plVar18 + 3) <= uVar1) goto LAB_07ca16b0;
                  plVar18[(long)(int)uVar1 + 4] = lVar11;
                  thunk_FUN_044bb4b4(plVar18 + (long)(int)uVar1 + 4,lVar11);
                }
                uStack000000000000000c = uVar1;
                uVar9 = thunk_FUN_04484e3c(*(undefined8 *)puVar6,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar19;
                uVar10 = thunk_FUN_04484e3c(*(undefined8 *)puVar6,&stack0x00000008);
                FUN_078b5afc(*(undefined8 *)PTR_DAT_09f50e88,uVar9,uVar10,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07ca16ac;
                uVar9 = FUN_07ca36c8(*(long *)(unaff_x19 + 0x40),uVar1,0);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                plVar18 = *(long **)(unaff_x19 + 0x38);
                fVar2 = (float)uVar9;
                if (uVar1 != 0) {
                  fVar2 = 0.0;
                }
                fVar3 = -(float)uVar9;
                if ((0x108421U >> (ulong)(uVar19 - 5 & 0x1f) & (uint)(uVar19 - 5 < 0x15)) == 0) {
                  fVar3 = fVar2;
                }
                if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
                lVar13 = *plVar18;
                lVar11 = *(long *)puVar5;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar11) {
                      puVar8 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                      goto LAB_07ca1568;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_044822ac(plVar18,lVar11,9);
LAB_07ca1568:
                (*(code *)*puVar8)(plVar18,uVar14 & 0xffffffff,&stack0x00000030,puVar8[1]);
                if (in_stack_00000078 == 0) goto LAB_07ca16ac;
                FUN_095258d0(in_stack_00000078,0);
                uVar9 = FUN_07ca1948(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,uVar9,fVar3);
                lVar11 = in_stack_00000078;
                uVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e48);
                FUN_07ca2304(uVar10,uVar1,uVar14 & 0xffffffff,lVar11,uVar9,0);
                lVar11 = *(long *)(unaff_x19 + 0x68);
                if (lVar11 == 0) goto LAB_07ca16ac;
                lVar13 = *(long *)(lVar11 + 0x10);
                lVar16 = *(long *)puVar7;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar13 == 0) goto LAB_07ca16ac;
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                  puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar8 = uVar10;
                  thunk_FUN_044bb4b4(puVar8,uVar10);
                }
                else {
                  FUN_05bade44(lVar11,uVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != 0x1a);
            FUN_07ca1bb0();
            lVar11 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar11 != 0) {
              (**(code **)(lVar11 + 0x18))
                        (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_07ca16ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


