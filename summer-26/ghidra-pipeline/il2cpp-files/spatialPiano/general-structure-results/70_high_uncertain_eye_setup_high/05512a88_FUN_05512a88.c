/*
FUNCTION_NAME: FUN_05512a88
ENTRY_POINT: 05512a88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05512a88(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar3 = UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo;
  if ((DAT_06bbf5d2 & 1) == 0) {
    FUN_02f08768(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf5d2 = 1;
  }
  plVar4 = (long *)FUN_02f0880c(*(undefined8 *)puVar3,*(undefined4 *)(param_1 + 0x10));
  puVar3 = OVRPlugin_OVRP_1_86_0_TypeInfo;
  if (plVar4 != (long *)0x0) {
    uVar2 = (int)plVar4[3] - 1;
    uVar8 = (ulong)uVar2;
    if (-1 < (int)uVar2) {
      if (param_2 == 0) goto LAB_05512bb8;
      do {
        lVar5 = FUN_054f28e8(param_2,0);
        lVar6 = 0;
        if (lVar5 != 0) {
          uVar7 = *(undefined8 *)puVar3;
          lVar6 = thunk_FUN_02f45174(lVar5,uVar7);
          if (lVar6 == 0) {
LAB_05512b9c:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(lVar5,uVar7);
          }
          lVar6 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar6 == 0) {
            uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar7,0);
          }
          uVar7 = *(undefined8 *)puVar3;
          lVar6 = thunk_FUN_02f45174(lVar5,uVar7);
          if (lVar6 == 0) goto LAB_05512b9c;
        }
        if (*(uint *)(plVar4 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar4[uVar8 + 4] = lVar6;
        bVar1 = 0 < (long)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar1);
    }
    uVar7 = FUN_05512bbc(plVar4);
    if (param_2 != 0) {
      FUN_054f2924(param_2,uVar7,0);
      return 1;
    }
  }
LAB_05512bb8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


