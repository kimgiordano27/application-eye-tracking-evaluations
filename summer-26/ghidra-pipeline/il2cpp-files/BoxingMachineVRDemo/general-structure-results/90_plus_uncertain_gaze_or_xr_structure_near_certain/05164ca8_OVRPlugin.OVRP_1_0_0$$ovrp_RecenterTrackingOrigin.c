/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 05164ca8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x21;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 8) * 0x10 + 0x138);
        goto LAB_05164df4;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05164df4:
  uVar2 = (*(code *)*puVar1)();
  uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_06782550,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_05164800();
    puVar1 = (undefined8 *)PTR_DAT_067825e0;
  }
  else {
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_05164e80;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05164e80:
    uVar2 = (*(code *)*puVar1)();
    puVar1 = (undefined8 *)PTR_DAT_067825d0;
  }
  FUN_04e83184(*puVar1,uVar2,0);
  return;
}


