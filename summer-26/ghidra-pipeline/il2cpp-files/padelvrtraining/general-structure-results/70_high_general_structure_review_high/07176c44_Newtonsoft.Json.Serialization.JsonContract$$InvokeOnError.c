/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnError
ENTRY_POINT: 07176c44
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Serialization_JsonContract__InvokeOnError(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
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
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x400));
  *(undefined1 *)(unaff_x23 + 0xfd4) = 1;
  lVar3 = *unaff_x26;
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
  if ((unaff_x19 < 0) || (unaff_w20 != 0)) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_0717ae9c();
    lVar3 = FUN_0712814c();
    iVar1 = *(int *)(unaff_x29 + -0x94);
    if (((uVar2 & 0xffdf) != 0x44) && ((uVar2 & 0xffdf) != 0x47 || 0 < iVar1)) {
      if ((uVar2 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0717ee30();
      }
      else {
        lVar4 = *unaff_x26;
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
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_0717f020();
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_06ff1388(unaff_x29 + -0xc0,&uStack_40,0x20,0);
        if ((uVar2 & 0xffff) == 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_0717b7ac(unaff_x29 + -0xc0,unaff_x29 + -0x90);
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_0717b21c(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar2,iVar1,lVar3,0);
        }
        FUN_06ff13c4(unaff_x29 + -0xc0,0);
      }
      goto LAB_07176d44;
    }
    if (unaff_x19 < 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_0717eb90();
      goto LAB_07176d44;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
  }
  else if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription();
LAB_07176d44:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


