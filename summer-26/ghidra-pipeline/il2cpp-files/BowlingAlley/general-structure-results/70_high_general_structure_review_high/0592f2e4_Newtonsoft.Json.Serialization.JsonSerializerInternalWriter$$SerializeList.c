/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 0592f2e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  uint unaff_w20;
  ushort *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  undefined1 *unaff_x27;
  uint unaff_w28;
  long *unaff_x29;
  
  do {
    thunk_FUN_032cd7c0();
    do {
      if ((4 < unaff_w20 - 9) && (unaff_w20 != 0x20)) {
        if (unaff_w24 < unaff_w23) {
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar1 = FUN_0592fca4();
          if ((uVar1 & 1) == 0) {
            unaff_x26 = 0;
            uVar2 = 0;
            goto LAB_0592f368;
          }
        }
        unaff_w28 = unaff_w28 & 1;
LAB_0592f390:
        if (((unaff_w28 & 1) == 0) && ((unaff_w25 & 1) != 0 || unaff_x26 == 0)) {
          uVar2 = 1;
        }
        else {
          unaff_x26 = 0;
          uVar2 = 0;
          *unaff_x27 = 1;
        }
LAB_0592f368:
        *unaff_x19 = unaff_x26;
        return uVar2;
      }
      unaff_w24 = unaff_w24 + 1;
      unaff_x22 = unaff_x22 + 1;
      if (unaff_w23 == unaff_w24) goto LAB_0592f390;
      if (unaff_w23 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      unaff_w20 = (uint)*unaff_x22;
    } while (*(int *)(*unaff_x29 + 0xe0) != 0);
  } while( true );
}


