/*
FUNCTION_NAME: FUN_0766dfc8
ENTRY_POINT: 0766dfc8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0766dfc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  puVar3 = 
  UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Renderer_TypeInfo;
  puVar2 = 
  UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling_Pipeline_Context_TypeInfo;
  if ((DAT_08270fd4 & 1) == 0) {
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
    DAT_08270fd4 = 1;
  }
  lVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_049ce6c0(lVar5,*(undefined8 *)puVar3);
  puVar4 = OVRPlugin_Qpl_Annotation_Builder_Entry_TypeInfo;
  puVar3 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo;
  puVar2 = PTR_DAT_07d86398;
  if (param_2 != 0) {
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar11 = 0;
      uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        uVar10 = *(undefined8 *)(param_2 + 0x20 + uVar11 * 8);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar10 = FUN_0766e184(param_1,uVar10,param_3);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)puVar2);
        }
        uVar7 = FUN_075ac5e0(uVar10,0,0);
        if ((uVar7 & 1) == 0) {
          if (lVar5 == 0) goto LAB_0766e180;
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar4;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_0766e180;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar6 = uVar10;
            thunk_FUN_037aeb94(puVar6,uVar10);
          }
          else {
            FUN_049ceef4(lVar5,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar7 = (ulong)*(uint *)(param_2 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    return lVar5;
  }
LAB_0766e180:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


