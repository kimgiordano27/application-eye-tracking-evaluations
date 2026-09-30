/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_PreserveReferencesHandling
ENTRY_POINT: 04d0a134
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


undefined8
Newtonsoft_Json_JsonSerializerSettings__get_PreserveReferencesHandling(long param_1,ulong param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  byte unaff_w28;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
code_r0x04d0a134:
  sVar2 = FUN_04c045f0(param_1,param_2,0);
  if (sVar2 != 0x27) {
    param_1 = unaff_x20;
    param_2 = unaff_x23;
    if ((unaff_w26 << (ulong)(unaff_w24 & 0x1f) & unaff_w27) != 0) goto LAB_04d0a20c;
    uVar1 = in_stack_00000000._4_4_ + (int)unaff_x23;
    param_2 = (ulong)uVar1;
    if ((int)uVar1 < *(int *)(unaff_x20 + 0x10)) goto LAB_04d0a10c;
    goto LAB_04d0a20c;
  }
  uVar1 = (int)unaff_x23 + 1;
  if (((unaff_w28 & 1) != 0) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
    unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
    unaff_x21 = unaff_x20;
  }
  if (in_stack_00000008 != (long *)0x0) {
    FUN_04c16478(in_stack_00000008,unaff_x20,unaff_w22,uVar1 - unaff_w22,0);
    unaff_w28 = true;
    param_1 = in_stack_00000018;
    unaff_w22 = uVar1;
    if (in_stack_00000018 != 0) {
      do {
        param_2 = (ulong)unaff_w22;
        if ((int)unaff_w22 < *(int *)(param_1 + 0x10)) {
LAB_04d0a10c:
          do {
            unaff_w24 = FUN_04cce264(param_1,param_2,(long)&stack0x00000000 + 4,0);
            unaff_x20 = param_1;
            unaff_x23 = param_2;
            if (4 < unaff_w24) goto code_r0x04d0a134;
            uVar1 = in_stack_00000000._4_4_ + (int)param_2;
            param_2 = (ulong)uVar1;
            unaff_w28 = unaff_w24 == 1 | unaff_w28;
          } while ((int)uVar1 < *(int *)(param_1 + 0x10));
        }
LAB_04d0a20c:
        iVar4 = (int)param_2;
        if (0 < (int)(iVar4 - unaff_w22)) {
          if (((unaff_w28 & 1) != 0) && (param_1 = unaff_x21, unaff_x21 == 0)) {
            param_1 = (**(code **)(*unaff_x19 + 0x1b8))();
            unaff_x21 = param_1;
          }
          if (in_stack_00000008 == (long *)0x0) break;
          FUN_04c16478(in_stack_00000008,param_1,unaff_w22,iVar4 - unaff_w22,0);
        }
        param_1 = in_stack_00000018;
        if (in_stack_00000018 == 0) break;
        if (*(int *)(in_stack_00000018 + 0x10) <= iVar4) goto LAB_04d0a290;
        param_2 = param_2 & 0xffffffff;
        do {
          iVar4 = FUN_04d0a4a0(&stack0x00000008,&stack0x00000018,param_2,in_stack_00000000._4_4_);
LAB_04d0a290:
          param_2 = (ulong)(iVar4 + 1U);
          if (*(int *)(param_1 + 0x10) <= (int)(iVar4 + 1U)) {
            if (in_stack_00000008 != (long *)0x0) {
              uVar6 = (**(code **)(*in_stack_00000008 + 0x168))
                                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
              return uVar6;
            }
            goto LAB_04d0a2dc;
          }
          iVar4 = FUN_04cce264(param_1,param_2,(long)&stack0x00000000 + 4,0);
          if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0x88));
          }
          uVar5 = FUN_04cfa424(iVar4,0);
        } while ((uVar5 & 1) == 0);
        iVar3 = FUN_04d0a328();
        unaff_w28 = iVar4 == 1;
        unaff_w22 = iVar3 + 1;
      } while( true );
    }
  }
LAB_04d0a2dc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


