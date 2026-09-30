/*
FUNCTION_NAME: Unity.Mathematics.int4x4$$Equals
ENTRY_POINT: 05b161ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Unity_Mathematics_int4x4__Equals(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 in_w8;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  *(undefined1 *)(unaff_x21 + 0x891) = in_w8;
  piVar6 = (int *)(unaff_x20 + 0x98);
  if (0 < *piVar6) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(unaff_x20 + 0xa0);
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
      FUN_05aa7e40(&stack0x000000c8,*(undefined8 *)(lVar5 + 0xf0),0);
      in_stack_000000b8 = in_stack_000000d0;
      in_stack_000000b0 = in_stack_000000c8;
      in_stack_000000c0 = in_stack_000000d8;
      uVar4 = FUN_05a9c9f8(*(undefined8 *)
                            Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__,
                           &stack0x000000b0);
      if ((uVar4 & 1) != 0) {
        FUN_05aa7e40(&stack0x000000c8,uVar3,0);
        in_stack_00000098 = in_stack_000000d0;
        in_stack_00000090 = in_stack_000000c8;
        in_stack_000000a0 = in_stack_000000d8;
        uVar4 = FUN_05a9c9f8(*(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer_OnUpdated__,
                             &stack0x00000090);
        if ((uVar4 & 1) != 0) {
          FUN_05aa7e40(&stack0x000000c8,uVar1,0);
          in_stack_00000078 = in_stack_000000d0;
          in_stack_00000070 = in_stack_000000c8;
          in_stack_00000080 = in_stack_000000d8;
          uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARFace_GetUndisposable<Vector3>__
                               ,&stack0x00000070);
          if ((uVar4 & 1) != 0) {
            FUN_05aa7e40(&stack0x000000c8,uVar2,0);
            in_stack_00000058 = in_stack_000000d0;
            in_stack_00000050 = in_stack_000000c8;
            in_stack_00000060 = in_stack_000000d8;
            uVar4 = FUN_05a9c9f8(*(undefined8 *)PTR_DAT_067ca7d0,&stack0x00000050);
            if ((uVar4 & 1) != 0) {
              FUN_05b16410(&stack0x000000c8,uVar4,uVar9);
              in_stack_00000038 = in_stack_000000d0;
              in_stack_00000030 = in_stack_000000c8;
              in_stack_00000040 = in_stack_000000d8;
              uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000349_PostfixBurstDelegate>__
                                   ,&stack0x00000030);
              if ((uVar4 & 1) != 0) {
                FUN_05aa7e40(&stack0x000000c8,uVar8,0);
                in_stack_00000018 = in_stack_000000d0;
                in_stack_00000010 = in_stack_000000c8;
                in_stack_00000020 = in_stack_000000d8;
                uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000348_PostfixBurstDelegate>__
                                     ,&stack0x00000010);
                if ((uVar4 & 1) != 0) {
                  FUN_032ee2e8(*(undefined8 *)(unaff_x20 + 0xa0),piVar6,uVar7 & 0xffffffff,
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


