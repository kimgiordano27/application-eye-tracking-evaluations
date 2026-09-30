/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 0675bd24
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
               (long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint in_w9;
  int in_w10;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar3;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  uint uVar4;
  
  if (*(int *)(param_1 + unaff_x27 * 4 + 0x20) == 0xff) {
    uVar4 = 0;
LAB_0675bd44:
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (((int)unaff_x27 - 9U < 5) || ((int)unaff_x27 == 0x20)) {
      if ((unaff_w23 >> 1 & 1) == 0) {
        unaff_x26 = 0;
        uVar2 = 0;
        goto LAB_0675bc44;
      }
      uVar2 = unaff_w24 + 1;
      if ((int)uVar2 < (int)unaff_w21) {
        puVar3 = (ushort *)(unaff_x22 + (long)(int)uVar2 * 2);
        do {
          if (unaff_w21 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar1 = *puVar3;
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675bdb4;
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (unaff_w21 != uVar2);
      }
      else {
LAB_0675bdb4:
        if (uVar2 < unaff_w21) goto LAB_0675bdd8;
      }
      if (uVar4 == 0) {
        uVar2 = 1;
        goto LAB_0675bc44;
      }
    }
    else {
LAB_0675bdd8:
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_0675d708();
      if ((uVar2 & 1) == 0) {
        unaff_x26 = 0;
      }
      if ((uVar2 & 1 & uVar4) == 0) goto LAB_0675bc44;
    }
  }
  else {
    unaff_w24 = in_w10 + 0x11;
    if (unaff_w24 < unaff_w21) {
      do {
        uVar1 = *(ushort *)(unaff_x22 + (long)(int)unaff_w24 * 2);
        unaff_x27 = (ulong)uVar1;
        if ((in_w9 <= uVar1) || (*(int *)(param_1 + unaff_x27 * 4 + 0x20) == 0xff)) {
          uVar4 = 1;
          goto LAB_0675bd44;
        }
        unaff_w24 = unaff_w24 + 1;
      } while (unaff_w21 != unaff_w24);
    }
  }
  unaff_x26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
LAB_0675bc44:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


