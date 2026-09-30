/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected
ENTRY_POINT: 088f5ae8
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


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering_Injected(void)

{
  long *plVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 *unaff_x21;
  long *unaff_x22;
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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  thunk_FUN_040d65a8();
  puVar4 = PTR_DAT_0931bff0;
  in_stack_000000c8 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x188);
  in_stack_000000c0 = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x180);
  uVar7 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_0931bff0,&stack0x000000c0);
  uVar7 = FUN_074e74a4(*(undefined8 *)PTR_DAT_092cb328,*unaff_x21,uVar7,0);
  if (unaff_x20 == 0) {
LAB_088f5fbc:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  thunk_FUN_040ec700();
  *(undefined4 *)(unaff_x20 + 0x28) = 0x164;
  in_stack_00000100 = FUN_08287118();
  thunk_FUN_040ec700(&stack0x00000100,in_stack_00000100);
  in_stack_00000088 = in_stack_000000d8;
  in_stack_00000080 = in_stack_000000d0;
  in_stack_00000098 = in_stack_000000e8;
  in_stack_00000090 = in_stack_000000e0;
  in_stack_000000a8 = in_stack_000000f8;
  in_stack_000000a0 = in_stack_000000f0;
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
  plVar8 = (long *)FUN_08209e18(&stack0x00000040,0);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
    *plVar1 = 0;
  }
  else {
    lVar9 = *(long *)PTR_DAT_0933d028;
    bVar3 = *(byte *)(lVar9 + 0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar3) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = plVar8;
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) != lVar9) {
        plVar10 = (long *)0x0;
      }
    }
    *plVar1 = (long)plVar10;
    if (*(byte *)(*plVar8 + 0x130) < bVar3) {
      plVar8 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) != lVar9) {
      plVar8 = (long *)0x0;
    }
  }
  thunk_FUN_040ec700(plVar1,plVar8);
  lVar9 = *unaff_x22;
  lVar11 = *plVar1;
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *unaff_x22;
    }
    in_stack_00000088 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x188);
    in_stack_00000080 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x180);
    uVar7 = thunk_FUN_040b4b34(*(undefined8 *)puVar4,&stack0x00000080);
    uVar7 = FUN_074e74a4(*(undefined8 *)PTR_DAT_0933d030,*unaff_x21,uVar7,0);
    if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
    }
    FUN_0897e9fc(uVar7);
  }
  else {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar9 = *unaff_x22;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x180);
    uVar2 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x188);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x23);
    }
    FUN_0820ac28(lVar11,uVar7,uVar2,0);
  }
  puVar4 = PTR_DAT_0933cd70;
  lVar9 = *(long *)(unaff_x19 + 0x380);
  if (lVar9 == 0) {
    in_stack_00000100 = 0;
    in_stack_000000e8 = *(undefined8 *)PTR_DAT_0933cd70;
    in_stack_000000e0 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000d0 = 0;
    thunk_FUN_040ec700(&stack0x000000e8);
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0933d018);
    FUN_08287120(lVar9,0);
    puVar6 = PTR_DAT_0931cc80;
    lVar11 = *(long *)PTR_DAT_0931cc80;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar11 = *(long *)puVar6;
    }
    puVar5 = PTR_DAT_0931bff0;
    in_stack_000000c8 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x198);
    in_stack_000000c0 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 400);
    uVar7 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_0931bff0,&stack0x000000c0);
    uVar7 = FUN_074e74a4(*(undefined8 *)PTR_DAT_092cb328,*(undefined8 *)puVar4,uVar7,0);
    if (lVar9 == 0) goto LAB_088f5fbc;
    *(undefined8 *)(lVar9 + 0x10) = uVar7;
    thunk_FUN_040ec700();
    *(undefined4 *)(lVar9 + 0x28) = 0x264;
    in_stack_00000100 = FUN_08287118(lVar9,0);
    thunk_FUN_040ec700(&stack0x00000100,in_stack_00000100);
    in_stack_00000088 = in_stack_000000d8;
    in_stack_00000080 = in_stack_000000d0;
    in_stack_00000098 = in_stack_000000e8;
    in_stack_00000090 = in_stack_000000e0;
    in_stack_000000a8 = in_stack_000000f8;
    in_stack_000000a0 = in_stack_000000f0;
    in_stack_000000b0 = in_stack_00000100;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    plVar1 = (long *)(unaff_x19 + 0x380);
    plVar8 = (long *)FUN_08209e18();
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      *plVar1 = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_0933d028;
      bVar3 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar3) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = plVar8;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) != lVar9) {
          plVar10 = (long *)0x0;
        }
      }
      *plVar1 = (long)plVar10;
      if (*(byte *)(*plVar8 + 0x130) < bVar3) {
        plVar8 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) != lVar9) {
        plVar8 = (long *)0x0;
      }
    }
    thunk_FUN_040ec700(plVar1,plVar8);
    lVar9 = *(long *)puVar6;
    lVar11 = *plVar1;
    if (lVar11 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar9 = *(long *)puVar6;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x198);
      in_stack_00000080 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 400);
      uVar7 = thunk_FUN_040b4b34(*(undefined8 *)puVar5,&stack0x00000080);
      uVar7 = FUN_074e74a4(*(undefined8 *)PTR_DAT_0933d030,*(undefined8 *)puVar4,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09285d70);
      }
      FUN_0897e9fc(uVar7);
    }
    else {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar9 = *(long *)puVar6;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 400);
      uVar2 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x198);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x23);
      }
      FUN_0820ac28(lVar11,uVar7,uVar2,0);
    }
  }
  else {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08209f14(lVar9,0);
  }
  return;
}


