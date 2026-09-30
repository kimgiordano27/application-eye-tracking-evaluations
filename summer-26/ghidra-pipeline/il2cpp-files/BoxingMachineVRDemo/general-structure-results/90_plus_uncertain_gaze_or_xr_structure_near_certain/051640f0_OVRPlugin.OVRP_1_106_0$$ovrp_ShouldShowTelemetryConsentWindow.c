/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryConsentWindow
ENTRY_POINT: 051640f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryConsentWindow(code *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x26;
  
  uVar3 = (*param_1)();
  uVar4 = FUN_0516619c(uVar3,uVar3);
  if ((uVar4 & 1) == 0) {
    lVar7 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_05164150;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164150:
    lVar7 = (*(code *)*puVar5)();
    if (lVar7 == 0) goto LAB_05164658;
    if (*(int *)(lVar7 + 0x18) == 1) {
      lVar7 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_051641bc;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051641bc:
      lVar7 = (*(code *)*puVar5)();
      puVar1 = PTR_DAT_06782408;
      if (lVar7 == 0) goto LAB_05164658;
      plVar6 = (long *)FUN_03aac1c4(lVar7,0,*(undefined8 *)PTR_DAT_06782408);
      if (plVar6 == (long *)0x0) goto LAB_05164658;
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05164234;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x26,0);
LAB_05164234:
      iVar2 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (iVar2 == 3) {
        lVar7 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_05164554;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164554:
        lVar7 = (*(code *)*puVar5)();
        if ((lVar7 == 0) ||
           (plVar6 = (long *)FUN_03aac1c4(lVar7,0,*(undefined8 *)puVar1), plVar6 == (long *)0x0))
        goto LAB_05164658;
        lVar7 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_051645c8;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x26,5);
LAB_051645c8:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
        if (unaff_x19 == (long *)0x0) goto LAB_05164658;
        (**(code **)(*unaff_x19 + 0x698))();
        goto LAB_051644a0;
      }
    }
  }
  lVar7 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_051642d8;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051642d8:
  lVar7 = (*(code *)*puVar5)();
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
      lVar7 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_05164340;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164340:
      lVar7 = (*(code *)*puVar5)();
      puVar1 = PTR_DAT_06782540;
      if (lVar7 == 0) goto LAB_05164658;
      if (*(int *)(lVar7 + 0x18) == 0) {
        lVar7 = thunk_FUN_02d9d438();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88();
        }
        lVar7 = *(long *)puVar1;
        plVar6 = (long *)thunk_FUN_02d9d438();
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88();
        }
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_05164604;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar7,2);
LAB_05164604:
        uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar4 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_05164658;
          (**(code **)(*unaff_x19 + 0x698))();
        }
        else {
          if (unaff_x19 == (long *)0x0) goto LAB_05164658;
          pcVar9 = *(code **)(*unaff_x19 + 0x658);
LAB_05164498:
          (*pcVar9)();
        }
LAB_051644a0:
        (**(code **)(*unaff_x20 + 0x1e8))();
        return;
      }
    }
    if (unaff_x19 != (long *)0x0) {
      (**(code **)(*unaff_x19 + 0x578))();
      puVar1 = PTR_DAT_06782408;
      iVar2 = 0;
      do {
        lVar7 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_051643cc;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
        lVar7 = (*(code *)*puVar5)();
        if (lVar7 == 0) break;
        if (*(int *)(lVar7 + 0x18) <= iVar2) {
          FUN_051652f4();
          pcVar9 = *(code **)(*unaff_x19 + 0x588);
          goto LAB_05164498;
        }
        lVar7 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_05164438;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
        lVar7 = (*(code *)*puVar5)();
        if (lVar7 == 0) break;
        FUN_03aac1c4(lVar7,iVar2,*(undefined8 *)puVar1);
        FUN_05163090();
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
LAB_05164658:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


