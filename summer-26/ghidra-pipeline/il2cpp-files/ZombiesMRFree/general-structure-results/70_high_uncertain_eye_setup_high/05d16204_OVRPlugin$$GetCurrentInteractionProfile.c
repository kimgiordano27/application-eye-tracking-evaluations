/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfile
ENTRY_POINT: 05d16204
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfile
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar13;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000154;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  
  uStack0000000000000188 = in_stack_000000e8;
  uStack0000000000000180 = in_stack_000000e0;
  uStack00000000000000f0 = param_1;
  uStack0000000000000160 = param_2;
  uStack0000000000000170 = param_3;
  uStack0000000000000190 = param_1;
  FUN_04940a58();
  uVar13 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_068f9b78(uVar13,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) == '\0') {
      return;
    }
    iVar1 = *unaff_x20;
    iVar6 = FUN_04057a98();
    if (iVar1 == iVar6) {
      return;
    }
    if ((unaff_x20[4] & 0xfffffffeU) != 2) {
      return;
    }
    FUN_05d14568(&stack0x000000a0);
    *(undefined8 *)(unaff_x19 + 0x1cc) = uStack00000000000000b4;
    *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_000000a0;
    FUN_05d163fc();
    uVar13 = FUN_05d13b48();
    *(undefined8 *)(unaff_x19 + 0x198) = uVar13;
    thunk_FUN_03048534(unaff_x19 + 0x198);
    FUN_05d13c30(&stack0x00000140);
    uVar7 = FUN_04057a98();
    in_stack_00000088 = in_stack_00000148;
    in_stack_00000080 = in_stack_00000140;
    uStack0000000000000094 = uStack0000000000000154;
    uStack0000000000000090 = uStack0000000000000150;
    FUN_05c9ab00(&stack0x00000100,uVar7,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
    uVar5 = in_stack_00000130;
    uVar4 = in_stack_00000128;
    uVar3 = in_stack_00000120;
    uStack0000000000000178 = in_stack_00000118;
    uVar2 = in_stack_00000110;
    uStack0000000000000168 = in_stack_00000108;
    uVar13 = in_stack_00000100;
    if ((*(long *)(unaff_x19 + 0xd0) != 0) &&
       (plVar12 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar12 != (long *)0x0)) {
      lVar10 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f9b508) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05d163b4;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f9b508,0);
LAB_05d163b4:
      uStack0000000000000160 = uVar13;
      uStack0000000000000170 = uVar2;
      uStack0000000000000188 = uVar4;
      uStack0000000000000180 = uVar3;
      uStack0000000000000190 = uVar5;
      (*(code *)*puVar9)(plVar12,&stack0x00000160,puVar9[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


