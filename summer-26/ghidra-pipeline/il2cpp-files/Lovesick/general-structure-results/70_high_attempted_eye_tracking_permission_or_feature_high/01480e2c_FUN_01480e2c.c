/*
FUNCTION_NAME: FUN_01480e2c
ENTRY_POINT: 01480e2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;telemetry;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_7;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_01480e2c(long param_1,int param_2,undefined8 *param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint local_58;
  undefined4 uStack_54;
  
  if ((DAT_03776b6f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_WitUnityRequest_<SendMessageAsync>d__20>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SimpleFollowCurve>_Dispose__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<Rigidbody2D>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_03776b6f = 1;
  }
  puVar6 = Method_UnityEngine_Component_GetComponentInParent<Rigidbody2D>__;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<VRequestResponse<string>>,_WitUnityRequest_<SendMessageAsync>d__20>__
  ;
  puVar4 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  puVar3 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  puVar2 = UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo;
  lVar8 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)StringLiteral_4747;
  while (StringLiteral_4747 = (undefined *)puVar1, lVar8 != 0) {
    if (param_2 < *(int *)(lVar8 + 0x18)) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 != 0) goto LAB_01480f48;
      break;
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      uVar7 = FUN_00da4fb8(*(undefined8 *)puVar4,0x400);
    }
    FUN_00bc2300(lVar8,uVar7,*(undefined8 *)puVar5);
    puVar1 = (undefined8 *)StringLiteral_4747;
    lVar8 = *(long *)(param_1 + 0x10);
  }
  goto LAB_01480fec;
  while( true ) {
    FUN_00ac20f0(lVar8,0,*puVar1);
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar8 == 0) break;
LAB_01480f48:
    if (param_2 < *(int *)(lVar8 + 0x18)) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_0132138c(*(long *)(param_1 + 0x10),param_2,&local_58,*(undefined8 *)puVar6);
        *param_3 = CONCAT44(uStack_54,local_58);
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_0132138c(*(long *)(param_1 + 0x18),param_2,&local_58,*(undefined8 *)puVar3);
          local_58 = local_58 + 0x1e0 & 0x1ff;
          *param_4 = local_58;
          if (*(long *)(param_1 + 0x18) != 0) {
            FUN_0132149c(*(long *)(param_1 + 0x18),param_2,&local_58,*(undefined8 *)puVar2);
            return;
          }
        }
      }
      break;
    }
  }
LAB_01480fec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


