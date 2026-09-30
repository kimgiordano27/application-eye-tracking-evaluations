/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 090cf670
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long in_x9;
  ulong uVar12;
  long lVar13;
  int *in_x10;
  int *piVar14;
  long unaff_x19;
  uint uVar15;
  long *plVar16;
  long *unaff_x26;
  float fVar17;
  float fVar18;
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
  
  do {
    in_x9 = in_x9 + -1;
    piVar14 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_04980e68();
      goto LAB_090cf69c;
    }
    plVar16 = (long *)(in_x10 + 2);
    in_x10 = piVar14;
  } while (*plVar16 != param_3);
  puVar5 = (undefined8 *)(param_1 + (long)(*piVar14 + 0x11) * 0x10 + 0x138);
LAB_090cf69c:
  uVar6 = (*(code *)*puVar5)();
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar7 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac79698,0x1a);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
  thunk_FUN_049ee3d8();
  lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac0ab60);
  FUN_0a17c2c0(lVar8,*(undefined8 *)PTR_DAT_0ac796a0,0);
  if (lVar8 != 0) {
    lVar8 = FUN_0a17b7e4(lVar8,0);
    uVar7 = FUN_0a17834c();
    if (lVar8 != 0) {
      FUN_0a18ac70(lVar8,uVar7,0,0);
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      puVar11 = *(undefined4 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
      FUN_0a1897d4(*puVar11,puVar11[1],puVar11[2],lVar8,0);
      if (DAT_0b31f57b == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0f100);
        DAT_0b31f57b = '\x01';
      }
      puVar11 = *(undefined4 **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
      FUN_0a18a59c(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar8,0);
      lVar8 = FUN_0a178414(lVar8,0);
      if (lVar8 != 0) {
        FUN_0a17b958(lVar8,*(undefined4 *)(unaff_x19 + 0x4c),0);
        lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79690);
        FUN_06b7f684(lVar8,0x1a,*(undefined8 *)PTR_DAT_0ac79688);
        plVar16 = (long *)(unaff_x19 + 0x68);
        *plVar16 = lVar8;
        thunk_FUN_049ee3d8(plVar16,lVar8);
        if (*plVar16 != 0) {
          uVar7 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__CopyTo
                            (*plVar16,*(undefined8 *)PTR_DAT_0ac79680);
          *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
          thunk_FUN_049ee3d8();
          puVar4 = PTR_DAT_0ac79678;
          puVar3 = PTR_DAT_0ac79670;
          puVar2 = PTR_DAT_0ac75878;
          uVar6 = 2;
          do {
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              lVar8 = *(long *)puVar2;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
            if (lVar8 == 0) goto LAB_090cfbd0;
            if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_090cfbd4:
                    /* WARNING: Subroutine does not return */
              FUN_04948194();
            }
            uVar1 = *(uint *)(lVar8 + uVar6 * 4 + 0x20);
            if ((uVar1 != 0xffffffff) &&
               (uVar15 = (uint)uVar6,
               (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar15 & 0x1f) & 1) != 0)) {
              plVar16 = *(long **)(unaff_x19 + 0x38);
              if (plVar16 == (long *)0x0) goto LAB_090cfbd0;
              lVar8 = *plVar16;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *unaff_x26) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                    goto LAB_090cf8f8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_04980e68(plVar16,*unaff_x26,9);
LAB_090cf8f8:
              (*(code *)*puVar5)(plVar16,uVar1,&stack0x00000050,puVar5[1]);
              uVar12 = FUN_090cfbe4();
              if ((uVar12 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
                in_stack_00000018 = in_stack_00000058;
                uStack0000000000000024 = uStack0000000000000064;
                uStack0000000000000020 = uStack0000000000000060;
                lVar8 = FUN_090cfca4();
                plVar16 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000078 = lVar8;
                if (plVar16 == (long *)0x0) goto LAB_090cfbd0;
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_04983e64(lVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
                {
                  uVar7 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
                  FUN_04948050(uVar7,0);
                }
                if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_090cfbd4;
                plVar16[(long)(int)uVar1 + 4] = lVar8;
                thunk_FUN_049ee3d8(plVar16 + (long)(int)uVar1 + 4,lVar8);
              }
              uStack000000000000000c = uVar1;
              uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = uVar15;
              uVar10 = thunk_FUN_04983b98(*(undefined8 *)puVar3,&stack0x00000008);
              FUN_08bda628(*(undefined8 *)PTR_DAT_0ac796a8,uVar7,uVar10,0);
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_090cfbd0;
              fVar17 = (float)FUN_090d1bc8(*(long *)(unaff_x19 + 0x40),uVar1,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              if ((uVar15 < 0x1a) && ((1 << (ulong)(uVar15 & 0x1f) & 0x2108420U) != 0)) {
                fVar18 = -fVar17;
              }
              else {
                fVar18 = fVar17;
                if (uVar1 != 0) {
                  fVar18 = 0.0;
                }
              }
              plVar16 = *(long **)(unaff_x19 + 0x38);
              if (plVar16 == (long *)0x0) goto LAB_090cfbd0;
              lVar8 = *plVar16;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *unaff_x26) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                    goto LAB_090cfa7c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_04980e68(plVar16,*unaff_x26,9);
LAB_090cfa7c:
              (*(code *)*puVar5)(plVar16,uVar6 & 0xffffffff,&stack0x00000030,puVar5[1]);
              if (in_stack_00000078 == 0) goto LAB_090cfbd0;
              FUN_0a17834c(in_stack_00000078,0);
              uVar7 = FUN_090cfe64(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                                   uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                                   fVar17,fVar18);
              lVar8 = in_stack_00000078;
              uVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac79668);
              FUN_090d0808(uVar10,uVar1,uVar6 & 0xffffffff,lVar8,uVar7,0);
              lVar8 = *(long *)(unaff_x19 + 0x68);
              if (lVar8 == 0) goto LAB_090cfbd0;
              lVar9 = *(long *)(lVar8 + 0x10);
              lVar13 = *(long *)puVar4;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_090cfbd0;
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *puVar5 = uVar10;
                thunk_FUN_049ee3d8(puVar5,uVar10);
              }
              else {
                FUN_06b7fe74(lVar8,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x1a);
          FUN_090d00d0();
          lVar8 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
            ;
            return;
          }
        }
      }
    }
  }
LAB_090cfbd0:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


