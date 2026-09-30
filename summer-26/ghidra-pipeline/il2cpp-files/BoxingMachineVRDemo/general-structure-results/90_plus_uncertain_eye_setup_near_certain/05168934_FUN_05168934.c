/*
FUNCTION_NAME: FUN_05168934
ENTRY_POINT: 05168934
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05168934(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_06b79e77 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782640);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_0677d900);
    FUN_02d6084c(PTR_DAT_06782568);
    FUN_02d6084c(PTR_DAT_06782570);
    FUN_02d6084c(PTR_DAT_06782578);
    FUN_02d6084c(PTR_DAT_06782590);
    DAT_06b79e77 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    puVar2 = PTR_DAT_06782578;
    puVar1 = PTR_DAT_0677d900;
    if ((uVar4 & 1) == 0) {
      uVar13 = 0;
      uVar10 = 0;
      uVar11 = 0;
      lVar12 = 0;
    }
    else {
      uVar13 = 0;
      uVar10 = 0;
      uVar11 = 0;
      lVar12 = 0;
      do {
        iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar3 == 0xd) break;
        plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
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
                plVar5 = (long *)(**(code **)(*param_2 + 0x248))
                                           (param_2,*(undefined8 *)(*param_2 + 0x250));
                uVar11 = thunk_FUN_02dc61f4(PTR_DAT_067826f8);
                if (plVar5 == (long *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                }
                uVar11 = FUN_04e83184(uVar11,uVar10,0);
                goto LAB_05168cbc;
              }
              FUN_0509917c(param_2,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar13 = FUN_05167dbc(param_2);
              lVar8 = *param_2;
            }
            else {
              FUN_0509917c(param_2,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar10 = FUN_05167dbc(param_2);
              lVar8 = *param_2;
            }
          }
          else {
            FUN_0509917c(param_2,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_05167dbc(param_2);
            lVar8 = *param_2;
          }
        }
        else {
          FUN_0509917c(param_2,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar12 = FUN_05167dbc(param_2);
          lVar8 = *param_2;
        }
        uVar4 = (**(code **)(lVar8 + 0x288))(param_2,*(undefined8 *)(lVar8 + 0x290));
      } while ((uVar4 & 1) != 0);
    }
    if (lVar12 == 0) {
      uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06782700);
LAB_05168cbc:
      uVar11 = FUN_050924a8(param_2,uVar11,0);
      uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782708);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar11,uVar10);
    }
    if (param_3 != (long *)0x0) {
      lVar8 = *param_3;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06782640) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)PTR_DAT_06782640,6);
OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus:
      uVar11 = (*(code *)*puVar7)(param_3,lVar12,uVar11,uVar10,uVar13,puVar7[1]);
      if (param_4 != (long *)0x0) {
        lVar12 = *param_4;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto OVRPlugin_OVRP_1_18_0___cctor;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(param_4,*(long *)PTR_DAT_067823f0,7);
OVRPlugin_OVRP_1_18_0___cctor:
                    /* WARNING: Could not recover jumptable at 0x05168ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar7)(param_4,uVar11,puVar7[1]);
        return;
      }
    }
  }
LAB_05168cac:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


