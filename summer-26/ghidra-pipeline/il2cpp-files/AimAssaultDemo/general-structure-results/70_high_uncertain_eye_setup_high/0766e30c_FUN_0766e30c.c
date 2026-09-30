/*
FUNCTION_NAME: FUN_0766e30c
ENTRY_POINT: 0766e30c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0766e30c(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  if ((DAT_08270fd5 & 1) == 0) {
    FUN_0373b518(
                UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                );
    FUN_0373b518(OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo);
    FUN_0373b518(
                UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Context_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08270fd5 = 1;
  }
  puVar4 = OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo;
  puVar3 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo;
  puVar2 = PTR_DAT_07d86398;
  if (param_2 == 0) {
LAB_0766e520:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((int)*(ulong *)(param_2 + 0x18) < 1) {
    lVar8 = 0;
  }
  else {
    uVar13 = 0;
    uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    lVar6 = 0;
    do {
      if (uVar7 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      uVar12 = *(undefined8 *)(param_2 + 0x20 + uVar13 * 8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar5 = FUN_0766e184(param_1,uVar12,param_3);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar8);
      }
      uVar7 = FUN_075ac5e0(lVar5,0,0);
      lVar8 = lVar6;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar7 = FUN_075ac5e0(lVar6,0,0);
        lVar8 = lVar5;
        if ((uVar7 & 1) == 0) {
          lVar8 = lVar6;
        }
        if (lVar8 == 0) goto LAB_0766e520;
        lVar6 = *(long *)(lVar8 + 0x180);
        if (lVar6 == 0) {
          plVar10 = (long *)(lVar8 + 0x180);
          lVar6 = thunk_FUN_037788cc(*(undefined8 *)
                                      UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Context_TypeInfo
                                    );
          FUN_049ce6c0(lVar6,*(undefined8 *)
                              UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeInfo
                      );
          *plVar10 = lVar6;
          thunk_FUN_037aeb94(plVar10,lVar6);
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_0766e520;
        }
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_0766e520;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar5;
          thunk_FUN_037aeb94(plVar10,lVar5);
        }
        else {
          FUN_049ceef4(lVar6,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar7 = (ulong)*(uint *)(param_2 + 0x18);
      uVar13 = uVar13 + 1;
      lVar6 = lVar8;
    } while ((long)uVar13 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  return lVar8;
}


