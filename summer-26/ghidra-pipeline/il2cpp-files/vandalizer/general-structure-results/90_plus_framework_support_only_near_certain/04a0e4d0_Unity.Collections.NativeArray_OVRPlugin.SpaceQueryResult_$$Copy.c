/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 04a0e4d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long param_6)

{
  long lVar1;
  int iVar2;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack0000000000000018;
  
  lVar1 = unaff_x19 + param_1 * 0x10;
                    /* catch() { ... } // from try @ 04a0e48c with catch @ 04a0e4dc
                       catch() { ... } // from try @ 04a0e4cc with catch @ 04a0e4dc */
                    /* try { // try from 04a0e4e0 to 04b0e4e3 has its CatchHandler @ 04a0e4ec */
                    /* try { // try from 04a0e4e4 to 04b0e4ef has its CatchHandler @ 04a0e414 */
  lStack0000000000000018 = param_1;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04a0e4e0 with catch @ 04a0e4ec
                        */
  if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  iVar2 = (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x40));
  if (0 < iVar2) {
    if ((unaff_w21 < *(uint *)(unaff_x19 + 0x18)) && (unaff_w20 < *(uint *)(unaff_x19 + 0x18))) {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar5 = unaff_x28[1];
      uVar4 = *unaff_x28;
      unaff_x28[1] = *(undefined8 *)(lVar1 + 0x28);
      *unaff_x28 = uVar3;
      thunk_FUN_0329bf60(unaff_x19 + unaff_x29 * 0x10 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = uVar5;
        *(undefined8 *)(lVar1 + 0x20) = uVar4;
        thunk_FUN_0329bf60(unaff_x19 + lStack0000000000000018 * 0x10 + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  return;
}


