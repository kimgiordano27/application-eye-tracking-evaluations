/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 03157ee8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__AddCustomMetadata(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long *unaff_x19;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long in_stack_00000018;
  
code_r0x03157ee8:
  puVar2 = (undefined8 *)FUN_01ae9f78(param_1,param_2,0);
  param_1 = unaff_x19;
  do {
    uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar3 & 1) != 0) {
      plVar6 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_03157f8c;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    FUN_0315807c();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000018 + 0x40),0);
    plVar6 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03157d9c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x21,0);
LAB_03157d9c:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar3 & 1) == 0) {
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
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d803d0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03157e10;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803d0,0);
LAB_03157e10:
    lVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
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
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80448) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03157e84;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d80448,0);
LAB_03157e84:
    uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar1;
    thunk_FUN_01b4f09c();
    param_1 = *(long **)(in_stack_00000018 + 0x40);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *param_1;
    param_2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    unaff_x19 = param_1;
    if (uVar3 == 0) goto code_r0x03157ee8;
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
      if (uVar3 == 0) goto code_r0x03157ee8;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80450) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03157fa8;
    }
  }
LAB_03157f8c:
  puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d80450,0);
LAB_03157fa8:
  auVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar7;
  thunk_FUN_01b4f09c(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


