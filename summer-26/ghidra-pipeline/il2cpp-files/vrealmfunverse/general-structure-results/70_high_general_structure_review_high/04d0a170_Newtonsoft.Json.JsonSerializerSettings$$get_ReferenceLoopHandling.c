/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 04d0a170
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  byte unaff_w28;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
code_r0x04d0a170:
  unaff_w23 = in_w8 + unaff_w23;
  unaff_w28 = unaff_w24 == 1 | unaff_w28;
  if (unaff_w23 < *(int *)(unaff_x20 + 0x10)) goto LAB_04d0a10c;
LAB_04d0a20c:
  do {
    if (0 < unaff_w23 - unaff_w22) {
      if (((unaff_w28 & 1) != 0) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
        unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
        unaff_x21 = unaff_x20;
      }
      if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
      FUN_04c16478(in_stack_00000008,unaff_x20,unaff_w22,unaff_w23 - unaff_w22,0);
    }
    unaff_x20 = in_stack_00000018;
    if (in_stack_00000018 == 0) {
LAB_04d0a2dc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(in_stack_00000018 + 0x10) <= unaff_w23) goto LAB_04d0a290;
    do {
      unaff_w23 = FUN_04d0a4a0(&stack0x00000008,&stack0x00000018,unaff_w23,in_stack_00000000._4_4_);
LAB_04d0a290:
      unaff_w23 = unaff_w23 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w23) {
        if (in_stack_00000008 != (long *)0x0) {
          uVar5 = (**(code **)(*in_stack_00000008 + 0x168))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
          return uVar5;
        }
        goto LAB_04d0a2dc;
      }
      iVar2 = FUN_04cce264(unaff_x20,unaff_w23,(long)&stack0x00000000 + 4,0);
      if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0x88));
      }
      uVar4 = FUN_04cfa424(iVar2,0);
    } while ((uVar4 & 1) == 0);
    iVar3 = FUN_04d0a328();
    unaff_w28 = iVar2 == 1;
    unaff_w22 = iVar3 + 1;
    while (unaff_w23 = unaff_w22, unaff_w22 < *(int *)(unaff_x20 + 0x10)) {
LAB_04d0a10c:
      while( true ) {
        unaff_w24 = FUN_04cce264(unaff_x20,unaff_w23,(long)&stack0x00000000 + 4,0);
        in_w8 = in_stack_00000000._4_4_;
        if (unaff_w24 < 5) goto code_r0x04d0a170;
        sVar1 = FUN_04c045f0(unaff_x20,unaff_w23,0);
        if (sVar1 == 0x27) break;
        if (((unaff_w26 << (ulong)(unaff_w24 & 0x1f) & unaff_w27) != 0) ||
           (unaff_w23 = in_stack_00000000._4_4_ + unaff_w23, *(int *)(unaff_x20 + 0x10) <= unaff_w23
           )) goto LAB_04d0a20c;
      }
      if (((unaff_w28 & 1) != 0) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
        unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
        unaff_x21 = unaff_x20;
      }
      if (in_stack_00000008 == (long *)0x0) goto LAB_04d0a2dc;
      FUN_04c16478(in_stack_00000008,unaff_x20,unaff_w22,(unaff_w23 + 1) - unaff_w22,0);
      unaff_w28 = true;
      unaff_x20 = in_stack_00000018;
      unaff_w22 = unaff_w23 + 1;
      if (in_stack_00000018 == 0) goto LAB_04d0a2dc;
    }
  } while( true );
}


