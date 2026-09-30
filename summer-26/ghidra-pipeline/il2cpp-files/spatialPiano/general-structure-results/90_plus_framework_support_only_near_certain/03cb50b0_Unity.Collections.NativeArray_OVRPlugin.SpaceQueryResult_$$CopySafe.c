/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 03cb50b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(long param_1)

{
  int iVar1;
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  
  do {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x20 == 0) {
LAB_03cb5128:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    memcpy(&stack0x00000000,(void *)(param_1 + unaff_x23),0x48);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000048,*(undefined8 *)(unaff_x20 + 0x28))
    ;
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x48;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      iVar1 = *(int *)(unaff_x19 + 0x1c);
LAB_03cb5104:
      if (unaff_w21 != iVar1) {
        FUN_050f6190(0);
      }
      return;
    }
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar1) goto LAB_03cb5104;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_03cb5128;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x22;
  } while( true );
}


