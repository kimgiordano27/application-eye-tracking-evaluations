/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ConstructorHandling
ENTRY_POINT: 04d0a29c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling(void)

{
  char in_NG;
  char in_OV;
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
  while (in_NG != in_OV) {
    iVar3 = FUN_04cce264(unaff_x20,unaff_w22,(long)&stack0x00000000 + 4,0);
    if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0x88));
    }
    uVar6 = FUN_04cfa424(iVar3,0);
    if ((uVar6 & 1) == 0) {
LAB_04d0a288:
      unaff_w22 = FUN_04d0a4a0(&stack0x00000008,&stack0x00000018,unaff_w22,in_stack_00000000._4_4_);
    }
    else {
      iVar4 = FUN_04d0a328();
      bVar1 = iVar3 == 1;
      iVar3 = iVar4 + 1;
      while (unaff_w22 = iVar3, iVar3 < *(int *)(unaff_x20 + 0x10)) {
        while( true ) {
          while (uVar5 = FUN_04cce264(unaff_x20,unaff_w22,(long)&stack0x00000000 + 4,0), uVar5 < 5)
          {
            unaff_w22 = in_stack_00000000._4_4_ + unaff_w22;
            bVar1 = (bool)(uVar5 == 1 | bVar1);
            if (*(int *)(unaff_x20 + 0x10) <= unaff_w22) goto LAB_04d0a20c;
          }
          sVar2 = FUN_04c045f0(unaff_x20,unaff_w22,0);
          if (sVar2 == 0x27) break;
          if (((unaff_w26 << (ulong)(uVar5 & 0x1f) & unaff_w27) != 0) ||
             (unaff_w22 = in_stack_00000000._4_4_ + unaff_w22,
             *(int *)(unaff_x20 + 0x10) <= unaff_w22)) goto LAB_04d0a20c;
        }
        if ((bVar1) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
          unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
          unaff_x21 = unaff_x20;
        }
        if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
        FUN_04c16478(in_stack_00000008,unaff_x20,iVar3,(unaff_w22 + 1) - iVar3,0);
        bVar1 = true;
        unaff_x20 = in_stack_00000018;
        iVar3 = unaff_w22 + 1;
        if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
      }
LAB_04d0a20c:
      if (0 < unaff_w22 - iVar3) {
        if ((bVar1) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
          unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
          unaff_x21 = unaff_x20;
        }
        if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
        FUN_04c16478(in_stack_00000008,unaff_x20,iVar3,unaff_w22 - iVar3,0);
      }
      if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
      unaff_x20 = in_stack_00000018;
      if (unaff_w22 < *(int *)(in_stack_00000018 + 0x10)) goto LAB_04d0a288;
    }
    unaff_w22 = unaff_w22 + 1;
    in_OV = SBORROW4(unaff_w22,*(int *)(unaff_x20 + 0x10));
    in_NG = unaff_w22 - *(int *)(unaff_x20 + 0x10) < 0;
  }
  if (in_stack_00000008 != (long *)0x0) {
    uVar7 = (**(code **)(*in_stack_00000008 + 0x168))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
    return uVar7;
  }
LAB_04d0a2dc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


