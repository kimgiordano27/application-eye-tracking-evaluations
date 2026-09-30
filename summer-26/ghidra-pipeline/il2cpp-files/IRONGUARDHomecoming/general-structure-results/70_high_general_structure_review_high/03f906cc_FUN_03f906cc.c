/*
FUNCTION_NAME: FUN_03f906cc
ENTRY_POINT: 03f906cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_18;telemetry_or_network_hits_2
*/


undefined8 FUN_03f906cc(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_0483b6e4 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Cache_Store__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
    thunk_FUN_01efb3a4(PTR_DAT_04581d30);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__)
    ;
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6e4 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_03f90d54;
  uVar3 = thunk_FUN_01ecaf38(param_2,0);
  puVar2 = Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar11 == 0)) goto LAB_03f90d54;
  if (*(char *)(lVar11 + 0x40) == '\0') {
LAB_03f9091c:
    uVar4 = FUN_03f90d68(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_03f90e6c(uVar3);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_03f91100(uVar3);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_03f912a4(uVar3);
          if ((uVar4 & 1) == 0) {
            *param_3 = 0;
            thunk_FUN_01f51358(param_3,0);
            plVar6 = (long *)thunk_FUN_01ecaf38(param_2,0);
            uVar3 = *(undefined8 *)PTR_DAT_04581d30;
            if (plVar6 == (long *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            }
            uVar3 = FUN_03405678(uVar3,uVar12,0);
            if (*(int *)(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c(*(long *)Method_System_DBNull_System_IConvertible_ToDecimal__);
            }
            uVar3 = FUN_03f8b40c(uVar3);
            return uVar3;
          }
          goto LAB_03f9086c;
        }
        uVar3 = thunk_FUN_01ecaf38(param_2,0);
        uVar12 = *(undefined8 *)
                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
        ;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar1);
        }
        uVar12 = FUN_03579868(uVar12,0);
        uVar4 = FUN_03582560(uVar3,uVar12,0);
        puVar2 = 
        Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
        ;
        if ((uVar4 & 1) == 0) {
LAB_03f90b68:
          uVar3 = *(undefined8 *)Method_Unity_VisualScripting_Cache_Store__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar3 = FUN_03579868(uVar3,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                              );
          }
          plVar6 = (long *)FUN_034fefcc(param_2,uVar3,0);
          lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                                     );
          if (plVar6 == (long *)0x0) {
LAB_03f90d54:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(*plVar6 + 0x40) !=
              *(long *)(*(long *)Method_System_Globalization_Calendar_TimeToTicks__ + 0x40)) {
LAB_03f90d60:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar6);
          }
          puVar7 = (undefined8 *)thunk_FUN_01f11920(plVar6);
          uVar3 = *puVar7;
        }
        else {
          if (*(long *)(*param_2 + 0x40) !=
              *(long *)(*(long *)
                         Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                       + 0x40)) goto LAB_03f90d58;
          pfVar8 = (float *)thunk_FUN_01f11920(param_2);
          if (*pfVar8 == -3.4028235e+38) goto LAB_03f90b68;
          if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_03f90d58;
          pfVar8 = (float *)thunk_FUN_01f11920(param_2);
          if (*pfVar8 == 3.4028235e+38) goto LAB_03f90b68;
          if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_03f90d58;
          puVar9 = (uint *)thunk_FUN_01f11920(param_2);
          if ((*puVar9 & 0x7fffffff) == 0x7f800000) goto LAB_03f90b68;
          if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_03f90d58;
          puVar9 = (uint *)thunk_FUN_01f11920(param_2);
          if (0x7f800000 < (*puVar9 & 0x7fffffff)) goto LAB_03f90b68;
          if (*(int *)(*(long *)Method_System_Numerics_BigNumber_FormatBigInteger__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_03f90d58;
          puVar10 = (undefined4 *)thunk_FUN_01f11920(param_2);
          auVar13 = FUN_035c85e8(*puVar10,0);
          uVar3 = FUN_035c879c(auVar13._0_8_,auVar13._8_8_,0);
          lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                                     );
        }
        FUN_03f9122c(uVar3,lVar11);
      }
      else {
        uVar3 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_03579868(uVar3,0);
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__)
          ;
        }
        plVar6 = (long *)FUN_034fefcc(param_2,uVar3,0);
        lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                                   );
        if (plVar6 == (long *)0x0) goto LAB_03f90d54;
        if (*(long *)(*plVar6 + 0x40) !=
            *(long *)(*(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__ +
                     0x40)) goto LAB_03f90d60;
        puVar7 = (undefined8 *)thunk_FUN_01f11920(plVar6);
        FUN_03f8d830(lVar11,*puVar7);
      }
      *param_3 = lVar11;
      goto LAB_03f90c20;
    }
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                               );
    if (*(long *)(*param_2 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) goto LAB_03f90d58;
    puVar5 = (undefined1 *)thunk_FUN_01f11920(param_2);
    FUN_03f90df0(lVar11,*puVar5);
  }
  else {
    uVar12 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_03579868(uVar12,0);
    uVar4 = FUN_03582560(uVar3,uVar12,0);
    if ((uVar4 & 1) == 0) {
      uVar12 = *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      uVar4 = FUN_03582560(uVar3,uVar12,0);
      if ((uVar4 & 1) == 0) goto LAB_03f9091c;
    }
LAB_03f9086c:
    uVar3 = *(undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_03579868(uVar3,0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    }
    param_2 = (long *)FUN_034fefcc(param_2,uVar3,0);
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                               );
    if ((param_2 != (long *)0x0) &&
       (*param_2 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
LAB_03f90d58:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    FUN_035ac8e8(lVar11,0);
    *(long *)(lVar11 + 0x10) = (long)param_2;
    thunk_FUN_01f51358((long *)(lVar11 + 0x10),param_2);
  }
  *param_3 = lVar11;
LAB_03f90c20:
  thunk_FUN_01f51358(param_3,lVar11);
  puVar1 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  lVar11 = *(long *)Method_System_DBNull_System_IConvertible_ToDecimal__;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
}


