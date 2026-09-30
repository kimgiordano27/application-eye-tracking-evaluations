/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 063996dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x800));
  *(undefined1 *)(unaff_x20 + 0x62e) = 1;
  if (**(long **)(*unaff_x22 + 0xb8) != 0) {
    return;
  }
  plVar1 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
  uVar4 = *(undefined8 *)PTR_DAT_07da8478;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
  }
  lVar2 = FUN_062519f8(uVar4,0);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,0);
    }
    if ((int)plVar1[3] == 0) {
LAB_06399828:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar1[4] = lVar2;
    thunk_FUN_037aeb94(plVar1 + 4,lVar2);
    if (unaff_x19 != 0) {
      FUN_0625d154();
      lVar2 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d86518,1);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_07db6800;
          thunk_FUN_037aeb94();
          uVar4 = FUN_0632f238();
          **(undefined8 **)(*unaff_x22 + 0xb8) = uVar4;
          thunk_FUN_037aeb94(*(undefined8 *)(*unaff_x22 + 0xb8),uVar4);
          return;
        }
        goto LAB_06399828;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


