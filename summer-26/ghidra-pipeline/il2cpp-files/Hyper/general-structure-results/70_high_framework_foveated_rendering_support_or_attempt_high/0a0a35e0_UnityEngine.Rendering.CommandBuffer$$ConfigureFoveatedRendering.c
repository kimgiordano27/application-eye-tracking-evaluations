/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 0a0a35e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_5;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  long unaff_x21;
  undefined8 *unaff_x22;
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
  
  puVar5 = PTR_DAT_0ac55e88;
  lVar6 = *(long *)PTR_DAT_0ac55e88;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *(long *)puVar5;
  }
  puVar3 = PTR_DAT_0ac42b68;
  in_stack_000000c8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x188);
  in_stack_000000c0 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x180);
  uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac42b68,&stack0x000000c0);
  uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac2aa18,*unaff_x22,uVar7,0);
  if (unaff_x21 != 0) {
    *(undefined8 *)(unaff_x21 + 0x10) = uVar7;
    thunk_FUN_049ee3d8();
    *(undefined4 *)(unaff_x21 + 0x28) = 0x164;
    in_stack_00000100 = FUN_09d2cb18();
    thunk_FUN_049ee3d8(&stack0x00000100,in_stack_00000100);
    in_stack_00000088 = in_stack_000000d8;
    in_stack_00000080 = in_stack_000000d0;
    in_stack_00000098 = in_stack_000000e8;
    in_stack_00000090 = in_stack_000000e0;
    in_stack_000000a8 = in_stack_000000f8;
    in_stack_000000a0 = in_stack_000000f0;
    in_stack_000000b0 = in_stack_00000100;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    in_stack_00000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    in_stack_00000070 = in_stack_000000b0;
    plVar8 = (long *)FUN_09cb0e64(&stack0x00000040,0);
    if (plVar8 == (long *)0x0) {
      *unaff_x20 = 0;
    }
    else {
      bVar2 = *(byte *)(*(long *)PTR_DAT_0acdba98 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar2) {
        plVar8 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
               *(long *)PTR_DAT_0acdba98) {
        plVar8 = (long *)0x0;
      }
      *unaff_x20 = (long)plVar8;
    }
    thunk_FUN_049ee3d8();
    lVar6 = *(long *)puVar5;
    lVar11 = *unaff_x20;
    if (lVar11 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *(long *)puVar5;
      }
      in_stack_00000088 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x188);
      in_stack_00000080 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x180);
      uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar3,&stack0x00000080);
      uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0acdbaa0,*unaff_x22,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0a4a0);
      }
      FUN_0a137c04(uVar7);
    }
    else {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *(long *)puVar5;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x180);
      uVar1 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x188);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c(*unaff_x23);
      }
      FUN_09cb1c74(lVar11,uVar7,uVar1,0);
    }
    puVar5 = PTR_DAT_0acdbaa8;
    plVar8 = (long *)(unaff_x19 + 0x38);
    lVar6 = *plVar8;
    if (lVar6 == 0) {
      in_stack_00000100 = 0;
      in_stack_000000e8 = *(undefined8 *)PTR_DAT_0acdbaa8;
      in_stack_000000e0 = 0;
      in_stack_000000f8 = 0;
      in_stack_000000f0 = 0;
      in_stack_000000d8 = 0;
      in_stack_000000d0 = 0;
      thunk_FUN_049ee3d8(&stack0x000000e8);
      lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acd63f8);
      FUN_09d2cb20(lVar6,0);
      puVar3 = PTR_DAT_0ac55e88;
      lVar11 = *(long *)PTR_DAT_0ac55e88;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar11 = *(long *)puVar3;
      }
      puVar4 = PTR_DAT_0ac42b68;
      in_stack_000000c8 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x198);
      in_stack_000000c0 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 400);
      uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac42b68,&stack0x000000c0);
      uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac2aa18,*(undefined8 *)puVar5,uVar7,0);
      if (lVar6 == 0) goto LAB_0a0a3ac8;
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_049ee3d8();
      *(undefined4 *)(lVar6 + 0x28) = 0x264;
      in_stack_00000100 = FUN_09d2cb18(lVar6,0);
      thunk_FUN_049ee3d8(&stack0x00000100,in_stack_00000100);
      in_stack_00000088 = in_stack_000000d8;
      in_stack_00000080 = in_stack_000000d0;
      in_stack_00000098 = in_stack_000000e8;
      in_stack_00000090 = in_stack_000000e0;
      in_stack_000000a8 = in_stack_000000f8;
      in_stack_000000a0 = in_stack_000000f0;
      in_stack_000000b0 = in_stack_00000100;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      plVar9 = (long *)FUN_09cb0e64();
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        *plVar8 = 0;
      }
      else {
        lVar6 = *(long *)PTR_DAT_0acdba98;
        bVar2 = *(byte *)(lVar6 + 0x130);
        if (*(byte *)(*plVar9 + 0x130) < bVar2) {
          plVar10 = (long *)0x0;
        }
        else {
          plVar10 = plVar9;
          if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != lVar6) {
            plVar10 = (long *)0x0;
          }
        }
        *plVar8 = (long)plVar10;
        if (*(byte *)(*plVar9 + 0x130) < bVar2) {
          plVar9 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != lVar6) {
          plVar9 = (long *)0x0;
        }
      }
      thunk_FUN_049ee3d8(plVar8,plVar9);
      lVar6 = *(long *)puVar3;
      lVar11 = *plVar8;
      if (lVar11 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar6 = *(long *)puVar3;
        }
        in_stack_00000088 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x198);
        in_stack_00000080 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 400);
        uVar7 = thunk_FUN_04983b98(*(undefined8 *)puVar4,&stack0x00000080);
        uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0acdbaa0,*(undefined8 *)puVar5,uVar7,0);
        if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0a4a0);
        }
        FUN_0a137c04(uVar7);
      }
      else {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar6 = *(long *)puVar3;
        }
        uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 400);
        uVar1 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x198);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_049a583c(*unaff_x23);
        }
        FUN_09cb1c74(lVar11,uVar7,uVar1,0);
      }
    }
    else {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_09cb0f60(lVar6,0);
    }
    return;
  }
LAB_0a0a3ac8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


