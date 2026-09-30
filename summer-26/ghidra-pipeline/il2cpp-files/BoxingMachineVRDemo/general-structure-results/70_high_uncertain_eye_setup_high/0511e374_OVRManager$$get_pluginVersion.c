/*
FUNCTION_NAME: OVRManager$$get_pluginVersion
ENTRY_POINT: 0511e374
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_pluginVersion(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar4 = FUN_033b7810(param_2,**(undefined8 **)(param_1 + 0xb98));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_039700f4(lVar4,*(undefined8 *)PTR_DAT_06780bc8);
  puVar2 = PTR_DAT_06780ba8;
  puVar1 = PTR_DAT_06780b68;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  do {
    uVar5 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2);
    uVar3 = in_stack_00000030;
    if ((uVar5 & 1) == 0) {
      FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
      plVar9 = (long *)(unaff_x20 + 0xc0);
      if (*plVar9 != 0) {
        lVar4 = FUN_0511dc04();
        *plVar9 = lVar4;
        thunk_FUN_02dd37b4(plVar9,lVar4);
      }
      return;
    }
    plVar9 = *(long **)(unaff_x20 + 0xb8);
    uVar6 = FUN_0511dc04();
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto FUN_0511e428;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,1);
FUN_0511e428:
    (*(code *)*puVar7)(plVar9,uVar3,uVar6,puVar7[1]);
  } while( true );
}


