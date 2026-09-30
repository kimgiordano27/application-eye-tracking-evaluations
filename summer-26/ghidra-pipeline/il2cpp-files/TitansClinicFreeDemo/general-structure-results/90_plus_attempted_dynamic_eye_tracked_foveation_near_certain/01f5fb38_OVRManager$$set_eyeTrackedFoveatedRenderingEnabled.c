/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01f5fb38
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool OVRManager__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  ulong unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000018;
  undefined1 uStack000000000000001c;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027ba068);
  thunk_FUN_01279b34(PTR_DAT_027c0ad8);
  *(undefined1 *)(unaff_x20 + 0xcac) = 1;
  puVar2 = PTR_DAT_027ba068;
  in_stack_00000008 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar1 = PTR_DAT_027b1b40;
  lVar3 = FUN_01e76400((undefined8 *)(unaff_x19 + 0x38),0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01220628(lVar5);
  }
  lVar5 = FUN_01e71bac(0);
  uStack000000000000001c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)puVar1);
  }
  uVar7 = lVar3 - *(long *)(unaff_x19 + 0x28);
  if (lVar3 < 864000000000) {
    if ((unaff_x22 & 1) == 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    }
    else {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01e8c290(0);
    }
    if (lVar5 == 0) {
LAB_01f5fd90:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar3 = FUN_01e750b0(lVar5,uVar6,2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01220628(*(long *)puVar1);
    }
    uVar7 = lVar3 + uVar7;
    if ((long)uVar7 < 0) {
      uVar7 = uVar7 + 864000000000;
    }
  }
  else {
    if (uVar7 < 0x2bca2875f4374000) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01e766e4(&stack0x00000008,uVar7,1,0);
      uVar6 = in_stack_00000008;
      in_stack_00000018 = 0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01e71bac(0);
      lVar3 = FUN_01e71c2c(uVar6,uVar4,&stack0x00000018,&stack0x0000001c,0);
    }
    else {
      if (lVar5 == 0) goto LAB_01f5fd90;
      lVar3 = FUN_01e750b0(lVar5,*(undefined8 *)(unaff_x19 + 0x38),2,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01220628(*(long *)puVar1);
    }
    uVar7 = lVar3 + uVar7;
  }
  if (uVar7 < 0x2bca2875f4374000) {
    FUN_01e76648();
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
  }
  else {
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar3 = *unaff_x24;
    }
    puVar2 = PTR_DAT_027c0ad8;
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
    uVar6 = *(undefined8 *)puVar2;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  return uVar7 < 0x2bca2875f4374000;
}


