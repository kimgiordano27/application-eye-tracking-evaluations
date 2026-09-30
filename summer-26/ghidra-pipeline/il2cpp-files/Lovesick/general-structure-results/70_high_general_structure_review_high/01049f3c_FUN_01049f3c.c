/*
FUNCTION_NAME: FUN_01049f3c
ENTRY_POINT: 01049f3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


bool FUN_01049f3c(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  puVar1 = PTR_DAT_033f36d8;
  if ((DAT_03776019 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f3a80);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length__
                      );
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_VRequestResponse<bool>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f36d8);
    DAT_03776019 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr>>_get_length__
                                );
      if ((lVar3 != 0) &&
         (FUN_0136b58c(lVar3,lVar2,
                       *(undefined8 *)Method_Meta_WitAi_Requests_VRequestResponse<bool>__ctor__,0),
         lVar4 != 0)) {
        FUN_01322b20(lVar4,lVar3,&local_38,*(undefined8 *)PTR_DAT_033f3a80);
        *param_3 = local_38;
        return local_38 != 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


