/*
FUNCTION_NAME: Unity.Mathematics.int4x4$$GetHashCode
ENTRY_POINT: 05b16354
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Unity_Mathematics_int4x4__GetHashCode
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *in_x9;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar6;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
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
  undefined8 in_stack_000000d8;
  
  uStack0000000000000038 = param_2._8_8_;
  uStack0000000000000030 = param_2._0_8_;
  uStack0000000000000040 = param_1;
  do {
    uVar4 = FUN_05a9c9f8(*in_x9,param_4);
    if ((uVar4 & 1) != 0) {
      FUN_05aa7e40(&stack0x000000c8,unaff_x24,0);
      in_stack_00000018 = unaff_x29[1];
      in_stack_00000010 = *unaff_x29;
      in_stack_00000020 = in_stack_000000d8;
      uVar4 = FUN_05a9c9f8(*(undefined8 *)
                            Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000348_PostfixBurstDelegate>__
                           ,&stack0x00000010);
      if ((uVar4 & 1) != 0) {
        FUN_032ee2e8(*(undefined8 *)(unaff_x20 + 0xa0));
        return unaff_x23;
      }
    }
    do {
      do {
        do {
          do {
            unaff_x22 = unaff_x22 + 1;
            if (*unaff_x21 <= (int)(uint)unaff_x22) {
              return 0;
            }
            lVar5 = *(long *)(unaff_x20 + 0xa0);
            if (lVar5 == 0) {
LAB_05b16408:
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            unaff_x23 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
            if (unaff_x23 == 0) goto LAB_05b16408;
            uVar2 = *(undefined8 *)(unaff_x23 + 0xf8);
            uVar1 = *(undefined8 *)(unaff_x23 + 0x100);
            uVar3 = *(undefined8 *)(unaff_x23 + 0x108);
            unaff_x24 = *(undefined8 *)(unaff_x23 + 0x110);
            uVar6 = *(undefined8 *)(unaff_x23 + 0x120);
            FUN_05aa7e40(&stack0x000000c8,*(undefined8 *)(unaff_x23 + 0xf0),0);
            in_stack_000000b8 = unaff_x29[1];
            in_stack_000000b0 = *unaff_x29;
            in_stack_000000c0 = in_stack_000000d8;
            uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                  Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__,
                                 &stack0x000000b0);
          } while ((uVar4 & 1) == 0);
          FUN_05aa7e40(&stack0x000000c8,uVar3,0);
          in_stack_00000098 = unaff_x29[1];
          in_stack_00000090 = *unaff_x29;
          in_stack_000000a0 = in_stack_000000d8;
          uVar4 = FUN_05a9c9f8(*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARFaceMeshVisualizer_OnUpdated__,
                               &stack0x00000090);
        } while ((uVar4 & 1) == 0);
        FUN_05aa7e40(&stack0x000000c8,uVar1,0);
        in_stack_00000078 = unaff_x29[1];
        in_stack_00000070 = *unaff_x29;
        in_stack_00000080 = in_stack_000000d8;
        uVar4 = FUN_05a9c9f8(*(undefined8 *)
                              Method_UnityEngine_XR_ARFoundation_ARFace_GetUndisposable<Vector3>__,
                             &stack0x00000070);
      } while ((uVar4 & 1) == 0);
      FUN_05aa7e40(&stack0x000000c8,uVar2,0);
      in_stack_00000058 = unaff_x29[1];
      in_stack_00000050 = *unaff_x29;
      in_stack_00000060 = in_stack_000000d8;
      uVar4 = FUN_05a9c9f8(*(undefined8 *)PTR_DAT_067ca7d0,&stack0x00000050);
    } while ((uVar4 & 1) == 0);
    FUN_05b16410(&stack0x000000c8,uVar4,uVar6);
    uStack0000000000000038 = unaff_x29[1];
    uStack0000000000000030 = *unaff_x29;
    param_4 = (undefined1 *)&stack0x00000030;
    uStack0000000000000040 = in_stack_000000d8;
    in_x9 = (undefined8 *)
            Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BezierLerp_00000349_PostfixBurstDelegate>__
    ;
  } while( true );
}


