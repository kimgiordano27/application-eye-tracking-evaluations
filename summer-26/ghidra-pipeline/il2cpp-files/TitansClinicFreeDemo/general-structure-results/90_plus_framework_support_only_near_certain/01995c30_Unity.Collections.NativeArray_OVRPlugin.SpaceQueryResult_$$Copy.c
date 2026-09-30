/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 01995c30
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01995bb4 with catch @ 01995c40
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01995be0 with catch @ 01995c44
                        */
    lVar5 = FUN_0122e748(lVar5);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01995c0c with catch @ 01995c48
                        */
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
                    /* try { // try from 01995c60 to 01a95c77 has its CatchHandler @ 01995d10 */
  if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60();
  }
  puVar4 = (undefined8 *)thunk_FUN_0124bcfc();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
                    /* try { // try from 01995c78 to 01a95c8b has its CatchHandler @ 01995b78 */
  lVar5 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* try { // try from 01995c8c to 01a95ca3 has its CatchHandler @ 01995d10 */
  if (lVar5 != 0) {
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar5 + 0x20) = uVar1;
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
    }
    else {
      FUN_01995b90();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


