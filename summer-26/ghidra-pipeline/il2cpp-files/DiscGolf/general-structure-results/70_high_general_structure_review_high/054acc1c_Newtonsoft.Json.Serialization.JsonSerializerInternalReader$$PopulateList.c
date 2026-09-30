/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 054acc1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x054ad01c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long unaff_x19;
  uint uVar5;
  long *unaff_x21;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 *in_stack_00000048;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  _in_stack_00000030 = FUN_0555c350(param_1,0,0);
  uVar2 = FUN_05410178(&stack0x00000030,0);
  if ((uVar2 & 1) == 0) {
    in_stack_00000040._4_4_ = 0;
    *in_stack_00000048 = 0;
    *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _in_stack_00000030;
    LeanTween__value(in_stack_00000048 + 0xe,0);
    puVar1 = in_stack_00000048;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x21,extraout_x1,in_stack_00000048);
    }
    FUN_0353ad58(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a21478);
    return;
  }
  FUN_05410190(&stack0x00000030,0);
  if ((in_stack_00000040._4_4_ == 1) || (in_stack_00000040._4_4_ == 2)) {
    in_stack_00000040._4_4_ = -1;
    _in_stack_00000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0xe);
    *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
    *in_stack_00000048 = 0xffffffff;
LAB_054acd38:
    FUN_05410190(&stack0x00000030,0);
LAB_054acd44:
    uVar5 = 0xc;
  }
  else {
    if (in_stack_00000040._4_4_ == 3) {
      in_stack_00000040._4_4_ = -1;
      _in_stack_00000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0xe);
      *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
      *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
      *in_stack_00000048 = 0xffffffff;
LAB_054acd04:
      FUN_05410190(&stack0x00000030,0);
LAB_054acd10:
      uVar5 = 0x13;
      goto LAB_054acd4c;
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(unaff_x19 + 0x44) < 1) {
      plVar4 = *(long **)(unaff_x19 + 0x28);
      if (*(int *)(unaff_x19 + 0x3c) < *(int *)(unaff_x19 + 0x40)) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar2 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if ((uVar2 & 1) != 0) {
                    /* try { // try from 054aceac to 055aceaf has its CatchHandler @ 054ad108 */
          FUN_054aa1fc();
        }
                    /* try { // try from 054aceb0 to 055acebb has its CatchHandler @ 054ad104 */
        plVar4 = *(long **)(unaff_x19 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if ((uVar2 & 1) == 0) goto LAB_054acd44;
        plVar4 = *(long **)(unaff_x19 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
                    /* try { // try from 054aced0 to 055aced7 has its CatchHandler @ 054ad0fc */
        lVar3 = (**(code **)(*plVar4 + 0x2a8))
                          (plVar4,*(undefined8 *)(in_stack_00000048 + 10),
                           *(undefined8 *)(*plVar4 + 0x2b0));
                    /* try { // try from 054acee8 to 055aceef has its CatchHandler @ 054ad10c */
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
                    /* try { // try from 054acef0 to 055ad0df has its CatchHandler @ 054acdc8 */
        auVar6 = FUN_0555c350(lVar3,0,0);
        _in_stack_00000030 = auVar6;
        uVar2 = FUN_05410178(&stack0x00000030,0);
        if ((uVar2 & 1) != 0) goto LAB_054acd38;
        in_stack_00000040._4_4_ = 2;
        *in_stack_00000048 = 2;
        *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _in_stack_00000030;
        LeanTween__value(in_stack_00000048 + 0xe,0);
        puVar1 = in_stack_00000048;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x21,extraout_x1_01,in_stack_00000048);
        }
        FUN_0353ad58(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a21478);
      }
      else {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if ((uVar2 & 1) == 0) goto LAB_054acd10;
        plVar4 = *(long **)(unaff_x19 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar3 = (**(code **)(*plVar4 + 0x2a8))
                          (plVar4,*(undefined8 *)(in_stack_00000048 + 10),
                           *(undefined8 *)(*plVar4 + 0x2b0));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar6 = FUN_0555c350(lVar3,0,0);
        _in_stack_00000030 = auVar6;
        uVar2 = FUN_05410178(&stack0x00000030,0);
        if ((uVar2 & 1) != 0) goto LAB_054acd04;
        in_stack_00000040._4_4_ = 3;
        *in_stack_00000048 = 3;
        *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _in_stack_00000030;
        LeanTween__value(in_stack_00000048 + 0xe,0);
        puVar1 = in_stack_00000048;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x21,extraout_x1_02,in_stack_00000048);
        }
        FUN_0353ad58(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a21478);
      }
    }
    else {
      lVar3 = FUN_054aa494();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      auVar6 = FUN_0555c350(lVar3,0,0);
      _in_stack_00000030 = auVar6;
      uVar2 = FUN_05410178(&stack0x00000030,0);
      if ((uVar2 & 1) != 0) goto LAB_054acd38;
      in_stack_00000040._4_4_ = 1;
      *in_stack_00000048 = 1;
      *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _in_stack_00000030;
      LeanTween__value(in_stack_00000048 + 0xe,0);
      puVar1 = in_stack_00000048;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x21,extraout_x1_00,in_stack_00000048);
      }
      FUN_0353ad58(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a21478);
    }
    uVar5 = 5;
  }
LAB_054acd4c:
  if (in_stack_00000040._4_4_ < 0) {
    if (*(long *)(in_stack_00000048 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0554fe30(*(long *)(in_stack_00000048 + 0xc),0);
  }
  if ((uVar5 < 0x14) && ((1 << (ulong)uVar5 & 0x81001U) != 0)) {
    *in_stack_00000048 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000048 + 0xc) = 0;
    LeanTween__value(in_stack_00000048 + 0xc,0);
    puVar1 = in_stack_00000048;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
                    /* try { // try from 054acdc8 to 055aceab has its CatchHandler @ 054acdc8
                       catch() { ... } // from try @ 054acdc8 with catch @ 054acdc8
                       catch() { ... } // from try @ 054acef0 with catch @ 054acdc8
                       catch() { ... } // from try @ 054ad0f0 with catch @ 054acdc8
                       catch() { ... } // from try @ 054ad13c with catch @ 054acdc8
                       catch() { ... } // from try @ 054ad1bc with catch @ 054acdc8 */
    FUN_05410914(puVar1 + 2,0);
  }
  return;
}


