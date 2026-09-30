/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0193dcbc
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_VirtualKeyboardModelAnimationState>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 in_w8;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 uStack0000000000000150;
  undefined4 uStack0000000000000158;
  
  uStack0000000000000158 = in_w8;
  while( true ) {
                    /* try { // try from 0193dcbc to 01a3de7f has its CatchHandler @ 0193decc */
    uStack0000000000000150 = unaff_x27[4];
    uVar8 = *unaff_x27;
    uVar18 = unaff_x27[3];
    uVar6 = unaff_x27[2];
    *(undefined8 *)(unaff_x26 + 0x68) = unaff_x27[1];
    *(undefined8 *)(unaff_x26 + 0x60) = uVar8;
    *(undefined8 *)(unaff_x26 + 0x78) = uVar18;
    *(undefined8 *)(unaff_x26 + 0x70) = uVar6;
    lVar5 = FUN_034333dc(&stack0x00000130,0);
    if (lVar5 == 0) break;
    uVar6 = FUN_033e6c58(lVar5,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) break;
    uVar7 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),uVar6,*unaff_x25);
    if ((uVar7 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (lVar5 == 0) break;
      lVar10 = *(long *)(lVar5 + 0x10);
      lVar15 = *unaff_x23;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = uVar6;
        thunk_FUN_0188fd20(puVar11,uVar6);
      }
      else {
        FUN_0270a444(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      if (unaff_x20 != 0) {
        if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_0193de6c;
        uVar7 = 0;
        uVar12 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
        puVar11 = (undefined8 *)(unaff_x20 + 0x20);
        goto LAB_0193dd9c;
      }
      break;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_0193e380;
    uStack0000000000000158 = *(undefined4 *)((long)unaff_x27 + 0x54);
    unaff_x27 = (undefined8 *)((long)unaff_x27 + 0x2c);
  }
  goto LAB_0193e37c;
  while( true ) {
    uVar12 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar7 = uVar7 + 1;
    puVar11 = (undefined8 *)((long)puVar11 + 0x2c);
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)uVar7) break;
LAB_0193dd9c:
    if (uVar12 <= uVar7) {
LAB_0193e380:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    in_stack_00000128 = *(undefined4 *)(puVar11 + 5);
    in_stack_00000120 = puVar11[4];
    uVar8 = *puVar11;
    uVar18 = puVar11[3];
    uVar6 = puVar11[2];
    *(undefined8 *)(unaff_x26 + 0x38) = puVar11[1];
    *(undefined8 *)(unaff_x26 + 0x30) = uVar8;
    *(undefined8 *)(unaff_x26 + 0x48) = uVar18;
    *(undefined8 *)(unaff_x26 + 0x40) = uVar6;
    lVar5 = FUN_034333dc(&stack0x00000100,0);
    if (lVar5 == 0) goto LAB_0193e37c;
    uVar6 = FUN_033e6c58(lVar5,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0193e37c;
    uVar12 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),uVar6,*unaff_x25);
    if ((uVar12 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (lVar5 == 0) goto LAB_0193e37c;
      lVar10 = *(long *)(lVar5 + 0x10);
      lVar15 = *unaff_x23;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0193e37c;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar13 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar13 = uVar6;
        thunk_FUN_0188fd20(puVar13,uVar6);
      }
      else {
        FUN_0270a444(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
  }
LAB_0193de6c:
  puVar4 = PTR_DAT_037f4e50;
  puVar3 = PTR_DAT_037f3748;
  puVar2 = PTR_DAT_037f2d40;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_02200a68(&stack0x00000058,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_037f4e38);
    plVar16 = (long *)0x0;
    in_stack_000000d8 = in_stack_00000060;
    in_stack_000000d0 = in_stack_00000058;
    *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000070;
    *(long *)(unaff_x26 + 0x10) = in_stack_00000068;
    in_stack_000000f0 = in_stack_00000078;
    while (uVar7 = FUN_02358864(&stack0x000000d0,*(undefined8 *)puVar4), lVar5 = in_stack_000000e8,
          plVar14 = in_stack_000000e0, (uVar7 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar7 = FUN_0270a7d4(*(long *)(unaff_x19 + 0x30),in_stack_000000e0,*unaff_x25);
      if ((uVar7 & 1) == 0) {
        FUN_0193e5bc(uVar7,plVar14,lVar5);
        if (plVar14 != (long *)0x0) {
          plVar16 = plVar14;
        }
        uVar18 = *(undefined8 *)PTR_DAT_037f4ea8;
        uVar6 = 0;
        if (plVar14 != (long *)0x0) {
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar6 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        plVar14 = *(long **)(lVar5 + 0x20);
        if (plVar14 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar8 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        }
        uVar6 = FUN_02a503d0(uVar18,uVar6,uVar8,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_033bce1c(uVar6,0);
      }
    }
    FUN_02358984(&stack0x000000d0,*(undefined8 *)PTR_DAT_037f4e48);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_022007c0(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_037f4e28);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_0270ae40(&stack0x00000058,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_037f3758);
        plVar16 = (long *)0x0;
        in_stack_000000b8 = in_stack_00000060;
        in_stack_000000b0 = in_stack_00000058;
        in_stack_000000c0 = in_stack_00000068;
        while (uVar7 = FUN_022e1404(&stack0x000000b0,*(undefined8 *)puVar3),
              lVar5 = in_stack_000000c0, (uVar7 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          uVar7 = FUN_0220082c(*(long *)(unaff_x19 + 0x20),in_stack_000000c0,
                               *(undefined8 *)PTR_DAT_037f4e30);
          if ((uVar7 & 1) == 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = FUN_033ed158(lVar5,0);
            uVar6 = FUN_02a43498(*(undefined8 *)PTR_DAT_037f4ea0,uVar6,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bce1c(uVar6,0);
            lVar10 = FUN_01b26fcc(lVar5,*(undefined8 *)PTR_DAT_037f4e60);
            if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar7 = FUN_033e963c(lVar10,0,0);
            if ((uVar7 & 1) != 0) {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              plVar14 = (long *)FUN_033c92e0(lVar10,0);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              auVar19 = FUN_02bf1b10(plVar14,0);
              lVar15 = auVar19._0_8_;
              if (lVar15 == 0) {
                auVar20._8_8_ = 0;
                auVar20._0_8_ = auVar19._8_8_;
                auVar20 = auVar20 << 0x40;
              }
              else {
                uVar6 = *(undefined8 *)PTR_DAT_037f4e88;
                auVar20 = thunk_FUN_01861ac0(lVar15,uVar6);
                if (auVar20._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc944(lVar15,uVar6);
                }
              }
              if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8(0,auVar20._8_8_,auVar20._0_8_);
              }
              FUN_02200638(*(long *)(unaff_x19 + 0x28),lVar5,auVar20._0_8_,
                           *(undefined8 *)PTR_DAT_037f4e20);
              if (0 < (int)plVar14[3]) {
                uVar7 = 0;
                uVar12 = plVar14[3] & 0xffffffff;
                plVar17 = plVar14 + 4;
                do {
                  lVar5 = *(long *)(unaff_x19 + 0x38);
                  if (lVar5 != 0) {
                    lVar15 = thunk_FUN_01861ac0(lVar5,*(undefined8 *)(*plVar14 + 0x40));
                    if (lVar15 == 0) {
                      uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                      FUN_017fc474(uVar6,0);
                    }
                    uVar12 = (ulong)*(uint *)(plVar14 + 3);
                  }
                  if (uVar12 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    FUN_017fc5b0();
                  }
                  *plVar17 = lVar5;
                  thunk_FUN_0188fd20(plVar17,lVar5);
                  uVar12 = (ulong)*(uint *)(plVar14 + 3);
                  uVar7 = uVar7 + 1;
                  plVar17 = plVar17 + 1;
                } while ((long)uVar7 < (long)(int)*(uint *)(plVar14 + 3));
              }
              thunk_FUN_033c8c18(lVar10,plVar14,0);
            }
          }
          else {
            if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar10 = *(long *)(unaff_x19 + 0x28);
            uVar6 = FUN_022005b8(*(long *)(unaff_x19 + 0x20),lVar5,*(undefined8 *)PTR_DAT_037f4e40);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            FUN_02200638(lVar10,lVar5,uVar6,*(undefined8 *)PTR_DAT_037f4e20);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            uVar6 = FUN_033ed158(lVar5,0);
            if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            lVar5 = FUN_022005b8(*(long *)(unaff_x19 + 0x20),lVar5,*(undefined8 *)PTR_DAT_037f4e40);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
            plVar14 = *(long **)(lVar5 + 0x20);
            uVar18 = *(undefined8 *)PTR_DAT_037f4e90;
            if (plVar14 != (long *)0x0) {
              plVar16 = plVar14;
            }
            uVar8 = *(undefined8 *)PTR_DAT_037f4e98;
            if (plVar14 == (long *)0x0) {
              uVar9 = 0;
            }
            else {
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              uVar9 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
            }
            uVar6 = FUN_02a506f0(uVar8,uVar6,uVar18,uVar9,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_033bce1c(uVar6,0);
          }
        }
        FUN_022e1400(&stack0x000000b0,*(undefined8 *)PTR_DAT_037f3740);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_022007c0(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_037f4e28);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_02200a68(&stack0x00000058,*(long *)(unaff_x19 + 0x28),
                         *(undefined8 *)PTR_DAT_037f4e38);
            in_stack_000000d8 = in_stack_00000060;
            in_stack_000000d0 = in_stack_00000058;
            *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000070;
            *(long *)(unaff_x26 + 0x10) = in_stack_00000068;
            puVar2 = PTR_DAT_037f4e20;
            in_stack_000000f0 = in_stack_00000078;
            while( true ) {
              uVar7 = FUN_02358864(&stack0x000000d0,*(undefined8 *)puVar4);
              if ((uVar7 & 1) == 0) {
                FUN_02358984(&stack0x000000d0,*(undefined8 *)PTR_DAT_037f4e48);
                return;
              }
              if (*(long *)(unaff_x19 + 0x20) == 0) break;
              FUN_02200638(*(long *)(unaff_x19 + 0x20),in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)puVar2);
            }
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
        }
      }
    }
  }
LAB_0193e37c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


