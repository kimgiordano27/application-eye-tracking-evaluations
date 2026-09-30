/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$MoveNext
ENTRY_POINT: 024caae0
PROGRAM: sharks-libil2cpp.so
SCORE: 170
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__MoveNext(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long lVar7;
  ulong uVar8;
  long *unaff_x26;
  
  FUN_0185daa4();
  if ((unaff_x23 != 0) && (lVar2 = thunk_FUN_01861ac0(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
  thunk_FUN_0188fd20();
  *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x10),0);
  }
  else {
    uVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    thunk_FUN_0188fd20();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_017fc3f4(lVar2,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x18));
    lVar2 = *(long *)(unaff_x20 + 0x40);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar3 = FUN_02bddb5c(uVar3,0);
    if (lVar2 == 0) goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext;
    lVar2 = FUN_02adfbec(lVar2,*(undefined8 *)PTR_DAT_037fb178,uVar3,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    if (lVar2 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037fb188);
      uVar3 = thunk_FUN_01861bbc();
      uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb190);
      FUN_02ad6d08(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar3);
    }
    lVar4 = thunk_FUN_01861ac0(lVar2,lVar7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar2,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        FUN_024ccb1c();
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  if (*unaff_x21 != 0) {
    uVar1 = FUN_02ae1ed4(*unaff_x21,*(undefined8 *)PTR_DAT_037fae08,0);
    *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    thunk_FUN_0188fd20();
    return;
  }
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


