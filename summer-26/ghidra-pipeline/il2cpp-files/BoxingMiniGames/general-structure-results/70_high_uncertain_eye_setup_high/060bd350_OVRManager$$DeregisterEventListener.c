/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 060bd350
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__DeregisterEventListener
                (long *param_1,long *param_2,undefined4 *param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_07ee09c5 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a20898);
    FUN_03642964(PTR_DAT_07a20878);
    DAT_07ee09c5 = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (param_1 == (long *)0x0) goto LAB_060bd598;
  lVar2 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a20878) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_060bd3f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30(param_1,*(long *)PTR_DAT_07a20878,4);
LAB_060bd3f4:
  lVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
  *param_3 = 0;
  uVar4 = FUN_060bff9c(param_1,param_2);
  fVar7 = 0.0;
  if ((uVar4 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_060bd598;
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a20898) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_060bd478;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(param_2,*(long *)PTR_DAT_07a20898,8);
LAB_060bd478:
    (*(code *)*puVar1)(&stack0x00000008,param_2,puVar1[1]);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 == 0) goto LAB_060bd598;
    fVar6 = (float)FUN_060e41bc(lVar2,&stack0x00000020,param_4 & 1,0);
    if (0.0 < fVar6) {
      *param_3 = 1;
      fVar7 = fVar6;
    }
  }
  uVar4 = FUN_060c004c(param_1,param_2);
  if ((uVar4 & 1) == 0) {
    return fVar7;
  }
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a20898) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_060bd530;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(param_2,*(long *)PTR_DAT_07a20898,9);
LAB_060bd530:
    (*(code *)*puVar1)(&stack0x00000008,param_2,puVar1[1]);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 != 0) {
      fVar6 = (float)FUN_060e455c(lVar2,&stack0x00000020,param_4 & 1,0);
      if (fVar6 <= fVar7) {
        return fVar7;
      }
      *param_3 = 2;
      return fVar6;
    }
  }
LAB_060bd598:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


