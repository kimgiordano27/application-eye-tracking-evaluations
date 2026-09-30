/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 0592e3e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

{
  ushort uVar1;
  undefined1 in_CY;
  uint uVar2;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  uint unaff_w27;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) break;
    unaff_w24 = unaff_w24 + 1;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_w21 == unaff_w24) {
LAB_0592e42c:
      if (unaff_w27 == 0) {
        uVar2 = 1;
        goto LAB_0592e3a4;
      }
      goto LAB_0592e470;
    }
    in_CY = unaff_w21 <= unaff_w24;
  }
  if (unaff_w21 <= unaff_w24) goto LAB_0592e42c;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_0592fca4();
  if ((uVar2 & 1) == 0) {
    unaff_x26 = 0;
  }
  if ((unaff_w27 & uVar2 & 1) == 0) goto LAB_0592e3a4;
LAB_0592e470:
  unaff_x26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
LAB_0592e3a4:
  *unaff_x19 = unaff_x26;
  return uVar2 & 1;
}


