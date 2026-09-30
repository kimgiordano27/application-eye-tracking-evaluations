/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 050a2700
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x27;
  uint uVar6;
  ulong unaff_x28;
  ulong uVar7;
  long unaff_x29;
  undefined8 uVar8;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
code_r0x050a2700:
  uVar6 = (uint)unaff_x28;
                    /* try { // try from 050a2704 to 051a2713 has its CatchHandler @ 050a2714 */
  if (uVar6 < *(uint *)(unaff_x22 + 0x18)) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* catch() { ... } // from try @ 050a2690 with catch @ 050a2714
                       catch() { ... } // from try @ 050a2704 with catch @ 050a2714 */
    lVar1 = unaff_x22 + (long)(int)uVar6 * 0x10;
                    /* try { // try from 050a2718 to 051a271b has its CatchHandler @ 050a2724 */
                    /* try { // try from 050a271c to 051a2727 has its CatchHandler @ 050a2548 */
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a2718 with catch @ 050a2724
                        */
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    iVar5 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar8,uVar4,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (-1 < iVar5) goto LAB_050a2794;
    if ((uVar6 < *(uint *)(unaff_x22 + 0x18)) &&
       (uVar3 = uVar6 + 1, uVar3 < *(uint *)(unaff_x22 + 0x18))) goto code_r0x050a2768;
  }
LAB_050a27ec:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
code_r0x050a2768:
  lVar2 = unaff_x22 + (long)(int)uVar3 * 0x10;
  uVar8 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  thunk_FUN_03afed3c(unaff_x29 + (long)(int)uVar3 * 0x10 + 8,0);
  unaff_x28 = (ulong)(uVar6 - 1);
  if ((int)(uVar6 - 1) < in_stack_00000018) {
LAB_050a2794:
    uVar6 = *(uint *)(unaff_x22 + 0x18);
    uVar7 = unaff_x28;
    do {
      unaff_x28 = unaff_x27;
      uVar3 = (int)uVar7 + 1;
      if (uVar6 <= uVar3) goto LAB_050a27ec;
      lVar1 = unaff_x22 + (long)(int)uVar3 * 0x10;
      *(undefined8 *)(lVar1 + 0x20) = unaff_x23;
      *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
      thunk_FUN_03afed3c(unaff_x29 + (long)(int)uVar3 * 0x10 + 8,0);
      if (unaff_x28 == in_stack_00000008) {
        return;
      }
      uVar6 = *(uint *)(unaff_x22 + 0x18);
      unaff_x27 = unaff_x28 + 1;
      if (uVar6 <= (uint)unaff_x27) goto LAB_050a27ec;
      lVar1 = unaff_x22 + unaff_x27 * 0x10;
      unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
      unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
      uVar7 = unaff_x28;
    } while ((long)unaff_x28 < in_stack_00000010);
  }
  goto code_r0x050a2700;
}


