/*
FUNCTION_NAME: FUN_033845e8
ENTRY_POINT: 033845e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 FUN_033845e8(long *param_1,long *param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *local_38;
  
  if ((DAT_048321b6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<Variables>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<IUnitDebugData>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048321b6 = 1;
  }
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined8 *)(*param_1 + 0x210));
  if ((uVar1 & 1) == 0) {
    uVar3 = FUN_03384a24(param_1,param_2,param_3,param_4 & 1);
    uVar1 = FUN_0340eec4(uVar3,0);
    uVar2 = 0;
    if ((uVar1 & 1) == 0) {
      if (param_1[2] == 0) {
LAB_033849e0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                        (param_1[2],uVar3,&local_38,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<IUnitDebugData>__
                        );
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 == (long *)0x0) goto LAB_033849e0;
        uVar3 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        uVar2 = *(undefined8 *)
                 Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        }
        uVar2 = FUN_03579868(uVar2,0);
        uVar1 = FUN_03582560(uVar3,uVar2,0);
        if ((uVar1 & 1) == 0) {
          plVar4 = (long *)(**(code **)(*param_2 + 0x1d8))
                                     (param_2,*(undefined8 *)(*param_2 + 0x1e0));
          if (plVar4 == (long *)0x0) goto LAB_033849e0;
          uVar1 = (**(code **)(*plVar4 + 0x5c8))(plVar4,*(undefined8 *)(*plVar4 + 0x5d0));
          plVar4 = local_38;
          if ((uVar1 & 1) == 0) {
            uVar3 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar2 = FUN_034fefcc(plVar4,uVar3,0);
          }
          else {
            uVar3 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
            if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar2 = (**(code **)(*local_38 + 0x168))(local_38,*(undefined8 *)(*local_38 + 0x170));
            if (*(int *)(*(long *)Method_UnityEngine_GameObject_GetComponent<Variables>__ + 0xe0) ==
                0) {
              thunk_FUN_01ee6d7c();
            }
            uVar2 = FUN_0337f50c(uVar2);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar2 = FUN_0359d4c0(uVar3,uVar2,1,0);
          }
        }
        else {
          if (local_38 == (long *)0x0) goto LAB_033849e0;
          uVar2 = (**(code **)(*local_38 + 0x168))(local_38,*(undefined8 *)(*local_38 + 0x170));
        }
      }
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x218))(param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
  }
  return uVar2;
}


