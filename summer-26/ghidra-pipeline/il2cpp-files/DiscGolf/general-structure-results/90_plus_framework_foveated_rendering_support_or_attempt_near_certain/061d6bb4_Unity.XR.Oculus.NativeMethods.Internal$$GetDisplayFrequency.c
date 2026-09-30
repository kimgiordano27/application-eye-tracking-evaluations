/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetDisplayFrequency
ENTRY_POINT: 061d6bb4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetDisplayFrequency
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int extraout_var;
  int extraout_var_00;
  long *plVar12;
  long *plVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined4 uVar14;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  
  FUN_02d965b8(Method_LTDescr_easeInCubic__);
  FUN_02d965b8(Method_LTDescr_easeInElastic__);
  *(undefined1 *)(unaff_x20 + 0xea8) = 1;
  if (unaff_x19 == 0) {
    return;
  }
  lVar6 = FUN_05d53428(unaff_x24 + 0x16,0);
  lVar7 = FUN_05d53428(unaff_x24 + 0x19,0);
  lVar8 = FUN_05d53428(unaff_x24 + 0x1c,0);
  lVar9 = FUN_05d53428(unaff_x24 + 0x1f,0);
  if (((char)unaff_x24[0x49] == '\0') && (lVar6 != 0 || lVar7 != 0)) {
    in_stack_00000028 = unaff_x24[0x17];
    in_stack_00000020 = unaff_x24[0x16];
    in_stack_00000030 = unaff_x24[0x18];
    uVar10 = FUN_061d70ac(&stack0x00000020);
    if (((uVar10 & 1) != 0) || (uVar10 = FUN_061d70ac(), (uVar10 & 1) != 0)) {
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630c038(*(undefined8 *)Method_LTDescr_easeInElastic__);
    }
    *(undefined1 *)(unaff_x24 + 0x49) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x1c) = 0;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  if ((lVar8 == 0) || (FUN_05d417a8(lVar8,0), extraout_var < 1)) {
    if ((lVar9 == 0) ||
       ((lVar11 = FUN_05d41d28(lVar9,0), lVar11 == 0 ||
        (plVar12 = *(long **)(lVar11 + 0x78), plVar12 == (long *)0x0)))) {
LAB_061d6d2c:
      if ((lVar6 == 0) || (lVar11 = FUN_05d41d28(lVar6,0), lVar11 == 0)) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = *(long **)(lVar11 + 0x78);
      }
      puVar1 = Method_LTDescr_easeInCubic__;
      lVar11 = *(long *)Method_LTDescr_easeInCubic__;
      if (lVar7 == 0) {
        if (plVar12 == (long *)0x0) {
LAB_061d6da8:
          bVar2 = 0;
          goto LAB_061d6e58;
        }
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) goto LAB_061d6da8;
        plVar13 = (long *)0x0;
LAB_061d6dfc:
        if (plVar12[0x32] == 0) goto LAB_061d70a4;
        bVar2 = FUN_05d6f420(plVar12[0x32],0);
      }
      else {
        if (plVar12 != (long *)0x0) {
          if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) {
            plVar12 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8)
                   != lVar11) {
            plVar12 = (long *)0x0;
          }
        }
        lVar11 = FUN_05d41d28(lVar7,0);
        if ((lVar11 == 0) || (plVar13 = *(long **)(lVar11 + 0x78), plVar13 == (long *)0x0)) {
LAB_061d6df4:
          plVar13 = (long *)0x0;
        }
        else {
          bVar2 = *(byte *)(*(long *)puVar1 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_061d6df4;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar1) {
            plVar13 = (long *)0x0;
          }
        }
        if (plVar12 != (long *)0x0) goto LAB_061d6dfc;
        bVar2 = 0;
      }
      if (plVar12 != plVar13) {
        if (plVar13 == (long *)0x0) {
          bVar3 = 0;
        }
        else {
          if (plVar13[0x32] == 0) goto LAB_061d70a4;
          bVar3 = FUN_05d6f420(plVar13[0x32],0);
        }
        bVar2 = bVar2 & bVar3;
      }
      goto LAB_061d6e58;
    }
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__)) goto LAB_061d6d2c;
    if (plVar12[0x32] == 0) goto LAB_061d70a4;
    bVar2 = FUN_05d6f420(plVar12[0x32],0);
    *(byte *)(unaff_x19 + 0x1c) = bVar2 & 1;
Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported:
    FUN_05d417a8(lVar9,0);
    if (0 < extraout_var_00) {
      uVar4 = FUN_03669ad8(lVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<QDOODOQQDQODD>_Clear__);
      goto LAB_061d6ff8;
    }
  }
  else {
    bVar2 = (**(code **)(*unaff_x24 + 0x268))();
LAB_061d6e58:
    *(byte *)(unaff_x19 + 0x1c) = bVar2 & 1;
    if (lVar9 != 0)
    goto Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported;
  }
  if (((lVar8 != 0) && (lVar8 = FUN_05d41d28(lVar8,0), lVar8 != 0)) &&
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_LTDescr_easeInCubic__)) {
      if (plVar12[0x31] == 0) goto LAB_061d70a4;
      uVar4 = FUN_03cbf208(plVar12[0x31],
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AssetDetails>__ctor__);
      goto LAB_061d6ff8;
    }
  }
  if (((lVar6 == 0) || (lVar8 = FUN_05d41d28(lVar6,0), lVar8 == 0)) ||
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 == (long *)0x0)) {
LAB_061d6f24:
    plVar12 = (long *)0x0;
    if (lVar7 == 0) goto LAB_061d6f9c;
LAB_061d6f2c:
    lVar8 = FUN_05d41d28(lVar7,0);
    if ((lVar8 == 0) || (plVar13 = *(long **)(lVar8 + 0x78), plVar13 == (long *)0x0))
    goto LAB_061d6f9c;
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_061d6f9c;
    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar13 = (long *)0x0;
    }
    if (plVar12 == (long *)0x0) goto LAB_061d6f7c;
LAB_061d6fa4:
    if (plVar12[0x31] == 0) goto LAB_061d70a4;
    uVar4 = FUN_03cbf208(plVar12[0x31],
                         *(undefined8 *)Method_System_Collections_Generic_List<AssetDetails>__ctor__
                        );
  }
  else {
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_061d6f24;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar12 = (long *)0x0;
    }
    if (lVar7 != 0) goto LAB_061d6f2c;
LAB_061d6f9c:
    plVar13 = (long *)0x0;
    if (plVar12 != (long *)0x0) goto LAB_061d6fa4;
LAB_061d6f7c:
    uVar4 = 0;
  }
  if (plVar12 != plVar13) {
    if (plVar13 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar13[0x31] == 0) {
LAB_061d70a4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = FUN_03cbf208(plVar13[0x31],
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AssetDetails>__ctor__);
      uVar5 = uVar5 & 2;
    }
    uVar4 = uVar5 | uVar4 & 1;
  }
LAB_061d6ff8:
  *(uint *)(unaff_x19 + 0x18) = uVar4;
  if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
    uVar14 = FUN_03669e48(lVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<QDOODOQQDQODD>_Add__);
    *(undefined4 *)(unaff_x19 + 0x20) = uVar14;
    *(undefined4 *)(unaff_x19 + 0x24) = param_2;
    *(undefined4 *)(unaff_x19 + 0x28) = param_3;
  }
  if ((lVar7 != 0) && ((*(byte *)(unaff_x19 + 0x18) >> 1 & 1) != 0)) {
    uVar14 = FUN_03669bb4(lVar7,*(undefined8 *)
                                 Method_System_Collections_Generic_List<QDOODOQQDQODD>__ctor__);
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar14;
    *(undefined4 *)(unaff_x19 + 0x30) = param_2;
    *(undefined4 *)(unaff_x19 + 0x34) = param_3;
    *(undefined4 *)(unaff_x19 + 0x38) = param_4;
  }
  return;
}


