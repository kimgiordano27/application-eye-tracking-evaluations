/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 060d0ed4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState6(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000030;
  long in_stack_00000038;
  
  if ((param_3 == 0) || (iVar3 = FUN_03156cec(0,*(undefined8 *)PTR_DAT_07a243e8), iVar3 < 1)) {
    return;
  }
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar4 = (long *)FUN_03156cec(0,*(undefined8 *)PTR_DAT_07a243d8);
  puVar2 = PTR_DAT_07a243e0;
  puVar1 = PTR_DAT_079f49a8;
  in_stack_00000010 = &stack0x00000030;
  in_stack_00000008 = 0;
  do {
    in_stack_00000030 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_060d0f80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar1,0);
LAB_060d0f80:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = in_stack_00000030;
    if ((uVar8 & 1) == 0) {
      FUN_03154064(&stack0x00000008);
      return;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = *in_stack_00000030;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_060d0fe4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0367cd30(in_stack_00000030,*(long *)puVar2,0);
LAB_060d0fe4:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = in_stack_00000030;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x178))(plVar6,unaff_w21,*(undefined8 *)(unaff_x20 + 0x10));
      plVar4 = in_stack_00000030;
    }
  } while( true );
}


