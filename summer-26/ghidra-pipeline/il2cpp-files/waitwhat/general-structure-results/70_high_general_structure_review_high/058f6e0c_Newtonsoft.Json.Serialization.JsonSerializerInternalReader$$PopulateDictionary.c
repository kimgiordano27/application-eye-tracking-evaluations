/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 058f6e0c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x058f73a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary
               (undefined1 param_1 [16])

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 in_w8;
  undefined4 *unaff_x19;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  int in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uStack0000000000000048 = param_1._8_8_;
  uStack0000000000000040 = param_1._0_8_;
  *unaff_x19 = in_w8;
  FUN_0585a5b8(&stack0x00000040,0);
  lVar10 = in_stack_00000050;
  if (in_stack_00000058._4_4_ == 1) {
    _uStack0000000000000040 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    in_stack_00000058._4_4_ = -1;
    *unaff_x19 = 0xffffffff;
LAB_058f6e9c:
    FUN_0585a5b8(&stack0x00000040,0);
LAB_058f6ea8:
    iVar3 = FUN_045266bc(unaff_x19 + 0xe,*(undefined8 *)PTR_DAT_070f5c98);
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (iVar3 < *(int *)(in_stack_00000050 + 0x38)) {
      auVar14 = FUN_058f36ec();
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar8 = *(long **)(in_stack_00000050 + 0x28);
      lVar10 = *(long *)(in_stack_00000050 + 0x30);
      uVar4 = *(uint *)(in_stack_00000050 + 0x38);
      if (lVar10 == 0) {
        if (uVar4 == 0) {
          lVar12 = 0;
        }
        else {
          auVar14 = FUN_05950030(0);
          lVar12 = 0;
        }
      }
      else {
        if (*(uint *)(lVar10 + 0x18) < uVar4) {
          auVar14 = FUN_05950030(0);
        }
        lVar12 = (ulong)uVar4 << 0x20;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8(auVar14._0_8_,auVar14._8_8_,lVar12);
      }
      auVar14 = (**(code **)(*plVar8 + 0x2e8))
                          (plVar8,lVar10,lVar12,*(undefined8 *)(unaff_x19 + 0x14),
                           *(undefined8 *)(*plVar8 + 0x2f0));
      lVar10 = *(long *)PTR_DAT_070f5ca8;
      uVar1 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      if ((uVar1 & 1) == 0) {
        FUN_031c09d4();
        uVar1 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      }
      if ((uVar1 & 1) == 0) {
        FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_070f5c78 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      in_stack_00000038 = auVar14._8_8_ & 0xffffffffffff;
      lVar10 = *(long *)(*(long *)PTR_DAT_070f5c88 + 0x20);
      in_stack_00000030 = auVar14._0_8_;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_031c09d4();
      }
      uVar9 = FUN_04daa5a8(&stack0x00000030,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10));
      if ((uVar9 & 1) != 0) {
LAB_058f7240:
        lVar10 = *(long *)(*(long *)PTR_DAT_070f5c80 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_031c09d4();
        }
        uVar6 = FUN_04daa6d4(&stack0x00000030,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
        lVar10 = in_stack_00000050;
        puVar2 = PTR_DAT_070f5ca0;
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined4 *)(in_stack_00000050 + 0x40) = uVar6;
        auVar14 = FUN_0453f860(unaff_x19 + 0xe,*(undefined8 *)puVar2);
        iVar7 = FUN_058f3ea4(lVar10,auVar14._0_8_,auVar14._8_8_);
        iVar3 = unaff_x19[0x12];
        goto LAB_058f72ac;
      }
      in_stack_00000058._4_4_ = 3;
      *unaff_x19 = 3;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000030;
      FUN_036cd868(unaff_x19 + 2,&stack0x00000030);
    }
    else {
      plVar8 = *(long **)(in_stack_00000050 + 0x28);
      unaff_x19[0x1a] = unaff_x19[0x12];
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      auVar14 = (**(code **)(*plVar8 + 0x2e8))
                          (plVar8,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10)
                           ,*(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(*plVar8 + 0x2f0));
      lVar10 = *(long *)PTR_DAT_070f5ca8;
      uVar1 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      if ((uVar1 & 1) == 0) {
        FUN_031c09d4();
        uVar1 = *(ushort *)(*(long *)(lVar10 + 0x20) + 0x135);
      }
      if ((uVar1 & 1) == 0) {
        FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_070f5c78 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      in_stack_00000038 = auVar14._8_8_ & 0xffffffffffff;
      lVar10 = *(long *)(*(long *)PTR_DAT_070f5c88 + 0x20);
      in_stack_00000030 = auVar14._0_8_;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_031c09d4();
      }
      uVar9 = FUN_04daa5a8(&stack0x00000030,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10));
      if ((uVar9 & 1) != 0) goto LAB_058f7028;
      in_stack_00000058._4_4_ = 2;
      *unaff_x19 = 2;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000030;
      FUN_036cd868(unaff_x19 + 2,&stack0x00000030);
    }
LAB_058f72ec:
    iVar3 = 0;
    iVar7 = 5;
  }
  else {
    if (in_stack_00000058._4_4_ == 2) {
      in_stack_00000038 = *(ulong *)(unaff_x19 + 0x1e);
      in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x1c);
      *(undefined8 *)(unaff_x19 + 0x1c) = 0;
      *(undefined8 *)(unaff_x19 + 0x1e) = 0;
      in_stack_00000058._4_4_ = -1;
      *unaff_x19 = 0xffffffff;
LAB_058f7028:
      lVar10 = *(long *)(*(long *)PTR_DAT_070f5c80 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_031c09d4();
      }
      iVar7 = FUN_04daa6d4(&stack0x00000030,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
      iVar3 = unaff_x19[0x1a];
LAB_058f72ac:
      iVar3 = iVar3 + iVar7;
    }
    else {
      if (in_stack_00000058._4_4_ == 3) {
        in_stack_00000038 = *(ulong *)(unaff_x19 + 0x1e);
        in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x1c);
        *(undefined8 *)(unaff_x19 + 0x1c) = 0;
        *(undefined8 *)(unaff_x19 + 0x1e) = 0;
        in_stack_00000058._4_4_ = -1;
        *unaff_x19 = 0xffffffff;
        goto LAB_058f7240;
      }
      auVar14 = FUN_0453f860(unaff_x19 + 0xe,*(undefined8 *)PTR_DAT_070f5ca0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar4 = FUN_058f3ea4(lVar10,auVar14._0_8_,auVar14._8_8_);
      uVar5 = FUN_045266bc(unaff_x19 + 0xe,*(undefined8 *)PTR_DAT_070f5c98);
      if (uVar4 != uVar5) {
        if (0 < (int)uVar4) {
          uVar5 = unaff_x19[0x11];
          lVar10 = *(long *)PTR_DAT_07104af0;
          if ((uVar5 & 0x7fffffff) < uVar4) {
            FUN_059500a8(0x18,0);
          }
          uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
          iVar3 = unaff_x19[0x10];
          if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          *(undefined8 *)(unaff_x19 + 0xe) = uVar11;
          *(ulong *)(unaff_x19 + 0x10) = CONCAT44(uVar5 - uVar4,iVar3 + uVar4);
          unaff_x19[0x12] = unaff_x19[0x12] + uVar4;
        }
        if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined4 *)(in_stack_00000050 + 0x3c) = 0;
        *(undefined4 *)(in_stack_00000050 + 0x40) = 0;
        if (*(int *)(in_stack_00000050 + 0x44) < 1) goto LAB_058f6ea8;
        lVar10 = FUN_058f3d70(in_stack_00000050,*(undefined8 *)(unaff_x19 + 0x14));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        _uStack0000000000000040 = FUN_059a24b0(lVar10,0,0);
        uVar9 = FUN_0585a5a0(&stack0x00000040,0);
        if ((uVar9 & 1) != 0) goto LAB_058f6e9c;
        in_stack_00000058._4_4_ = 1;
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _uStack0000000000000040;
        FUN_036cd988(unaff_x19 + 2,&stack0x00000040);
        goto LAB_058f72ec;
      }
      iVar3 = unaff_x19[0x12] + uVar4;
    }
    iVar7 = 0xb;
  }
  if (in_stack_00000058._4_4_ < 0) {
    if ((in_stack_00000050 == 0) || (lVar10 = FUN_058f31a4(), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_05995d98(lVar10,0);
  }
  puVar2 = PTR_DAT_07104748;
  if (iVar7 == 0xb) {
    *unaff_x19 = 0xfffffffe;
    FUN_046d28a0(unaff_x19 + 2,iVar3,*(undefined8 *)puVar2);
  }
  else if (iVar7 == 0) {
    uVar13 = *(undefined8 *)(&stack0x00000020 + (long)(in_stack_00000028 + -1) * 8);
    *unaff_x19 = 0xfffffffe;
    uVar11 = thunk_FUN_031edd38(PTR_DAT_07104768);
    FUN_046d293c(unaff_x19 + 2,uVar13,uVar11);
  }
  return;
}


