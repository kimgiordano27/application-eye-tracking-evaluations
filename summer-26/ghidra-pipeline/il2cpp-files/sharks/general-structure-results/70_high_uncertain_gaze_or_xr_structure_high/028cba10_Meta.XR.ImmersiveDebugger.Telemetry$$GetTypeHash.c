/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 028cba10
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long in_stack_00000000;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
  if (lVar1 != 0) {
                    /* try { // try from 028cba38 to 029cba7f has its CatchHandler @ 028cba38
                       catch() { ... } // from try @ 028cba38 with catch @ 028cba38
                       catch() { ... } // from try @ 028cbae4 with catch @ 028cba38
                       catch() { ... } // from try @ 028cbb14 with catch @ 028cba38
                       catch() { ... } // from try @ 028cbb90 with catch @ 028cba38 */
    uVar2 = FUN_02171fa4(lVar1,*unaff_x19,unaff_x19[1]);
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000000 == 0) goto LAB_028cba84;
      (**(code **)(in_stack_00000000 + 0x18))
                (*(undefined8 *)(in_stack_00000000 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000000 + 0x28));
    }
    return 1;
  }
LAB_028cba84:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


