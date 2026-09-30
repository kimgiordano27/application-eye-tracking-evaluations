/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetTiledMultiResSupported
ENTRY_POINT: 061d6c9c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetTiledMultiResSupported
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int extraout_var;
  int extraout_var_00;
  long *plVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined4 uVar9;
  
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  if ((unaff_x22 == 0) || (FUN_05d417a8(), extraout_var < 1)) {
    if ((unaff_x23 == 0) ||
       ((lVar6 = FUN_05d41d28(), lVar6 == 0 ||
        (plVar7 = *(long **)(lVar6 + 0x78), plVar7 == (long *)0x0)))) {
LAB_061d6d2c:
      if ((unaff_x21 == 0) || (lVar6 = FUN_05d41d28(), lVar6 == 0)) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = *(long **)(lVar6 + 0x78);
      }
      puVar1 = Method_LTDescr_easeInCubic__;
      lVar6 = *(long *)Method_LTDescr_easeInCubic__;
      if (unaff_x20 == 0) {
        if (plVar7 == (long *)0x0) {
LAB_061d6da8:
          bVar2 = 0;
          goto LAB_061d6e58;
        }
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)
           ) goto LAB_061d6da8;
        plVar8 = (long *)0x0;
LAB_061d6dfc:
        if (plVar7[0x32] == 0) goto LAB_061d70a4;
        bVar2 = FUN_05d6f420(plVar7[0x32],0);
      }
      else {
        if (plVar7 != (long *)0x0) {
          if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar6 + 0x130)) {
            plVar7 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
                   lVar6) {
            plVar7 = (long *)0x0;
          }
        }
        lVar6 = FUN_05d41d28();
        if ((lVar6 == 0) || (plVar8 = *(long **)(lVar6 + 0x78), plVar8 == (long *)0x0)) {
LAB_061d6df4:
          plVar8 = (long *)0x0;
        }
        else {
          bVar2 = *(byte *)(*(long *)puVar1 + 0x130);
          if (*(byte *)(*plVar8 + 0x130) < bVar2) goto LAB_061d6df4;
          if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar1) {
            plVar8 = (long *)0x0;
          }
        }
        if (plVar7 != (long *)0x0) goto LAB_061d6dfc;
        bVar2 = 0;
      }
      if (plVar7 != plVar8) {
        if (plVar8 == (long *)0x0) {
          bVar3 = 0;
        }
        else {
          if (plVar8[0x32] == 0) goto LAB_061d70a4;
          bVar3 = FUN_05d6f420(plVar8[0x32],0);
        }
        bVar2 = bVar2 & bVar3;
      }
      goto LAB_061d6e58;
    }
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__)) goto LAB_061d6d2c;
    if (plVar7[0x32] == 0) goto LAB_061d70a4;
    bVar2 = FUN_05d6f420(plVar7[0x32],0);
    *(byte *)(unaff_x19 + 0x1c) = bVar2 & 1;
Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported:
    FUN_05d417a8();
    if (0 < extraout_var_00) {
      uVar4 = FUN_03669ad8();
      goto LAB_061d6ff8;
    }
  }
  else {
    bVar2 = (**(code **)(*unaff_x24 + 0x268))();
LAB_061d6e58:
    *(byte *)(unaff_x19 + 0x1c) = bVar2 & 1;
    if (unaff_x23 != 0)
    goto Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported;
  }
  if (((unaff_x22 != 0) && (lVar6 = FUN_05d41d28(), lVar6 != 0)) &&
     (plVar7 = *(long **)(lVar6 + 0x78), plVar7 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if ((bVar2 <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_LTDescr_easeInCubic__)) {
      if (plVar7[0x31] == 0) goto LAB_061d70a4;
      uVar4 = FUN_03cbf208(plVar7[0x31],
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AssetDetails>__ctor__);
      goto LAB_061d6ff8;
    }
  }
  if (((unaff_x21 == 0) || (lVar6 = FUN_05d41d28(), lVar6 == 0)) ||
     (plVar7 = *(long **)(lVar6 + 0x78), plVar7 == (long *)0x0)) {
LAB_061d6f24:
    plVar7 = (long *)0x0;
    if (unaff_x20 == 0) goto LAB_061d6f9c;
LAB_061d6f2c:
    lVar6 = FUN_05d41d28();
    if ((lVar6 == 0) || (plVar8 = *(long **)(lVar6 + 0x78), plVar8 == (long *)0x0))
    goto LAB_061d6f9c;
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar2) goto LAB_061d6f9c;
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar8 = (long *)0x0;
    }
    if (plVar7 != (long *)0x0) goto LAB_061d6fa4;
LAB_061d6f7c:
    uVar4 = 0;
  }
  else {
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar2) goto LAB_061d6f24;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar7 = (long *)0x0;
    }
    if (unaff_x20 != 0) goto LAB_061d6f2c;
LAB_061d6f9c:
    plVar8 = (long *)0x0;
    if (plVar7 == (long *)0x0) goto LAB_061d6f7c;
LAB_061d6fa4:
    if (plVar7[0x31] == 0) goto LAB_061d70a4;
    uVar4 = FUN_03cbf208(plVar7[0x31],
                         *(undefined8 *)Method_System_Collections_Generic_List<AssetDetails>__ctor__
                        );
  }
  if (plVar7 != plVar8) {
    if (plVar8 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar8[0x31] == 0) {
LAB_061d70a4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = FUN_03cbf208(plVar8[0x31],
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AssetDetails>__ctor__);
      uVar5 = uVar5 & 2;
    }
    uVar4 = uVar5 | uVar4 & 1;
  }
LAB_061d6ff8:
  *(uint *)(unaff_x19 + 0x18) = uVar4;
  if ((unaff_x21 != 0) && ((uVar4 & 1) != 0)) {
    uVar9 = FUN_03669e48();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x24) = param_2;
    *(undefined4 *)(unaff_x19 + 0x28) = param_3;
  }
  if ((unaff_x20 != 0) && ((*(byte *)(unaff_x19 + 0x18) >> 1 & 1) != 0)) {
    uVar9 = FUN_03669bb4();
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x30) = param_2;
    *(undefined4 *)(unaff_x19 + 0x34) = param_3;
    *(undefined4 *)(unaff_x19 + 0x38) = param_4;
  }
  return;
}


