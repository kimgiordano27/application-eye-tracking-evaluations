/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 050a1aa4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long in_x4;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack0000000000000018;
  
  lStack0000000000000018 = (long)(int)unaff_w21;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a19c4 with catch @ 050a1aac
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a1a94 with catch @ 050a1ab0
                        */
  lVar1 = unaff_x20 + lStack0000000000000018 * 0x10;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a1a90 with catch @ 050a1ab4
                        */
  lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a1a04 with catch @ 050a1ab8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a1a98 with catch @ 050a1abc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a18e8 with catch @ 050a1ac0
                        */
  puVar5 = (undefined8 *)(lVar1 + 0x20);
  uVar7 = *puVar5;
  uVar9 = *(undefined8 *)(lVar1 + 0x28);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a1934 with catch @ 050a1ac4
                        */
  puVar6 = (undefined8 *)(lVar2 + 0x20);
  uVar8 = *puVar6;
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  if ((*(ushort *)(*(long *)(in_x4 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
                    /* try { // try from 050a1ae0 to 051a1ae3 has its CatchHandler @ 050a1aec */
                    /* catch() { ... } // from try @ 050a1ae0 with catch @ 050a1aec */
                    /* try { // try from 050a1af0 to 051a1af7 has its CatchHandler @ 050a1b00 */
  iVar4 = (**(code **)(unaff_x22 + 0x18))
                    (*(undefined8 *)(unaff_x22 + 0x40),uVar7,uVar9,uVar8,uVar3,
                     *(undefined8 *)(unaff_x22 + 0x28));
                    /* try { // try from 050a1af8 to 051a1b03 has its CatchHandler @ 050a17c8 */
  if (0 < iVar4) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a1af0 with catch @ 050a1b00
                        */
    if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
      uVar7 = *puVar6;
      uVar9 = *(undefined8 *)(lVar1 + 0x28);
      uVar8 = *puVar5;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *puVar5 = uVar7;
      thunk_FUN_03afed3c(unaff_x20 + 0x20 + lStack0000000000000018 * 0x10 + 8,0);
      if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar9;
        *puVar6 = uVar8;
        thunk_FUN_03afed3c(unaff_x20 + 0x20 + (long)(int)unaff_w19 * 0x10 + 8,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  return;
}


