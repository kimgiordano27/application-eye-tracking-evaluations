/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilLevel
ENTRY_POINT: 031568d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__get_gpuUtilLevel(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long in_stack_00000018;
  
  puVar1 = (undefined8 *)FUN_01ae9f78(param_1,param_2,0);
  uVar2 = (*(code *)*puVar1)();
  *(undefined8 *)(in_stack_00000018 + 0x38) = uVar2;
  thunk_FUN_01b4f09c();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  do {
    plVar6 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0315698c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x21,0);
LAB_0315698c:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      FUN_03156d1c();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000018 + 0x38),0);
      return 0;
    }
    plVar6 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d803d0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03156a00;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d803d0,0);
LAB_03156a00:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar6 = (long *)FUN_0314d70c(lVar3,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80448) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03156a74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d80448,0);
LAB_03156a74:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar2;
    thunk_FUN_01b4f09c();
    plVar6 = *(long **)(in_stack_00000018 + 0x40);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03156af0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*unaff_x21,0);
LAB_03156af0:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) != 0) {
      plVar6 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_03156b7c;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    OVRPlugin__get_systemDisplayFrequency();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000018 + 0x40),0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03d80450) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03156b98;
    }
  }
LAB_03156b7c:
  puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)PTR_DAT_03d80450,0);
LAB_03156b98:
  auVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar7;
  thunk_FUN_01b4f09c(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


