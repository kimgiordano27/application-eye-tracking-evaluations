/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 024cab30
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long lVar7;
  ulong uVar8;
  long *unaff_x26;
  
  uVar2 = FUN_017fc3f4(*param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  thunk_FUN_0188fd20();
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  uVar2 = FUN_017fc3f4(lVar3,unaff_w22);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x20 + 0x18));
  lVar3 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar2 = FUN_02bddb5c(uVar2,0);
  if (lVar3 != 0) {
    lVar3 = FUN_02adfbec(lVar3,*(undefined8 *)PTR_DAT_037fb178,uVar2,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    if (lVar3 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037fb188);
      uVar2 = thunk_FUN_01861bbc();
      uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb190);
      FUN_02ad6d08(uVar2,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2);
    }
    lVar4 = thunk_FUN_01861ac0(lVar3,lVar7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar3,lVar7);
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
    if (*unaff_x21 != 0) {
      uVar1 = FUN_02ae1ed4(*unaff_x21,*(undefined8 *)PTR_DAT_037fae08,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_0188fd20();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


