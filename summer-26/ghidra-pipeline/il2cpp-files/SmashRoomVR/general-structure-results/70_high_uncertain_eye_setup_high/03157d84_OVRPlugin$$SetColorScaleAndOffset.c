/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 03157d84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetColorScaleAndOffset(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long in_stack_00000018;
  
code_r0x03157d84:
  puVar1 = (undefined8 *)FUN_01ae9f78(param_1,param_2,0);
  param_1 = unaff_x19;
  do {
    uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      FUN_0315812c();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000018 + 0x38),0);
      return 0;
    }
    plVar6 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d803d0) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03157e10;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803d0,0);
LAB_03157e10:
    lVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar6 = (long *)FUN_0314d70c(lVar4,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80448) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03157e84;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d80448,0);
LAB_03157e84:
    uVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar3;
    thunk_FUN_01b4f09c();
    plVar6 = *(long **)(in_stack_00000018 + 0x40);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03157f00;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x21,0);
LAB_03157f00:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar2 & 1) != 0) {
      plVar6 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_03157f8c;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    FUN_0315807c();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000018 + 0x40),0);
    param_1 = *(long **)(in_stack_00000018 + 0x38);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *param_1;
    param_2 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    unaff_x19 = param_1;
    if (uVar2 == 0) goto code_r0x03157d84;
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto code_r0x03157d84;
    }
    puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80450) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03157fa8;
    }
  }
LAB_03157f8c:
  puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d80450,0);
LAB_03157fa8:
  auVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar7;
  thunk_FUN_01b4f09c(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


