/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 01d95050
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * OVRPlugin__StopColocationSessionAdvertisement(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_00fdc2e4(PTR_DAT_02354070);
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  *(undefined1 *)(unaff_x20 + 0x889) = 1;
  uVar7 = *unaff_x22;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d5e86c(uVar7,0);
  uVar2 = FUN_01d603ec();
  if ((uVar2 & 1) == 0) {
    uVar7 = *unaff_x22;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01d5e86c(uVar7,0);
    puVar1 = PTR_DAT_02354070;
    if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)PTR_DAT_02354070);
    }
    lVar4 = FUN_01d91bb8();
    if (lVar4 == 0) {
LAB_01d95200:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_01d95200;
      uVar7 = (**(code **)(*unaff_x19 + 0x7f8))();
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x21);
      }
      uVar2 = FUN_01d611c4(uVar7,0,0);
      if ((uVar2 & 1) != 0) {
        uVar7 = (**(code **)(*unaff_x19 + 0x7f8))();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar1);
        }
        plVar3 = (long *)FUN_01d92954(uVar7);
        if (plVar3 != (long *)0x0) {
          return plVar3;
        }
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar4 = *(long *)puVar1;
      }
      plVar3 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
    }
    else {
      iVar6 = (int)*(long *)(lVar4 + 0x18);
      if (1 < iVar6) {
        thunk_FUN_010303a8(PTR_DAT_023508f8);
        uVar7 = thunk_FUN_010400dc();
        uVar5 = thunk_FUN_010303a8(PTR_DAT_023599e8);
        FUN_01d36fec(uVar7,uVar5,0);
        uVar5 = thunk_FUN_010303a8(PTR_DAT_023599f0);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar7,uVar5);
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar3 = *(long **)(lVar4 + 0x20);
      if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_023516e0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0();
      }
    }
  }
  else {
    plVar3 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023516e0);
    FUN_01c6737c(plVar3,4,0);
  }
  return plVar3;
}


