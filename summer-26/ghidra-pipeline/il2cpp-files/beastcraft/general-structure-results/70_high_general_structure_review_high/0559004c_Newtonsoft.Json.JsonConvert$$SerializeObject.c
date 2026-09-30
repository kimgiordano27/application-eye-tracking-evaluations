/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0559004c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(int param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar7;
  int unaff_w23;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
  do {
    bVar1 = unaff_w23 == 1;
    iVar7 = param_1 + 1;
    while (iVar4 = iVar7, iVar7 < *(int *)(unaff_x20 + 0x10)) {
      while( true ) {
        while (uVar3 = FUN_055520f4(unaff_x20,iVar4,(long)&stack0x00000000 + 4,0), uVar3 < 5) {
          iVar4 = in_stack_00000000._4_4_ + iVar4;
          bVar1 = (bool)(uVar3 == 1 | bVar1);
          if (*(int *)(unaff_x20 + 0x10) <= iVar4) goto LAB_05590168;
        }
        sVar2 = FUN_05487524(unaff_x20,iVar4,0);
        if (sVar2 == 0x27) break;
        if (((unaff_w26 << (ulong)(uVar3 & 0x1f) & unaff_w27) != 0) ||
           (iVar4 = in_stack_00000000._4_4_ + iVar4, *(int *)(unaff_x20 + 0x10) <= iVar4))
        goto LAB_05590168;
      }
      if ((bVar1) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
        unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
        unaff_x21 = unaff_x20;
      }
      if (in_stack_00000008 == (long *)0x0) goto LAB_05590238;
      FUN_0549ac20(in_stack_00000008,unaff_x20,iVar7,(iVar4 + 1) - iVar7,0);
      bVar1 = true;
      unaff_x20 = in_stack_00000018;
      iVar7 = iVar4 + 1;
      if (in_stack_00000018 == 0) goto LAB_05590238;
    }
LAB_05590168:
    if (0 < iVar4 - iVar7) {
      if ((bVar1) && (unaff_x20 = unaff_x21, unaff_x21 == 0)) {
        unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
        unaff_x21 = unaff_x20;
      }
      if (in_stack_00000008 == (long *)0x0) {
LAB_05590238:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_0549ac20(in_stack_00000008,unaff_x20,iVar7,iVar4 - iVar7,0);
    }
    unaff_x20 = in_stack_00000018;
    if (in_stack_00000018 == 0) goto LAB_05590238;
    if (*(int *)(in_stack_00000018 + 0x10) <= iVar4) goto LAB_055901ec;
    do {
      iVar4 = FUN_055903fc(&stack0x00000008,&stack0x00000018,iVar4,in_stack_00000000._4_4_);
LAB_055901ec:
      iVar4 = iVar4 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= iVar4) {
        if (in_stack_00000008 != (long *)0x0) {
          uVar6 = (**(code **)(*in_stack_00000008 + 0x168))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
          return uVar6;
        }
        goto LAB_05590238;
      }
      unaff_w23 = FUN_055520f4(unaff_x20,iVar4,(long)&stack0x00000000 + 4,0);
      if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)(unaff_x25 + 0x88));
      }
      uVar5 = FUN_05580434(unaff_w23,0);
    } while ((uVar5 & 1) == 0);
    param_1 = FUN_05590284();
  } while( true );
}


