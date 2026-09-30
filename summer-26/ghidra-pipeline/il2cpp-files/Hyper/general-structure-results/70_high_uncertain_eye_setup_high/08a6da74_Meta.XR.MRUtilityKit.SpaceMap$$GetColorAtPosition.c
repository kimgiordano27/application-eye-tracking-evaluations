/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetColorAtPosition
ENTRY_POINT: 08a6da74
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__GetColorAtPosition(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  int *piVar6;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_08bda628(param_1,*unaff_x24,param_2,0);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_08a6dadc;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_08a6dadc:
  (*(code *)*puVar2)();
  (**(code **)(*unaff_x19 + 0x2c8))();
  if ((unaff_x20 & 1) == 0) {
    pcVar5 = *(code **)(*unaff_x19 + 0x1b8);
  }
  else {
    iVar1 = (**(code **)(*unaff_x19 + 0x1a8))();
    if (iVar1 != 1) {
      return;
    }
    pcVar5 = *(code **)(*unaff_x19 + 0x1b8);
  }
  (*pcVar5)();
  return;
}


