/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 0692bbcc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x9;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x22;
  float fVar6;
  float fVar7;
  
  uVar5 = *param_1;
  uVar3 = thunk_FUN_03ac74bc(**(undefined8 **)(in_x9 + 0xa00));
  FUN_04962b78(uVar3,uVar5,*(undefined8 *)PTR_DAT_084b5a20,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  *puVar4 = uVar3;
  thunk_FUN_03afed3c(puVar4,uVar3);
  puVar1 = PTR_DAT_084922d8;
  if (*(int *)(*(long *)PTR_DAT_084922d8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_045b08cc(uVar3,*(undefined8 *)PTR_DAT_084b5a10);
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    if (0 < *(int *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18) && ((uVar2 ^ 0xffffffff) & 1) == 0)
    {
      if (*(int *)(unaff_x19 + 0x54) == 2) {
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0692c108;
        fVar6 = *(float *)(*(long *)(unaff_x19 + 0x70) + 0x78);
        fVar7 = -fVar6;
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
        if (fVar7 < *(float *)(unaff_x19 + 0x50)) {
          FUN_0692c178();
          return;
        }
      }
      else if (*(int *)(unaff_x19 + 0x54) == 1) {
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0692c108;
        fVar6 = *(float *)(*(long *)(unaff_x19 + 0x70) + 0x78);
        fVar7 = -fVar6;
        if (0.0 <= fVar6) {
          fVar7 = fVar6;
        }
        if (fVar7 < *(float *)(unaff_x19 + 0x50)) {
          FUN_0692b9c8();
          return;
        }
      }
    }
    return;
  }
LAB_0692c108:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


