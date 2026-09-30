/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceAvailable
ENTRY_POINT: 05168574
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceAvailable(void)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
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
  
  while (!(bool)in_ZR) {
    plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_051688a0;
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
    uVar4 = thunk_FUN_04e8bd3c(uVar3,*unaff_x27,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = thunk_FUN_04e8bd3c(uVar3,*unaff_x29,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = thunk_FUN_04e8bd3c(uVar3,*(undefined8 *)PTR_DAT_06782558,0);
        if ((uVar4 & 1) == 0) {
          plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
          uVar3 = thunk_FUN_02dc61f4(PTR_DAT_067826f8);
          if (plVar2 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
          }
          FUN_04e83184(uVar3,uVar6,0);
          goto LAB_051688b0;
        }
        FUN_0509917c();
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05167dbc();
        lVar7 = *unaff_x21;
      }
      else {
        FUN_0509917c();
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05167dbc();
        lVar7 = *unaff_x21;
      }
    }
    else {
      FUN_0509917c();
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      unaff_x23 = FUN_05167dbc();
      lVar7 = *unaff_x21;
    }
    uVar4 = (**(code **)(lVar7 + 0x288))();
    if ((uVar4 & 1) == 0) break;
    iVar1 = (**(code **)(*unaff_x21 + 0x238))();
    in_ZR = iVar1 == 0xd;
  }
  if (unaff_x23 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_067826e8);
LAB_051688b0:
    uVar3 = FUN_050924a8();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067826f0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,uVar6);
  }
  if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782640) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_05168800;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05168800:
    (*(code *)*puVar5)();
    if (unaff_x19 != (long *)0x0) {
      lVar7 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067823f0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 7) * 0x10 + 0x138);
            goto FUN_05168878;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
FUN_05168878:
                    /* WARNING: Could not recover jumptable at 0x0516889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)();
      return;
    }
  }
LAB_051688a0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


