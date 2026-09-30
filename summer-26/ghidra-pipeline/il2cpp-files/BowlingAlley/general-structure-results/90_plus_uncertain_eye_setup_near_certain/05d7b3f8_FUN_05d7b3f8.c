/*
FUNCTION_NAME: FUN_05d7b3f8
ENTRY_POINT: 05d7b3f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05d7b3f8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_076d87b9 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072ada08);
    DAT_076d87b9 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072ada08) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto OVRPlugin__UpdateNodePhysicsPoses;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_072ada08,3);
OVRPlugin__UpdateNodePhysicsPoses:
  bVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  lVar3 = 0x28;
  if (*(byte *)(param_1 + 0x40) != (bVar1 & 1)) {
    lVar3 = 0x38;
  }
  return *(undefined8 *)(param_1 + lVar3);
}


