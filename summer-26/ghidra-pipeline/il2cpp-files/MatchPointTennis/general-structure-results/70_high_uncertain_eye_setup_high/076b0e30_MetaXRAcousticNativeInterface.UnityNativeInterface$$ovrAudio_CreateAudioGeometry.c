/*
FUNCTION_NAME: MetaXRAcousticNativeInterface.UnityNativeInterface$$ovrAudio_CreateAudioGeometry
ENTRY_POINT: 076b0e30
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b1e1c) */

void MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_CreateAudioGeometry(void)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
  uint uVar17;
  int unaff_w23;
  int iVar18;
  undefined1 auVar19 [16];
  int iStack000000000000002c;
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar7;
  thunk_FUN_044bb4b4();
  iVar18 = 0;
  in_stack_00000040[0x20] = 0;
  do {
    puVar5 = PTR_DAT_09f2d410;
    puVar4 = PTR_DAT_09f2d408;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x68) + 0x18) <= iVar18) {
      if (0 < (int)in_stack_00000040[0xc]) {
        uStack0000000000000038 = 0;
        uVar17 = 0;
        iStack000000000000002c = unaff_w23;
        do {
          plVar8 = *(long **)(in_stack_00000040 + 8);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar10 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar10 = (*(code *)*puVar9)(plVar8,uStack0000000000000038,puVar9[1]);
          lVar11 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar11 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar11 = *(long *)(lVar11 + (long)(int)uStack0000000000000038 * 8 + 0x20);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar11 = FUN_074427bc(lVar11,*(undefined8 *)PTR_DAT_09f2d5a0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_06b56d04(&stack0x00000070,lVar11,*(undefined8 *)PTR_DAT_09f2d718);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar14 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar11 = in_stack_000000c0, (uVar14 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar8 = (long *)0x0;
            }
            else {
              iVar18 = 0;
              plVar8 = (long *)0x0;
              do {
                auVar19 = FUN_059f3e50(lVar11,iVar18,*(undefined8 *)puVar4);
                lVar13 = auVar19._8_8_;
                if (plVar8 == (long *)0x0) {
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar1 = *(undefined4 *)(lVar11 + 0x18);
                  uVar7 = *(undefined8 *)(lVar10 + 0x10);
                  plVar8 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar5);
                  FUN_076c14ec(plVar8,uStack0000000000000038,uVar17,uVar1,uVar7,0);
                }
                else {
                  lVar12 = *(long *)puVar5;
                  bVar2 = *(byte *)(lVar12 + 0x130);
                  if (*(byte *)(*plVar8 + 0x130) < bVar2) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != lVar12) {
                    plVar8 = (long *)0x0;
                  }
                }
                if (plVar8 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar8,iVar18,auVar19._0_8_ & 0xffffffff,0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar13 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar12 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar13,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar8[5] = lVar12;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar8,iVar18,*(undefined4 *)(lVar13 + 0x1c),0);
                iVar18 = iVar18 + 1;
              } while (iVar18 < *(int *)(lVar11 + 0x18));
            }
            plVar16 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar8 != (long *)0x0) &&
               (lVar11 = thunk_FUN_04485110(plVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
            {
              uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar7,0);
            }
            if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar16[(long)(int)uVar17 + 4] = (long)plVar8;
            thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar17 + 4,plVar8);
            uVar17 = uVar17 + 1;
          }
          if (iStack000000000000002c < 0) {
            FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
          }
          uStack0000000000000038 = uStack0000000000000038 + 1;
        } while ((int)uStack0000000000000038 < (int)in_stack_00000040[0xc]);
      }
      if (*(long *)(in_stack_00000040 + 0x10) != 0) {
        uVar7 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
        FUN_05f9dd28(&stack0x000001e0,uVar7,4,*(undefined8 *)PTR_DAT_09f2d700);
        auVar19 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
        *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar19;
        FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
        FUN_094b2800(0);
        cVar3 = *(char *)(in_stack_00000040 + 0x12);
        *in_stack_00000040 = 0xfffffffe;
        *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
        thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
        *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
        thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_066e2370(in_stack_00000040 + 2,cVar3 != '\0',*(undefined8 *)PTR_DAT_09f2ce18);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar8 = *(long **)(in_stack_00000040 + 8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar10 = *plVar8;
    uVar1 = in_stack_00000040[0x20];
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f2d018) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076b12bc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
    lVar10 = (*(code *)*puVar9)(plVar8,uVar1,puVar9[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (-1 < *(int *)(lVar10 + 0x18)) {
      uVar6 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        (lVar10,0);
      switch(uVar6) {
      case 1:
        lVar10 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        iVar18 = *(int *)(lVar10 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
        if (iVar18 < 0x200) {
          if ((iVar18 == 2) || (iVar18 == 4)) {
            lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
            System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                      (lVar10,*(undefined8 *)PTR_DAT_09f2d4f0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar11 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar17 = in_stack_00000040[0x20];
            if (*(uint *)(lVar11 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),(long)(int)uVar17,
                         lVar10 + 0x10,&stack0x00000158,lVar10 + 0x18,
                         *(int *)(lVar11 + (long)(int)uVar17 * 4 + 0x20) == 4);
            lVar11 = *(long *)(in_stack_00000040 + 0x10);
            auVar19 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar12 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar17 = *(uint *)(lVar11 + 0x18);
            if (uVar17 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar17 + 1;
              *(undefined1 (*) [16])(lVar13 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
            }
            else {
              FUN_05b19770(lVar11,auVar19._0_8_,auVar19._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            plVar8 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar17 = in_stack_00000040[0x20];
            lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar11 == 0) {
              uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar7,0);
            }
            if (*(uint *)(plVar8 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar8[(long)(int)uVar17 + 4] = lVar10;
            thunk_FUN_044bb4b4(plVar8 + (long)(int)uVar17 + 4,lVar10);
          }
        }
        else if ((iVar18 == 0x200) || (iVar18 == 0x2000)) {
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
          FUN_07399b20(lVar10,*(undefined8 *)PTR_DAT_09f2d500);
          FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
          if (in_stack_000000e0 != '\0') {
            auVar19 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            *(undefined1 (*) [16])(lVar10 + 0x10) = auVar19;
          }
          if (in_stack_000000c8 != '\0') {
            lVar11 = *(long *)(in_stack_00000040 + 0x10);
            auVar19 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar12 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar17 = *(uint *)(lVar11 + 0x18);
            if (uVar17 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar17 + 1;
              *(undefined1 (*) [16])(lVar13 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
            }
            else {
              FUN_05b19770(lVar11,auVar19._0_8_,auVar19._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
          plVar8 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar17 = in_stack_00000040[0x20];
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
            uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar7,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar8[(long)(int)uVar17 + 4] = lVar10;
          thunk_FUN_044bb4b4(plVar8 + (long)(int)uVar17 + 4,lVar10);
        }
        break;
      case 3:
        lVar10 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        uVar17 = *(uint *)(lVar10 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
        if ((uVar17 >> 10 & 1) == 0) {
          if ((uVar17 >> 0xc & 1) != 0) {
            lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
            FUN_07399b40(lVar10,*(undefined8 *)PTR_DAT_09f2d4f8);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                         in_stack_00000040[0x20],lVar10 + 0x10,&stack0x000000f8,0);
            lVar11 = *(long *)(in_stack_00000040 + 0x10);
            auVar19 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar12 = *(long *)PTR_DAT_09f2d6c0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar17 = *(uint *)(lVar11 + 0x18);
            if (uVar17 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar17 + 1;
              *(undefined1 (*) [16])(lVar13 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
            }
            else {
              FUN_05b19770(lVar11,auVar19._0_8_,auVar19._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            plVar8 = *(long **)(in_stack_00000030 + 0x68);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar17 = in_stack_00000040[0x20];
            lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar11 == 0) {
              uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar7,0);
            }
            if (*(uint *)(plVar8 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar8[(long)(int)uVar17 + 4] = lVar10;
            thunk_FUN_044bb4b4(plVar8 + (long)(int)uVar17 + 4,lVar10);
          }
        }
        else {
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
          FUN_07399b40(lVar10,*(undefined8 *)PTR_DAT_09f2d4f8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar10 + 0x10,&stack0x00000128,1);
          lVar11 = *(long *)(in_stack_00000040 + 0x10);
          auVar19 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar17 = *(uint *)(lVar11 + 0x18);
          if (uVar17 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar17 + 1;
            *(undefined1 (*) [16])(lVar13 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
          }
          else {
            FUN_05b19770(lVar11,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          plVar8 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar17 = in_stack_00000040[0x20];
          lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar11 == 0) {
            uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar7,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar8[(long)(int)uVar17 + 4] = lVar10;
          thunk_FUN_044bb4b4(plVar8 + (long)(int)uVar17 + 4,lVar10);
        }
        break;
      case 4:
        lVar10 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if ((*(uint *)(lVar10 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0) {
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
          FUN_07399b00(lVar10,*(undefined8 *)PTR_DAT_09f2d510);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar10 + 0x10,&stack0x00000110);
          lVar11 = *(long *)(in_stack_00000040 + 0x10);
          auVar19 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar17 = *(uint *)(lVar11 + 0x18);
          if (uVar17 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar17 + 1;
            *(undefined1 (*) [16])(lVar13 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
          }
          else {
            FUN_05b19770(lVar11,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          plVar8 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar17 = in_stack_00000040[0x20];
          lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar11 == 0) {
            uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar7,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar8[(long)(int)uVar17 + 4] = lVar10;
          thunk_FUN_044bb4b4(plVar8 + (long)(int)uVar17 + 4,lVar10);
        }
        break;
      case 7:
        lVar10 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(int *)(lVar10 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
          lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
          FUN_07399ae0(lVar10,*(undefined8 *)PTR_DAT_09f2d508);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                       in_stack_00000040[0x20],lVar10 + 0x10,&stack0x00000140);
          lVar11 = *(long *)(in_stack_00000040 + 0x10);
          auVar19 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar17 = *(uint *)(lVar11 + 0x18);
          if (uVar17 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar17 + 1;
            *(undefined1 (*) [16])(lVar13 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
          }
          else {
            FUN_05b19770(lVar11,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          plVar8 = *(long **)(in_stack_00000030 + 0x68);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar17 = in_stack_00000040[0x20];
          lVar11 = thunk_FUN_04485110(lVar10,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar11 == 0) {
            uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar7,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar8[(long)(int)uVar17 + 4] = lVar10;
          thunk_FUN_044bb4b4(plVar8 + (long)(int)uVar17 + 4,lVar10);
        }
      }
      plVar8 = *(long **)(in_stack_00000030 + 0x20);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar10 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f2ce28) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_076b1af0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
      lVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      in_stack_00000198 = FUN_07ab3bc0(lVar10,0);
      uVar14 = FUN_0795ad28(&stack0x00000198,0);
      if ((uVar14 & 1) == 0) {
        *in_stack_00000040 = 1;
        *(undefined8 *)(in_stack_00000040 + 0x1e) = in_stack_00000198;
        thunk_FUN_044bb4b4(in_stack_00000040 + 0x1e,0);
        if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04639174(in_stack_00000040 + 2,&stack0x00000198,in_stack_00000040,
                     *(undefined8 *)PTR_DAT_09f2d528);
        return;
      }
      FUN_0795adf4(&stack0x00000198,0);
      unaff_x19 = in_stack_00000030;
    }
    iVar18 = in_stack_00000040[0x20] + 1;
    in_stack_00000040[0x20] = iVar18;
  } while( true );
}


