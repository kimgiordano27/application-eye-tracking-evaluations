/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 03cb4e98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar3;
  long lVar4;
  
  if (in_w8 < (int)unaff_w19) {
    FUN_050f68ac(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(8,0);
  }
  if ((int)unaff_w19 < (int)(unaff_w22 + unaff_w19)) {
    lVar3 = (long)(int)(unaff_w22 + unaff_w19) - (long)(int)unaff_w19;
    lVar4 = (long)(int)unaff_w19 * 0x48 + 0x20;
    do {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_03cb4f54:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (unaff_x20 == 0) goto LAB_03cb4f54;
      memcpy(&stack0x00000000,(void *)(lVar2 + lVar4),0x48);
      memcpy(&stack0x00000048,&stack0x00000000,0x48);
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000048,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        return unaff_w19;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x48;
      unaff_w19 = unaff_w19 + 1;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


