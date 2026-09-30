/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 088f5a94
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_5;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(undefined1 param_1 [16])

{
  long *plVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 in_stack_00000100;
  
  puVar6 = PTR_DAT_0933cd70;
  uStack00000000000000d8 = param_1._8_8_;
  uStack00000000000000d0 = param_1._0_8_;
  uStack00000000000000e8 = *(undefined8 *)PTR_DAT_0933cd70;
  uStack00000000000000e0 = uStack00000000000000d0;
  uStack00000000000000f0 = uStack00000000000000d0;
  uStack00000000000000f8 = uStack00000000000000d8;
  thunk_FUN_040ec700(&stack0x000000e8);
  lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0933d018);
  FUN_08287120(lVar7,0);
  puVar5 = PTR_DAT_0931cc80;
  lVar8 = *(long *)PTR_DAT_0931cc80;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_0931bff0;
  in_stack_000000c8 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x188);
  in_stack_000000c0 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x180);
  uVar9 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_0931bff0,&stack0x000000c0);
  uVar9 = FUN_074e74a4(*(undefined8 *)PTR_DAT_092cb328,*(undefined8 *)puVar6,uVar9,0);
  if (lVar7 == 0) {
LAB_088f5fbc:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(lVar7 + 0x10) = uVar9;
  thunk_FUN_040ec700();
  *(undefined4 *)(lVar7 + 0x28) = 0x164;
  in_stack_00000100 = FUN_08287118(lVar7,0);
  thunk_FUN_040ec700(&stack0x00000100,in_stack_00000100);
  in_stack_00000088 = uStack00000000000000d8;
  in_stack_00000080 = uStack00000000000000d0;
  in_stack_00000098 = uStack00000000000000e8;
  in_stack_00000090 = uStack00000000000000e0;
  in_stack_000000a8 = uStack00000000000000f8;
  in_stack_000000a0 = uStack00000000000000f0;
  in_stack_000000b0 = in_stack_00000100;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  plVar1 = (long *)(unaff_x19 + 0x378);
  in_stack_00000048 = in_stack_00000088;
  in_stack_00000040 = in_stack_00000080;
  in_stack_00000058 = in_stack_00000098;
  in_stack_00000050 = in_stack_00000090;
  in_stack_00000068 = in_stack_000000a8;
  in_stack_00000060 = in_stack_000000a0;
  in_stack_00000070 = in_stack_000000b0;
  plVar10 = (long *)FUN_08209e18(&stack0x00000040,0);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
    *plVar1 = 0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_0933d028;
    bVar3 = *(byte *)(lVar7 + 0x130);
    if (*(byte *)(*plVar10 + 0x130) < bVar3) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = plVar10;
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != lVar7) {
        plVar11 = (long *)0x0;
      }
    }
    *plVar1 = (long)plVar11;
    if (*(byte *)(*plVar10 + 0x130) < bVar3) {
      plVar10 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != lVar7) {
      plVar10 = (long *)0x0;
    }
  }
  thunk_FUN_040ec700(plVar1,plVar10);
  lVar7 = *(long *)puVar5;
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar5;
    }
    in_stack_00000088 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x188);
    in_stack_00000080 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x180);
    uVar9 = thunk_FUN_040b4b34(*(undefined8 *)puVar4,&stack0x00000080);
    uVar9 = FUN_074e74a4(*(undefined8 *)PTR_DAT_0933d030,*(undefined8 *)puVar6,uVar9,0);
    if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
    }
    FUN_0897e9fc(uVar9);
  }
  else {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar7 = *(long *)puVar5;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x180);
    uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x188);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x23);
    }
    FUN_0820ac28(lVar8,uVar9,uVar2,0);
  }
  puVar5 = PTR_DAT_0933cd70;
  lVar7 = *(long *)(unaff_x19 + 0x380);
  if (lVar7 == 0) {
    in_stack_00000100 = 0;
    uStack00000000000000e8 = *(undefined8 *)PTR_DAT_0933cd70;
    uStack00000000000000e0 = 0;
    uStack00000000000000f8 = 0;
    uStack00000000000000f0 = 0;
    uStack00000000000000d8 = 0;
    uStack00000000000000d0 = 0;
    thunk_FUN_040ec700(&stack0x000000e8);
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0933d018);
    FUN_08287120(lVar7,0);
    puVar6 = PTR_DAT_0931cc80;
    lVar8 = *(long *)PTR_DAT_0931cc80;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar8 = *(long *)puVar6;
    }
    puVar4 = PTR_DAT_0931bff0;
    in_stack_000000c8 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x198);
    in_stack_000000c0 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 400);
    uVar9 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_0931bff0,&stack0x000000c0);
    uVar9 = FUN_074e74a4(*(undefined8 *)PTR_DAT_092cb328,*(undefined8 *)puVar5,uVar9,0);
    if (lVar7 == 0) goto LAB_088f5fbc;
    *(undefined8 *)(lVar7 + 0x10) = uVar9;
    thunk_FUN_040ec700();
    *(undefined4 *)(lVar7 + 0x28) = 0x264;
    in_stack_00000100 = FUN_08287118(lVar7,0);
    thunk_FUN_040ec700(&stack0x00000100,in_stack_00000100);
    in_stack_00000088 = uStack00000000000000d8;
    in_stack_00000080 = uStack00000000000000d0;
    in_stack_00000098 = uStack00000000000000e8;
    in_stack_00000090 = uStack00000000000000e0;
    in_stack_000000a8 = uStack00000000000000f8;
    in_stack_000000a0 = uStack00000000000000f0;
    in_stack_000000b0 = in_stack_00000100;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    plVar1 = (long *)(unaff_x19 + 0x380);
    plVar10 = (long *)FUN_08209e18();
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
      *plVar1 = 0;
    }
    else {
      lVar7 = *(long *)PTR_DAT_0933d028;
      bVar3 = *(byte *)(lVar7 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar3) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != lVar7) {
          plVar11 = (long *)0x0;
        }
      }
      *plVar1 = (long)plVar11;
      if (*(byte *)(*plVar10 + 0x130) < bVar3) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) != lVar7) {
        plVar10 = (long *)0x0;
      }
    }
    thunk_FUN_040ec700(plVar1,plVar10);
    lVar7 = *(long *)puVar6;
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar6;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x198);
      in_stack_00000080 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 400);
      uVar9 = thunk_FUN_040b4b34(*(undefined8 *)puVar4,&stack0x00000080);
      uVar9 = FUN_074e74a4(*(undefined8 *)PTR_DAT_0933d030,*(undefined8 *)puVar5,uVar9,0);
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
      }
      FUN_0897e9fc(uVar9);
    }
    else {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar6;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 400);
      uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x198);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x23);
      }
      FUN_0820ac28(lVar8,uVar9,uVar2,0);
    }
  }
  else {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08209f14(lVar7,0);
  }
  return;
}


