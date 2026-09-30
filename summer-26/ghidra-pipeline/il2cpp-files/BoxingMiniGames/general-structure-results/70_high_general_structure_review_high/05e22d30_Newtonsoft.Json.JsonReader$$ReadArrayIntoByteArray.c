/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 05e22d30
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


uint Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  uint unaff_w28;
  
  while( true ) {
    if (unaff_w21 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) break;
    unaff_w24 = unaff_w24 + 1;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_w21 == unaff_w24) {
LAB_05e22d7c:
      if (unaff_w28 == 0) {
        uVar2 = 1;
      }
      else {
LAB_05e22dc8:
        unaff_x26 = 0;
        uVar2 = 0;
        *unaff_x20 = 1;
      }
LAB_05e22c04:
      *unaff_x19 = unaff_x26;
      return uVar2 & 1;
    }
  }
  if (unaff_w24 < unaff_w21) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_05e246c8();
    if ((uVar2 & 1) == 0) {
      unaff_x26 = 0;
    }
    if ((uVar2 & 1 & unaff_w28) == 0) goto LAB_05e22c04;
    goto LAB_05e22dc8;
  }
  goto LAB_05e22d7c;
}


