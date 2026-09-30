/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 02fc3ce8
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusAcquired(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000068;
  
  iVar1 = FUN_02cad608(param_1,param_2,0);
                    /* try { // try from 02fc3cf4 to 030c3d1b has its CatchHandler @ 02fc3d38 */
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x27);
  }
                    /* try { // try from 02fc3d1c to 030c3d27 has its CatchHandler @ 02fc2e70 */
  uVar5 = FUN_031c8668(uVar5,0);
  if (in_stack_00000068 != 0) {
                    /* try { // try from 02fc3d28 to 030c3d2f has its CatchHandler @ 02fc3d38 */
                    /* catch() { ... } // from try @ 02fc3ca4 with catch @ 02fc3d30 */
                    /* catch() { ... } // from try @ 02fc3cf4 with catch @ 02fc3d38
                       catch() { ... } // from try @ 02fc3d28 with catch @ 02fc3d38 */
    lVar2 = FUN_02cab2b8(in_stack_00000068,*(undefined8 *)PTR_DAT_06dae300,uVar5,0);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_015d0480(lVar2,lVar6);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar2,lVar6);
      }
    }
    *(long *)(unaff_x19 + 0x30) = lVar3;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_015c2790(lVar6);
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_015d0480(lVar2,lVar6);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar2,lVar6);
      }
    }
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x30),lVar3);
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 8))();
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar5 = FUN_031c8668(uVar5,0);
      if (in_stack_00000068 == 0) goto LAB_02fc3f6c;
      lVar2 = FUN_02cab2b8(in_stack_00000068,*(undefined8 *)PTR_DAT_06df8b20,uVar5,0);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_015c2790(lVar6);
      }
      if (lVar2 == 0) {
        FUN_031dba18(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar3 = thunk_FUN_015d0480(lVar2,lVar6);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar2,lVar6);
      }
      if (0 < *(int *)(lVar3 + 0x18)) {
        uVar4 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar2 = FUN_03f038c8(0);
    if (lVar2 != 0) {
      FUN_04d772fc();
      return;
    }
  }
LAB_02fc3f6c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


