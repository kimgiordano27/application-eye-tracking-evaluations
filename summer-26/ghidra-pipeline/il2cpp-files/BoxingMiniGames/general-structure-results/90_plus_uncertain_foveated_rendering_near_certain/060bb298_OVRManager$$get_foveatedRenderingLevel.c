/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 060bb298
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint OVRManager__get_foveatedRenderingLevel(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *in_x9;
  int *piVar5;
  long *unaff_x19;
  long unaff_x21;
  uint uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  (*in_x9)();
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x21 == 0) {
LAB_060bb384:
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000018;
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar1 = FUN_060e36f8();
  uVar1 = uVar1 & 1;
  uVar2 = FUN_060c004c();
  uVar6 = uVar1;
  if ((uVar2 & 1) != 0) {
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07a20898) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_060bb32c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060bb32c:
    (*(code *)*puVar3)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (unaff_x21 == 0) goto LAB_060bb384;
    uVar2 = FUN_060e3a00();
    uVar6 = uVar1 | 2;
    if ((uVar2 & 1) == 0) {
      uVar6 = uVar1;
    }
  }
  return uVar6;
}


