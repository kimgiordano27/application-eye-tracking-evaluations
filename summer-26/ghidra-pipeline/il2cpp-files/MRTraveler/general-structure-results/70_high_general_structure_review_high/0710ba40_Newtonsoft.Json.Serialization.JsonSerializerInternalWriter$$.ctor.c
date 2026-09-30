/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 0710ba40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0710bc84) */

uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  ushort *puVar3;
  int unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  int unaff_w28;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if ((unaff_w28 - 9U < 5) || (unaff_w28 == 0x20)) {
    if ((unaff_w23 >> 1 & 1) == 0) {
      unaff_x26 = 0;
      uVar2 = 0;
      goto LAB_0710bbb8;
    }
    uVar2 = unaff_w24 + 1;
    if ((int)uVar2 < (int)unaff_w21) {
      puVar3 = (ushort *)(unaff_x22 + (long)(int)uVar2 * 2);
      do {
        if (unaff_w21 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar1 = *puVar3;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0710bc38;
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (unaff_w21 != uVar2);
    }
    else {
LAB_0710bc38:
      if (uVar2 < unaff_w21) goto LAB_0710bc54;
    }
    uVar2 = 1;
  }
  else {
LAB_0710bc54:
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_0710d4b8();
    if ((uVar2 & 1) == 0) {
      unaff_x26 = 0;
    }
  }
LAB_0710bbb8:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


