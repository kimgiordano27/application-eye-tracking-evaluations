/*
FUNCTION_NAME: FUN_05d8c5d4
ENTRY_POINT: 05d8c5d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05d8c8d0) */

undefined8 FUN_05d8c5d4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_06b82d7d & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerCylinderKHR>_ActiveNativeLayer__
                );
    FUN_02d6084c(PTR_DAT_0676c2a8);
    FUN_02d6084c(PTR_DAT_0676c2b0);
    FUN_02d6084c(PTR_DAT_0676c2b8);
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerCubeKHR>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerEquirect2KHR>_ActiveNativeLayer__
                );
    DAT_06b82d7d = 1;
  }
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_0489720c(*(long *)(param_1 + 0x20),param_2,&local_38,
                         *(undefined8 *)
                          Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerCylinderKHR>_ActiveNativeLayer__
                        );
    uVar10 = local_38;
    if ((uVar3 & 1) == 0) {
      if (param_2 == 0) goto LAB_05d8c844;
      uVar3 = FUN_05dbfc8c(param_2,0);
      if ((uVar3 & 1) == 0) {
        FUN_028f4e40(param_2);
        thunk_FUN_02dc61f4(
                          Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerEquirect2KHR>_OnCreatedStereoSwapchainCallback__
                          );
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        FUN_028f4e40(param_2);
        thunk_FUN_02dc61f4(
                          Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerEquirect2KHR>_ActiveNativeLayer__
                          );
        uVar9 = *(undefined8 *)(param_2 + 0x10);
        uVar10 = thunk_FUN_02dc61f4(
                                   Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerEquirect2KHR>_OnCreatedSwapchainCallback__
                                   );
        uVar10 = FUN_04e8e6a4(uVar10,uVar8,uVar9,0);
        thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
        uVar8 = thunk_FUN_02d9d534();
        FUN_05007004(uVar8,uVar10,0);
        uVar10 = thunk_FUN_02dc61f4(
                                   Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerEquirect2KHR>_OnRenderTextureIdIdCallback__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar8,uVar10);
      }
      FUN_05d8b88c(&local_50,param_2,*(undefined8 *)(param_1 + 0x10));
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_04144f6c(*(long *)(param_1 + 0x18),local_50,uStack_48,
                     *(undefined8 *)
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                    );
      }
      uVar3 = FUN_05d8a780(param_1);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar4 = (long *)FUN_033f6288(*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10),
                                      *(undefined8 *)PTR_DAT_0676c2b0);
        if (*(int *)(*(long *)PTR_DAT_0676c2a8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar2 = FUN_05cb97e8(0);
        puVar1 = PTR_DAT_0676c2b8;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar6 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0676c2b8) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_05d8c778;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0676c2b8,1);
LAB_05d8c778:
        (*(code *)*puVar5)(plVar4,uVar2,puVar5[1]);
        uVar10 = FUN_05cb98b4(0);
        lVar6 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_05d8c7e4;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar1,3);
LAB_05d8c7e4:
        (*(code *)*puVar5)(uVar10,plVar4,puVar5[1]);
      }
      uVar10 = FUN_05d8cb28(param_1,param_2);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_041451ac(*(long *)(param_1 + 0x18),local_50,uStack_48,
                     *(undefined8 *)
                      Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRCustomLayerHandler<XrCompositionLayerCubeKHR>__ctor__
                    );
      }
    }
    return uVar10;
  }
LAB_05d8c844:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


