/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$OnValidationEvent
ENTRY_POINT: 04fc0264
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__OnValidationEvent(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  undefined8 unaff_x21;
  uint uVar15;
  long lVar16;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long lVar17;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar18 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined6 uStack0000000000000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  
  auVar18._8_8_ = unaff_x21;
  auVar18._0_8_ = unaff_x22;
  do {
    FUN_05023354(param_1);
    do {
      if ((*(ushort *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      FUN_03c32d08(&stack0x00000030,auVar18._0_8_ + unaff_x23 * 2,auVar18._8_4_ - (int)unaff_x23,
                   *(undefined8 *)PTR_DAT_06651100);
      uVar12 = unaff_x19[0x1e];
      *(uint *)(unaff_x20 + 0x40) = uVar12 + *(int *)(unaff_x20 + 0x40);
      uVar15 = unaff_x19[0x18];
      do {
        uVar15 = uVar15 - uVar12;
        unaff_x19[0x18] = uVar15;
        unaff_x19[0x12] = uVar12 + unaff_x19[0x12];
        if ((*(char *)(unaff_x20 + 0x56) != '\0') || ((int)uVar15 < 1)) {
LAB_04fbfe4c:
          puVar6 = PTR_DAT_06659418;
          uVar10 = unaff_x19[0x12];
          *unaff_x19 = 0xfffffffe;
          *(undefined8 *)(unaff_x19 + 0x14) = 0;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x14,0);
          *(undefined8 *)(unaff_x19 + 0x16) = 0;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
          FUN_04506ad8(unaff_x19 + 2,uVar10,*(undefined8 *)puVar6);
          return;
        }
        uVar12 = *(int *)(unaff_x20 + 0x44) - *(int *)(unaff_x20 + 0x40);
        unaff_x19[0x1e] = uVar12;
        if (uVar12 == 0) {
          cVar2 = *(char *)(unaff_x20 + 0x55);
          *(undefined8 *)(unaff_x20 + 0x40) = 0;
          if (cVar2 == '\0') {
            *(undefined4 *)(unaff_x20 + 0x48) = 0;
          }
          *(bool *)(unaff_x19 + 0x13) = *(int *)(unaff_x20 + 0x50) <= (int)uVar15;
          if (cVar2 == '\0') goto LAB_04fbfeb0;
          while( true ) {
            lVar16 = *(long *)(unaff_x19 + 0x14);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar12 = *(uint *)(unaff_x20 + 0x4c);
            uVar15 = *(uint *)(lVar16 + 0x18);
            plVar14 = *(long **)(unaff_x19 + 0x16);
            in_stack_00000010 = 0;
            in_stack_00000018 = 0;
            if (uVar15 < uVar12) {
              FUN_05023354(0);
            }
            in_stack_00000010 = lVar16;
            thunk_FUN_02dc1ef0(&stack0x00000010,lVar16);
            in_stack_00000018 = CONCAT44(uVar15 - uVar12,uVar12);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            auVar18 = (**(code **)(*plVar14 + 0x2d8))
                                (plVar14,in_stack_00000010,in_stack_00000018,
                                 *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar14 + 0x2e0)
                                );
            lVar16 = *unaff_x26;
            in_stack_00000060 = 0;
            _uStack0000000000000068 = 0;
            if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
              FUN_02d8720c();
            }
            in_stack_00000060 = auVar18._0_8_;
            thunk_FUN_02dc1ef0(&stack0x00000060,auVar18._0_8_);
            uVar8 = in_stack_00000060;
            uVar11 = _uStack0000000000000068 >> 0x30;
            uStack0000000000000068 = auVar18._8_6_;
            _uStack0000000000000068 =
                 CONCAT26((short)uVar11,uStack0000000000000068) & 0xff00ffffffffffff;
            uVar11 = _uStack0000000000000068;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
              FUN_02d8720c();
            }
            in_stack_00000078 = uVar11;
            in_stack_00000070 = uVar8;
            thunk_FUN_02dc1ef0(&stack0x00000070,0);
            uVar11 = in_stack_00000078;
            uVar8 = in_stack_00000070;
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            if ((*(byte *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
              FUN_02d8720c();
            }
            in_stack_00000070 = uVar8;
            in_stack_00000078 = uVar11;
            thunk_FUN_02dc1ef0(&stack0x00000070,0);
            lVar16 = *(long *)(*unaff_x29 + 0x20);
            in_stack_00000048 = in_stack_00000078;
            in_stack_00000040 = in_stack_00000070;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_02d8720c();
            }
            uVar11 = FUN_04050f9c(&stack0x00000040,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x10))
            ;
            if ((uVar11 & 1) == 0) {
              *unaff_x19 = 1;
              *(ulong *)(unaff_x19 + 0x22) = in_stack_00000048;
              *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000040;
              thunk_FUN_02dc1ef0(unaff_x19 + 0x20,0);
              System_Array__InternalArray__Insert<Lllogger_RequestData>
                        (unaff_x19 + 2,&stack0x00000040);
              return;
            }
            lVar16 = *(long *)(*unaff_x25 + 0x20);
            if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_02d8720c();
            }
            iVar9 = FUN_040510c8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20));
            if (iVar9 == 0) break;
            if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            iVar9 = *(int *)(unaff_x20 + 0x48) + iVar9;
            *(int *)(unaff_x20 + 0x48) = iVar9;
            while( true ) {
              if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              *(bool *)(unaff_x20 + 0x56) = iVar9 < *(int *)(*(long *)(unaff_x19 + 0x14) + 0x18);
              uVar11 = FUN_04fbebcc();
              if ((uVar11 & 1) == 0) {
                if ((*(char *)(unaff_x20 + 0x54) != '\0') && (1 < *(int *)(unaff_x20 + 0x48))) {
                  FUN_04fbe8f4();
                  *(bool *)(unaff_x19 + 0x13) = *(int *)(unaff_x20 + 0x50) <= (int)unaff_x19[0x18];
                }
                *(undefined4 *)(unaff_x20 + 0x40) = 0;
                if (*(char *)(unaff_x19 + 0x13) == '\0') {
                  plVar14 = *(long **)(unaff_x20 + 0x28);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  iVar9 = (**(code **)(*plVar14 + 0x1b8))
                                    (plVar14,*(undefined8 *)(unaff_x19 + 0x14),0,
                                     *(undefined4 *)(unaff_x20 + 0x48),
                                     *(undefined8 *)(unaff_x20 + 0x38),0,
                                     *(undefined8 *)(*plVar14 + 0x1c0));
                  unaff_x19[0x1e] = iVar9;
                  *(int *)(unaff_x20 + 0x44) = *(int *)(unaff_x20 + 0x44) + iVar9;
                }
                else {
                  lVar16 = *(long *)(unaff_x19 + 0x14);
                  iVar1 = unaff_x19[0x1e];
                  plVar14 = *(long **)(unaff_x20 + 0x28);
                  uVar12 = *(uint *)(unaff_x20 + 0x48);
                  if (lVar16 == 0) {
                    uVar15 = 0;
                    lVar16 = 0;
                    if (uVar12 != 0) {
                      FUN_05023354(0);
                      lVar16 = 0;
                      uVar15 = 0;
                    }
                  }
                  else {
                    if (*(uint *)(lVar16 + 0x18) < uVar12) {
                      FUN_05023354(0);
                    }
                    lVar16 = lVar16 + 0x20;
                    uVar15 = uVar12;
                  }
                  _in_stack_00000030 = FUN_0383e6b4(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_06659460)
                  ;
                  auVar5 = in_stack_00000030._0_12_;
                  uVar12 = unaff_x19[0x12];
                  lVar17 = *unaff_x28;
                  if (in_stack_00000030._8_4_ < uVar12) {
                    FUN_05023354(0);
                    auVar4._8_8_ = in_stack_00000038 & 0xffffffff;
                    auVar4._0_8_ = in_stack_00000030;
                    auVar5 = auVar4._0_12_;
                  }
                  in_stack_00000030 = auVar5._0_8_;
                  lVar7 = in_stack_00000030;
                  if ((*(ushort *)(*(long *)(lVar17 + 0x20) + 0x135) & 1) == 0) {
                    FUN_02d8720c();
                  }
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  iVar9 = (**(code **)(*plVar14 + 0x1e8))
                                    (plVar14,lVar16,uVar15,lVar7 + (long)(int)uVar12 * 2,
                                     auVar5._8_4_ - uVar12,0,*(undefined8 *)(*plVar14 + 0x1f0));
                  iVar9 = iVar9 + iVar1;
                  unaff_x19[0x1e] = iVar9;
                  *(undefined4 *)(unaff_x20 + 0x44) = 0;
                  unaff_x25 = (long *)PTR_DAT_06659440;
                  unaff_x26 = (long *)PTR_DAT_06659470;
                  unaff_x27 = (long *)PTR_DAT_06659438;
                  unaff_x29 = (long *)PTR_DAT_06659448;
                }
              }
              else {
                iVar9 = unaff_x19[0x1e];
              }
              if (iVar9 != 0) goto LAB_04fc01b4;
              if (*(char *)(unaff_x20 + 0x55) != '\0') break;
LAB_04fbfeb0:
              lVar16 = *(long *)(unaff_x19 + 0x14);
              plVar14 = *(long **)(unaff_x19 + 0x16);
              in_stack_00000018 = 0;
              if (lVar16 == 0) {
                in_stack_00000010 = 0;
                in_stack_00000018 = 0;
              }
              else {
                in_stack_00000010 = lVar16;
                thunk_FUN_02dc1ef0(&stack0x00000010,lVar16);
                in_stack_00000018 = *(long *)(lVar16 + 0x18) << 0x20;
              }
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              auVar18 = (**(code **)(*plVar14 + 0x2d8))
                                  (plVar14,in_stack_00000010,in_stack_00000018,
                                   *(undefined8 *)(unaff_x19 + 0x10),
                                   *(undefined8 *)(*plVar14 + 0x2e0));
              lVar16 = *unaff_x26;
              in_stack_00000060 = 0;
              _uStack0000000000000068 = 0;
              if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
                FUN_02d8720c();
              }
              in_stack_00000060 = auVar18._0_8_;
              thunk_FUN_02dc1ef0(&stack0x00000060,auVar18._0_8_);
              uVar8 = in_stack_00000060;
              uVar11 = _uStack0000000000000068 >> 0x30;
              uStack0000000000000068 = auVar18._8_6_;
              _uStack0000000000000068 =
                   CONCAT26((short)uVar11,uStack0000000000000068) & 0xff00ffffffffffff;
              uVar11 = _uStack0000000000000068;
              in_stack_00000070 = 0;
              in_stack_00000078 = 0;
              if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
                FUN_02d8720c();
              }
              in_stack_00000078 = uVar11;
              in_stack_00000070 = uVar8;
              thunk_FUN_02dc1ef0(&stack0x00000070,0);
              uVar11 = in_stack_00000078;
              uVar8 = in_stack_00000070;
              in_stack_00000070 = 0;
              in_stack_00000078 = 0;
              if ((*(byte *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
                FUN_02d8720c();
              }
              in_stack_00000070 = uVar8;
              in_stack_00000078 = uVar11;
              thunk_FUN_02dc1ef0(&stack0x00000070,0);
              lVar16 = *(long *)(*unaff_x29 + 0x20);
              in_stack_00000048 = in_stack_00000078;
              in_stack_00000040 = in_stack_00000070;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_02d8720c();
              }
              uVar11 = FUN_04050f9c(&stack0x00000040,
                                    *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x10));
              if ((uVar11 & 1) == 0) {
                *unaff_x19 = 2;
                *(ulong *)(unaff_x19 + 0x22) = in_stack_00000048;
                *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000040;
                thunk_FUN_02dc1ef0(unaff_x19 + 0x20,0);
                System_Array__InternalArray__Insert<Lllogger_RequestData>
                          (unaff_x19 + 2,&stack0x00000040);
                return;
              }
              lVar16 = *(long *)(*unaff_x25 + 0x20);
              if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_02d8720c();
              }
              iVar9 = FUN_040510c8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20)
                                  );
              if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              *(int *)(unaff_x20 + 0x48) = iVar9;
              if (iVar9 == 0) goto LAB_04fc002c;
            }
          }
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar12 = *(uint *)(unaff_x20 + 0x48);
          if (0 < (int)uVar12) {
            plVar14 = *(long **)(unaff_x20 + 0x28);
            if (*(char *)(unaff_x19 + 0x13) == '\0') {
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              iVar9 = (**(code **)(*plVar14 + 0x1b8))
                                (plVar14,*(undefined8 *)(unaff_x19 + 0x14),0,uVar12,
                                 *(undefined8 *)(unaff_x20 + 0x38),0,
                                 *(undefined8 *)(*plVar14 + 0x1c0));
              unaff_x19[0x1e] = iVar9;
              *(int *)(unaff_x20 + 0x44) = *(int *)(unaff_x20 + 0x44) + iVar9;
            }
            else {
              lVar16 = *(long *)(unaff_x19 + 0x14);
              if (lVar16 == 0) {
                FUN_05023354(0);
                uVar12 = 0;
                lVar16 = 0;
              }
              else {
                if (*(uint *)(lVar16 + 0x18) < uVar12) {
                  FUN_05023354(0);
                }
                lVar16 = lVar16 + 0x20;
              }
              _in_stack_00000030 = FUN_0383e6b4(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_06659460);
              auVar5 = in_stack_00000030._0_12_;
              uVar15 = unaff_x19[0x12];
              lVar17 = *unaff_x28;
              if (in_stack_00000030._8_4_ < uVar15) {
                FUN_05023354(0);
                auVar3._8_8_ = in_stack_00000038 & 0xffffffff;
                auVar3._0_8_ = in_stack_00000030;
                auVar5 = auVar3._0_12_;
              }
              in_stack_00000030 = auVar5._0_8_;
              lVar7 = in_stack_00000030;
              if ((*(ushort *)(*(long *)(lVar17 + 0x20) + 0x135) & 1) == 0) {
                FUN_02d8720c();
              }
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              uVar10 = (**(code **)(*plVar14 + 0x1e8))
                                 (plVar14,lVar16,uVar12,lVar7 + (long)(int)uVar15 * 2,
                                  auVar5._8_4_ - uVar15,0,*(undefined8 *)(*plVar14 + 0x1f0));
              unaff_x19[0x1e] = uVar10;
              *(undefined4 *)(unaff_x20 + 0x44) = 0;
              unaff_x25 = (long *)PTR_DAT_06659440;
              unaff_x26 = (long *)PTR_DAT_06659470;
              unaff_x27 = (long *)PTR_DAT_06659438;
              unaff_x29 = (long *)PTR_DAT_06659448;
            }
          }
LAB_04fc002c:
          *(undefined1 *)(unaff_x20 + 0x56) = 1;
LAB_04fc01b4:
          uVar12 = unaff_x19[0x1e];
          if (uVar12 == 0) goto LAB_04fbfe4c;
          uVar15 = unaff_x19[0x18];
        }
        if ((int)uVar15 < (int)uVar12) {
          unaff_x19[0x1e] = uVar15;
          uVar12 = uVar15;
        }
      } while (*(char *)(unaff_x19 + 0x13) != '\0');
      lVar16 = *(long *)(unaff_x20 + 0x38);
      uVar15 = *(uint *)(unaff_x20 + 0x40);
      if (lVar16 == 0) {
        lVar16 = 0;
        uVar13 = 0;
        if (uVar12 != 0 || uVar15 != 0) {
          FUN_05023354(0);
          lVar16 = 0;
          uVar13 = 0;
        }
      }
      else {
        if ((*(uint *)(lVar16 + 0x18) < uVar15) || (*(uint *)(lVar16 + 0x18) - uVar15 < uVar12)) {
          FUN_05023354(0);
        }
        lVar16 = lVar16 + (long)(int)uVar15 * 2 + 0x20;
        uVar13 = uVar12;
      }
      in_stack_00000038 = (ulong)uVar13;
      in_stack_00000030 = lVar16;
      auVar18 = FUN_0383e6b4(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_06659460);
      unaff_x23 = (long)(int)unaff_x19[0x12];
      unaff_x24 = *unaff_x28;
    } while ((uint)unaff_x19[0x12] <= auVar18._8_4_);
    param_1 = 0;
  } while( true );
}


