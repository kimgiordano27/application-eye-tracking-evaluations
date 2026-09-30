/*
FUNCTION_NAME: OVRManager$$get_pluginVersion
ENTRY_POINT: 060bd400
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__get_pluginVersion(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *unaff_x19 = 0;
  uVar1 = FUN_060bff9c();
  fVar6 = 0.0;
  if ((uVar1 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_060bd598;
    lVar3 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07a20898) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 8) * 0x10 + 0x138);
          goto LAB_060bd478;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bd478:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (param_1 == 0) goto LAB_060bd598;
    fVar5 = (float)FUN_060e41bc(param_1,&stack0x00000020,unaff_w20 & 1,0);
    if (0.0 < fVar5) {
      *unaff_x19 = 1;
      fVar6 = fVar5;
    }
  }
  uVar1 = FUN_060c004c();
  if ((uVar1 & 1) == 0) {
    return fVar6;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07a20898) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_060bd530;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bd530:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (param_1 != 0) {
      fVar5 = (float)FUN_060e455c(param_1,&stack0x00000020,unaff_w20 & 1,0);
      if (fVar5 <= fVar6) {
        return fVar6;
      }
      *unaff_x19 = 2;
      return fVar5;
    }
  }
LAB_060bd598:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


