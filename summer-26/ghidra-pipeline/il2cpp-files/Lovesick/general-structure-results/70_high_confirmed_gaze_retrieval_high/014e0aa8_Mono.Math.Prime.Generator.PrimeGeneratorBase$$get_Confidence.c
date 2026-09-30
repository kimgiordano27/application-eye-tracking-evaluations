/*
FUNCTION_NAME: Mono.Math.Prime.Generator.PrimeGeneratorBase$$get_Confidence
ENTRY_POINT: 014e0aa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose
*/


void Mono_Math_Prime_Generator_PrimeGeneratorBase__get_Confidence
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = System_Collections_Generic_Dictionary<string,_JsonSchemaNode>_TypeInfo;
  if ((DAT_03776f73 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_ReadString__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_AR_ARObjectPlacementEventArgs_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_JsonSchemaNode>_TypeInfo);
    DAT_03776f73 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar3 = Method_System_IO_BinaryReader_ReadString__;
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_014e02d8();
    if ((uVar5 & 1) == 0) {
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      uVar2 = *(undefined8 *)(lVar4 + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014e09c0(uVar1,uVar2);
      return;
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object>>_RemoveCallback__
                              );
    puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    if (lVar6 != 0) {
      FUN_012d1810(lVar6,lVar4,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_AR_ARObjectPlacementEventArgs_TypeInfo,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017efdf0(lVar6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


