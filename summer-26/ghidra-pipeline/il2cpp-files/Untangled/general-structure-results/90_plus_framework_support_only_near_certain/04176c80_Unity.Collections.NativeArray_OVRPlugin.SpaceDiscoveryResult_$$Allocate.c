/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 04176c80
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate(void)

{
  undefined8 *puVar1;
  char in_NG;
  char in_OV;
  int in_w8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    if ((in_NG == in_OV) || (unaff_w21 != in_w8)) {
      if (unaff_w21 != in_w8) {
        FUN_0562330c(0);
      }
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    puVar1 = (undefined8 *)(lVar2 + unaff_x23);
    if (unaff_x19 == 0) break;
    in_stack_00000020 = *puVar1;
    in_stack_00000028 = puVar1[1];
    in_stack_00000030 = puVar1[2];
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x28))
    ;
    in_w8 = *(int *)(unaff_x20 + 0x1c);
    unaff_x22 = unaff_x22 + 1;
    in_OV = SBORROW8(unaff_x22,(long)*(int *)(unaff_x20 + 0x18));
    in_NG = (long)(unaff_x22 - (long)*(int *)(unaff_x20 + 0x18)) < 0;
    unaff_x23 = unaff_x23 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


