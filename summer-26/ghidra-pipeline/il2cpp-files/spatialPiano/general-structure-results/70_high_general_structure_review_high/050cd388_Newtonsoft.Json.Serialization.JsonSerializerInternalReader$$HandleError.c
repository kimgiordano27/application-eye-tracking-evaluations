/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 050cd388
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(void)

{
  int iVar1;
  ushort uVar2;
  undefined1 in_CY;
  uint in_w8;
  uint in_w9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int iVar3;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    iVar1 = unaff_w25;
    if ((bool)in_CY) {
      iVar1 = unaff_w29;
    }
    iVar3 = unaff_w23;
    if (unaff_w23 != iVar1) break;
    if (9 < in_w9) {
      unaff_w24 = unaff_w24 + 1;
      break;
    }
    if (unaff_w24 == 8) {
      unaff_w24 = 9;
      iVar3 = 1;
      break;
    }
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      unaff_w22 = in_w8 + unaff_w22 * unaff_w28 + -0x30;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((*(byte *)(unaff_x27 + 0xb21) & 1) == 0) {
        FUN_02f08768(PTR_DAT_067d5bb0);
        *(undefined1 *)(unaff_x27 + 0xb21) = 1;
      }
      if ((int)*(uint *)(unaff_x20 + 1) <= unaff_w21 + unaff_w24) {
        iVar3 = 3;
        if (unaff_w24 != 0) {
          iVar3 = unaff_w23;
        }
        goto LAB_050cd3f0;
      }
      unaff_w21 = (int)unaff_x20[2];
      if (*(uint *)(unaff_x20 + 1) <= (uint)(unaff_w24 + unaff_w21)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar2 = *(ushort *)(*unaff_x20 + (long)(unaff_w24 + unaff_w21) * 2);
      in_w8 = (uint)uVar2;
      in_w9 = uVar2 - 0x30;
      if (unaff_w24 != 0) break;
      if (9 < in_w9) {
        unaff_w24 = 1;
        iVar3 = 4;
        goto LAB_050cd3f0;
      }
      unaff_w23 = 2;
    }
    in_CY = 9 < in_w9;
  }
LAB_050cd3f0:
  *(int *)(unaff_x19 + 3) = iVar3;
  *(int *)((long)unaff_x19 + 0x1c) = unaff_w22;
  *(undefined4 *)(unaff_x19 + 2) = in_stack_00000008._4_4_;
  *(int *)((long)unaff_x19 + 0x14) = unaff_w24;
  unaff_x19[1] = in_stack_00000018;
  *unaff_x19 = in_stack_00000010;
  return;
}


