/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 07406c7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange
               (long param_1,undefined4 param_2,long param_3)

{
  undefined1 in_ZR;
  ulong in_x9;
  ulong in_x10;
  long in_x11;
  undefined4 *in_x12;
  undefined4 *in_x13;
  ulong uVar1;
  undefined8 *unaff_x19;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  while( true ) {
    *in_x12 = param_2;
    if ((bool)in_ZR) {
      uStack000000000000000c = 0;
      uStack0000000000000014 = 0;
      FUN_085e9668(*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                   *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 8),
                   *(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10),
                   *(undefined4 *)(param_3 + 0x14));
      *(ulong *)((long)unaff_x19 + 0x14) = (ulong)uStack0000000000000014;
      *(ulong *)((long)unaff_x19 + 0xc) = (ulong)uStack000000000000000c;
      unaff_x19[1] = (ulong)uStack000000000000000c << 0x20;
      *unaff_x19 = 0;
      return;
    }
    if (in_x11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = (ulong)*(uint *)(in_x11 + 0x18);
    if ((uVar1 <= in_x9) || (*(uint *)(param_1 + 0x18) <= in_x10)) break;
    in_x12[1] = in_x13[-3];
    if (uVar1 <= in_x9 + 1) break;
    in_x12[2] = in_x13[-2];
    if (uVar1 <= in_x9 + 2) break;
    in_x12[3] = in_x13[-1];
    if (uVar1 <= in_x9 + 3) break;
    param_2 = *in_x13;
    in_x10 = in_x10 + 1;
    in_ZR = in_x10 == 0x18;
    in_x9 = in_x9 + 4;
    in_x12 = in_x12 + 4;
    in_x13 = in_x13 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


