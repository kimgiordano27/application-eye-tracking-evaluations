/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 07a24b94
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsUnityAlphaOrBetaVersion(float param_1,float param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  if ((DAT_098951a7 & 1) == 0) {
    FUN_04077588(PTR_DAT_092eff80);
    DAT_098951a7 = 1;
  }
  puVar1 = PTR_DAT_092eff80;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (param_4 == (long *)0x0) goto LAB_07a24d74;
  lVar4 = *param_4;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092eff80) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_07a24c3c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(param_4,*(long *)PTR_DAT_092eff80,4);
LAB_07a24c3c:
  lVar4 = (*(code *)*puVar3)(param_4,puVar3[1]);
  if (lVar4 == 0) {
    FUN_07a24d78(param_3);
    goto LAB_07a24d20;
  }
  if (param_1 <= 0.0) {
LAB_07a24cac:
    FUN_07a24d78(param_3);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 == 0) goto LAB_07a24d74;
    if ((*(char *)(lVar4 + 0x10) == '\0') || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0))
    goto LAB_07a24cac;
    lVar5 = *param_4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_07a24d4c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(param_4,*(long *)puVar1,5);
LAB_07a24d4c:
    uVar2 = (*(code *)*puVar3)(param_4,puVar3[1]);
    FUN_07a24e2c(param_1,param_3,lVar4,uVar2);
    *(undefined1 *)(param_3 + 0x38) = 0;
  }
  if (param_2 <= 0.0) {
LAB_07a24d20:
    FUN_07a24dbc(param_3);
    return;
  }
  FUN_07a24f10(&stack0x00000020,param_4);
  if (*(long *)(param_3 + 0x30) != 0) {
    uStack0000000000000014 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    uStack000000000000000c = uStack000000000000002c;
    FUN_07a52108(param_2);
    *(undefined1 *)(param_3 + 0x39) = 0;
    return;
  }
LAB_07a24d74:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


