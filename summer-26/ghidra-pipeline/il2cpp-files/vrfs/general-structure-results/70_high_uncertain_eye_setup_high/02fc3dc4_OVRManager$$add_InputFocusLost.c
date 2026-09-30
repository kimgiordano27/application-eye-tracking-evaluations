/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 02fc3dc4
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusLost(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000068;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  thunk_FUN_01656ef8();
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 8))();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar3 = FUN_031c8668(uVar3,0);
    if (in_stack_00000068 == 0) goto LAB_02fc3f6c;
    lVar1 = FUN_02cab2b8(in_stack_00000068,*(undefined8 *)PTR_DAT_06df8b20,uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_015c2790(lVar4);
    }
    if (lVar1 == 0) {
      FUN_031dba18(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar2 = thunk_FUN_015d0480(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(lVar1,lVar4);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar5 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar1 = FUN_03f038c8(0);
  if (lVar1 != 0) {
    FUN_04d772fc();
    return;
  }
LAB_02fc3f6c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


