/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 09d4a654
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_8;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  int *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar9;
  long unaff_x29;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 *in_stack_00000038;
  undefined8 in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
code_r0x09d4a654:
  if (*(char *)((long)unaff_x27 + 0x23) < '\0') goto LAB_09d4a688;
  if (unaff_x23 == 0) {
LAB_09d4a7e0:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar8 = 0;
LAB_09d4a6a0:
  *(undefined8 *)(unaff_x23 + 0xc) = uVar8;
  FUN_074b6080(&stack0x00000078,*in_stack_00000020,in_stack_00000088._4_4_,unaff_x28,
               *(undefined8 *)PTR_DAT_0accc578);
  uVar1 = in_stack_00000080;
  uVar8 = in_stack_00000078;
  uVar9 = *(undefined8 *)(unaff_x24 + unaff_x21 * 8);
  if (*(int *)(*(long *)PTR_DAT_0ac40278 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  in_stack_00000060 = uVar9;
  thunk_FUN_049ee3d8(&stack0x00000060,uVar9);
  in_stack_00000068 = uVar8;
  in_stack_00000070 = uVar1;
  thunk_FUN_049ee3d8(&stack0x00000068,0);
  in_stack_00000098 = in_stack_00000068;
  in_stack_00000090 = in_stack_00000060;
  in_stack_000000a0 = in_stack_00000070;
  FUN_05a10e10(unaff_x29 + 0x18,in_stack_00000038,in_stack_00000030._4_4_,&stack0x00000090,10,
               *(undefined8 *)PTR_DAT_0accc568);
  iVar2 = *unaff_x27;
  iVar4 = FUN_09d49a78(&stack0x00000060);
  if (iVar4 == 5) goto UnityEngine_Rendering_UnsafeCommandBuffer__SetRenderTarget;
LAB_09d4a760:
  *(undefined1 *)(unaff_x29 + 0x31) = 1;
UnityEngine_Rendering_UnsafeCommandBuffer__SetRenderTarget:
  unaff_w20 = unaff_w20 + 1;
  if (in_stack_00000040._4_4_ != unaff_w20) goto LAB_09d4a478;
LAB_09d4a7a8:
  do {
    do {
      unaff_x21 = unaff_x21 + 1;
      if (*(int *)(unaff_x29 + 0x28) <= (int)unaff_x21) {
        *(undefined1 *)(unaff_x29 + 0x30) = 1;
        return;
      }
      lVar6 = *(long *)(unaff_x29 + 8);
      if (lVar6 == 0) goto LAB_09d4a7e0;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      unaff_x24 = lVar6 + 0x20;
      lVar6 = *(long *)(unaff_x24 + unaff_x21 * 8);
      if ((lVar6 == 0) || (in_stack_00000018 = *(long *)(lVar6 + 0x20), in_stack_00000018 == 0))
      goto LAB_09d4a7e0;
      in_stack_00000040._4_4_ = *(int *)(in_stack_00000018 + 0x44);
    } while (in_stack_00000040._4_4_ == 0);
    in_stack_00000030._4_4_ = *in_stack_00000038;
    iStack0000000000000048 = FUN_09d5e748(in_stack_00000018,in_stack_00000040._4_4_ + -1,0);
    unaff_x25 = (undefined8 *)FUN_09d5fe68(in_stack_00000018,iStack0000000000000048,0);
    iVar4 = FUN_09d5fdf8(in_stack_00000018,0);
  } while (in_stack_00000040._4_4_ < 1);
  in_stack_00000010 = (long)iVar4;
  iVar2 = 0;
  unaff_w20 = 0;
  unaff_x23 = 0;
  in_stack_00000028 = (long)(iVar4 - *(int *)(in_stack_00000018 + 0x4c));
LAB_09d4a478:
  if (unaff_w20 != 0) {
    iStack0000000000000048 = iStack0000000000000048 + -1;
    if (iStack0000000000000048 < 0) {
      iStack0000000000000048 = *(int *)(in_stack_00000018 + 0x48) + -1;
      unaff_x25 = (undefined8 *)FUN_09d5fe68(in_stack_00000018,iStack0000000000000048,0);
    }
    else {
      unaff_x25 = (undefined8 *)((long)unaff_x25 - in_stack_00000010);
    }
  }
  unaff_x27 = (int *)FUN_09d5fa60(unaff_x25,0);
  if (unaff_x27 == (int *)0x0) goto LAB_09d4a7e0;
  iVar4 = unaff_x27[9];
  if (*unaff_x27 == iVar2) {
    uVar5 = FUN_09d0c7e8((char)unaff_x27[8],0);
    if ((uVar5 & 1) == 0) goto LAB_09d4a76c;
  }
  uVar5 = FUN_09d0c7e8((char)unaff_x27[8],0);
  if (((uVar5 & 1) == 0) ||
     (((*(char *)((long)unaff_x27 + 0x23) < '\0' && (unaff_x27[9] == in_stack_00000008._4_4_)) ||
      (iVar4 == iStack000000000000004c)))) {
    if (*in_stack_00000020 == 0) goto LAB_09d4a7e0;
    unaff_x28 = (undefined8 *)FUN_09d5f23c(*in_stack_00000020,(long)&stack0x00000088 + 4,0);
    unaff_x23 = FUN_09d5fa68(unaff_x28,0);
    if (*in_stack_00000020 == 0) goto LAB_09d4a7e0;
    iVar2 = FUN_09d5fdf8(*in_stack_00000020,0);
    if ((unaff_x25 == (undefined8 *)0x0) || (unaff_x28 == (undefined8 *)0x0)) goto LAB_09d4a7e0;
    *unaff_x28 = *unaff_x25;
    lVar6 = *in_stack_00000020;
    if ((lVar6 == 0) ||
       ((lVar7 = *(long *)(unaff_x24 + unaff_x21 * 8), lVar7 == 0 ||
        (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)))) goto LAB_09d4a7e0;
    unaff_x19 = (undefined8 *)((long)unaff_x28 + (long)iVar2 + -0xc);
    auVar10 = FUN_09d5e5d4(lVar7,0);
    _in_stack_00000050 = auVar10;
    uVar8 = FUN_07283848(&stack0x00000050,0,*(undefined8 *)PTR_DAT_0ac41010);
    uVar3 = FUN_05a0ab30(lVar6 + 0x20,lVar6 + 0x28,uVar8,10,*(undefined8 *)PTR_DAT_0accc558);
    *(undefined4 *)((long)unaff_x28 + 0xc) = uVar3;
    FUN_0a12b6b4(unaff_x23,unaff_x27,0x38,0);
    FUN_0a12b6b4(unaff_x19,(long)unaff_x25 + in_stack_00000028,0xc,0);
    if ((*(byte *)(unaff_x27 + 8) - 3 < 0xfffffffe) ||
       ((iVar4 == iStack000000000000004c ||
        (((*(byte *)(unaff_x27 + 8) == 2 && (*(char *)((long)unaff_x27 + 0x23) < '\0')) &&
         (unaff_x27[9] == in_stack_00000008._4_4_)))))) {
      if (iVar4 == iStack000000000000004c) goto LAB_09d4a688;
      goto code_r0x09d4a654;
    }
    uVar8 = 0;
    *(undefined1 *)(unaff_x23 + 0x20) = 5;
    goto LAB_09d4a6a0;
  }
  goto LAB_09d4a7a8;
LAB_09d4a76c:
  if ((iVar4 != iStack000000000000004c) || ((char)unaff_x27[8] != '\x01'))
  goto UnityEngine_Rendering_UnsafeCommandBuffer__SetRenderTarget;
  *(undefined1 *)(unaff_x23 + 0x20) = 1;
  uVar8 = *(undefined8 *)(unaff_x27 + 1);
  *(undefined8 *)(unaff_x23 + 0xc) = 0;
  *(undefined8 *)(unaff_x23 + 4) = uVar8;
  goto LAB_09d4a760;
LAB_09d4a688:
  if ((unaff_x19 == (undefined8 *)0x0) || (unaff_x23 == 0)) goto LAB_09d4a7e0;
  uVar8 = *unaff_x19;
  goto LAB_09d4a6a0;
}


