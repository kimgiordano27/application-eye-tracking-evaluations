/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 0419f420
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w21;
  undefined8 unaff_x22;
  
  FUN_05509450(param_1,param_2,0);
  iVar3 = *(int *)(unaff_x19 + 0x18);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (iVar3 == *(int *)(lVar1 + 0x18)) {
      FUN_0419ed24();
      iVar3 = *(int *)(unaff_x19 + 0x18);
      lVar1 = *(long *)(unaff_x19 + 0x10);
    }
    if (iVar3 - unaff_w21 != 0 && (int)unaff_w21 <= iVar3) {
                    /* try { // try from 0419f46c to 0429f4b7 has its CatchHandler @ 0419f46c
                       catch() { ... } // from try @ 0419f46c with catch @ 0419f46c
                       catch() { ... } // from try @ 0419f514 with catch @ 0419f46c
                       catch() { ... } // from try @ 0419f544 with catch @ 0419f46c
                       catch() { ... } // from try @ 0419f5c0 with catch @ 0419f46c */
      FUN_0550b264(lVar1,unaff_w21,lVar1,unaff_w21 + 1,iVar3 - unaff_w21,0);
      lVar1 = *(long *)(unaff_x19 + 0x10);
    }
    if (lVar1 != 0) {
      if (unaff_w21 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)unaff_w21 * 0x10;
        puVar2 = (undefined8 *)(lVar1 + 0x20);
        *puVar2 = unaff_x22;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x20;
        LeanTween__value(puVar2,0);
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


