/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnly
ENTRY_POINT: 017d134c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnly(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  do {
    if ((param_1 & 1) != 0) {
LAB_017d1360:
      return unaff_x21 & 0xffffffff;
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x22 == unaff_x21) {
      unaff_x21 = 0xffffffff;
      goto LAB_017d1360;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) {
LAB_017d1374:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(lVar1 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (unaff_x19 == 0) goto LAB_017d1374;
    param_1 = (**(code **)(unaff_x19 + 0x18))
                        (*(undefined8 *)(unaff_x19 + 0x40),
                         *(undefined8 *)(lVar1 + unaff_x21 * 8 + 0x20),
                         *(undefined8 *)(unaff_x19 + 0x28));
  } while( true );
}


