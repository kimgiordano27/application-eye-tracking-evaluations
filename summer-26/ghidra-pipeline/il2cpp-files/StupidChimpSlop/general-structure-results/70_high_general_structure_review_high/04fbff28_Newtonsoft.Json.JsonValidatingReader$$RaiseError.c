/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$RaiseError
ENTRY_POINT: 04fbff28
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


void Newtonsoft_Json_JsonValidatingReader__RaiseError(ulong param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  ulong unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  long lVar14;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 uStack0000000000000000;
  ulong uStack0000000000000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined6 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  ulong uStack0000000000000078;
  
code_r0x04fbff28:
  uVar10 = _uStack0000000000000068 >> 0x30;
  uStack0000000000000068 = CONCAT24((short)param_1,(int)unaff_x21);
  _uStack0000000000000068 = CONCAT26((short)uVar10,uStack0000000000000068) & 0xff00ffffffffffff;
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000008 = _uStack0000000000000068;
  uStack0000000000000000 = in_stack_00000060;
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  uStack0000000000000078 = uStack0000000000000008;
  uStack0000000000000070 = uStack0000000000000000;
  thunk_FUN_02dc1ef0(&stack0x00000070,0);
  uStack0000000000000008 = uStack0000000000000078;
  uStack0000000000000000 = uStack0000000000000070;
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  if ((*(byte *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  uStack0000000000000078 = uStack0000000000000008;
  uStack0000000000000070 = uStack0000000000000000;
  thunk_FUN_02dc1ef0(&stack0x00000070,0);
  lVar9 = *(long *)(*unaff_x29 + 0x20);
  in_stack_00000048 = uStack0000000000000078;
  in_stack_00000040 = uStack0000000000000070;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  uVar10 = FUN_04050f9c(&stack0x00000040,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
  if ((uVar10 & 1) == 0) {
    *unaff_x19 = 2;
    *(ulong *)(unaff_x19 + 0x22) = in_stack_00000048;
    *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000040;
    thunk_FUN_02dc1ef0(unaff_x19 + 0x20,0);
    System_Array__InternalArray__Insert<Lllogger_RequestData>(unaff_x19 + 2,&stack0x00000040);
    return;
  }
  lVar9 = *(long *)(*unaff_x25 + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  iVar7 = FUN_040510c8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  *(int *)(unaff_x20 + 0x48) = iVar7;
  if (iVar7 == 0) goto LAB_04fc002c;
  do {
    if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    *(bool *)(unaff_x20 + 0x56) = iVar7 < *(int *)(*(long *)(unaff_x19 + 0x14) + 0x18);
    uVar10 = FUN_04fbebcc();
    if ((uVar10 & 1) == 0) {
      if ((*(char *)(unaff_x20 + 0x54) != '\0') && (1 < *(int *)(unaff_x20 + 0x48))) {
        FUN_04fbe8f4();
        *(bool *)(unaff_x19 + 0x13) = *(int *)(unaff_x20 + 0x50) <= (int)unaff_x19[0x18];
      }
      *(undefined4 *)(unaff_x20 + 0x40) = 0;
      if (*(char *)(unaff_x19 + 0x13) == '\0') {
        plVar13 = *(long **)(unaff_x20 + 0x28);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar7 = (**(code **)(*plVar13 + 0x1b8))
                          (plVar13,*(undefined8 *)(unaff_x19 + 0x14),0,
                           *(undefined4 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x38),0,
                           *(undefined8 *)(*plVar13 + 0x1c0));
        unaff_x19[0x1e] = iVar7;
        *(int *)(unaff_x20 + 0x44) = *(int *)(unaff_x20 + 0x44) + iVar7;
      }
      else {
        lVar9 = *(long *)(unaff_x19 + 0x14);
        iVar1 = unaff_x19[0x1e];
        plVar13 = *(long **)(unaff_x20 + 0x28);
        uVar11 = *(uint *)(unaff_x20 + 0x48);
        if (lVar9 == 0) {
          uVar8 = 0;
          lVar9 = 0;
          if (uVar11 != 0) {
            FUN_05023354(0);
            lVar9 = 0;
            uVar8 = 0;
          }
        }
        else {
          if (*(uint *)(lVar9 + 0x18) < uVar11) {
            FUN_05023354(0);
          }
          lVar9 = lVar9 + 0x20;
          uVar8 = uVar11;
        }
        _in_stack_00000030 = FUN_0383e6b4(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_06659460);
        auVar16 = in_stack_00000030._0_12_;
        uVar11 = unaff_x19[0x12];
        lVar14 = *unaff_x28;
        if (in_stack_00000030._8_4_ < uVar11) {
          FUN_05023354(0);
          auVar15._8_8_ = in_stack_00000038 & 0xffffffff;
          auVar15._0_8_ = in_stack_00000030;
          auVar16 = auVar15._0_12_;
        }
        in_stack_00000030 = auVar16._0_8_;
        lVar5 = in_stack_00000030;
        if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar7 = (**(code **)(*plVar13 + 0x1e8))
                          (plVar13,lVar9,uVar8,lVar5 + (long)(int)uVar11 * 2,auVar16._8_4_ - uVar11,
                           0,*(undefined8 *)(*plVar13 + 0x1f0));
        iVar7 = iVar7 + iVar1;
        unaff_x19[0x1e] = iVar7;
        *(undefined4 *)(unaff_x20 + 0x44) = 0;
        unaff_x25 = (long *)PTR_DAT_06659440;
        unaff_x26 = (long *)PTR_DAT_06659470;
        unaff_x27 = (long *)PTR_DAT_06659438;
        unaff_x29 = (long *)PTR_DAT_06659448;
      }
    }
    else {
      iVar7 = unaff_x19[0x1e];
    }
    if (iVar7 != 0) goto LAB_04fc01b4;
    cVar2 = *(char *)(unaff_x20 + 0x55);
    while( true ) {
      if (cVar2 == '\0') {
        lVar9 = *(long *)(unaff_x19 + 0x14);
        plVar13 = *(long **)(unaff_x19 + 0x16);
        in_stack_00000018 = 0;
        if (lVar9 == 0) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
        }
        else {
          in_stack_00000010 = lVar9;
          thunk_FUN_02dc1ef0(&stack0x00000010,lVar9);
          in_stack_00000018 = *(long *)(lVar9 + 0x18) << 0x20;
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar15 = (**(code **)(*plVar13 + 0x2d8))
                            (plVar13,in_stack_00000010,in_stack_00000018,
                             *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar13 + 0x2e0));
        unaff_x21 = auVar15._8_8_;
        unaff_x23 = *unaff_x26;
        in_stack_00000060 = 0;
        _uStack0000000000000068 = 0;
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        in_stack_00000060 = auVar15._0_8_;
        thunk_FUN_02dc1ef0(&stack0x00000060,auVar15._0_8_);
        param_1 = unaff_x21 >> 0x20;
        goto code_r0x04fbff28;
      }
      lVar9 = *(long *)(unaff_x19 + 0x14);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar11 = *(uint *)(unaff_x20 + 0x4c);
      uVar8 = *(uint *)(lVar9 + 0x18);
      plVar13 = *(long **)(unaff_x19 + 0x16);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      if (uVar8 < uVar11) {
        FUN_05023354(0);
      }
      in_stack_00000010 = lVar9;
      thunk_FUN_02dc1ef0(&stack0x00000010,lVar9);
      in_stack_00000018 = CONCAT44(uVar8 - uVar11,uVar11);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      auVar15 = (**(code **)(*plVar13 + 0x2d8))
                          (plVar13,in_stack_00000010,in_stack_00000018,
                           *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar13 + 0x2e0));
      lVar9 = *unaff_x26;
      in_stack_00000060 = 0;
      _uStack0000000000000068 = 0;
      if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      in_stack_00000060 = auVar15._0_8_;
      thunk_FUN_02dc1ef0(&stack0x00000060,auVar15._0_8_);
      uVar10 = _uStack0000000000000068 >> 0x30;
      uStack0000000000000068 = auVar15._8_6_;
      _uStack0000000000000068 = CONCAT26((short)uVar10,uStack0000000000000068) & 0xff00ffffffffffff;
      uStack0000000000000070 = 0;
      uStack0000000000000078 = 0;
      uStack0000000000000008 = _uStack0000000000000068;
      uStack0000000000000000 = in_stack_00000060;
      if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      uStack0000000000000078 = uStack0000000000000008;
      uStack0000000000000070 = uStack0000000000000000;
      thunk_FUN_02dc1ef0(&stack0x00000070,0);
      uStack0000000000000008 = uStack0000000000000078;
      uStack0000000000000000 = uStack0000000000000070;
      uStack0000000000000070 = 0;
      uStack0000000000000078 = 0;
      if ((*(byte *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      uStack0000000000000078 = uStack0000000000000008;
      uStack0000000000000070 = uStack0000000000000000;
      thunk_FUN_02dc1ef0(&stack0x00000070,0);
      lVar9 = *(long *)(*unaff_x29 + 0x20);
      in_stack_00000048 = uStack0000000000000078;
      in_stack_00000040 = uStack0000000000000070;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      uVar10 = FUN_04050f9c(&stack0x00000040,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
      if ((uVar10 & 1) == 0) {
        *unaff_x19 = 1;
        *(ulong *)(unaff_x19 + 0x22) = in_stack_00000048;
        *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000040;
        thunk_FUN_02dc1ef0(unaff_x19 + 0x20,0);
        System_Array__InternalArray__Insert<Lllogger_RequestData>(unaff_x19 + 2,&stack0x00000040);
        return;
      }
      lVar9 = *(long *)(*unaff_x25 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d8720c();
      }
      iVar7 = FUN_040510c8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
      if (iVar7 != 0) break;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar11 = *(uint *)(unaff_x20 + 0x48);
      if (0 < (int)uVar11) {
        plVar13 = *(long **)(unaff_x20 + 0x28);
        if (*(char *)(unaff_x19 + 0x13) == '\0') {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          iVar7 = (**(code **)(*plVar13 + 0x1b8))
                            (plVar13,*(undefined8 *)(unaff_x19 + 0x14),0,uVar11,
                             *(undefined8 *)(unaff_x20 + 0x38),0,*(undefined8 *)(*plVar13 + 0x1c0));
          unaff_x19[0x1e] = iVar7;
          *(int *)(unaff_x20 + 0x44) = *(int *)(unaff_x20 + 0x44) + iVar7;
        }
        else {
          lVar9 = *(long *)(unaff_x19 + 0x14);
          if (lVar9 == 0) {
            FUN_05023354(0);
            uVar11 = 0;
            lVar9 = 0;
          }
          else {
            if (*(uint *)(lVar9 + 0x18) < uVar11) {
              FUN_05023354(0);
            }
            lVar9 = lVar9 + 0x20;
          }
          _in_stack_00000030 = FUN_0383e6b4(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_06659460);
          auVar16 = in_stack_00000030._0_12_;
          uVar8 = unaff_x19[0x12];
          lVar14 = *unaff_x28;
          if (in_stack_00000030._8_4_ < uVar8) {
            FUN_05023354(0);
            auVar3._8_8_ = in_stack_00000038 & 0xffffffff;
            auVar3._0_8_ = in_stack_00000030;
            auVar16 = auVar3._0_12_;
          }
          in_stack_00000030 = auVar16._0_8_;
          lVar5 = in_stack_00000030;
          if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
            FUN_02d8720c();
          }
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar6 = (**(code **)(*plVar13 + 0x1e8))
                            (plVar13,lVar9,uVar11,lVar5 + (long)(int)uVar8 * 2,auVar16._8_4_ - uVar8
                             ,0,*(undefined8 *)(*plVar13 + 0x1f0));
          unaff_x19[0x1e] = uVar6;
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
      uVar11 = unaff_x19[0x1e];
      if (uVar11 == 0) {
LAB_04fbfe4c:
        puVar4 = PTR_DAT_06659418;
        uVar6 = unaff_x19[0x12];
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 0x14) = 0;
        thunk_FUN_02dc1ef0(unaff_x19 + 0x14,0);
        *(undefined8 *)(unaff_x19 + 0x16) = 0;
        thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
        FUN_04506ad8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar4);
        return;
      }
      uVar8 = unaff_x19[0x18];
      do {
        if ((int)uVar8 < (int)uVar11) {
          unaff_x19[0x1e] = uVar8;
          uVar11 = uVar8;
        }
        if (*(char *)(unaff_x19 + 0x13) == '\0') {
          lVar9 = *(long *)(unaff_x20 + 0x38);
          uVar8 = *(uint *)(unaff_x20 + 0x40);
          if (lVar9 == 0) {
            lVar9 = 0;
            uVar12 = 0;
            if (uVar11 != 0 || uVar8 != 0) {
              FUN_05023354(0);
              lVar9 = 0;
              uVar12 = 0;
            }
          }
          else {
            if ((*(uint *)(lVar9 + 0x18) < uVar8) || (*(uint *)(lVar9 + 0x18) - uVar8 < uVar11)) {
              FUN_05023354(0);
            }
            lVar9 = lVar9 + (long)(int)uVar8 * 2 + 0x20;
            uVar12 = uVar11;
          }
          in_stack_00000038 = (ulong)uVar12;
          in_stack_00000030 = lVar9;
          auVar16 = FUN_0383e6b4(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_06659460);
          uVar11 = unaff_x19[0x12];
          lVar9 = *unaff_x28;
          if (auVar16._8_4_ < uVar11) {
            FUN_05023354(0);
          }
          if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
            FUN_02d8720c();
          }
          FUN_03c32d08(&stack0x00000030,auVar16._0_8_ + (long)(int)uVar11 * 2,auVar16._8_4_ - uVar11
                       ,*(undefined8 *)PTR_DAT_06651100);
          uVar11 = unaff_x19[0x1e];
          *(uint *)(unaff_x20 + 0x40) = uVar11 + *(int *)(unaff_x20 + 0x40);
          uVar8 = unaff_x19[0x18];
        }
        uVar8 = uVar8 - uVar11;
        unaff_x19[0x18] = uVar8;
        unaff_x19[0x12] = uVar11 + unaff_x19[0x12];
        if ((*(char *)(unaff_x20 + 0x56) != '\0') || ((int)uVar8 < 1)) goto LAB_04fbfe4c;
        uVar11 = *(int *)(unaff_x20 + 0x44) - *(int *)(unaff_x20 + 0x40);
        unaff_x19[0x1e] = uVar11;
      } while (uVar11 != 0);
      cVar2 = *(char *)(unaff_x20 + 0x55);
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      if (cVar2 == '\0') {
        *(undefined4 *)(unaff_x20 + 0x48) = 0;
      }
      *(bool *)(unaff_x19 + 0x13) = *(int *)(unaff_x20 + 0x50) <= (int)uVar8;
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar7 = *(int *)(unaff_x20 + 0x48) + iVar7;
    *(int *)(unaff_x20 + 0x48) = iVar7;
  } while( true );
}


