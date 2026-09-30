/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 061d6ed0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  byte bVar1;
  bool in_CY;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar7;
  
  if ((in_CY) && (*(long *)(*(long *)(in_x10 + 200) + in_x11 * 8 + -8) == in_x9)) {
    if (*(long *)(param_1 + 0x188) == 0) goto LAB_061d70a4;
    uVar2 = FUN_03cbf208(*(long *)(param_1 + 0x188),
                         *(undefined8 *)Method_System_Collections_Generic_List<AssetDetails>__ctor__
                        );
    goto LAB_061d6ff8;
  }
  if (((unaff_x21 == 0) || (lVar4 = FUN_05d41d28(), lVar4 == 0)) ||
     (plVar5 = *(long **)(lVar4 + 0x78), plVar5 == (long *)0x0)) {
LAB_061d6f24:
    plVar5 = (long *)0x0;
    if (unaff_x20 == 0) goto LAB_061d6f9c;
LAB_061d6f2c:
    lVar4 = FUN_05d41d28();
    if ((lVar4 == 0) || (plVar6 = *(long **)(lVar4 + 0x78), plVar6 == (long *)0x0))
    goto LAB_061d6f9c;
    bVar1 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_061d6f9c;
    if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar6 = (long *)0x0;
    }
    if (plVar5 != (long *)0x0) goto LAB_061d6fa4;
LAB_061d6f7c:
    uVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_061d6f24;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar5 = (long *)0x0;
    }
    if (unaff_x20 != 0) goto LAB_061d6f2c;
LAB_061d6f9c:
    plVar6 = (long *)0x0;
    if (plVar5 == (long *)0x0) goto LAB_061d6f7c;
LAB_061d6fa4:
    if (plVar5[0x31] == 0) goto LAB_061d70a4;
    uVar2 = FUN_03cbf208(plVar5[0x31],
                         *(undefined8 *)Method_System_Collections_Generic_List<AssetDetails>__ctor__
                        );
  }
  if (plVar5 != plVar6) {
    if (plVar6 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      if (plVar6[0x31] == 0) {
LAB_061d70a4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = FUN_03cbf208(plVar6[0x31],
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AssetDetails>__ctor__);
      uVar3 = uVar3 & 2;
    }
    uVar2 = uVar3 | uVar2 & 1;
  }
LAB_061d6ff8:
  *(uint *)(unaff_x19 + 0x18) = uVar2;
  if ((unaff_x21 != 0) && ((uVar2 & 1) != 0)) {
    uVar7 = FUN_03669e48();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x24) = param_3;
    *(undefined4 *)(unaff_x19 + 0x28) = param_4;
  }
  if ((unaff_x20 != 0) && ((*(byte *)(unaff_x19 + 0x18) >> 1 & 1) != 0)) {
    uVar7 = FUN_03669bb4();
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x30) = param_3;
    *(undefined4 *)(unaff_x19 + 0x34) = param_4;
    *(undefined4 *)(unaff_x19 + 0x38) = param_5;
  }
  return;
}


