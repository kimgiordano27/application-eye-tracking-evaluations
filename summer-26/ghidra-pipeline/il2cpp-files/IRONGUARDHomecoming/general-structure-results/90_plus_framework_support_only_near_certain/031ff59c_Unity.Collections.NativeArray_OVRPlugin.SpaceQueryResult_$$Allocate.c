/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 031ff59c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 in_w8;
  long lVar2;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  uStack0000000000000030 = in_w8;
  while( true ) {
    uStack0000000000000020 = uVar3;
    uStack0000000000000028 = uVar4;
    (*in_x9)(param_2,&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x28));
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x14;
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) ||
       (unaff_w21 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w21 != *(int *)(unaff_x20 + 0x1c)) {
        FUN_0358b7ac(0);
      }
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar1 = (undefined8 *)(lVar2 + unaff_x23);
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
    if (unaff_x19 == 0) break;
    in_x9 = *(code **)(unaff_x19 + 0x18);
    param_2 = *(undefined8 *)(unaff_x19 + 0x40);
    uStack0000000000000030 = *(undefined4 *)(puVar1 + 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


