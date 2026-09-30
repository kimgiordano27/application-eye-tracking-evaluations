/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 071742f0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings
               (long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int unaff_w19;
  undefined4 unaff_w21;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xb10));
  FUN_03d2d2b0(PTR_DAT_091dad78);
  FUN_03d2d2b0(PTR_DAT_091fa400);
  *(undefined1 *)(unaff_x23 + 0xfd2) = 1;
  lVar2 = *unaff_x26;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
  *(undefined8 *)(unaff_x27 + 0x72) = 0;
  *(undefined8 *)(unaff_x27 + 0x6a) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  if (unaff_w19 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    iVar4 = -1;
  }
  else {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar1 = FUN_0717ae9c();
    uVar3 = FUN_0712814c();
    iVar4 = *(int *)(unaff_x29 + -0x94);
    if (((uVar1 & 0xffdf) != 0x44) && ((uVar1 & 0xffdf) != 0x47 || 0 < iVar4)) {
      if ((uVar1 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0717e2e0(unaff_w21,uVar1 - 0x21,iVar4);
      }
      else {
        lVar2 = *unaff_x26;
        *(undefined8 *)(unaff_x27 + 0x72) = 0;
        *(undefined8 *)(unaff_x27 + 0x6a) = 0;
        *(undefined8 *)(unaff_x29 + -0x38) = 0;
        *(undefined8 *)(unaff_x29 + -0x40) = 0;
        *(undefined8 *)(unaff_x29 + -0x28) = 0;
        *(undefined8 *)(unaff_x29 + -0x30) = 0;
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(undefined8 *)(unaff_x29 + -0x48) = 0;
        *(undefined8 *)(unaff_x29 + -0x50) = 0;
        *(undefined8 *)(unaff_x29 + -0x78) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0718691c(unaff_w21,unaff_x29 + -0x90,0);
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_06ff1388(unaff_x29 + -0xc0,&uStack_40,0x20,0);
        if ((uVar1 & 0xffff) == 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_0717b7ac(unaff_x29 + -0xc0,unaff_x29 + -0x90);
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_0717b21c(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar1,iVar4,uVar3,0);
        }
        FUN_06ff13c4(unaff_x29 + -0xc0,0);
      }
      goto LAB_071743fc;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
  }
  FUN_0717dfa4(unaff_w21,iVar4);
LAB_071743fc:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


