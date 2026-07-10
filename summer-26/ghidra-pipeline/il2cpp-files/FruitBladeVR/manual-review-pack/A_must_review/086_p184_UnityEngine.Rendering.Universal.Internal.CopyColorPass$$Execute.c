/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.CopyColorPass$$Execute
ENTRY_POINT: 0352f5a8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void UnityEngine_Rendering_Universal_Internal_CopyColorPass__Execute
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((DAT_03ef626b & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ScriptableRenderPass_TypeInfo_03cdab70);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ScriptableRenderer_TypeInfo_03cdb350);
    DAT_03ef626b = 1;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x38) = *(undefined8 *)(param_1 + 0xc0);
    thunk_FUN_01cc8040();
    if (*(long *)(param_1 + 0xe8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x40) = *(undefined8 *)(param_1 + 0xd0);
      thunk_FUN_01cc8040();
      lVar7 = *(long *)(param_1 + 0xe8);
      if (lVar7 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(param_1 + 200);
        *(undefined4 *)(lVar7 + 0x4c) = uVar1;
        plVar4 = (long *)UnityEngine_Rendering_Universal_RenderingData__get_commandBuffer(param_3,0)
        ;
        lVar7 = *plVar4;
        plVar8 = (long *)(param_1 + 0xd8);
        lVar11 = *plVar8;
        plVar4 = (long *)UnityEngine_Rendering_Universal_CameraData__get_renderer(param_3 + 8,0);
        plVar4 = (long *)*plVar4;
        if (plVar4 != (long *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,lVar7,*(undefined8 *)(*plVar4 + 0x1d0));
          if (lVar11 == lVar5) {
            plVar4 = (long *)UnityEngine_Rendering_Universal_CameraData__get_renderer(param_3 + 8,0)
            ;
            if (*plVar4 == 0) goto LAB_0352f80c;
            lVar11 = UnityEngine_Rendering_Universal_ScriptableRenderer__get_cameraColorTargetHandle
                               (*plVar4,0);
            *plVar8 = lVar11;
            thunk_FUN_01cc8040(plVar8,lVar11);
          }
          lVar11 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_3 + 8,0);
          if (lVar11 != 0) {
            uVar6 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering
                              (lVar11,0);
            if ((uVar6 & 1) != 0) {
              if (lVar7 == 0) goto LAB_0352f80c;
              UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(lVar7,0,0);
            }
            puVar3 = PTR_UnityEngine_Rendering_Universal_ScriptableRenderer_TypeInfo_03cdb350;
            puVar2 = PTR_UnityEngine_Rendering_Universal_ScriptableRenderPass_TypeInfo_03cdab70;
            lVar11 = *(long *)
                      PTR_UnityEngine_Rendering_Universal_ScriptableRenderPass_TypeInfo_03cdab70;
            uVar9 = *(undefined8 *)(param_1 + 0xe0);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar11 = *(long *)puVar2;
            }
            puVar2 = PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0;
            uVar13 = *(undefined4 *)(param_1 + 0xa8);
            uVar14 = *(undefined4 *)(param_1 + 0xac);
            uVar15 = *(undefined4 *)(param_1 + 0xb0);
            uVar16 = *(undefined4 *)(param_1 + 0xb4);
            uVar12 = **(undefined8 **)(lVar11 + 0xb8);
            uVar1 = *(undefined4 *)(param_1 + 0xa4);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            UnityEngine_Rendering_Universal_ScriptableRenderer__SetRenderTarget
                      (uVar13,uVar14,uVar15,uVar16,lVar7,uVar9,uVar12,uVar1,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            if (DAT_03ef5dac == '\0') {
              FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferHelpers_TypeInfo_03cd29d0);
              DAT_03ef5dac = '\x01';
            }
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar11 = *(long *)puVar2;
            }
            if (**(long **)(lVar11 + 0xb8) != 0) {
              plVar4 = (long *)(**(long **)(lVar11 + 0xb8) + 0x10);
              *plVar4 = lVar7;
              thunk_FUN_01cc8040(plVar4,lVar7);
              uVar10 = *(undefined8 *)(param_1 + 0xe8);
              uVar9 = *(undefined8 *)(param_1 + 0xd8);
              uVar12 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
              lVar7 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_3 + 8,0);
              if (lVar7 != 0) {
                UnityEngine_Experimental_Rendering_XRPass__get_enabled(lVar7,0);
                UnityEngine_Rendering_Universal_Internal_CopyColorPass__ExecutePass
                          (uVar12,uVar10,uVar9,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0352f80c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


