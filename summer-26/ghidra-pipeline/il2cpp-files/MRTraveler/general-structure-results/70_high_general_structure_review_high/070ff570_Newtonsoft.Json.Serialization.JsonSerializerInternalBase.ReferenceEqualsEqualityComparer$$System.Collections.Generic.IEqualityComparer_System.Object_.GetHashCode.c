/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode
ENTRY_POINT: 070ff570
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_GetHashCode
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
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
    *(undefined1 *)(unaff_x26 + 0x1e3) = 1;
  }
  lVar3 = *unaff_x27;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
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
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  if ((param_2 < 0) || ((int)param_4 != 0)) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_07103a7c(param_3,param_4,unaff_x29 + -0xa4);
    lVar3 = FUN_070b1710();
    iVar5 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) != 0x44) && ((uVar2 & 0xffdf) != 0x47 || 0 < iVar5)) {
      if ((uVar2 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar2 = FUN_071082f8(param_2,uVar2 - 0x21,iVar5);
      }
      else {
        lVar4 = *unaff_x27;
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
        iVar1 = *(int *)(lVar4 + 0xe0);
        *(long *)(unaff_x29 + -0xe0) = lVar3;
        if (iVar1 == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_07107c00(param_2,unaff_x29 + -0xa0);
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_06f92200(unaff_x29 + -0xd0,&uStack_40,0x20,0);
        if ((uVar2 & 0xffff) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_0710438c(unaff_x29 + -0xd0,unaff_x29 + -0xa0,param_3,param_4,
                       *(undefined8 *)(unaff_x29 + -0xe0));
        }
        else {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_07103dfc(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar5,
                       *(undefined8 *)(unaff_x29 + -0xe0),0);
        }
        uVar2 = FUN_06f92308(unaff_x29 + -0xd0);
      }
      goto LAB_070ff6b8;
    }
    if (param_2 < 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar2 = FUN_0710802c(param_2,iVar5,uVar6);
      goto LAB_070ff6b8;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar5 = -1;
  }
  uVar2 = FUN_07107da8(param_2,iVar5);
LAB_070ff6b8:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


