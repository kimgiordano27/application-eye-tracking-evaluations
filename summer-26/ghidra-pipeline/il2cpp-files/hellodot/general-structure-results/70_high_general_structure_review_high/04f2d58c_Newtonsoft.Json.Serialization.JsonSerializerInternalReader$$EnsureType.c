/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 04f2d58c
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int in_w8;
  long unaff_x19;
  int unaff_w22;
  int unaff_w23;
  undefined8 uVar6;
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
  
  if ((unaff_w22 < 0) || (unaff_w23 != 0)) {
    if (in_w8 == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = FUN_04f33bec();
    lVar3 = FUN_04ee855c();
    iVar5 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) != 0x44) && ((uVar2 & 0xffdf) != 0x47 || 0 < iVar5)) {
      if ((uVar2 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar2 = FUN_04f37514(unaff_w22,uVar2 - 0x21,iVar5);
      }
      else {
        lVar4 = *unaff_x27;
        *(undefined8 *)(unaff_x19 + 0x72) = 0;
        *(undefined8 *)(unaff_x19 + 0x6a) = 0;
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
          thunk_FUN_02cd038c();
        }
        FUN_04f3f268(unaff_w22,unaff_x29 + -0xa0,0);
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_04dd502c(unaff_x29 + -0xd0,&uStack_40,0x20,0);
        if ((uVar2 & 0xffff) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04f344fc(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
        }
        else {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04f33f6c(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar5,
                       *(undefined8 *)(unaff_x29 + -0xe0),0);
        }
        uVar2 = FUN_04dd5134(unaff_x29 + -0xd0);
      }
      goto LAB_04f2d66c;
    }
    if (unaff_w22 < 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar2 = FUN_04f3732c(unaff_w22,iVar5,uVar6);
      goto LAB_04f2d66c;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
  }
  else {
    if (in_w8 == 0) {
      thunk_FUN_02cd038c();
    }
    iVar5 = -1;
  }
  uVar2 = FUN_04f37168(unaff_w22,iVar5);
LAB_04f2d66c:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


