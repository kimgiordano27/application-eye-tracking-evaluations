/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 0141adb8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BodyJointLocation>(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined2 *unaff_x20;
  long lVar8;
  undefined8 *__dest;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x26;
  long unaff_x29;
  
  puVar3 = PTR_DAT_027b32e0;
  uVar9 = (ulong)*(uint *)((*(undefined8 **)(unaff_x19 + 0x38))[4] + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(uVar9 + 0xf & 0x1fffffff0));
  uVar10 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar10 = FUN_01f7d8a0(uVar10,0);
  uVar5 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f00,0);
  uVar6 = FUN_01f7f404(uVar10,uVar5,0);
  if ((uVar6 & 1) == 0) {
    uVar10 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar10 = FUN_01f7d8a0(uVar10,0);
    uVar5 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f08,0);
    uVar6 = FUN_01f7f404(uVar10,uVar5,0);
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    if ((uVar6 & 1) == 0) {
      lVar8 = *(long *)(unaff_x19 + 0x38);
      if (-1 < *(int *)(*(long *)(lVar8 + 0x20) + 0x28)) {
        unaff_x20 = (undefined2 *)(unaff_x29 + -0x40);
      }
      memcpy(__dest,unaff_x20,uVar9);
      uVar4 = (*(code *)**(undefined8 **)(lVar8 + 0x28))(unaff_x29 + -0x38);
      puVar7 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38);
      uVar5 = *puVar7;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      *(undefined4 *)(unaff_x29 + -0xc) = uVar4;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar10;
      *(undefined8 **)(unaff_x29 + -0x20) = __dest;
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
      (*(code *)puVar7[2])(uVar5,puVar7,0,unaff_x29 + -0x28,unaff_x29 + -0x10);
      uVar9 = (ulong)*(uint *)(unaff_x29 + -0x10);
    }
    else {
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
        unaff_x20 = (undefined2 *)(unaff_x29 + -0x40);
      }
      uVar2 = *unaff_x20;
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28))(unaff_x29 + -0x38);
      uVar9 = FUN_01f7b914(uVar10,uVar2,uVar4,0);
    }
  }
  else {
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      unaff_x20 = (undefined2 *)(unaff_x29 + -0x40);
    }
    uVar1 = *(undefined1 *)unaff_x20;
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28))(unaff_x29 + -0x38);
    uVar9 = FUN_01f7afbc(uVar10,uVar1,uVar4,0);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


