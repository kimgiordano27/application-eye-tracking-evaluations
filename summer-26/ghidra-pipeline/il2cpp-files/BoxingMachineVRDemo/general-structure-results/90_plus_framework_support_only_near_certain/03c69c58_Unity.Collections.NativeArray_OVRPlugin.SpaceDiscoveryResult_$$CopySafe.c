/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 03c69c58
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c69bfc with catch @ 03c69c60
                       try { // try from 03c69c60 to 03d69c77 has its CatchHandler @ 03c69bb4 */
  iVar2 = (**(code **)(param_1 + 0x138))();
  if (0 < iVar2) {
                    /* try { // try from 03c69c78 to 03d69c8f has its CatchHandler @ 03c69d04 */
    FUN_03c68fc0();
                    /* try { // try from 03c69c90 to 03d69cf3 has its CatchHandler @ 03c69bb4 */
    iVar1 = (int)unaff_x19[3] - unaff_w21;
    if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
      FUN_05029918(unaff_x19[2],unaff_w21,unaff_x19[2],iVar2 + unaff_w21,iVar1,0);
    }
    if (unaff_x19 == unaff_x23) {
      FUN_05029918(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
      FUN_05029918(unaff_x19[2],iVar2 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                   (int)unaff_x19[3] - unaff_w21,0);
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0(lVar4);
      }
      lVar5 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 03c69cf4 to 03d69d03 has its CatchHandler @ 03c69d04 */
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_03c69d6c;
          }
          uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 03c69c78 with catch @ 03c69d04
                       catch() { ... } // from try @ 03c69cf4 with catch @ 03c69d04 */
          piVar7 = piVar7 + 4;
                    /* try { // try from 03c69d08 to 03d69d0b has its CatchHandler @ 03c69d14 */
        } while (uVar6 != 0);
      }
                    /* try { // try from 03c69d0c to 03d69d17 has its CatchHandler @ 03c69bb4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03c69d08 with catch @ 03c69d14
                        */
      puVar3 = (undefined8 *)FUN_02d9a5d4();
                    /* try { // try from 03c69d18 to 03d6a017 has its CatchHandler @ 03c69d18
                       catch() { ... } // from try @ 03c69d18 with catch @ 03c69d18
                       catch() { ... } // from try @ 03c6a0dc with catch @ 03c69d18
                       catch() { ... } // from try @ 03c6a1a0 with catch @ 03c69d18
                       catch() { ... } // from try @ 03c6a24c with catch @ 03c69d18 */
LAB_03c69d6c:
      (*(code *)*puVar3)();
    }
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar2;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


