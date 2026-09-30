/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DefaultValueHandling
ENTRY_POINT: 04d0a260
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling
          (long *param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x21;
  uint uVar8;
  uint unaff_w23;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
  do {
    FUN_04c16478(param_1,param_2,param_3,param_4,param_5);
    do {
      param_2 = in_stack_00000018;
      if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
      if (*(int *)(in_stack_00000018 + 0x10) <= (int)unaff_w23) goto LAB_04d0a290;
      do {
        unaff_w23 = FUN_04d0a4a0(&stack0x00000008,&stack0x00000018,unaff_w23,in_stack_00000000._4_4_
                                );
LAB_04d0a290:
        unaff_w23 = unaff_w23 + 1;
        if (*(int *)(param_2 + 0x10) <= (int)unaff_w23) {
          if (in_stack_00000008 != (long *)0x0) {
            uVar7 = (**(code **)(*in_stack_00000008 + 0x168))
                              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
            return uVar7;
          }
          goto LAB_04d0a2dc;
        }
        iVar3 = FUN_04cce264(param_2,unaff_w23,(long)&stack0x00000000 + 4,0);
        if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0x88));
        }
        uVar6 = FUN_04cfa424(iVar3,0);
      } while ((uVar6 & 1) == 0);
      iVar4 = FUN_04d0a328();
      bVar1 = iVar3 == 1;
      uVar8 = iVar4 + 1;
      while (unaff_w23 = uVar8, (int)uVar8 < *(int *)(param_2 + 0x10)) {
        while( true ) {
          while (uVar5 = FUN_04cce264(param_2,unaff_w23,(long)&stack0x00000000 + 4,0), uVar5 < 5) {
            unaff_w23 = in_stack_00000000._4_4_ + unaff_w23;
            bVar1 = (bool)(uVar5 == 1 | bVar1);
            if (*(int *)(param_2 + 0x10) <= (int)unaff_w23) goto LAB_04d0a20c;
          }
          sVar2 = FUN_04c045f0(param_2,unaff_w23,0);
          if (sVar2 == 0x27) break;
          if (((unaff_w26 << (ulong)(uVar5 & 0x1f) & unaff_w27) != 0) ||
             (unaff_w23 = in_stack_00000000._4_4_ + unaff_w23,
             *(int *)(param_2 + 0x10) <= (int)unaff_w23)) goto LAB_04d0a20c;
        }
        if ((bVar1) && (param_2 = unaff_x21, unaff_x21 == 0)) {
          param_2 = (**(code **)(*unaff_x19 + 0x1b8))();
          unaff_x21 = param_2;
        }
        if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
        FUN_04c16478(in_stack_00000008,param_2,uVar8,(unaff_w23 + 1) - uVar8,0);
        bVar1 = true;
        param_2 = in_stack_00000018;
        uVar8 = unaff_w23 + 1;
        if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
      }
LAB_04d0a20c:
    } while ((int)(unaff_w23 - uVar8) < 1);
    param_1 = in_stack_00000008;
    if ((bVar1) && (param_2 = unaff_x21, unaff_x21 == 0)) {
      param_2 = (**(code **)(*unaff_x19 + 0x1b8))();
      unaff_x21 = param_2;
      param_1 = in_stack_00000008;
    }
    in_stack_00000008 = param_1;
    if (param_1 == (long *)0x0) {
LAB_04d0a2dc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_3 = (ulong)uVar8;
    param_4 = (ulong)(unaff_w23 - uVar8);
    param_5 = 0;
  } while( true );
}


