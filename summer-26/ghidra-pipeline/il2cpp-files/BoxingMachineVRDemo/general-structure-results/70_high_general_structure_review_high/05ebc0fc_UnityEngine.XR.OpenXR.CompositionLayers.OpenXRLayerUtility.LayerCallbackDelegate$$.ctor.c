/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.CompositionLayers.OpenXRLayerUtility.LayerCallbackDelegate$$.ctor
ENTRY_POINT: 05ebc0fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_OpenXR_CompositionLayers_OpenXRLayerUtility_LayerCallbackDelegate___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_02d6084c();
  FUN_02d6084c(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__);
  FUN_02d6084c(Method_Unity_Collections_CollectionExtensions_SerializedView<Type>__);
  FUN_02d6084c(Method_Unity_Collections_CollectionHelper_CreateNativeArray<byte>__);
  *(undefined1 *)(unaff_x22 + 0xbc7) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar6 = thunk_FUN_02d9d534(*unaff_x21);
  FUN_03a2a6f8(lVar6,*unaff_x20);
  FUN_06385a34(0x10,lVar6,0);
  puVar3 = Method_Unity_Collections_CollectionExtensions_SerializedView<Type>__;
  puVar2 = PTR_DAT_06768438;
  puVar1 = PTR_DAT_0675e660;
  if (lVar6 == 0) {
LAB_05ebc39c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(lVar6 + 0x18) < 1) {
    if (*(int *)(*(long *)PTR_DAT_06768438 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    _in_stack_00000020 = FUN_05855934(0);
    FUN_03fcdd84(&stack0x00000008,&stack0x00000020,*(undefined8 *)PTR_DAT_06768610);
    puVar5 = Method_Unity_Collections_CollectionHelper_CreateNativeArray<byte>__;
    puVar4 = PTR_DAT_06768600;
    puVar3 = PTR_DAT_067685f8;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    do {
      uVar7 = FUN_04a7bd90(&stack0x00000030,*(undefined8 *)puVar3);
      if ((uVar7 & 1) == 0) {
        FUN_04a7bd8c(&stack0x00000030,*(undefined8 *)PTR_DAT_067685f0);
        uVar8 = System_Char__System_IConvertible_ToSByte
                          (*(undefined8 *)
                            Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<Expression>__
                          );
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar6);
        }
        FUN_0602283c(uVar8);
        uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<HoverEnterEventArgs>_Invoke__
                                  );
        FUN_047cdcd8();
        FUN_06385d38(uVar8,0);
        uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                    OVR_OpenVR_IVROverlay__SetOverlayInputMethod_TypeInfo);
        FUN_047d9fa8();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05855a34(uVar8,0);
        lVar6 = FUN_06066d44();
        if (lVar6 != 0) {
          FUN_0606a4d0(lVar6,*(undefined1 *)(unaff_x19 + 0x20),0);
          return;
        }
        goto LAB_05ebc39c;
      }
      lVar6 = FUN_04a7bdbc(&stack0x00000030,*(undefined8 *)puVar4);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar8 = Unity_Mathematics_uint4__get_yywz(lVar6,0);
      uVar7 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar5,0);
    } while ((uVar7 & 1) == 0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_06021ed4(*(undefined8 *)
                  Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__
                );
    *(undefined1 *)(unaff_x19 + 0x21) = 1;
    FUN_04a7bd8c(&stack0x00000030,*(undefined8 *)PTR_DAT_067685f0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_06021ed4(*(undefined8 *)puVar3);
    *(undefined1 *)(unaff_x19 + 0x21) = 1;
  }
  return;
}


