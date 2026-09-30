/*
FUNCTION_NAME: FUN_015bb8b8
ENTRY_POINT: 015bb8b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_015bb8b8(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d0;
  long lStack_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_03777e31 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchMany__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_94_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<float>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2221);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Rigidbody>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_2303);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ScriptableObject>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Type_FilterAttributeImpl__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_AppendElements_<>c_<FaceWithVerticesAndHole>b__10_0__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<WebSocketReceiveResult>,_WebSocket_<Receive>d__35>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<InputControl,_float>_Clear__);
    DAT_03777e31 = 1;
  }
  lStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (DAT_03777e4b == '\0') {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_get_PointableElement__
                      );
    DAT_03777e4b = '\x01';
  }
  puVar1 = StringLiteral_2221;
  plVar12 = (long *)**(undefined8 **)
                      (*(long *)
                        Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_get_PointableElement__
                      + 0xb8);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_2221) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_015bba14;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_2221,4);
LAB_015bba14:
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<WebSocketReceiveResult>,_WebSocket_<Receive>d__35>__
    ;
    puVar2 = Method_System_Collections_Generic_Dictionary<InputControl,_float>_Clear__;
    lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_015bba84;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,3);
LAB_015bba84:
    (*(code *)*puVar7)(&local_d0,plVar12,param_1,puVar7[1]);
    uStack_70 = CONCAT44(uStack_bc,local_c0);
    lStack_78 = lStack_c8;
    local_80 = local_d0;
    uStack_68 = uStack_b8;
    FUN_01347408(&local_80,&local_d0,*(undefined8 *)puVar2);
    iVar6 = local_c0;
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if ((lVar9 != 0) &&
       (FUN_01320e50(lVar9,*(undefined8 *)Method_System_Type_FilterAttributeImpl__),
       puVar5 = Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchMany__,
       puVar4 = Method_System_Collections_Generic_List<Rigidbody>_get_Count__,
       puVar3 = Method_System_Collections_Generic_List_Enumerator<ScriptableObject>_get_Current__,
       puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo,
       puVar1 = UnityEngine_Events_UnityAction<float>_TypeInfo, lVar8 != 0)) {
      FUN_01323390(lVar8,&local_b0,*(undefined8 *)StringLiteral_2303);
      while (uVar10 = FUN_012b894c(&local_b0,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
        FUN_00bd490c(&local_d0,&local_b0,*(undefined8 *)puVar1);
        lVar8 = lStack_c8;
        if (iVar6 == local_c0) {
          local_e0 = lStack_c8;
          local_e8 = local_d0;
          FUN_00bd4d70(lVar9,&local_e8,*(undefined8 *)puVar4);
          if ((lVar8 == param_1 & (param_2 ^ 1)) != 0) {
            FUN_01324ac8(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar3);
          }
        }
      }
      FUN_012b8948(&local_b0,*(undefined8 *)puVar5);
      return lVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


