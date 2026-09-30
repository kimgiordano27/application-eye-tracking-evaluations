/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$.cctor
ENTRY_POINT: 05168484
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0___cctor
               (undefined8 param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_DAT_067825c0;
  if ((DAT_06b79e76 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782640);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_0677d900);
    FUN_02d6084c(PTR_DAT_06782558);
    FUN_02d6084c(PTR_DAT_06782560);
    FUN_02d6084c(PTR_DAT_067825c0);
    FUN_02d6084c(PTR_DAT_06782588);
    DAT_06b79e76 = 1;
  }
  uVar5 = thunk_FUN_04e8bd3c(param_5,*(undefined8 *)puVar1,0);
  if ((uVar5 & 1) == 0) {
    if (param_5 == 0) goto LAB_051688a0;
    uVar11 = FUN_04e9195c(param_5,1,0);
    if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d900);
    }
    uVar13 = FUN_05167dbc(param_2);
    if (param_3 == (long *)0x0) goto LAB_051688a0;
    lVar12 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06782640) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar10 + 7) * 0x10 + 0x138);
          goto LAB_05168798;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)PTR_DAT_06782640,7);
LAB_05168798:
    uVar11 = (*(code *)*puVar8)(param_3,uVar11,uVar13,puVar8[1]);
    if (param_4 == (long *)0x0) goto LAB_051688a0;
    lVar9 = *param_4;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar12 = *(long *)PTR_DAT_067823f0;
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) goto LAB_05168868;
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (param_2 == (long *)0x0) {
LAB_051688a0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
    puVar3 = PTR_DAT_06782588;
    puVar2 = PTR_DAT_06782560;
    puVar1 = PTR_DAT_0677d900;
    if ((uVar5 & 1) == 0) {
      uVar13 = 0;
      uVar11 = 0;
      lVar12 = 0;
    }
    else {
      uVar13 = 0;
      uVar11 = 0;
      lVar12 = 0;
      do {
        iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar4 == 0xd) break;
        plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar6 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_051688a0;
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar5 = thunk_FUN_04e8bd3c(uVar7,*(undefined8 *)puVar2,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = thunk_FUN_04e8bd3c(uVar7,*(undefined8 *)puVar3,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = thunk_FUN_04e8bd3c(uVar7,*(undefined8 *)PTR_DAT_06782558,0);
            if ((uVar5 & 1) == 0) {
              plVar6 = (long *)(**(code **)(*param_2 + 0x248))
                                         (param_2,*(undefined8 *)(*param_2 + 0x250));
              uVar11 = thunk_FUN_02dc61f4(PTR_DAT_067826f8);
              if (plVar6 == (long *)0x0) {
                uVar13 = 0;
              }
              else {
                uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              }
              uVar11 = FUN_04e83184(uVar11,uVar13,0);
              goto LAB_051688b0;
            }
            FUN_0509917c(param_2,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar13 = FUN_05167dbc(param_2);
            lVar9 = *param_2;
          }
          else {
            FUN_0509917c(param_2,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_05167dbc(param_2);
            lVar9 = *param_2;
          }
        }
        else {
          FUN_0509917c(param_2,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar12 = FUN_05167dbc(param_2);
          lVar9 = *param_2;
        }
        uVar5 = (**(code **)(lVar9 + 0x288))(param_2,*(undefined8 *)(lVar9 + 0x290));
      } while ((uVar5 & 1) != 0);
    }
    if (lVar12 == 0) {
      uVar11 = thunk_FUN_02dc61f4(PTR_DAT_067826e8);
LAB_051688b0:
      uVar11 = FUN_050924a8(param_2,uVar11,0);
      uVar13 = thunk_FUN_02dc61f4(PTR_DAT_067826f0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar11,uVar13);
    }
    if (param_3 == (long *)0x0) goto LAB_051688a0;
    lVar9 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06782640) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_05168800;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)PTR_DAT_06782640,5);
LAB_05168800:
    uVar11 = (*(code *)*puVar8)(param_3,lVar12,uVar11,uVar13,puVar8[1]);
    if (param_4 == (long *)0x0) goto LAB_051688a0;
    lVar9 = *param_4;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar12 = *(long *)PTR_DAT_067823f0;
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) goto LAB_05168868;
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4(param_4,lVar12,7);
FUN_05168878:
                    /* WARNING: Could not recover jumptable at 0x0516889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(param_4,uVar11,puVar8[1]);
  return;
LAB_05168868:
  puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 7) * 0x10 + 0x138);
  goto FUN_05168878;
}


