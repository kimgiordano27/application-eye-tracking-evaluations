/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 0500acc4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar2 + 0x28);
  puVar3 = PTR_DAT_06656a10;
  if ((DAT_06a4f068 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06656a10);
    FUN_02d4dc40(PTR_DAT_06650830);
    FUN_02d4dc40(PTR_DAT_06650cd8);
    DAT_06a4f068 = 1;
  }
  lVar5 = *(long *)puVar3;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  iVar8 = *(int *)(lVar5 + 0xe4);
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  if ((int)param_3 == 0) {
    if (iVar8 == 0) {
      thunk_FUN_02dabd98();
    }
    if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      iVar8 = -1;
LAB_0500ae58:
      uVar7 = FUN_05009fec(param_1,iVar8,param_5,param_6,*(undefined8 *)(unaff_x29 + -0xd8));
      return uVar7;
    }
  }
  else {
    if (iVar8 == 0) {
      thunk_FUN_02dabd98();
    }
    uVar4 = FUN_050059a8(param_2,param_3,unaff_x29 + -0xa4);
    uVar6 = FUN_04f8cbd4(param_4,0);
    iVar8 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar4 & 0xffdf) == 0x44) || ((uVar4 & 0xffdf) == 0x47 && iVar8 < 1)) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x18)) goto LAB_0500ae58;
    }
    else if ((uVar4 & 0xffdf) == 0x58) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        uVar7 = FUN_0500a5e0(param_1,uVar4 - 0x21,iVar8,param_5,param_6,
                             *(undefined8 *)(unaff_x29 + -0xd8));
        return uVar7;
      }
    }
    else {
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
      iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
      *(undefined8 *)(unaff_x29 + -0x2e) = 0;
      *(undefined8 *)(unaff_x29 + -0x36) = 0;
      *(undefined8 *)(unaff_x29 + -0x88) = 0;
      *(undefined8 *)(unaff_x29 + -0x90) = 0;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(undefined8 *)(unaff_x29 + -0x80) = 0;
      *(undefined8 *)(unaff_x29 + -0x68) = 0;
      *(undefined8 *)(unaff_x29 + -0x70) = 0;
      *(undefined8 *)(unaff_x29 + -0x58) = 0;
      *(undefined8 *)(unaff_x29 + -0x60) = 0;
      *(undefined8 *)(unaff_x29 + -0x48) = 0;
      *(undefined8 *)(unaff_x29 + -0x50) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x98) = 0;
      *(undefined8 *)(unaff_x29 + -0xa0) = 0;
      if (iVar1 == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_0500aae8(param_1,unaff_x29 + -0xa0);
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      FUN_04e98268(unaff_x29 + -0xd0,&uStack_40,0x20,0);
      if ((uVar4 & 0xffff) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_050062f0(unaff_x29 + -0xd0,unaff_x29 + -0xa0,param_2,param_3,
                     *(undefined8 *)(unaff_x29 + -0xe0));
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05005d24(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar4,iVar8,
                     *(undefined8 *)(unaff_x29 + -0xe0),0);
      }
      uVar4 = FUN_04e98370(unaff_x29 + -0xd0,param_5,param_6,*(undefined8 *)(unaff_x29 + -0xd8),0);
      if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return (ulong)(uVar4 & 1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


