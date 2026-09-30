/*
FUNCTION_NAME: FUN_034cb360
ENTRY_POINT: 034cb360
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_034cb360(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__;
  if ((DAT_04832cf3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__
                      );
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    DAT_04832cf3 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04832d30 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectListPool<IRuntimePanelComponent>_Release__
                      );
    DAT_04832d30 = '\x01';
  }
  puVar1 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
  lVar2 = *(long *)puVar4;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar4;
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035aedf8(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar4 = Method_System_Globalization_CompareInfo_GetHashCode__;
  }
  else {
    if (param_3 != 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar3 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_UnitySerializationUtility_GetCachedUnityWriter__
                                  );
        FUN_034f6754(uVar3,uVar5,0);
      }
      else {
        if (0 < param_5) {
          uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                    );
          FUN_034d6264(uVar3,param_2,3,1,1,0x1000,0x8000000,0);
          FUN_034cb184(param_1,uVar3,param_3,param_4 & 1,param_5,0);
          return;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar3 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_System_Linq_Expressions_ExpressionVisitor_VisitAndConvert<ParameterExpression>__
                                  );
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_UnitySerializationUtility_GetCachedUnityReader__
                                  );
        FUN_034f3578(uVar3,uVar5,uVar6,0);
      }
      goto LAB_034cb584;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar4 = Method_Gameplay_Creeps_PointsSpawner_<Start>b__17_0__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar4);
  FUN_034efd20(uVar3,uVar5,0);
LAB_034cb584:
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Sirenix_Serialization_UnitySerializationUtility_GetStringFromStreamAndReset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar5);
}


