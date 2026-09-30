/*
FUNCTION_NAME: OVRManager$$get_utilitiesVersion
ENTRY_POINT: 060bd3a8
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


float OVRManager__get_utilitiesVersion(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *in_x10;
  int *piVar5;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_060bd3f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bd3f4:
  lVar2 = (*(code *)*puVar1)();
  *unaff_x19 = 0;
  uVar4 = FUN_060bff9c();
  fVar7 = 0.0;
  if ((uVar4 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_060bd598;
    lVar3 = *unaff_x21;
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
    puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bd478:
    (*(code *)*puVar1)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 == 0) goto LAB_060bd598;
    fVar6 = (float)FUN_060e41bc(lVar2,&stack0x00000020,unaff_w20 & 1,0);
    if (0.0 < fVar6) {
      *unaff_x19 = 1;
      fVar7 = fVar6;
    }
  }
  uVar4 = FUN_060c004c();
  if ((uVar4 & 1) == 0) {
    return fVar7;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
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
    puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bd530:
    (*(code *)*puVar1)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar2 != 0) {
      fVar6 = (float)FUN_060e455c(lVar2,&stack0x00000020,unaff_w20 & 1,0);
      if (fVar6 <= fVar7) {
        return fVar7;
      }
      *unaff_x19 = 2;
      return fVar6;
    }
  }
LAB_060bd598:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


