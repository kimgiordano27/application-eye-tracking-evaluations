/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 058a63a4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
               (long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  long lVar2;
  ulong uVar3;
  long *unaff_x26;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x140);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4(lVar2);
  }
  if (param_2 == 0) {
    FUN_05e22940(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar1 = thunk_FUN_0322f04c(param_2,lVar2);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2730(param_2,lVar2);
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    uVar3 = 0;
    do {
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      System_Array_EmptyInternalEnumerator<OVRGLTFAccessor_GLTFBufferView>___ctor();
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(lVar1 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = FUN_05da412c(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_055c109c();
  return;
}


