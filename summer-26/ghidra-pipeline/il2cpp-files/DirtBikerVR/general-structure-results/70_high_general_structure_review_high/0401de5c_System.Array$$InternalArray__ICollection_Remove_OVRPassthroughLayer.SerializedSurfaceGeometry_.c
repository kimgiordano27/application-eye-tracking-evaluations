/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0401de5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void System_Array__InternalArray__ICollection_Remove<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  undefined *puVar4;
  
  FUN_03ac40ec();
  if (unaff_x22 == 0) {
    thunk_FUN_03af1434(&DAT_08615058);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a7228);
    FUN_066af6a0(uVar1,uVar2,0);
    goto LAB_0401df68;
  }
  if (unaff_w21 < 0) {
LAB_0401dec0:
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086b0140);
    puVar4 = &DAT_0868e988;
  }
  else {
    if (*(int *)(unaff_x22 + 0x18) < unaff_w21) goto LAB_0401dec0;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w21)) {
      FUN_0402a39c();
      return;
    }
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a8b20);
    puVar4 = &DAT_08688840;
  }
  uVar3 = thunk_FUN_03af1434(puVar4);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
LAB_0401df68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1);
}


