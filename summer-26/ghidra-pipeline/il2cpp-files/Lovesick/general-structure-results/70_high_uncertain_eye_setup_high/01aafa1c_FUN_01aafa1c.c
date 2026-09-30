/*
FUNCTION_NAME: FUN_01aafa1c
ENTRY_POINT: 01aafa1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01aafa1c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = System_Data_DataColumnCollection_TypeInfo;
  if ((DAT_0377ce73 & 1) == 0) {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass_OnCameraSetup__
                      );
    DAT_0377ce73 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_01aff7c8(0);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_033f02a8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01b153b4(0);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    FUN_02021868(lVar4,*(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass_OnCameraSetup__
                 ,0,0);
    plVar5 = (long *)FUN_0202025c(lVar4,uVar3,0);
    if (plVar5 != (long *)0x0) {
      uVar2 = FUN_0201bf00(plVar5,0);
      uVar7 = 0;
      uVar8 = 0;
      uVar6 = 0;
      if ((uVar2 & 1) == 0) {
LAB_01aafbc0:
        *(undefined4 *)param_1 = uVar7;
        *(undefined4 *)((long)param_1 + 4) = uVar8;
        *(undefined4 *)(param_1 + 1) = uVar6;
        *(undefined8 *)((long)param_1 + 0xc) = 0;
        return;
      }
      lVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      if ((lVar4 != 0) &&
         (lVar4 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered(lVar4,1,0),
         lVar4 != 0)) {
        uVar3 = FUN_0201bd24(lVar4,0);
        uVar7 = FUN_0178438c(uVar3,0);
        lVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        if ((lVar4 != 0) &&
           (lVar4 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered(lVar4,2,0),
           lVar4 != 0)) {
          uVar3 = FUN_0201bd24(lVar4,0);
          uVar8 = FUN_0178438c(uVar3,0);
          lVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
          if ((lVar4 != 0) &&
             (lVar4 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered(lVar4,3,0),
             lVar4 != 0)) {
            uVar3 = FUN_0201bd24(lVar4,0);
            uVar6 = FUN_0178438c(uVar3,0);
            goto LAB_01aafbc0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


