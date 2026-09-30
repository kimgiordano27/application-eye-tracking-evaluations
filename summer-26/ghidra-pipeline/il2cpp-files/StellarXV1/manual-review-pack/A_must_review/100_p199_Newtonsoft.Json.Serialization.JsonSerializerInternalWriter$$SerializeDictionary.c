/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 07685ec0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(void)

{
  bool in_CY;
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint uVar3;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000028;
  
  if (in_CY) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*unaff_x26;
  }
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (uVar3 != 0x20 && uVar3 - 0xe < 0xfffffffb)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_07685c84:
        if ((uVar3 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_07685ce0:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000008 & 0x100000000) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_0768866c(in_stack_00000028,0,0);
                }
              }
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
            *in_stack_00000000 = (ulong)unaff_x26;
            return uVar2;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar1 = FUN_07685eec(unaff_x26);
          if (lVar1 == 0) goto LAB_07685ce0;
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar1 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar1 = FUN_07685eec(unaff_x26);
        if (lVar1 == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar1 = FUN_07685eec(unaff_x26);
          if (lVar1 == 0) goto LAB_07685c84;
          FUN_0768866c(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar1 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    uVar3 = 0;
    if (unaff_x26 < unaff_x24) {
      uVar3 = (uint)*unaff_x26;
    }
  } while( true );
}


