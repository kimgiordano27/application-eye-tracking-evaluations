/*
FUNCTION_NAME: FUN_00f3dd00
ENTRY_POINT: 00f3dd00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 FUN_00f3dd00(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__;
  if ((DAT_0377564d & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__);
    DAT_0377564d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (param_2 != 0) {
    uVar2 = FUN_0178c0dc(param_2,0);
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_01780344(uVar3,0);
      uVar2 = FUN_01789ac0(param_2,uVar3,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_01780344(uVar3,0);
        uVar3 = FUN_01789ac0(param_2,uVar3,0);
        return uVar3;
      }
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


