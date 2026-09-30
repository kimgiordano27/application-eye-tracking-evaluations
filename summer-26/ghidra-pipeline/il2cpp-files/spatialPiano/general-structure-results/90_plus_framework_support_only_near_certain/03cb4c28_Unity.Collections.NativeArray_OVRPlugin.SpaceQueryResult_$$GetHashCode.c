/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 03cb4c28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  
  do {
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x48;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      unaff_x19[8] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_03cb4c88;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_03cb4c8c;
    if (unaff_x21 == 0) goto LAB_03cb4c88;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x22),0x48);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000048,
                       *(undefined8 *)(unaff_x21 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    if ((uint)unaff_x23 < *(uint *)(lVar2 + 0x18)) {
      memcpy(unaff_x19,(void *)(lVar2 + unaff_x22),0x48);
      return;
    }
LAB_03cb4c8c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_03cb4c88:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


