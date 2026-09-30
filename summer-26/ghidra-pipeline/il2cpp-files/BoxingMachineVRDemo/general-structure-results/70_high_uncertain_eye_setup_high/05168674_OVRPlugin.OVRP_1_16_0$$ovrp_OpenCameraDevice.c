/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_OpenCameraDevice
ENTRY_POINT: 05168674
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_OpenCameraDevice(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    FUN_0509917c();
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05167dbc();
    lVar7 = *unaff_x21;
    while( true ) {
      while( true ) {
        uVar3 = (**(code **)(lVar7 + 0x288))();
        if (((uVar3 & 1) == 0) || (iVar1 = (**(code **)(*unaff_x21 + 0x238))(), iVar1 == 0xd)) {
          if (unaff_x23 == 0) {
            thunk_FUN_02dc61f4(PTR_DAT_067826e8);
            goto LAB_051688b0;
          }
          if (unaff_x20 == (long *)0x0) goto LAB_051688a0;
          lVar7 = *unaff_x20;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 == 0) goto LAB_05168778;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_05168760;
        }
        plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
        if (plVar2 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          if (plVar2 == (long *)0x0) goto LAB_051688a0;
          uVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
        }
        uVar3 = thunk_FUN_04e8bd3c(uVar5,*unaff_x27,0);
        if ((uVar3 & 1) == 0) break;
        FUN_0509917c();
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        unaff_x23 = FUN_05167dbc();
        lVar7 = *unaff_x21;
      }
      uVar3 = thunk_FUN_04e8bd3c(uVar5,*unaff_x29,0);
      if ((uVar3 & 1) == 0) break;
      FUN_0509917c();
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05167dbc();
      lVar7 = *unaff_x21;
    }
    uVar3 = thunk_FUN_04e8bd3c(uVar5,*(undefined8 *)PTR_DAT_06782558,0);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067826f8);
      if (plVar2 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      }
      FUN_04e83184(uVar5,uVar6,0);
LAB_051688b0:
      uVar5 = FUN_050924a8();
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067826f0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar5,uVar6);
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_05168760:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782640) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
      goto LAB_05168800;
    }
  }
LAB_05168778:
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05168800:
  (*(code *)*puVar4)();
  if (unaff_x19 == (long *)0x0) {
LAB_051688a0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067823f0) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 7) * 0x10 + 0x138);
        goto FUN_05168878;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
FUN_05168878:
                    /* WARNING: Could not recover jumptable at 0x0516889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)();
  return;
}


