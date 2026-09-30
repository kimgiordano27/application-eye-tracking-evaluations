/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 031ff47c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  lVar4 = (long)(int)unaff_w19 * 0x14 + 0x20;
  lVar5 = (long)in_w8 - (long)(int)unaff_w19;
  while (lVar3 = *(long *)(unaff_x21 + 0x10), lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar1 = (undefined8 *)(lVar3 + lVar4);
    if (unaff_x20 == 0) break;
    in_stack_00000020 = *puVar1;
    in_stack_00000028 = puVar1[1];
    in_stack_00000030 = *(undefined4 *)(puVar1 + 2);
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    lVar5 = lVar5 + -1;
    lVar4 = lVar4 + 0x14;
    if (lVar5 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


