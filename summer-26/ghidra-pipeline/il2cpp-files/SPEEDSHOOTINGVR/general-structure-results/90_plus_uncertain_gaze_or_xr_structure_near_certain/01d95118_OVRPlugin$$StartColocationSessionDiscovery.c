/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 01d95118
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long * OVRPlugin__StartColocationSessionDiscovery(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar1 = FUN_01d91bb8();
  if (lVar1 == 0) {
LAB_01d95200:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(long *)(lVar1 + 0x18) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_01d95200;
    uVar4 = (**(code **)(*unaff_x19 + 0x7f8))();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x21);
    }
    uVar3 = FUN_01d611c4(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = (**(code **)(*unaff_x19 + 0x7f8))();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x22);
      }
      plVar2 = (long *)FUN_01d92954(uVar4);
      if (plVar2 != (long *)0x0) {
        return plVar2;
      }
    }
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar1 = *unaff_x22;
    }
    plVar2 = *(long **)(*(long *)(lVar1 + 0xb8) + 8);
  }
  else {
    iVar6 = (int)*(long *)(lVar1 + 0x18);
    if (1 < iVar6) {
      thunk_FUN_010303a8(PTR_DAT_023508f8);
      uVar4 = thunk_FUN_010400dc();
      uVar5 = thunk_FUN_010303a8(PTR_DAT_023599e8);
      FUN_01d36fec(uVar4,uVar5,0);
      uVar5 = thunk_FUN_010303a8(PTR_DAT_023599f0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar4,uVar5);
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    plVar2 = *(long **)(lVar1 + 0x20);
    if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_023516e0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
  }
  return plVar2;
}


