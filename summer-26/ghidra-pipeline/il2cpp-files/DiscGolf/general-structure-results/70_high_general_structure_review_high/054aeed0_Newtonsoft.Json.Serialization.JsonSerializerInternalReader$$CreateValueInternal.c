/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 054aeed0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x054af2a4) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
               (undefined1 param_1 [16])

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long *plVar5;
  int iVar6;
  long *unaff_x22;
  undefined1 auVar7 [16];
  unkbyte10 Var8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  uint3 uStack0000000000000078;
  undefined5 uStack000000000000007b;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int iStack000000000000009c;
  
  uStack0000000000000058 = param_1._8_8_;
  uStack0000000000000050 = param_1._0_8_;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x12) = 0;
  iStack000000000000009c = -1;
  *unaff_x19 = 0xffffffff;
  FUN_05410190(&stack0x00000050,0);
  in_stack_00000020 = (undefined1 *)&stack0x0000009c;
  in_stack_00000028 = &stack0x00000068;
  in_stack_00000018 = 0;
  if (iStack000000000000009c == 1) {
    in_stack_00000048 = *(undefined8 *)(unaff_x19 + 0x16);
    in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0x14);
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    iStack000000000000009c = -1;
    *unaff_x19 = 0xffffffff;
LAB_054af07c:
    FUN_05415e74(&stack0x00000040,0);
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined4 *)(in_stack_00000068 + 0x3c) = 0;
    *(undefined4 *)(in_stack_00000068 + 0x40) = 0;
LAB_054af094:
    plVar5 = *(long **)(in_stack_00000068 + 0x28);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = (**(code **)(*plVar5 + 600))
                      (plVar5,*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xe],
                       *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar5 + 0x260));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    auVar7 = FUN_0555c350(lVar4,0,0);
    _uStack0000000000000050 = auVar7;
    uVar3 = FUN_05410178(&stack0x00000050,0);
    if ((uVar3 & 1) == 0) {
      iStack000000000000009c = 3;
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _uStack0000000000000050;
      LeanTween__value(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0353acdc(unaff_x19 + 2,&stack0x00000050);
LAB_054af13c:
      iVar6 = 5;
      goto LAB_054af144;
    }
  }
  else {
    if (iStack000000000000009c == 2) {
      _uStack0000000000000050 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      iStack000000000000009c = -1;
      *unaff_x19 = 0xffffffff;
LAB_054aef50:
      FUN_05410190(&stack0x00000050,0);
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_054af094;
    }
    if (iStack000000000000009c != 3) {
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar1 = *(uint *)(in_stack_00000068 + 0x3c);
      uVar2 = *(int *)(in_stack_00000068 + 0x40) - uVar1;
      if ((int)uVar2 < 1) {
        if (*(int *)(in_stack_00000068 + 0x44) < 1) goto LAB_054af094;
        lVar4 = FUN_054aa494(in_stack_00000068,*(undefined8 *)(unaff_x19 + 0xc));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        _uStack0000000000000050 = FUN_0555c350(lVar4,0,0);
        uVar3 = FUN_05410178(&stack0x00000050,0);
        if ((uVar3 & 1) != 0) goto LAB_054aef50;
        iStack000000000000009c = 2;
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = _uStack0000000000000050;
        LeanTween__value(unaff_x19 + 0x10,0);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0353acdc(unaff_x19 + 2,&stack0x00000050);
      }
      else {
        lVar4 = *(long *)(in_stack_00000068 + 0x30);
        plVar5 = *(long **)(unaff_x19 + 10);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        if (lVar4 == 0) {
          FUN_05508bc8(0);
          in_stack_00000008 = 0;
          in_stack_00000010 = 0;
        }
        else {
          if ((*(uint *)(lVar4 + 0x18) < uVar1) || (*(uint *)(lVar4 + 0x18) - uVar1 < uVar2)) {
            FUN_05508bc8(0);
          }
          in_stack_00000008 = lVar4;
          LeanTween__value(&stack0x00000008,lVar4);
          in_stack_00000010 = CONCAT44(uVar2,uVar1);
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        Var8 = (**(code **)(*plVar5 + 0x328))
                         (plVar5,in_stack_00000008,in_stack_00000010,
                          *(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar5 + 0x330));
        if (*(int *)(*(long *)PTR_DAT_06a111f8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        _uStack0000000000000078 = 0;
        in_stack_00000070 = (long)Var8;
        LeanTween__value(&stack0x00000070,(long)Var8);
        uStack0000000000000078 = (uint3)(ushort)((unkuint10)Var8 >> 0x40);
        in_stack_00000088 = _uStack0000000000000078;
        in_stack_00000080 = in_stack_00000070;
        LeanTween__value(&stack0x00000080,0);
        LeanTween__value(&stack0x00000080,0);
        in_stack_00000048 = in_stack_00000088;
        in_stack_00000040 = in_stack_00000080;
        uVar3 = FUN_05415d34(&stack0x00000040,0);
        if ((uVar3 & 1) != 0) goto LAB_054af07c;
        iStack000000000000009c = 1;
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000048;
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000040;
        LeanTween__value(unaff_x19 + 0x14,0);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0353b68c(unaff_x19 + 2,&stack0x00000040);
      }
      goto LAB_054af13c;
    }
    _uStack0000000000000050 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    iStack000000000000009c = -1;
    *unaff_x19 = 0xffffffff;
  }
  FUN_05410190(&stack0x00000050,0);
  iVar6 = 0xf;
LAB_054af144:
  if (iStack000000000000009c < 0) {
    if ((*in_stack_00000028 == 0) || (lVar4 = *(long *)(*in_stack_00000028 + 0x50), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0554fe30(lVar4,0);
  }
  if ((iVar6 == 0) || (iVar6 == 0xf)) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05410914(unaff_x19 + 2,0);
  }
  return;
}


