/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 055900a8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  byte unaff_w28;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
code_r0x055900a8:
  if (((in_w8 & unaff_w27) == 0) &&
     (unaff_w23 = in_stack_00000000._4_4_ + unaff_w23, unaff_w23 < *(int *)(unaff_x20 + 0x10)))
  goto LAB_05590068;
LAB_05590168:
  do {
    if (0 < unaff_w23 - unaff_w22) {
      if (((unaff_w28 & 1) != 0) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
        unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
        unaff_x21 = unaff_x20;
      }
      if (in_stack_00000008 == (long *)0x0) goto LAB_05590238;
      FUN_0549ac20(in_stack_00000008,unaff_x20,unaff_w22,unaff_w23 - unaff_w22,0);
    }
    unaff_x20 = in_stack_00000018;
    if (in_stack_00000018 == 0) {
LAB_05590238:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(int *)(in_stack_00000018 + 0x10) <= unaff_w23) goto LAB_055901ec;
    do {
      unaff_w23 = FUN_055903fc(&stack0x00000008,&stack0x00000018,unaff_w23,in_stack_00000000._4_4_);
LAB_055901ec:
      unaff_w23 = unaff_w23 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w23) {
        if (in_stack_00000008 != (long *)0x0) {
          uVar6 = (**(code **)(*in_stack_00000008 + 0x168))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
          return uVar6;
        }
        goto LAB_05590238;
      }
      iVar2 = FUN_055520f4(unaff_x20,unaff_w23,(long)&stack0x00000000 + 4,0);
      if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)(unaff_x25 + 0x88));
      }
      uVar5 = FUN_05580434(iVar2,0);
    } while ((uVar5 & 1) == 0);
    iVar3 = FUN_05590284();
    unaff_w28 = iVar2 == 1;
    unaff_w22 = iVar3 + 1;
    while (unaff_w23 = unaff_w22, unaff_w22 < *(int *)(unaff_x20 + 0x10)) {
LAB_05590068:
      while (uVar4 = FUN_055520f4(unaff_x20,unaff_w23,(long)&stack0x00000000 + 4,0), uVar4 < 5) {
        unaff_w23 = in_stack_00000000._4_4_ + unaff_w23;
        unaff_w28 = uVar4 == 1 | unaff_w28;
        if (*(int *)(unaff_x20 + 0x10) <= unaff_w23) goto LAB_05590168;
      }
      sVar1 = FUN_05487524(unaff_x20,unaff_w23,0);
      if (sVar1 != 0x27) {
        in_w8 = unaff_w26 << (ulong)(uVar4 & 0x1f);
        goto code_r0x055900a8;
      }
      if (((unaff_w28 & 1) != 0) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
        unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
        unaff_x21 = unaff_x20;
      }
      if (in_stack_00000008 == (long *)0x0) goto LAB_05590238;
      FUN_0549ac20(in_stack_00000008,unaff_x20,unaff_w22,(unaff_w23 + 1) - unaff_w22,0);
      unaff_w28 = true;
      unaff_x20 = in_stack_00000018;
      unaff_w22 = unaff_w23 + 1;
      if (in_stack_00000018 == 0) goto LAB_05590238;
    }
  } while( true );
}


