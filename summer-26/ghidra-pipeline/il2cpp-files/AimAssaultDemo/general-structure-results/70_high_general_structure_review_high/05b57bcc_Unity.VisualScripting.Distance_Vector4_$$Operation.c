/*
FUNCTION_NAME: Unity.VisualScripting.Distance<Vector4>$$Operation
ENTRY_POINT: 05b57bcc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Distance<Vector4>__Operation(undefined1 param_1 [16])

{
  long lVar1;
  ulong uVar2;
  long in_x9;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long lStack0000000000000000;
  long lStack0000000000000008;
  long lStack0000000000000010;
  long lStack0000000000000020;
  long lStack0000000000000028;
  long lStack0000000000000030;
  
  lStack0000000000000008 = param_1._8_8_;
  lStack0000000000000000 = param_1._0_8_;
  while( true ) {
    lStack0000000000000010 = in_x9;
    lStack0000000000000020 = lStack0000000000000000;
    lStack0000000000000028 = lStack0000000000000008;
    lStack0000000000000030 = in_x9;
    System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IDictionary_GetEnumerator
              ();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
      *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar1 = FUN_061df528(0);
      if (lVar1 != 0) {
        FUN_058ba65c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    if (uVar2 <= unaff_x23) break;
    if (*unaff_x24 == 0) {
      FUN_06263e4c(0x11,0);
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    }
    if (uVar2 <= unaff_x23) break;
    in_x9 = unaff_x24[3];
    lStack0000000000000008 = unaff_x24[2];
    lStack0000000000000000 = unaff_x24[1];
    unaff_x24 = unaff_x24 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


