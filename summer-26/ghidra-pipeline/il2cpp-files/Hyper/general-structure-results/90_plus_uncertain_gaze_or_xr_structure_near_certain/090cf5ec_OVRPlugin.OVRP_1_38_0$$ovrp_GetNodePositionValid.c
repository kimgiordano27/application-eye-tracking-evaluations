/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 090cf5ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
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
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x690));
  FUN_04947ee4(PTR_DAT_0ac79698);
  FUN_04947ee4(PTR_DAT_0ac796a0);
                    /* try { // try from 090cf60c to 091cf87f has its CatchHandler @ 090cf60c
                       catch() { ... } // from try @ 090cf60c with catch @ 090cf60c
                       catch() { ... } // from try @ 090cf9a4 with catch @ 090cf60c
                       catch() { ... } // from try @ 090cfaec with catch @ 090cf60c
                       catch() { ... } // from try @ 090cfb44 with catch @ 090cf60c */
  FUN_04947ee4(PTR_DAT_0ac796a8);
  *(undefined1 *)(unaff_x20 + 0x53e) = 1;
  puVar3 = PTR_DAT_0ac759b0;
  plVar16 = *(long **)(unaff_x19 + 0x38);
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
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac759b0) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar15 + 0x11) * 0x10 + 0x138);
          goto LAB_090cf69c;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar16,*(long *)PTR_DAT_0ac759b0,0x11);
LAB_090cf69c:
    uVar12 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    if ((uVar12 & 1) == 0) {
      return;
    }
    uVar7 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac79698,0x1a);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
    thunk_FUN_049ee3d8();
    lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0ab60);
    FUN_0a17c2c0(lVar9,*(undefined8 *)PTR_DAT_0ac796a0,0);
    if (lVar9 != 0) {
      lVar9 = FUN_0a17b7e4(lVar9,0);
      uVar7 = FUN_0a17834c();
      if (lVar9 != 0) {
        FUN_0a18ac70(lVar9,uVar7,0,0);
        if (DAT_0b31f3e7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          DAT_0b31f3e7 = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
        FUN_0a1897d4(*puVar10,puVar10[1],puVar10[2],lVar9,0);
        if (DAT_0b31f57b == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0f100);
          DAT_0b31f57b = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
        FUN_0a18a59c(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar9,0);
        lVar9 = FUN_0a178414(lVar9,0);
        if (lVar9 != 0) {
          FUN_0a17b958(lVar9,*(undefined4 *)(unaff_x19 + 0x4c),0);
          lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79690);
          FUN_06b7f684(lVar9,0x1a,*(undefined8 *)PTR_DAT_0ac79688);
          plVar16 = (long *)(unaff_x19 + 0x68);
          *plVar16 = lVar9;
          thunk_FUN_049ee3d8(plVar16,lVar9);
          if (*plVar16 != 0) {
            uVar7 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__CopyTo
                              (*plVar16,*(undefined8 *)PTR_DAT_0ac79680);
            *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
            thunk_FUN_049ee3d8();
            puVar5 = PTR_DAT_0ac79678;
            puVar4 = PTR_DAT_0ac79670;
            puVar2 = PTR_DAT_0ac75878;
            uVar12 = 2;
            do {
              lVar9 = *(long *)puVar2;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_049a583c();
                lVar9 = *(long *)puVar2;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
              if (lVar9 == 0) goto LAB_090cfbd0;
              if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_090cfbd4:
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              uVar1 = *(uint *)(lVar9 + uVar12 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar17 = (uint)uVar12,
                 (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar17 & 0x1f) & 1) != 0)) {
                plVar16 = *(long **)(unaff_x19 + 0x38);
                if (plVar16 == (long *)0x0) goto LAB_090cfbd0;
                lVar11 = *plVar16;
                lVar9 = *(long *)puVar3;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar9) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                      goto LAB_090cf8f8;
                    }
                    uVar13 = uVar13 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar13 != 0);
                }
                puVar6 = (undefined8 *)FUN_04980e68(plVar16,lVar9,9);
LAB_090cf8f8:
                (*(code *)*puVar6)(plVar16,uVar1,&stack0x00000050,puVar6[1]);
                uVar13 = FUN_090cfbe4();
                if ((uVar13 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar9 = FUN_090cfca4();
                  plVar16 = *(long **)(unaff_x19 + 0x78);
                  in_stack_00000078 = lVar9;
                  if (plVar16 == (long *)0x0) goto LAB_090cfbd0;
                  if ((lVar9 != 0) &&
                     (lVar11 = thunk_FUN_04983e64(lVar9,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar11 == 0)) {
                    uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
                    FUN_04948050(uVar7,0);
                  }
                  if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_090cfbd4;
                  plVar16[(long)(int)uVar1 + 4] = lVar9;
                  thunk_FUN_049ee3d8(plVar16 + (long)(int)uVar1 + 4,lVar9);
                }
                uStack000000000000000c = uVar1;
                uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar17;
                uVar8 = thunk_FUN_04983b98(*(undefined8 *)puVar4,&stack0x00000008);
                FUN_08bda628(*(undefined8 *)PTR_DAT_0ac796a8,uVar7,uVar8,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_090cfbd0;
                fVar18 = (float)FUN_090d1bc8(*(long *)(unaff_x19 + 0x40),uVar1,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                if ((uVar17 < 0x1a) && ((1 << (ulong)(uVar17 & 0x1f) & 0x2108420U) != 0)) {
                  fVar19 = -fVar18;
                }
                else {
                  fVar19 = fVar18;
                  if (uVar1 != 0) {
                    fVar19 = 0.0;
                  }
                }
                plVar16 = *(long **)(unaff_x19 + 0x38);
                if (plVar16 == (long *)0x0) goto LAB_090cfbd0;
                lVar11 = *plVar16;
                lVar9 = *(long *)puVar3;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar9) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                      goto LAB_090cfa7c;
                    }
                    uVar13 = uVar13 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar13 != 0);
                }
                puVar6 = (undefined8 *)FUN_04980e68(plVar16,lVar9,9);
LAB_090cfa7c:
                (*(code *)*puVar6)(plVar16,uVar12 & 0xffffffff,&stack0x00000030,puVar6[1]);
                if (in_stack_00000078 == 0) goto LAB_090cfbd0;
                FUN_0a17834c(in_stack_00000078,0);
                uVar7 = FUN_090cfe64(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,fVar18,fVar19);
                lVar9 = in_stack_00000078;
                uVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79668);
                FUN_090d0808(uVar8,uVar1,uVar12 & 0xffffffff,lVar9,uVar7,0);
                lVar9 = *(long *)(unaff_x19 + 0x68);
                if (lVar9 == 0) goto LAB_090cfbd0;
                lVar11 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)puVar5;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_090cfbd0;
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar6 = uVar8;
                  thunk_FUN_049ee3d8(puVar6,uVar8);
                }
                else {
                  FUN_06b7fe74(lVar9,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != 0x1a);
            FUN_090d00d0();
            lVar9 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar9 != 0) {
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_090cfbd0:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


