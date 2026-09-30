/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 074c301c
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart
               (undefined4 param_1)

{
  ulong uVar1;
  int iVar2;
  long unaff_x19;
  long lVar3;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  long in_stack_00000098;
  
  *(undefined1 *)(unaff_x26 + 7) = 1;
  if ((unaff_w21 == unaff_w22) &&
     ((unaff_w21 == 0 || (uVar1 = FUN_0732d940(), param_1 = extraout_s0, (uVar1 & 1) != 0)))) {
    param_1 = 0xff800000;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x68);
    if (*(char *)(unaff_x27 + 0x6f8) == '\0') {
      param_1 = FUN_03f13384(PTR_DAT_0910b618);
      *(undefined1 *)(unaff_x27 + 0x6f8) = 1;
    }
    iVar2 = 0;
    if (lVar3 != 0) {
      param_1 = FUN_07324190(lVar3,0);
      iVar2 = *(int *)(lVar3 + 0x10);
    }
    if (*(char *)(unaff_x26 + 7) == '\0') {
      FUN_03f13384(PTR_DAT_09129058);
      param_1 = FUN_03f13384(PTR_DAT_09120b00);
      *(undefined1 *)(unaff_x26 + 7) = 1;
    }
    if ((unaff_w21 != iVar2) ||
       ((unaff_w21 != 0 && (uVar1 = FUN_0732d940(), param_1 = extraout_s0_00, (uVar1 & 1) == 0)))) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        param_1 = thunk_FUN_03f6fea8();
      }
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
        param_1 = FUN_074bfb24(0,0);
      }
      goto LAB_074c316c;
    }
    param_1 = 0x7fc00000;
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_074c316c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


