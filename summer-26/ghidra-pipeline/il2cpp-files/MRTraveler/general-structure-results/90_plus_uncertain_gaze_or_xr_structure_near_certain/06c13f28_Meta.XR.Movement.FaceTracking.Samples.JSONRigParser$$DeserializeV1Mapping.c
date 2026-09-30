/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.JSONRigParser$$DeserializeV1Mapping
ENTRY_POINT: 06c13f28
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_Movement_FaceTracking_Samples_JSONRigParser__DeserializeV1Mapping(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *in_x9;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  (*in_x9)();
  uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e87b40);
  thunk_FUN_03ce5214(PTR_DAT_08e779a0);
  uVar2 = FUN_06f74e30(uVar2);
  lVar3 = thunk_FUN_03ce5214(PTR_DAT_08e69670);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e69670;
  uVar5 = 0;
  if ((DAT_09436fa5 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69670,0);
    FUN_03c8f898(PTR_DAT_08e95550);
    DAT_09436fa5 = 1;
    uVar5 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    uVar5 = extraout_x1_00;
  }
  if (DAT_0941aad8 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69670,uVar5);
    DAT_0941aad8 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *(long *)puVar1;
  }
  plVar8 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e95550) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto FUN_085a4464;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e95550,3);
FUN_085a4464:
                    /* WARNING: Could not recover jumptable at 0x085a447c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar8,0,uVar2,puVar4[1]);
  return;
}


