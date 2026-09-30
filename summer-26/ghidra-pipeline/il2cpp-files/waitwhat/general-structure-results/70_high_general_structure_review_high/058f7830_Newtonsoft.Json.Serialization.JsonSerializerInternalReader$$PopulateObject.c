/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
ENTRY_POINT: 058f7830
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x058f7de8) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  undefined4 *unaff_x19;
  uint uVar7;
  long *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long *in_stack_00000018;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  FUN_049e0770(unaff_x19 + 0xc,*param_1);
  uVar4 = FUN_058f4fac();
  uVar7 = unaff_x19[0xf];
  lVar8 = *(long *)PTR_DAT_07104b70;
  uVar9 = extraout_x1;
  if ((uVar7 & 0x7fffffff) < uVar4) {
    FUN_059500a8(0x18,0);
    uVar9 = extraout_x1_00;
  }
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = *(long *)(lVar8 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
  iVar2 = unaff_x19[0xe];
  if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
    auVar10 = FUN_031c09d4();
  }
  *(undefined8 *)(unaff_x19 + 0xc) = uVar9;
  *(ulong *)(unaff_x19 + 0xe) = CONCAT44(uVar7 - uVar4,iVar2 + uVar4);
  if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar7 = *(uint *)(in_stack_00000060 + 0x44);
  if ((int)uVar7 < *(int *)(in_stack_00000060 + 0x38)) {
    uVar7 = 0x14;
  }
  else {
    plVar1 = *(long **)(in_stack_00000060 + 0x28);
    lVar8 = *(long *)(in_stack_00000060 + 0x30);
    if (lVar8 == 0) {
      if (uVar7 == 0) {
        lVar6 = 0;
      }
      else {
        auVar10 = FUN_05950030(0);
        lVar6 = 0;
      }
    }
    else {
      if (*(uint *)(lVar8 + 0x18) < uVar7) {
        auVar10 = FUN_05950030(0);
      }
      lVar6 = (ulong)uVar7 << 0x20;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8(auVar10._0_8_,auVar10._8_8_,lVar6);
    }
    auVar10 = (**(code **)(*plVar1 + 0x328))
                        (plVar1,lVar8,lVar6,*(undefined8 *)(unaff_x19 + 0x10),
                         *(undefined8 *)(*plVar1 + 0x330));
    if (*(int *)(*(long *)PTR_DAT_070f5948 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    in_stack_00000048 = auVar10._8_8_ & 0xffff;
    in_stack_00000040 = auVar10._0_8_;
    uVar5 = FUN_05869024(&stack0x00000040,0);
    if ((uVar5 & 1) == 0) {
      lVar8 = *unaff_x22;
      in_stack_00000068._4_4_ = 1;
      *(ulong *)(unaff_x19 + 0x18) = in_stack_00000048;
      *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000040;
      iVar2 = *(int *)(lVar8 + 0xe4);
      *unaff_x19 = 1;
      if (iVar2 == 0) {
        thunk_FUN_031e5338();
      }
      FUN_039cf108(unaff_x19 + 2,&stack0x00000040);
      uVar7 = 5;
    }
    else {
      FUN_05869164(&stack0x00000040,0);
      lVar8 = in_stack_00000060;
      puVar3 = PTR_DAT_07104630;
      if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      *(undefined4 *)(in_stack_00000060 + 0x44) = 0;
      auVar10 = FUN_049e0770(unaff_x19 + 0xc,*(undefined8 *)puVar3);
      FUN_058f4fac(lVar8,auVar10._0_8_,auVar10._8_8_);
      uVar7 = 0x1c;
    }
  }
  if (in_stack_00000068._4_4_ < 0) {
    if ((*in_stack_00000018 == 0) || (lVar8 = FUN_058f31a4(), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_05995d98(lVar8,0);
  }
  if ((uVar7 < 0x1d) && ((1 << (ulong)uVar7 & 0x10100001U) != 0)) {
    lVar8 = *unaff_x22;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0585acf4(unaff_x19 + 2,0);
  }
  return;
}


