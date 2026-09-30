/*
FUNCTION_NAME: System.Array$$Sort<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 01d6100c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__Sort<ProbeVolumeBakingSet_SerializedPerSceneCellList>(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w23;
  
  if (param_1 == 0) {
    FUN_01c8c87c();
  }
                    /* catch() { ... } // from try @ 01d60fec with catch @ 01d61018 */
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = unaff_w23 & ((int)unaff_w23 >> 0x1f ^ 0xffffffffU);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c8c820();
  }
  FUN_020d3c94(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80));
  puVar3 = PTR_DAT_03cb63c0;
  if ((int)unaff_w23 < 1) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cb63c0 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    lVar4 = FUN_01d72a58();
    lVar5 = *unaff_x19;
    if (lVar5 != 0) {
      uVar6 = *(uint *)((long)unaff_x19 + 0xc);
      if (0 < (int)uVar6) {
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_01c8c820();
          uVar6 = *(uint *)((long)unaff_x19 + 0xc);
          lVar5 = *unaff_x19;
        }
        uVar2 = uVar1;
        if ((int)uVar6 <= (int)uVar1) {
          uVar2 = uVar6;
        }
                    /* catch() { ... } // from try @ 01d611cc with catch @ 01d610c8 */
        FUN_0372ad10(lVar4,lVar5,(long)(int)(uVar2 * 0x2c0),0);
      }
    }
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_01c8c820();
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  FUN_01d79624();
  *unaff_x19 = lVar4;
  uVar6 = *(uint *)(unaff_x19 + 1);
  if ((int)uVar1 <= (int)*(uint *)(unaff_x19 + 1)) {
    uVar6 = uVar1;
  }
  *(uint *)(unaff_x19 + 1) = uVar6;
  *(uint *)((long)unaff_x19 + 0xc) = uVar1;
  return;
}


