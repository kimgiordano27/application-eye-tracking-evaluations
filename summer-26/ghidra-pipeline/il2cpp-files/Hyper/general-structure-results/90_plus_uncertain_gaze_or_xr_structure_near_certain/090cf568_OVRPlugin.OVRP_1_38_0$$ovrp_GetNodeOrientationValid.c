/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 090cf568
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


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
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
  
  if ((DAT_0b33053e & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac79668);
    FUN_04947ee4(PTR_DAT_0ac0ab60);
    FUN_04947ee4(PTR_DAT_0ac79670);
    FUN_04947ee4(PTR_DAT_0ac75878);
    FUN_04947ee4(PTR_DAT_0ac759b0);
    FUN_04947ee4(PTR_DAT_0ac79678);
    FUN_04947ee4(PTR_DAT_0ac79680);
    FUN_04947ee4(PTR_DAT_0ac79688);
    FUN_04947ee4(PTR_DAT_0ac79690);
    FUN_04947ee4(PTR_DAT_0ac79698);
    FUN_04947ee4(PTR_DAT_0ac796a0);
    FUN_04947ee4(PTR_DAT_0ac796a8);
    DAT_0b33053e = 1;
  }
  puVar3 = PTR_DAT_0ac759b0;
  plVar17 = *(long **)(param_1 + 0x38);
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
  if (plVar17 != (long *)0x0) {
    lVar10 = *plVar17;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0ac759b0) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
          goto LAB_090cf69c;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar17,*(long *)PTR_DAT_0ac759b0,0x11);
LAB_090cf69c:
    uVar13 = (*(code *)*puVar6)(plVar17,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      return;
    }
    uVar7 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac79698,0x1a);
    *(undefined8 *)(param_1 + 0x78) = uVar7;
    thunk_FUN_049ee3d8();
    lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0ab60);
    FUN_0a17c2c0(lVar10,*(undefined8 *)PTR_DAT_0ac796a0,0);
    if (lVar10 != 0) {
      lVar10 = FUN_0a17b7e4(lVar10,0);
      uVar7 = FUN_0a17834c(param_1,0);
      if (lVar10 != 0) {
        FUN_0a18ac70(lVar10,uVar7,0,0);
        if (DAT_0b31f3e7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          DAT_0b31f3e7 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
        FUN_0a1897d4(*puVar11,puVar11[1],puVar11[2],lVar10,0);
        if (DAT_0b31f57b == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0f100);
          DAT_0b31f57b = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
        FUN_0a18a59c(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
        lVar8 = FUN_0a178414(lVar10,0);
        if (lVar8 != 0) {
          FUN_0a17b958(lVar8,*(undefined4 *)(param_1 + 0x4c),0);
          lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79690);
          FUN_06b7f684(lVar8,0x1a,*(undefined8 *)PTR_DAT_0ac79688);
          plVar17 = (long *)(param_1 + 0x68);
          *plVar17 = lVar8;
          thunk_FUN_049ee3d8(plVar17,lVar8);
          if (*plVar17 != 0) {
            uVar7 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__CopyTo
                              (*plVar17,*(undefined8 *)PTR_DAT_0ac79680);
            *(undefined8 *)(param_1 + 0x70) = uVar7;
            thunk_FUN_049ee3d8();
            puVar5 = PTR_DAT_0ac79678;
            puVar4 = PTR_DAT_0ac79670;
            puVar2 = PTR_DAT_0ac75878;
            uVar13 = 2;
            do {
              lVar8 = *(long *)puVar2;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_049a583c();
                lVar8 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if (lVar8 == 0) goto LAB_090cfbd0;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) {
LAB_090cfbd4:
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              uVar1 = *(uint *)(lVar8 + uVar13 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar18 = (uint)uVar13,
                 (*(uint *)(param_1 + 0x50) >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
                plVar17 = *(long **)(param_1 + 0x38);
                if (plVar17 == (long *)0x0) goto LAB_090cfbd0;
                lVar12 = *plVar17;
                lVar8 = *(long *)puVar3;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_090cf8f8;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_04980e68(plVar17,lVar8,9);
LAB_090cf8f8:
                (*(code *)*puVar6)(plVar17,uVar1,&stack0x00000050,puVar6[1]);
                uVar14 = FUN_090cfbe4(param_1,uVar1,&stack0x00000078);
                if ((uVar14 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar8 = FUN_090cfca4(param_1,uVar1,lVar10,&stack0x00000010);
                  plVar17 = *(long **)(param_1 + 0x78);
                  in_stack_00000078 = lVar8;
                  if (plVar17 == (long *)0x0) goto LAB_090cfbd0;
                  if ((lVar8 != 0) &&
                     (lVar12 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar12 == 0)) {
                    uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
                    FUN_04948050(uVar7,0);
                  }
                  if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_090cfbd4;
                  plVar17[(long)(int)uVar1 + 4] = lVar8;
                  thunk_FUN_049ee3d8(plVar17 + (long)(int)uVar1 + 4,lVar8);
                }
                uStack000000000000000c = uVar1;
                uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar18;
                uVar9 = thunk_FUN_04983b98(*(undefined8 *)puVar4,&stack0x00000008);
                uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac796a8,uVar7,uVar9,0);
                if (*(long *)(param_1 + 0x40) == 0) goto LAB_090cfbd0;
                fVar19 = (float)FUN_090d1bc8(*(long *)(param_1 + 0x40),uVar1,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                if ((uVar18 < 0x1a) && ((1 << (ulong)(uVar18 & 0x1f) & 0x2108420U) != 0)) {
                  fVar20 = -fVar19;
                }
                else {
                  fVar20 = fVar19;
                  if (uVar1 != 0) {
                    fVar20 = 0.0;
                  }
                }
                plVar17 = *(long **)(param_1 + 0x38);
                if (plVar17 == (long *)0x0) goto LAB_090cfbd0;
                lVar12 = *plVar17;
                lVar8 = *(long *)puVar3;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_090cfa7c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_04980e68(plVar17,lVar8,9);
LAB_090cfa7c:
                (*(code *)*puVar6)(plVar17,uVar13 & 0xffffffff,&stack0x00000030,puVar6[1]);
                if (in_stack_00000078 == 0) goto LAB_090cfbd0;
                uVar9 = FUN_0a17834c(in_stack_00000078,0);
                uVar7 = FUN_090cfe64(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,fVar19,fVar20,param_1,uVar7,uVar9);
                lVar8 = in_stack_00000078;
                uVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79668);
                FUN_090d0808(uVar9,uVar1,uVar13 & 0xffffffff,lVar8,uVar7,0);
                lVar8 = *(long *)(param_1 + 0x68);
                if (lVar8 == 0) goto LAB_090cfbd0;
                lVar12 = *(long *)(lVar8 + 0x10);
                lVar15 = *(long *)puVar5;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_090cfbd0;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar6 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar6 = uVar9;
                  thunk_FUN_049ee3d8(puVar6,uVar9);
                }
                else {
                  FUN_06b7fe74(lVar8,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x1a);
            FUN_090d00d0(param_1);
            lVar10 = *(long *)(param_1 + 0x58);
            *(undefined1 *)(param_1 + 0x81) = 1;
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
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


