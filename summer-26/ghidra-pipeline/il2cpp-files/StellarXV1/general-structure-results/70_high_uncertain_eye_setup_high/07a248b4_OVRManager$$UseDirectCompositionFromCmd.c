/*
FUNCTION_NAME: OVRManager$$UseDirectCompositionFromCmd
ENTRY_POINT: 07a248b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UseDirectCompositionFromCmd
               (undefined8 param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  if ((DAT_098951a6 & 1) == 0) {
    FUN_04077588(PTR_DAT_092eff80);
    DAT_098951a6 = 1;
  }
  puVar2 = PTR_DAT_092eff80;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092eff80) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_07a24940;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092eff80,4);
LAB_07a24940:
  lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  *param_4 = 0;
  *param_3 = 0;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07a249a8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,0);
LAB_07a249a8:
  uVar6 = (*(code *)*puVar3)(param_2,puVar3[1]);
  iVar1 = *(int *)(lVar4 + 0x20);
  if ((uVar6 & 1) == 0) {
    if (iVar1 == 3) {
      lVar4 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_07a24b6c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,1);
      goto LAB_07a24b6c;
    }
    if (iVar1 != 2) {
      return;
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_07a24af4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,1);
LAB_07a24af4:
    uVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
    *param_3 = uVar8;
    lVar4 = *(long *)puVar2;
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) goto LAB_07a24b44;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_07a24aa0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(param_2,*(long *)puVar2,1);
LAB_07a24aa0:
    uVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
    *param_3 = uVar8;
    lVar4 = *(long *)puVar2;
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) goto LAB_07a24b44;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_040b1e00(param_2,lVar4,2);
  param_3 = param_4;
LAB_07a24b6c:
  uVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
  *param_3 = uVar8;
  return;
LAB_07a24b44:
  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
  param_3 = param_4;
  goto LAB_07a24b6c;
}


