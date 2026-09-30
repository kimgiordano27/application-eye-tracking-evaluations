/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02fc75f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__SetEyeTrackedFoveatedRenderingEnabled(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long in_x9;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  uVar4 = *(undefined8 *)(in_x9 + 0x110);
  if (in_w10 == 0) {
    thunk_FUN_016466fc(param_1);
  }
  FUN_031c8668(uVar4,0);
  if (unaff_x23 != 0) {
    lVar1 = FUN_02cab2b8();
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_015d0480(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar1,lVar5);
      }
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_015d0480(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar1,lVar5);
      }
    }
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x30),lVar2);
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 8))();
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar4 = FUN_031c8668(uVar4,0);
      if (in_stack_00000008 == 0) goto LAB_02fc782c;
      lVar1 = FUN_02cab2b8(in_stack_00000008,*(undefined8 *)PTR_DAT_06df8b20,uVar4,0);
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_015c2790(lVar5);
      }
      if (lVar1 == 0) {
        FUN_031dba18(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar2 = thunk_FUN_015d0480(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(lVar1,lVar5);
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar3 = 0;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
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
  }
LAB_02fc782c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


