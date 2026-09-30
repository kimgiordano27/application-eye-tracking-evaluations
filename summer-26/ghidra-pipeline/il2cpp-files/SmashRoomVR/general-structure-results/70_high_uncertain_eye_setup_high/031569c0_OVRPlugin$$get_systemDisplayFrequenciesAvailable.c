/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequenciesAvailable
ENTRY_POINT: 031569c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
OVRPlugin__get_systemDisplayFrequenciesAvailable(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long in_stack_00000018;
  
  do {
    if (in_x9 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03156a00;
        }
        in_x9 = in_x9 - 1;
        piVar6 = piVar6 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x19,param_3,0);
LAB_03156a00:
    lVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar3 = (long *)FUN_0314d70c(lVar2,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d80448) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03156a74;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar3,*(long *)PTR_DAT_03d80448,0);
LAB_03156a74:
    uVar4 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar4;
    thunk_FUN_01b4f09c();
    plVar3 = *(long **)(in_stack_00000018 + 0x40);
    *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03156af0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x21,0);
LAB_03156af0:
    uVar5 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    if ((uVar5 & 1) != 0) {
      plVar3 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar2 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_03156b7c;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    OVRPlugin__get_systemDisplayFrequency();
    *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000018 + 0x40),0);
    plVar3 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0315698c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x21,0);
LAB_0315698c:
    uVar5 = (*(code *)*puVar1)(plVar3,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      FUN_03156d1c();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000018 + 0x38),0);
      return 0;
    }
    unaff_x19 = *(long **)(in_stack_00000018 + 0x38);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    param_1 = *unaff_x19;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)PTR_DAT_03d803d0;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d80450) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03156b98;
    }
  }
LAB_03156b7c:
  puVar1 = (undefined8 *)FUN_01ae9f78(plVar3,*(long *)PTR_DAT_03d80450,0);
LAB_03156b98:
  auVar7 = (*(code *)*puVar1)(plVar3,puVar1[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar7;
  thunk_FUN_01b4f09c(in_stack_00000018 + 0x20,0);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


