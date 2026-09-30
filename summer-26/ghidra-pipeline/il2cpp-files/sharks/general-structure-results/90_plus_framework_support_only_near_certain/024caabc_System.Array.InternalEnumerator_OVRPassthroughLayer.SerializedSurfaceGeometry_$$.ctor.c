/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor
ENTRY_POINT: 024caabc
PROGRAM: sharks-libil2cpp.so
SCORE: 170
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___ctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x26;
  
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_0185daa4(lVar8);
  }
  if (unaff_x23 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_01861ac0();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
  }
  thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x30),lVar8);
  *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x10),0);
  }
  else {
    uVar2 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
    thunk_FUN_0188fd20();
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4();
    }
    uVar2 = FUN_017fc3f4(lVar8,unaff_w22);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x18));
    lVar8 = *(long *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar2 = FUN_02bddb5c(uVar2,0);
    if (lVar8 == 0) goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext;
    lVar8 = FUN_02adfbec(lVar8,*(undefined8 *)PTR_DAT_037fb178,uVar2,0);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    if (lVar8 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037fb188);
      uVar2 = thunk_FUN_01861bbc();
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb190);
      FUN_02ad6d08(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2);
    }
    lVar3 = thunk_FUN_01861ac0(lVar8,lVar6);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar8,lVar6);
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar7 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        FUN_024ccb1c();
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
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


