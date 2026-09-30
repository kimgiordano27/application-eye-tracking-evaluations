/*
FUNCTION_NAME: FUN_015707f4
ENTRY_POINT: 015707f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_015707f4(undefined8 param_1,long param_2,long param_3,float *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  float extraout_s0;
  long local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  long local_60;
  undefined8 uStack_58;
  
  if ((DAT_03777c59 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_ManagedWebSocket_<CloseAsyncPrivate>d__68>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ea880);
    thunk_FUN_00d48444(Method_System_Net_CommandStream_ReceiveCommandResponseCallback__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<ApplicationVersion>_get_Data__);
    thunk_FUN_00d48444(Method_ReturnMotelKeys_KeyPlaced__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03777c59 = 1;
  }
  local_64 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if ((param_3 != 0) && (*(long *)(param_3 + 0x38) != 0)) {
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x18);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_Oculus_Platform_Message<ApplicationVersion>_get_Data__);
    if (lVar6 != 0) {
      FUN_01320ebc(lVar6,uVar1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_ManagedWebSocket_<CloseAsyncPrivate>d__68>__
                  );
      puVar5 = Method_ReturnMotelKeys_KeyPlaced__;
      puVar4 = Method_System_Net_CommandStream_ReceiveCommandResponseCallback__;
      puVar3 = UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_TypeInfo;
      puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      local_64 = 0;
      if (param_2 != 0) {
        if (0 < *(int *)(param_2 + 0x18)) {
          iVar10 = 0;
          do {
            FUN_0132138c(param_2,iVar10,&local_60,*(undefined8 *)puVar4);
            if (local_60 == 0) goto LAB_015709c0;
            FUN_01347408(local_60 + 0x1c,&local_60,*(undefined8 *)puVar5);
            uStack_78 = uStack_58;
            local_80 = local_60;
            uVar7 = FUN_026884e4(&local_80,0);
            *param_4 = *param_4 + extraout_s0;
            uVar7 = FUN_01572408(uVar7,&local_64,param_2);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            uVar8 = FUN_0268b4e0(uVar7,0,0);
            if ((uVar8 & 1) != 0) {
              thunk_FUN_00d48444(
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                );
              uVar7 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              uVar9 = thunk_FUN_00d48444(
                                        Method_System_Collections_Generic_List_Enumerator<PathFilter>_get_Current__
                                        );
              FUN_017a9608(uVar7,uVar9,0);
              uVar9 = thunk_FUN_00d48444(
                                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar7,uVar9);
            }
            FUN_00bce734(lVar6,uVar7,*(undefined8 *)puVar3);
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(param_2 + 0x18));
        }
        return lVar6;
      }
    }
  }
LAB_015709c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


