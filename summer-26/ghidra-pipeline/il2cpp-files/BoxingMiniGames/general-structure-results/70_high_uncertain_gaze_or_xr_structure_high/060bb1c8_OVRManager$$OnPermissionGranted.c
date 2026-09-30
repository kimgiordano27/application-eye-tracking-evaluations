/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 060bb1c8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_permission_setup
*/


uint OVRManager__OnPermissionGranted(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  long in_x10;
  int *piVar6;
  long *unaff_x19;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
      goto LAB_060bb20c;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bb20c:
  lVar3 = (*(code *)*puVar2)();
  uVar4 = FUN_060bff9c();
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a20898) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_060bb28c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bb28c:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar3 == 0) goto LAB_060bb384;
    uVar1 = FUN_060e36f8(lVar3,&stack0x00000020,0);
    uVar1 = uVar1 & 1;
  }
  uVar4 = FUN_060c004c();
  uVar7 = uVar1;
  if ((uVar4 & 1) != 0) {
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a20898) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_060bb32c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bb32c:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar3 == 0) {
LAB_060bb384:
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018;
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = FUN_060e3a00(lVar3,&stack0x00000020,0);
    uVar7 = uVar1 | 2;
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar1;
    }
  }
  return uVar7;
}


