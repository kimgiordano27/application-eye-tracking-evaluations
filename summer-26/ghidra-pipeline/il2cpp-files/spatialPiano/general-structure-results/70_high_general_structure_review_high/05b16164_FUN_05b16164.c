/*
FUNCTION_NAME: FUN_05b16164
ENTRY_POINT: 05b16164
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05b16164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_06bc2891 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__);
    FUN_02f08768(Method_UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer_OnUpdated__);
    FUN_02f08768(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000348_PostfixBurstDelegate>__
                );
    FUN_02f08768(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000349_PostfixBurstDelegate>__
                );
    FUN_02f08768(Method_UnityEngine_XR_ARFoundation_ARFace_GetUndisposable<Vector3>__);
    FUN_02f08768(PTR_DAT_067ca7d0);
    FUN_02f08768(Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__);
    DAT_06bc2891 = 1;
  }
  piVar6 = (int *)(param_1 + 0x98);
  if (0 < *piVar6) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0xa0);
      if (lVar5 == 0) {
LAB_05b16408:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar5 = *(long *)(lVar5 + uVar7 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_05b16408;
      uVar2 = *(undefined8 *)(lVar5 + 0xf8);
      uVar1 = *(undefined8 *)(lVar5 + 0x100);
      uVar3 = *(undefined8 *)(lVar5 + 0x108);
      uVar8 = *(undefined8 *)(lVar5 + 0x110);
      uVar9 = *(undefined8 *)(lVar5 + 0x120);
      FUN_05aa7e40(&local_78,*(undefined8 *)(lVar5 + 0xf0),0);
      uStack_88 = uStack_70;
      local_90 = local_78;
      local_80 = local_68;
      uVar4 = FUN_05a9c9f8(*(undefined8 *)
                            Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__,&local_90,
                           param_2,0);
      if ((uVar4 & 1) != 0) {
        FUN_05aa7e40(&local_78,uVar3,0);
        uStack_a8 = uStack_70;
        local_b0 = local_78;
        local_a0 = local_68;
        uVar4 = FUN_05a9c9f8(*(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer_OnUpdated__,
                             &local_b0,param_2,0);
        if ((uVar4 & 1) != 0) {
          FUN_05aa7e40(&local_78,uVar1,0);
          uStack_c8 = uStack_70;
          local_d0 = local_78;
          local_c0 = local_68;
          uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARFace_GetUndisposable<Vector3>__
                               ,&local_d0,param_2,0);
          if ((uVar4 & 1) != 0) {
            FUN_05aa7e40(&local_78,uVar2,0);
            uStack_e8 = uStack_70;
            local_f0 = local_78;
            local_e0 = local_68;
            uVar4 = FUN_05a9c9f8(*(undefined8 *)PTR_DAT_067ca7d0,&local_f0,param_2,0);
            if ((uVar4 & 1) != 0) {
              FUN_05b16410(&local_78,uVar4,uVar9);
              uStack_108 = uStack_70;
              local_110 = local_78;
              local_100 = local_68;
              uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000349_PostfixBurstDelegate>__
                                   ,&local_110,param_2,0);
              if ((uVar4 & 1) != 0) {
                FUN_05aa7e40(&local_78,uVar8,0);
                uStack_128 = uStack_70;
                local_130 = local_78;
                local_120 = local_68;
                uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000348_PostfixBurstDelegate>__
                                     ,&local_130,param_2,0);
                if ((uVar4 & 1) != 0) {
                  FUN_032ee2e8(*(undefined8 *)(param_1 + 0xa0),piVar6,uVar7 & 0xffffffff,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_UxmlFactory<Slider,_Slider_UxmlTraits>__ctor__
                              );
                  return lVar5;
                }
              }
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *piVar6);
  }
  return 0;
}


