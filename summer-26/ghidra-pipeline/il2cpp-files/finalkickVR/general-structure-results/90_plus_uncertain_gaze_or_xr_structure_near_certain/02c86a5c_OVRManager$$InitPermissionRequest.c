/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 02c86a5c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined4
OVRManager__InitPermissionRequest
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  long unaff_x29;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  
  uStack00000000000000a4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline()
  ;
  uStack0000000000000050 = (undefined4)*in_stack_00000008;
  uStack0000000000000054 = (undefined4)((ulong)*in_stack_00000008 >> 0x20);
  uStack0000000000000040 = (undefined4)*(undefined8 *)(unaff_x29 + -0x58);
  uStack0000000000000044 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x58) >> 0x20);
  uStack00000000000000ac = param_3;
  uStack000000000000005c =
       Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline
                 (uStack0000000000000050,uStack0000000000000054,param_3,uStack0000000000000040,
                  uStack0000000000000044,*(undefined4 *)(unaff_x29 + -0x50),in_stack_00000010);
  uVar2 = *(undefined4 *)(unaff_x29 + -0xa8);
  uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x29 + -0xb0);
  uStack000000000000002c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0xb0) >> 0x20);
  uStack0000000000000064 = param_3;
  uVar1 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                    (uStack0000000000000028,uStack000000000000002c,uVar2,uStack000000000000005c,
                     uStack0000000000000054,param_3,in_stack_00000010);
  *(ulong *)(unaff_x29 + -0x10) = CONCAT44(uStack000000000000002c,uVar1);
  *(undefined4 *)(unaff_x29 + -8) = uVar2;
  return *(undefined4 *)(unaff_x29 + -0x10);
}


