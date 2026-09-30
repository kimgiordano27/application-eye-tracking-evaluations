/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 06a9cb80
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 in_x9;
  undefined4 *puVar5;
  long in_x10;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint in_w11;
  undefined4 *puVar8;
  long unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  
  puVar6 = (undefined8 *)(in_x10 + 0x40);
  *puVar6 = in_x9;
  puVar1 = (ulong *)(param_1 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 +
                    (ulong)(in_w11 & 0xffff | 0x40000));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0666ee4c();
  if (unaff_x21 != (long *)0x0) {
    (**(code **)(*unaff_x21 + 0x558))();
    if (*(byte *)(unaff_x19 + 0x68) != (unaff_w20 & 1)) {
      bVar3 = (unaff_w20 & 1) == 0;
      if (bVar3) {
        puVar4 = (undefined4 *)(unaff_x19 + 0x28);
        puVar5 = (undefined4 *)(unaff_x19 + 0x2c);
        puVar7 = (undefined4 *)(unaff_x19 + 0x30);
        puVar8 = (undefined4 *)(unaff_x19 + 0x34);
      }
      else {
        puVar4 = (undefined4 *)(unaff_x19 + 0x38);
        puVar5 = (undefined4 *)(unaff_x19 + 0x3c);
        puVar7 = (undefined4 *)(unaff_x19 + 0x40);
        puVar8 = (undefined4 *)(unaff_x19 + 0x44);
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06a9cca0;
      FUN_079de5f8(*puVar4,*puVar5,*puVar7,*puVar8,*(long *)(unaff_x19 + 0x60),0);
      *(byte *)(unaff_x19 + 0x68) = !bVar3;
    }
    return;
  }
LAB_06a9cca0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


