/*
FUNCTION_NAME: OVRTelemetry$$AddPlayModeOrigin
ENTRY_POINT: 05ddce0c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetry__AddPlayModeOrigin(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
    thunk_FUN_0333a630();
  }
  else {
    FUN_041e2c78();
  }
  lVar2 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_059660a0(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = DAT_0139e3f0;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = lVar2;
      thunk_FUN_0333a630(plVar3,lVar2);
    }
    else {
      FUN_041e2c78();
    }
    lVar2 = thunk_FUN_032a56a0(*unaff_x23);
    FUN_059660a0(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = DAT_0139e820;
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        plVar3 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *plVar3 = lVar2;
        thunk_FUN_0333a630(plVar3,lVar2);
      }
      else {
        FUN_041e2c78();
      }
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0x18) = unaff_x20;
        thunk_FUN_0333a630((long *)(unaff_x19 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


