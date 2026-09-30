/*
FUNCTION_NAME: FUN_05dbb744
ENTRY_POINT: 05dbb744
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dbb744(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  puVar1 = Method_Unity_VisualScripting_Singleton<VariablesSaver>_OnDestroy__;
  if ((DAT_06b83037 & 1) == 0) {
    FUN_02d6084c(Method_Unity_VisualScripting_Singleton<VariablesSaver>_get_instance__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_get_bufferChanges__
                );
    FUN_02d6084c(PTR_DAT_0676b288);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_set_bufferChanges__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_Singleton<VariablesSaver>_OnDestroy__);
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                );
    DAT_06b83037 = 1;
  }
  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0504920c(lVar4,0);
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_set_bufferChanges__
  ;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRHoverFilter>_get_bufferChanges__
  ;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>__ctor__
  ;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x10),param_2);
    uVar5 = (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
    uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_04d61e54(uVar6,lVar4,*(undefined8 *)puVar3,0);
    lVar4 = FUN_033b45d0(uVar5,uVar6,*(undefined8 *)puVar1);
    if (lVar4 == 0) {
      return;
    }
    plVar11 = (long *)param_1[2];
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0676b288) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05dbb8cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0676b288,0);
LAB_05dbb8cc:
      lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x50) != 0)) {
        FUN_04683bf4(*(long *)(lVar8 + 0x50),lVar4,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_Singleton<VariablesSaver>_get_instance__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


