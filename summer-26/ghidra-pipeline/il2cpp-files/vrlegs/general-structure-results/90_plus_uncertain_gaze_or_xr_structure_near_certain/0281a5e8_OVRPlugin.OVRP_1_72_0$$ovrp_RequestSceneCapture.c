/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 0281a5e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 *unaff_x19;
  undefined8 uVar7;
  long unaff_x21;
  long *unaff_x23;
  uint uStack000000000000000c;
  
  FUN_01ab69ac(PTR_DAT_03cc07a8);
  FUN_01ab69ac(PTR_DAT_03cbe5e8);
  *(undefined1 *)(unaff_x21 + 0x397) = 1;
  lVar1 = *unaff_x23;
  uStack000000000000000c = 0;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar1 = *unaff_x23;
  }
  if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_0281a7e8;
  uVar2 = FUN_0219f8b8();
  if ((uVar2 & 1) != 0) {
    *unaff_x19 = 0;
    return (ulong)uStack000000000000000c;
  }
  uVar2 = FUN_02830868();
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cd7fe8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_0281a7fc();
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_0276eb10();
      uVar2 = FUN_02830868(uVar3,0);
      if ((uVar2 & 1) != 0) {
        uVar7 = *(undefined8 *)PTR_DAT_03cc5398;
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar4 = (long *)FUN_0277b678(uVar7,0);
        plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
        if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc0cb8);
        }
        lVar1 = FUN_027a41e0(uVar3,0);
        if (plVar5 == (long *)0x0) {
LAB_0281a7e8:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((lVar1 != 0) &&
           (lVar6 = thunk_FUN_01a89d6c(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar3,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar5[4] = lVar1;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar1);
        if (plVar4 == (long *)0x0) goto LAB_0281a7e8;
        uVar3 = (**(code **)(*plVar4 + 0xc08))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0xc10));
        *unaff_x19 = 1;
        goto LAB_0281a690;
      }
    }
    uVar2 = 1;
    *unaff_x19 = 0;
  }
  else {
    *unaff_x19 = 1;
    if (*(int *)(*(long *)PTR_DAT_03cc0cb8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_027a41e0();
LAB_0281a690:
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x23);
    }
    uVar2 = FUN_02816a74(uVar3);
  }
  return uVar2;
}


