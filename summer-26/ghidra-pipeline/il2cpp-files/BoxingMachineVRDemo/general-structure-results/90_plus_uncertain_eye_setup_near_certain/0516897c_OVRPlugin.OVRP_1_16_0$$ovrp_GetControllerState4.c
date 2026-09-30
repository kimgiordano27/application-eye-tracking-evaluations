/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetControllerState4
ENTRY_POINT: 0516897c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_10;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetControllerState4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar11;
  
  FUN_02d6084c(PTR_DAT_0677d900);
  FUN_02d6084c(PTR_DAT_06782568);
  FUN_02d6084c(PTR_DAT_06782570);
  FUN_02d6084c(PTR_DAT_06782578);
  FUN_02d6084c(PTR_DAT_06782590);
  *(undefined1 *)(unaff_x22 + 0xe77) = 1;
  if (unaff_x21 != (long *)0x0) {
    uVar4 = (**(code **)(*unaff_x21 + 0x288))();
    puVar2 = PTR_DAT_06782578;
    puVar1 = PTR_DAT_0677d900;
    if ((uVar4 & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      do {
        iVar3 = (**(code **)(*unaff_x21 + 0x238))();
        if (iVar3 == 0xd) break;
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x248))();
        if (plVar5 == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_05168cac;
          uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        }
        uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)puVar2,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06782590,0);
          if ((uVar4 & 1) == 0) {
            uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06782570,0);
            if ((uVar4 & 1) == 0) {
              uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06782568,0);
              if ((uVar4 & 1) == 0) {
                plVar5 = (long *)(**(code **)(*unaff_x21 + 0x248))();
                uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067826f8);
                if (plVar5 == (long *)0x0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                }
                FUN_04e83184(uVar6,uVar8,0);
                goto LAB_05168cbc;
              }
              FUN_0509917c();
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05167dbc();
              lVar9 = *unaff_x21;
            }
            else {
              FUN_0509917c();
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05167dbc();
              lVar9 = *unaff_x21;
            }
          }
          else {
            FUN_0509917c();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05167dbc();
            lVar9 = *unaff_x21;
          }
        }
        else {
          FUN_0509917c();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar11 = FUN_05167dbc();
          lVar9 = *unaff_x21;
        }
        uVar4 = (**(code **)(lVar9 + 0x288))();
      } while ((uVar4 & 1) != 0);
    }
    if (lVar11 == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_06782700);
LAB_05168cbc:
      uVar6 = FUN_050924a8();
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06782708);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar8);
    }
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06782640) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar10 + 6) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4();
OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus:
      (*(code *)*puVar7)();
      if (unaff_x19 != (long *)0x0) {
        lVar11 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto OVRPlugin_OVRP_1_18_0___cctor;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4();
OVRPlugin_OVRP_1_18_0___cctor:
                    /* WARNING: Could not recover jumptable at 0x05168ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar7)();
        return;
      }
    }
  }
LAB_05168cac:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


