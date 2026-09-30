/*
FUNCTION_NAME: FUN_01888668
ENTRY_POINT: 01888668
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01888668(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if ((DAT_037797a3 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(StringLiteral_930);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<ObiRigidbody2D>__);
    thunk_FUN_00d48444(StringLiteral_11426);
    thunk_FUN_00d48444(PTR_DAT_033ec040);
    DAT_037797a3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar2 = FUN_01ffe2e4(param_1,0);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    plVar3 = (long *)thunk_FUN_00d93c64(lVar2,0);
    puVar1 = StringLiteral_11426;
    if (plVar3 == (long *)0x0) {
LAB_01888850:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
    uVar5 = FUN_015fe560(uVar4,*(undefined8 *)puVar1,4,0);
    puVar1 = Method_UnityEngine_GameObject_AddComponent<ObiRigidbody2D>__;
    if ((uVar5 & 1) == 0) {
      uVar4 = (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
      uVar5 = FUN_015fe560(uVar4,*(undefined8 *)puVar1,4,0);
      puVar1 = PTR_DAT_033ec040;
      if ((uVar5 & 1) == 0) {
        uVar4 = (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
        uVar5 = FUN_015fe560(uVar4,*(undefined8 *)puVar1,4,0);
        puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        if ((uVar5 & 1) == 0) {
          uVar4 = *(undefined8 *)StringLiteral_930;
          if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar4 = FUN_01780344(uVar4,0);
          uVar5 = FUN_0178a8c4(plVar3,uVar4,0);
          if ((uVar5 & 1) != 0) {
            lVar2 = *param_2;
            uVar4 = *(undefined8 *)
                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
            ;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar4 = FUN_01780344(uVar4,0);
            if (lVar2 != 0) {
              uVar4 = FUN_01ff7230(lVar2,uVar4,0);
              return uVar4;
            }
            goto LAB_01888850;
          }
        }
      }
    }
  }
  return 0;
}


