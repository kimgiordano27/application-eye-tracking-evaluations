/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 03999710
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  
  uVar1 = FUN_03997edc();
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* try { // try from 03999724 to 03a9976f has its CatchHandler @ 03999724
                       catch() { ... } // from try @ 03999724 with catch @ 03999724
                       catch() { ... } // from try @ 039997d4 with catch @ 03999724
                       catch() { ... } // from try @ 03999804 with catch @ 03999724
                       catch() { ... } // from try @ 03999880 with catch @ 03999724 */
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar2 = (undefined4 *)thunk_FUN_02b7978c();
      FUN_03999668(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


