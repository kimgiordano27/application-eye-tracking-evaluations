/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 07686ef0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
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
  
  if (*(char *)(unaff_x26 + 0xd5d) == '\0') {
    FUN_04077588(PTR_DAT_092d0348);
    param_1 = FUN_04077588(PTR_DAT_092d0108);
    *(undefined1 *)(unaff_x26 + 0xd5d) = 1;
  }
  if ((unaff_w21 == unaff_w22) &&
     ((unaff_w21 == 0 || (uVar1 = FUN_074ecdcc(), param_1 = extraout_s0, (uVar1 & 1) != 0)))) {
    param_1 = 0xff800000;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x68);
    if (*(char *)(unaff_x27 + 0xe54) == '\0') {
      param_1 = FUN_04077588(PTR_DAT_092b9c88);
      *(undefined1 *)(unaff_x27 + 0xe54) = 1;
    }
    iVar2 = 0;
    if (lVar3 != 0) {
      param_1 = FUN_074e3264(lVar3,0);
      iVar2 = *(int *)(lVar3 + 0x10);
    }
    if (*(char *)(unaff_x26 + 0xd5d) == '\0') {
      FUN_04077588(PTR_DAT_092d0348);
      param_1 = FUN_04077588(PTR_DAT_092d0108);
      *(undefined1 *)(unaff_x26 + 0xd5d) = 1;
    }
    if ((unaff_w21 != iVar2) ||
       ((unaff_w21 != 0 && (uVar1 = FUN_074ecdcc(), param_1 = extraout_s0_00, (uVar1 & 1) == 0)))) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        param_1 = thunk_FUN_040d65a8();
      }
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
        param_1 = FUN_07683a1c(0,0);
      }
      goto LAB_07687064;
    }
    param_1 = 0x7fc00000;
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_07687064:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


