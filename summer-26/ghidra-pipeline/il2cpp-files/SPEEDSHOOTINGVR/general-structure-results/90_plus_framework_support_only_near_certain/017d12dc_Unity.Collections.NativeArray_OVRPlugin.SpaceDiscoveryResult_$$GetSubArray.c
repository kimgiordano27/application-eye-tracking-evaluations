/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetSubArray
ENTRY_POINT: 017d12dc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetSubArray(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong uVar3;
  int unaff_w22;
  
  if ((unaff_w22 < 0) || (*(int *)(unaff_x20 + 0x18) - unaff_w22 < unaff_w21)) {
    FUN_01d69854(0);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d5a4a0(8,0);
  }
  if (unaff_w21 < unaff_w22 + unaff_w21) {
    uVar3 = (ulong)unaff_w21;
    do {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 == 0) {
LAB_017d1374:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (unaff_x19 == 0) goto LAB_017d1374;
      uVar1 = (**(code **)(unaff_x19 + 0x18))
                        (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20)
                         ,*(undefined8 *)(unaff_x19 + 0x28));
      if ((uVar1 & 1) != 0) goto LAB_017d1360;
      uVar3 = uVar3 + 1;
    } while ((long)(unaff_w22 + unaff_w21) != uVar3);
  }
  uVar3 = 0xffffffff;
LAB_017d1360:
  return uVar3 & 0xffffffff;
}


