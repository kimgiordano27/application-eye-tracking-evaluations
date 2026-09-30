/*
FUNCTION_NAME: OVR.OpenVR.CVRIOBuffer$$Close
ENTRY_POINT: 05fd3640
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fd374c) */

void OVR_OpenVR_CVRIOBuffer__Close(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  while ((param_1 & 1) != 0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05fd3690;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05fd3690:
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    OVR_OpenVR_CVRSpatialAnchors__CreateSpatialAnchorFromPose();
    OVR_OpenVR_CVRSpatialAnchors__CreateSpatialAnchorFromPose();
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05fd3634;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05fd3634:
    param_1 = (*(code *)*puVar1)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05fd371c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05fd371c:
    (*(code *)*puVar1)();
  }
  return;
}


