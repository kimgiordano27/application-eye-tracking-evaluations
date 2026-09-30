/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode
ENTRY_POINT: 058f6370
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x058f66b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_GetHashCode
               (undefined1 param_1 [16])

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x19;
  uint uVar6;
  undefined4 *unaff_x20;
  long *unaff_x21;
  undefined1 auVar7 [16];
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  int iStack0000000000000044;
  undefined4 *in_stack_00000048;
  
  uStack0000000000000038 = param_1._8_8_;
  uStack0000000000000030 = param_1._0_8_;
  *(undefined8 *)(unaff_x20 + 0xe) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  iStack0000000000000044 = -1;
  *unaff_x20 = 0xffffffff;
  FUN_0585a5b8(&stack0x00000030,0);
  if ((iStack0000000000000044 == 1) || (iStack0000000000000044 == 2)) {
    iStack0000000000000044 = -1;
    _uStack0000000000000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0xe);
    *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
    *in_stack_00000048 = 0xffffffff;
LAB_058f640c:
    FUN_0585a5b8(&stack0x00000030,0);
LAB_058f6418:
    uVar6 = 0xc;
  }
  else {
    if (iStack0000000000000044 == 3) {
      iStack0000000000000044 = -1;
      _uStack0000000000000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0xe);
      *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
      *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
      *in_stack_00000048 = 0xffffffff;
LAB_058f63d8:
      FUN_0585a5b8(&stack0x00000030,0);
LAB_058f63e4:
      uVar6 = 0x13;
      goto LAB_058f6420;
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(unaff_x19 + 0x44) < 1) {
      plVar4 = *(long **)(unaff_x19 + 0x28);
      if (*(int *)(unaff_x19 + 0x3c) < *(int *)(unaff_x19 + 0x40)) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if ((uVar5 & 1) != 0) {
          FUN_058f3b00();
        }
        plVar4 = *(long **)(unaff_x19 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if ((uVar5 & 1) == 0) goto LAB_058f6418;
        plVar4 = *(long **)(unaff_x19 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar3 = (**(code **)(*plVar4 + 0x2a8))
                          (plVar4,*(undefined8 *)(in_stack_00000048 + 10),
                           *(undefined8 *)(*plVar4 + 0x2b0));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        _uStack0000000000000030 = FUN_059a24b0(lVar3,0,0);
        auVar7 = FUN_0585a5a0(&stack0x00000030,0);
        puVar2 = in_stack_00000048;
        if ((auVar7._0_8_ & 1) != 0) goto LAB_058f640c;
        lVar3 = *unaff_x21;
        iStack0000000000000044 = 2;
        *in_stack_00000048 = 2;
        *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _uStack0000000000000030;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar3,auVar7._8_8_,in_stack_00000048);
        }
        FUN_039cd854(puVar2 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_07104b38);
      }
      else {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar5 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if ((uVar5 & 1) == 0) goto LAB_058f63e4;
        plVar4 = *(long **)(unaff_x19 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar3 = (**(code **)(*plVar4 + 0x2a8))
                          (plVar4,*(undefined8 *)(in_stack_00000048 + 10),
                           *(undefined8 *)(*plVar4 + 0x2b0));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        _uStack0000000000000030 = FUN_059a24b0(lVar3,0,0);
        auVar7 = FUN_0585a5a0(&stack0x00000030,0);
        puVar2 = in_stack_00000048;
        if ((auVar7._0_8_ & 1) != 0) goto LAB_058f63d8;
        lVar3 = *unaff_x21;
        iStack0000000000000044 = 3;
        *in_stack_00000048 = 3;
        *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _uStack0000000000000030;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar3,auVar7._8_8_,in_stack_00000048);
        }
        FUN_039cd854(puVar2 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_07104b38);
      }
    }
    else {
      lVar3 = FUN_058f3d70();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      _uStack0000000000000030 = FUN_059a24b0(lVar3,0,0);
      auVar7 = FUN_0585a5a0(&stack0x00000030,0);
      puVar2 = in_stack_00000048;
      if ((auVar7._0_8_ & 1) != 0) goto LAB_058f640c;
      lVar3 = *unaff_x21;
      iStack0000000000000044 = 1;
      *in_stack_00000048 = 1;
      *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _uStack0000000000000030;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar3,auVar7._8_8_,in_stack_00000048);
      }
      FUN_039cd854(puVar2 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_07104b38);
    }
    uVar6 = 5;
  }
LAB_058f6420:
  if (iStack0000000000000044 < 0) {
    if (*(long *)(in_stack_00000048 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_05995d98(*(long *)(in_stack_00000048 + 0xc),0);
  }
  puVar2 = in_stack_00000048;
  if ((uVar6 < 0x14) && ((1 << (ulong)uVar6 & 0x81001U) != 0)) {
    iVar1 = *(int *)(*unaff_x21 + 0xe4);
    *in_stack_00000048 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000048 + 0xc) = 0;
    if (iVar1 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0585acf4(puVar2 + 2,0);
  }
  return;
}


