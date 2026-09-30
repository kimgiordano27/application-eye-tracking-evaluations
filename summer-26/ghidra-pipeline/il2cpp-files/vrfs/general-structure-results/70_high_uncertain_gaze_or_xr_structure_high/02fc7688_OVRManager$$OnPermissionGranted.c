/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 02fc7688
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  if ((*(byte *)(unaff_x25 + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_015d0480(), lVar1 == 0)) {
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
    if (in_stack_00000008 == 0) goto LAB_02fc782c;
    lVar1 = FUN_02cab2b8(in_stack_00000008,*(undefined8 *)PTR_DAT_06df8b20,uVar3,0);
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
LAB_02fc782c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


