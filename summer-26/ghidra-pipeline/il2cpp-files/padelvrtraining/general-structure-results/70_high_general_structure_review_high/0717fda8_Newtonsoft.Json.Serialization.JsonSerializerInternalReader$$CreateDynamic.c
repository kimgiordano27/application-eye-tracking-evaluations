/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 0717fda8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic
               (undefined1 param_1 [16],long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  long *unaff_x19;
  int unaff_w22;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar5 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  *(undefined8 *)(in_x9 + 0x72) = uVar5;
  *(undefined8 *)(in_x9 + 0x6a) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x98) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar3;
  *(undefined8 *)(unaff_x29 + -200) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
  if (unaff_w22 == 0) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_0717ae9c();
    uVar3 = FUN_0712814c();
    iVar1 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) != 0x44) && ((uVar2 & 0xffdf) != 0x47 || 0 < iVar1)) {
      if ((uVar2 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar2 = FUN_0717f718();
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xd8) = uVar3;
        lVar4 = *unaff_x19;
        *(undefined8 *)(unaff_x29 + -0x2e) = 0;
        *(undefined8 *)(unaff_x29 + -0x36) = 0;
        *(undefined8 *)(unaff_x29 + -0x48) = 0;
        *(undefined8 *)(unaff_x29 + -0x50) = 0;
        *(undefined8 *)(unaff_x29 + -0x38) = 0;
        *(undefined8 *)(unaff_x29 + -0x40) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined8 *)(unaff_x29 + -0x78) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0717fb7c();
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_06ff1388(unaff_x29 + -0xd0,&uStack_40,0x20,0);
        if ((uVar2 & 0xffff) == 0) {
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_0717b7ac(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
        }
        else {
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_0717b21c(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar1,
                       *(undefined8 *)(unaff_x29 + -0xd8),0);
        }
        uVar2 = FUN_06ff1490(unaff_x29 + -0xd0);
      }
      goto LAB_0717fe9c;
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
  }
  uVar2 = FUN_0717f1c8();
LAB_0717fe9c:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


