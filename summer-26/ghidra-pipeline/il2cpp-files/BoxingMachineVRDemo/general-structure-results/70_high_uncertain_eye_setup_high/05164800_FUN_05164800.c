/*
FUNCTION_NAME: FUN_05164800
ENTRY_POINT: 05164800
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05164800(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_06b79e66 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(PTR_DAT_0676bc98);
    FUN_02d6084c(PTR_DAT_067646b8);
    FUN_02d6084c(PTR_DAT_0676bca0);
    DAT_06b79e66 = 1;
  }
  puVar2 = PTR_DAT_067823f0;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
          goto LAB_051648c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)PTR_DAT_067823f0,8);
LAB_051648c0:
    lVar7 = (*(code *)*puVar3)(param_2,puVar3[1]);
    puVar1 = PTR_DAT_0676bca0;
    if (lVar7 == 0) {
      uVar4 = 0;
    }
    else {
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_05164930;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar2,1);
LAB_05164930:
      uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
      uVar8 = thunk_FUN_04e8bd3c(uVar4,*(undefined8 *)puVar1,0);
      if ((uVar8 & 1) != 0) {
        lVar7 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
              goto LAB_0516499c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar2,8);
LAB_0516499c:
        uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
        uVar8 = thunk_FUN_04e8bd3c(uVar4,*(undefined8 *)PTR_DAT_0676bc98,0);
        uVar4 = 0;
        if ((uVar8 & 1) != 0) goto OVRPlugin_OVRP_0_1_3___cctor;
      }
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
            goto LAB_05164a14;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar2,8);
LAB_05164a14:
      uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (param_3 == (long *)0x0) goto LAB_05164b18;
      uVar4 = (**(code **)(*param_3 + 0x248))(param_3,uVar4,*(undefined8 *)(*param_3 + 0x250));
    }
OVRPlugin_OVRP_0_1_3___cctor:
    puVar1 = PTR_DAT_06782548;
    uVar5 = FUN_050f0eb8(uVar4,0);
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_05164aa8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar2,1);
LAB_05164aa8:
    uVar6 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar6 = FUN_0566e384(uVar6,0);
    if ((uVar5 & 1) != 0) {
      return uVar6;
    }
    uVar4 = FUN_04e8db00(uVar4,*(undefined8 *)PTR_DAT_067646b8,uVar6,0);
    return uVar4;
  }
LAB_05164b18:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


