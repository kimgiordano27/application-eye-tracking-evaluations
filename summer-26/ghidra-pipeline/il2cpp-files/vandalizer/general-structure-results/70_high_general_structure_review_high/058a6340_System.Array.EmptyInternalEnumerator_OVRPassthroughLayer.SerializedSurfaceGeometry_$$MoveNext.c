/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$MoveNext
ENTRY_POINT: 058a6340
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__MoveNext
               (void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000018;
  
  FUN_058a5ba8();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
  if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar3 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar3,0);
  if (in_stack_00000018 != 0) {
    lVar1 = FUN_05d0ba28(in_stack_00000018,*(undefined8 *)PTR_DAT_075db690,uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    if (lVar1 == 0) {
      FUN_05e22940(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar2 = thunk_FUN_0322f04c(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(lVar1,lVar4);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar5 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        System_Array_EmptyInternalEnumerator<OVRGLTFAccessor_GLTFBufferView>___ctor();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar1 = FUN_05da412c(0);
    if (lVar1 != 0) {
      FUN_055c109c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


