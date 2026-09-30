/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0102e324
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint unaff_w20;
  long unaff_x21;
  
  FUN_0101a2b0();
  lVar4 = FUN_0101a9a4();
  if ((lVar4 == 0) && ((unaff_w20 >> 2 & 1) == 0)) {
    plVar5 = (long *)FUN_0103f9d0();
    puVar2 = (undefined8 *)plVar5[1];
    for (puVar1 = (undefined8 *)*plVar5; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      lVar4 = FUN_00ffa848(*puVar1);
      lVar6 = FUN_0101a2b0();
      if (((lVar4 != unaff_x21) && (lVar4 != lVar6)) && (lVar4 = FUN_0101a9a4(lVar4), lVar4 != 0))
      goto LAB_0102e3b4;
    }
    lVar4 = 0;
  }
  if (((unaff_w20 >> 1 & 1) != 0) && (lVar4 == 0)) {
LAB_0102e3f8:
    uVar7 = FUN_01058898();
                    /* WARNING: Subroutine does not return */
    FUN_01057c38(uVar7,0);
  }
  if (lVar4 != 0) {
LAB_0102e3b4:
    bVar3 = (unaff_w20 & 2) != 0;
    lVar4 = FUN_0102dc90();
    if (((bVar3) && (lVar4 == 0)) || ((lVar4 != 0 && (lVar4 = FUN_0102dc00(), bVar3 && lVar4 == 0)))
       ) goto LAB_0102e3f8;
  }
  return;
}


