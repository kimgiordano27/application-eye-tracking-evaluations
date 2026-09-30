/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 072cc124
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x23;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  plVar9 = *(long **)(unaff_x23 + 0xed0);
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar9) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_072cc230;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_072cc230:
  (*(code *)*puVar2)();
  plVar7 = *(long **)(unaff_x21 + 0x48);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    lVar3 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar10 = *(undefined8 *)PTR_DAT_092c3468;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_072cc2a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar7,lVar3,3);
LAB_072cc2a4:
    (*(code *)*puVar2)(plVar7,uVar10);
    if (((unaff_x19 != 0) && (*(long *)(unaff_x21 + 0x40) != 0)) &&
       (plVar9 = *(long **)(unaff_x21 + 0x60), plVar9 != (long *)0x0)) {
      lVar3 = *plVar9;
      uVar10 = *(undefined8 *)(unaff_x21 + 0x48);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      cVar1 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0xd0);
      uVar11 = *(undefined4 *)(unaff_x19 + 0x28);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092c3888) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_072cc334;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_092c3888,2);
LAB_072cc334:
                    /* WARNING: Could not recover jumptable at 0x072cc368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(uVar11,plVar9,uVar10,uVar8,cVar1 != '\0',0,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


