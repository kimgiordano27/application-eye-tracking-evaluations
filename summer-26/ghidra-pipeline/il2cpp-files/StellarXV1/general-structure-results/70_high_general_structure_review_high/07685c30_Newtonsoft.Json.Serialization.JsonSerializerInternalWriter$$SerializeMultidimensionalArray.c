/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 07685c30
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
          (ushort *param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  uint unaff_w28;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000028;
  
  do {
    lVar1 = FUN_07685eec(param_1);
    if (lVar1 == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar1 = FUN_07685eec(unaff_x26);
      param_1 = unaff_x26;
      if (lVar1 == 0) goto LAB_07685c84;
      FUN_0768866c(in_stack_00000028,1,0);
    }
    unaff_w19 = unaff_w19 | 1;
    param_1 = (ushort *)(lVar1 - 2);
    while( true ) {
      do {
        param_1 = param_1 + 1;
        unaff_w28 = 0;
        if (param_1 < unaff_x24) {
          unaff_w28 = (uint)*param_1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
      } while (((unaff_w23 >> 1 & 1) != 0) && (unaff_w28 == 0x20 || 0xfffffffa < unaff_w28 - 0xe));
      if (((unaff_w23 >> 3 & 1) != 0) && ((unaff_w19 & 1) == 0)) break;
LAB_07685c84:
      if ((unaff_w28 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
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
          *in_stack_00000000 = (ulong)param_1;
          return uVar2;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar1 = FUN_07685eec(param_1);
        if (lVar1 == 0) goto LAB_07685ce0;
        unaff_x25 = 0;
        param_1 = (ushort *)(lVar1 - 2);
      }
    }
    unaff_x26 = param_1;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
  } while( true );
}


