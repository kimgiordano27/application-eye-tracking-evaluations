/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$get_MaxRaycastDistance
ENTRY_POINT: 08a7db40
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;weak_vector_component_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__get_MaxRaycastDistance(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  float fVar7;
  
  plVar6 = *(long **)(unaff_x19 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_08a7dba0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac4c9f0,3);
LAB_08a7dba0:
  fVar7 = (float)(*(code *)*puVar2)(plVar6,puVar2[1]);
  iVar1 = -0x80000000;
  if (fVar7 * 1000.0 != INFINITY) {
    iVar1 = (int)(fVar7 * 1000.0);
  }
  return iVar1;
}


