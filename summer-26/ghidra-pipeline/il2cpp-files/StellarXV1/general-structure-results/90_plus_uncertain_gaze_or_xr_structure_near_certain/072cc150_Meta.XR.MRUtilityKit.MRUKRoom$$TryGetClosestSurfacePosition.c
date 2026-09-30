/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 072cc150
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition
               (long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  undefined8 uVar8;
  undefined4 uVar9;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_072cc230;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_072cc230:
  (*(code *)*puVar2)();
  plVar6 = *(long **)(unaff_x21 + 0x48);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_092c3468;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_072cc2a4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x23,3);
LAB_072cc2a4:
    (*(code *)*puVar2)(plVar6,uVar8);
    if (((unaff_x19 != 0) && (*(long *)(unaff_x21 + 0x40) != 0)) &&
       (plVar6 = *(long **)(unaff_x21 + 0x60), plVar6 != (long *)0x0)) {
      lVar3 = *plVar6;
      uVar8 = *(undefined8 *)(unaff_x21 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      cVar1 = *(char *)(*(long *)(unaff_x21 + 0x40) + 0xd0);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x28);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092c3888) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_072cc334;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092c3888,2);
LAB_072cc334:
                    /* WARNING: Could not recover jumptable at 0x072cc368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(uVar9,plVar6,uVar8,uVar7,cVar1 != '\0',0,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


