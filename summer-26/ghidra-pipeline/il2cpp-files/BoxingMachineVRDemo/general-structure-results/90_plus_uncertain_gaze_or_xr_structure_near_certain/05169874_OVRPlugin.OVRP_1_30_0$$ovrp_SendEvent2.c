/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 05169874
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  FUN_0566d8ec();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x23);
  }
  FUN_05167dbc();
  uVar2 = FUN_050f0eb8();
  if ((uVar2 & 1) == 0) {
    if (unaff_x24 != (long *)0x0) {
      (**(code **)(*unaff_x24 + 0x238))();
      if (unaff_x20 != (long *)0x0) {
        lVar6 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782640) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
              goto LAB_051699a4;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051699a4:
        uVar4 = (*(code *)*puVar3)();
        goto LAB_051699bc;
      }
    }
  }
  else if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782640) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
          goto LAB_0516997c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516997c:
    uVar4 = (*(code *)*puVar3)();
LAB_051699bc:
    puVar1 = PTR_DAT_06782540;
    lVar6 = thunk_FUN_02d9d438();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    lVar6 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_02d9d438();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    lVar7 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05169a40;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar6,0);
LAB_05169a40:
                    /* WARNING: Could not recover jumptable at 0x05169a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar5,uVar4,puVar3[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


