/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 031ffd2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  
                    /* catch() { ... } // from try @ 031ffe7c with catch @ 031ffd3c
                       catch() { ... } // from try @ 031ffeb8 with catch @ 031ffd3c
                       catch() { ... } // from try @ 031ffef4 with catch @ 031ffd3c
                       catch() { ... } // from try @ 031fff20 with catch @ 031ffd3c
                       catch() { ... } // from try @ 031fff94 with catch @ 031ffd3c */
  Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__CopySafe();
  iVar1 = (int)unaff_x19[3] - unaff_w21;
  if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
    FUN_0358d498(unaff_x19[2],unaff_w21,unaff_x19[2],unaff_w22 + unaff_w21,iVar1,0);
  }
  if (unaff_x19 == unaff_x23) {
    FUN_0358d498(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
    FUN_0358d498(unaff_x19[2],unaff_w22 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                 (int)unaff_x19[3] - unaff_w21,0);
  }
  else {
                    /* try { // try from 031ffd70 to 032ffd73 has its CatchHandler @ 031ffe7c */
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
                    /* try { // try from 031ffd8c to 032ffe7b has its CatchHandler @ 031ffe88 */
    }
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_031ffe1c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_031ffe1c:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + unaff_w22;
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


