/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 070ff034
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext
               (ulong param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int unaff_w20;
  undefined8 uVar5;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea1b30);
    FUN_03c8f898(PTR_DAT_08e9bbb8);
    FUN_03c8f898(PTR_DAT_08e9c1c8);
    *(undefined1 *)(unaff_x23 + 0x1e2) = 1;
  }
  lVar2 = *unaff_x26;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
  *(undefined8 *)(unaff_x29 + -0x1e) = 0;
  *(undefined8 *)(unaff_x29 + -0x26) = 0;
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
  if ((param_2 < 0) || (unaff_w20 != 0)) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_07103a7c(param_3);
    lVar2 = FUN_070b1710();
    iVar4 = *(int *)(unaff_x29 + -0x94);
    if (((uVar1 & 0xffdf) != 0x44) && ((uVar1 & 0xffdf) != 0x47 || 0 < iVar4)) {
      if ((uVar1 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_07107a10(param_2,uVar1 - 0x21,iVar4);
      }
      else {
        lVar3 = *unaff_x26;
        *(undefined8 *)(unaff_x29 + -0x1e) = 0;
        *(undefined8 *)(unaff_x29 + -0x26) = 0;
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
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_07107c00(param_2,unaff_x29 + -0x90);
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_06f92200(unaff_x29 + -0xc0,&uStack_40,0x20,0);
        if ((uVar1 & 0xffff) == 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_0710438c(unaff_x29 + -0xc0,unaff_x29 + -0x90,param_3);
        }
        else {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_07103dfc(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar1,iVar4,lVar2,0);
        }
        FUN_06f9223c(unaff_x29 + -0xc0,0);
      }
      goto LAB_070ff160;
    }
    if (param_2 < 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_07107770(param_2,iVar4,uVar5);
      goto LAB_070ff160;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
  }
  else {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar4 = -1;
  }
  FUN_07107518(param_2,iVar4);
LAB_070ff160:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


