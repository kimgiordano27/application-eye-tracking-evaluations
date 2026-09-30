/*
FUNCTION_NAME: System.Threading.WaitHandle$$WaitAny
ENTRY_POINT: 034db0a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_21;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_1
*/


void System_Threading_WaitHandle__WaitAny(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 034db0a8 to 035db0af has its CatchHandler @ 034db884 */
                    /* try { // try from 034db0bc to 035db0c3 has its CatchHandler @ 034db87c */
                    /* try { // try from 034db0c8 to 035db0cf has its CatchHandler @ 034db874 */
  lVar2 = FUN_034daed0(param_2,param_1 == 0x7b || param_1 == 0xa1);
  if (param_1 < 0x51) {
    if (param_1 < 0x10) {
      if (param_1 < 5) {
        if (param_1 == 2) {
          if (lVar2 == 0) goto LAB_034db400;
          if (*(int *)(lVar2 + 0x10) == 0) {
            uVar3 = thunk_FUN_01efb3a4(
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                                      );
            uVar3 = FUN_035ac8e0(uVar3,0);
            thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                              );
            uVar4 = thunk_FUN_01f117cc();
            FUN_034c71ec(uVar4,uVar3,0);
            goto LAB_034db5e8;
          }
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar3 = FUN_01f08890(uVar3,1);
          FUN_01bc50c0();
          FUN_01bc56ec(uVar3,lVar2);
          FUN_01bc5408(uVar3,0,lVar2);
          uVar4 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                                    );
          uVar4 = FUN_035ae81c(uVar4,uVar3,0);
          thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                            );
          uVar3 = thunk_FUN_01f117cc();
          FUN_034c7210(uVar3,uVar4,lVar2,0);
          goto LAB_034db324;
        }
        if (param_1 == 3) {
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x10) == 0) {
              uVar3 = thunk_FUN_01efb3a4(
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                                        );
              uVar3 = FUN_035ac8e0(uVar3,0);
            }
            else {
              uVar3 = thunk_FUN_01efb3a4(
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                        );
              uVar3 = FUN_01f08890(uVar3,1);
              FUN_01bc50c0();
              FUN_01bc56ec(uVar3,lVar2);
              FUN_01bc5408(uVar3,0,lVar2);
              uVar4 = thunk_FUN_01efb3a4(
                                        Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnFocusChanged__
                                        );
              uVar3 = FUN_035ae81c(uVar4,uVar3,0);
            }
            thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                              );
            uVar4 = thunk_FUN_01f117cc();
            FUN_034c6a34(uVar4,uVar3,0);
            goto LAB_034db5e8;
          }
LAB_034db400:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        if (param_1 == 5) {
          if (lVar2 == 0) goto LAB_034db400;
          if (*(int *)(lVar2 + 0x10) == 0) {
            uVar3 = thunk_FUN_01efb3a4(
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<SDFCharacter>__
                                      );
            uVar3 = FUN_035ac8e0(uVar3,0);
          }
          else {
            uVar3 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                      );
            uVar3 = FUN_01f08890(uVar3,1);
            FUN_01bc50c0();
            FUN_01bc56ec(uVar3,lVar2);
            FUN_01bc5408(uVar3,0,lVar2);
            uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_Bindings_NativeHeaderAttribute__ctor__);
            uVar3 = FUN_035ae81c(uVar4,uVar3,0);
          }
          thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                            );
          uVar4 = thunk_FUN_01f117cc();
          FUN_03588d2c(uVar4,uVar3,0);
LAB_034db5e8:
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_UIR_Utility_SetVectorArray<Vector4>__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar4,uVar3);
        }
        if (param_1 == 0xf) {
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar3 = FUN_01f08890(uVar3,1);
          FUN_01bc50c0();
          FUN_01bc56ec(uVar3,lVar2);
          FUN_01bc5408(uVar3,0,lVar2);
          uVar4 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_UxmlAttributeDescription_GetValueFromBag<bool>__
                                    );
          uVar3 = FUN_035ae81c(uVar4,uVar3,0);
          thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_UxmlAttributeDescription_GetValueFromBag<double>__
                            );
          uVar4 = thunk_FUN_01f117cc();
          FUN_034d0c6c(uVar4,uVar3,0);
          goto LAB_034db5e8;
        }
      }
    }
    else {
      if (param_1 == 0x20) {
        if (lVar2 == 0) goto LAB_034db400;
        if (*(int *)(lVar2 + 0x10) == 0) {
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                                    );
          uVar4 = FUN_035ac8e0(uVar3,0);
        }
        else {
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar3 = FUN_01f08890(uVar3,1);
          FUN_01bc50c0();
          FUN_01bc56ec(uVar3,lVar2);
          FUN_01bc5408(uVar3,0,lVar2);
          uVar4 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                                    );
          uVar4 = FUN_035ae81c(uVar4,uVar3,0);
        }
        param_1 = 0x20;
        goto LAB_034db2f4;
      }
      if (param_1 == 0x50) {
        if (lVar2 == 0) goto LAB_034db400;
        if (*(int *)(lVar2 + 0x10) != 0) {
                    /* try { // try from 034db150 to 035db157 has its CatchHandler @ 034db868 */
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar3 = FUN_01f08890(uVar3,1);
                    /* try { // try from 034db15c to 035db163 has its CatchHandler @ 034db860 */
          FUN_01bc50c0();
          FUN_01bc56ec(uVar3,lVar2);
                    /* try { // try from 034db178 to 035db193 has its CatchHandler @ 034db8c8 */
          FUN_01bc5408(uVar3,0,lVar2);
          uVar4 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_OnShutdown__
                                    );
          uVar4 = FUN_035ae81c(uVar4,uVar3,0);
          param_1 = 0x50;
          goto LAB_034db2f4;
        }
      }
    }
LAB_034db2e0:
    uVar4 = FUN_0340c260(param_1,0);
  }
  else {
    if (0xb7 < param_1) {
      if (param_1 == 0xce) {
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_UxmlAttributeDescription_GetValueFromBag<Hash128>__
                                  );
        uVar3 = FUN_035ac8e0(uVar3,0);
        thunk_FUN_01efb3a4(
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<DrawingData_ProcessedBuilderData_MeshBuffers>__
                          );
        uVar4 = thunk_FUN_01f117cc();
        FUN_034ca3f8(uVar4,uVar3,0);
        goto LAB_034db5e8;
      }
      if (param_1 == 0x3e3) {
        thunk_FUN_01efb3a4(
                          Method_System_Security_Cryptography_DSASignatureDeformatter_SetHashAlgorithm__
                          );
        uVar3 = thunk_FUN_01f117cc();
                    /* try { // try from 034db100 to 035db103 has its CatchHandler @ 034db7cc */
        FUN_03579a78(uVar3,0);
                    /* try { // try from 034db110 to 035db11b has its CatchHandler @ 034db7dc */
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_UIR_Utility_SetVectorArray<Vector4>__
                                  );
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034db120 to 035db123 has its CatchHandler @ 034db7d8 */
        FUN_01f08910(uVar3,uVar4);
      }
      goto LAB_034db2e0;
    }
    if (param_1 != 0x57) {
                    /* try { // try from 034db1ac to 035db1b3 has its CatchHandler @ 034db8c4 */
      if (param_1 == 0xb7) {
        if (lVar2 == 0) goto LAB_034db400;
                    /* try { // try from 034db1bc to 035db1df has its CatchHandler @ 034db8c0 */
        if (*(int *)(lVar2 + 0x10) != 0) {
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar3 = FUN_01f08890(uVar3,1);
          FUN_01bc50c0();
          FUN_01bc56ec(uVar3,lVar2);
          FUN_01bc5408(uVar3,0,lVar2);
          uVar4 = thunk_FUN_01efb3a4(Method_Unity_XR_Oculus_Utils_PermissionGrantedCallback__);
          uVar4 = FUN_035ae81c(uVar4,uVar3,0);
          param_1 = 0xb7;
          goto LAB_034db2f4;
        }
      }
      goto LAB_034db2e0;
    }
    uVar4 = FUN_0340c260(0x57,0);
    param_1 = 0x57;
  }
LAB_034db2f4:
  uVar1 = FUN_0340c2bc(param_1,0);
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
  uVar3 = thunk_FUN_01f117cc();
  FUN_034c7720(uVar3,uVar4,uVar1,0);
LAB_034db324:
  uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_Utility_SetVectorArray<Vector4>__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


