/*
FUNCTION_NAME: OVRPlugin.OVRP_1_105_0$$ovrp_QplMarkerStartForJoin
ENTRY_POINT: 07ca127c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_105_0__ovrp_QplMarkerStartForJoin(long param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  uint uVar16;
  ulong uVar17;
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
  
  puVar12 = *(undefined4 **)(**(long **)(param_1 + 0xb60) + 0xb8);
  FUN_0953a418(*puVar12,puVar12[1],puVar12[2],puVar12[3]);
  lVar7 = FUN_095259a0();
  if (lVar7 != 0) {
    FUN_0952a218(lVar7,*(undefined4 *)(unaff_x19 + 0x4c),0);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e70);
    FUN_05bad680(lVar7,0x1a,*(undefined8 *)PTR_DAT_09f50e68);
    plVar18 = (long *)(unaff_x19 + 0x68);
    *plVar18 = lVar7;
    thunk_FUN_044bb4b4(plVar18,lVar7);
    if (*plVar18 != 0) {
      uVar8 = FUN_05bae06c(*plVar18,*(undefined8 *)PTR_DAT_09f50e60);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
      thunk_FUN_044bb4b4();
      puVar6 = PTR_DAT_09f50e58;
      puVar5 = PTR_DAT_09f50e50;
      puVar4 = PTR_DAT_09f4d0a0;
      uVar17 = 2;
      do {
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar4;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) goto LAB_07ca16ac;
        if (*(uint *)(lVar7 + 0x18) <= uVar17) {
LAB_07ca16b0:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        uVar1 = *(uint *)(lVar7 + uVar17 * 4 + 0x20);
        if ((uVar1 != 0xffffffff) &&
           (uVar16 = (uint)uVar17, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar16 & 0x1f) & 1) != 0)
           ) {
          plVar18 = *(long **)(unaff_x19 + 0x38);
          if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
          lVar7 = *plVar18;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x26) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                goto LAB_07ca13dc;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac(plVar18,*unaff_x26,9);
LAB_07ca13dc:
          (*(code *)*puVar9)(plVar18,uVar1,&stack0x00000050,puVar9[1]);
          uVar13 = FUN_07ca16c0();
          if ((uVar13 & 1) == 0) {
            in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
            in_stack_00000018 = in_stack_00000058;
            uStack0000000000000024 = uStack0000000000000064;
            uStack0000000000000020 = uStack0000000000000060;
            lVar7 = FUN_07ca1788();
            plVar18 = *(long **)(unaff_x19 + 0x78);
            in_stack_00000078 = lVar7;
            if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
            if ((lVar7 != 0) &&
               (lVar10 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar18 + 0x40)), lVar10 == 0)) {
              uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar8,0);
            }
            if (*(uint *)(plVar18 + 3) <= uVar1) goto LAB_07ca16b0;
            plVar18[(long)(int)uVar1 + 4] = lVar7;
            thunk_FUN_044bb4b4(plVar18 + (long)(int)uVar1 + 4,lVar7);
          }
          uStack000000000000000c = uVar1;
          uVar8 = thunk_FUN_04484e3c(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
          uStack0000000000000008 = uVar16;
          uVar11 = thunk_FUN_04484e3c(*(undefined8 *)puVar5,&stack0x00000008);
          FUN_078b5afc(*(undefined8 *)PTR_DAT_09f50e88,uVar8,uVar11,0);
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
          if ((0x108421U >> (ulong)(uVar16 - 5 & 0x1f) & (uint)(uVar16 - 5 < 0x15)) == 0) {
            fVar3 = fVar2;
          }
          if (plVar18 == (long *)0x0) goto LAB_07ca16ac;
          lVar7 = *plVar18;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x26) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                goto LAB_07ca1568;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac(plVar18,*unaff_x26,9);
LAB_07ca1568:
          (*(code *)*puVar9)(plVar18,uVar17 & 0xffffffff,&stack0x00000030,puVar9[1]);
          if (in_stack_00000078 == 0) goto LAB_07ca16ac;
          FUN_095258d0(in_stack_00000078,0);
          uVar8 = FUN_07ca1948(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                               uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar8
                               ,fVar3);
          lVar7 = in_stack_00000078;
          uVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e48);
          FUN_07ca2304(uVar11,uVar1,uVar17 & 0xffffffff,lVar7,uVar8,0);
          lVar7 = *(long *)(unaff_x19 + 0x68);
          if (lVar7 == 0) goto LAB_07ca16ac;
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar14 = *(long *)puVar6;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_07ca16ac;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar11;
            thunk_FUN_044bb4b4(puVar9,uVar11);
          }
          else {
            FUN_05bade44(lVar7,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 0x1a);
      FUN_07ca1bb0();
      lVar7 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        return;
      }
    }
  }
LAB_07ca16ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


