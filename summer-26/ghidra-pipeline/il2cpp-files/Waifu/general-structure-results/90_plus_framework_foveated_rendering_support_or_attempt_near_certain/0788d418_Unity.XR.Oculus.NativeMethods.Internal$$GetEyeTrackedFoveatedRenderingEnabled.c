/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0788d418
PROGRAM: Waifu-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  
  FUN_0335b6c8(param_1 + 0xf68,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x400) = 1;
  plVar7 = (long *)(unaff_x19 + 0x78);
  lVar5 = *plVar7;
  if (lVar5 == 0) {
    uVar2 = *(undefined4 *)(unaff_x19 + 0x48);
    lVar5 = FUN_03398a84(DAT_083daf68);
    *(undefined4 *)(lVar5 + 0x18) = uVar2;
    *(long *)(unaff_x19 + 0x78) = lVar5;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar5 = *plVar7;
    }
  }
  lVar6 = *(long *)(unaff_x19 + 0x38);
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_0788d4e8;
    *(undefined1 *)(lVar5 + 0x14) = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_0788d4e8:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    cVar3 = *(char *)(lVar5 + 0x14);
    *(undefined1 *)(lVar5 + 0x14) = 0;
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0788d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),lVar5,*(undefined8 *)(lVar6 + 0x28))
      ;
      return;
    }
  }
  return;
}


