/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 06371d24
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  
  thunk_FUN_037aeb94();
  *(long *)(unaff_x23 + 0x20) = unaff_x25;
  thunk_FUN_037aeb94();
  if (unaff_x25 != 0) {
    *(long *)(unaff_x25 + 0x18) = unaff_x23;
    thunk_FUN_037aeb94((long *)(unaff_x25 + 0x18));
  }
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_06371da0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_06371da0:
  (*(code *)*puVar1)();
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x22 + 0x10),0);
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x22 + 0x18),0);
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x22 + 0x20),0);
  if (unaff_x19[6] != 0) {
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a18);
    FUN_06ae967c(uVar2,4,unaff_w20,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
    FUN_06b19dbc(uVar2,2);
                    /* WARNING: Could not recover jumptable at 0x06371e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


