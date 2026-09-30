/*
FUNCTION_NAME: FUN_0551f4c0
ENTRY_POINT: 0551f4c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0551f4c0(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if ((DAT_06bbf622 & 1) == 0) {
    FUN_02f08768(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf622 = 1;
  }
  iVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  puVar3 = UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo;
  if (iVar4 < 1) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    plVar6 = (long *)FUN_02f0880c(*(undefined8 *)puVar3,uVar5);
    puVar3 = OVRPlugin_OVRP_1_86_0_TypeInfo;
    if (plVar6 == (long *)0x0) goto LAB_0551f62c;
    uVar2 = (int)plVar6[3] - 1;
    uVar10 = (ulong)uVar2;
    if (-1 < (int)uVar2) {
      if (param_2 == 0) goto LAB_0551f62c;
      do {
        lVar7 = FUN_054f28e8(param_2,0);
        lVar8 = 0;
        if (lVar7 != 0) {
          uVar9 = *(undefined8 *)puVar3;
          lVar8 = thunk_FUN_02f45174(lVar7,uVar9);
          if (lVar8 == 0) {
LAB_0551f610:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(lVar7,uVar9);
          }
          lVar8 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar8 == 0) {
            uVar9 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar9,0);
          }
          uVar9 = *(undefined8 *)puVar3;
          lVar8 = thunk_FUN_02f45174(lVar7,uVar9);
          if (lVar8 == 0) goto LAB_0551f610;
        }
        if (*(uint *)(plVar6 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar6[uVar10 + 4] = lVar8;
        bVar1 = 0 < (long)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
  }
  if ((param_1[2] != 0) && (uVar9 = FUN_0550e41c(param_1[2],plVar6), param_2 != 0)) {
    FUN_054f2924(param_2,uVar9,0);
    return 1;
  }
LAB_0551f62c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


