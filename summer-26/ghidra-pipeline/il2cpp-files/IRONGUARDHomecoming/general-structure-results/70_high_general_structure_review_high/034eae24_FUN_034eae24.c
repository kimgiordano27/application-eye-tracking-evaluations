/*
FUNCTION_NAME: FUN_034eae24
ENTRY_POINT: 034eae24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_034eae24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar1 = Method_System_Net_WebReadStream_Flush__;
  if ((DAT_04832e17 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<IWitByteDataReadyHandler>__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_Read__);
    thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_Flush__);
    thunk_FUN_01efb3a4(Method_System_Net_WebExceptionMapping_GetWebStatusString__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_WebProxyScriptElement__ctor__);
    thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_Seek__);
    DAT_04832e17 = 1;
  }
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar5,0);
  puVar3 = Method_System_Net_WebExceptionMapping_GetWebStatusString__;
  puVar2 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x28) = param_1;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),param_1);
    puVar7 = (undefined8 *)(lVar5 + 0x30);
    *puVar7 = *(undefined8 *)puVar3;
    thunk_FUN_01f51358(puVar7);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar4 = Method_System_Net_WebReadStream_Seek__;
    puVar3 = Method_System_Net_Configuration_WebProxyScriptElement__ctor__;
    uVar6 = FUN_034eaba8();
    puVar8 = (undefined8 *)(lVar5 + 0x38);
    *puVar8 = uVar6;
    thunk_FUN_01f51358(puVar8,uVar6);
    uVar6 = *puVar8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = System_Threading_OSSpecificSynchronizationContext__Post(uVar6,*(undefined8 *)puVar3,0);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    thunk_FUN_01f51358();
    uVar6 = System_Threading_OSSpecificSynchronizationContext__Post
                      (*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)puVar4,0);
    *(undefined8 *)(lVar5 + 0x18) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x18),uVar6);
    puVar1 = Method_UnityEngine_Component_GetComponents<IWitByteDataReadyHandler>__;
    if (*(long *)(lVar5 + 0x28) != 0) {
      uVar6 = FUN_01f08890(*(undefined8 *)
                            Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                           *(undefined4 *)(*(long *)(lVar5 + 0x28) + 0x18));
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20),uVar6);
      uVar9 = *(undefined8 *)(lVar5 + 0x38);
      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_025f2a84(uVar6,lVar5,*(undefined8 *)Method_System_Net_WebReadStream_Read__,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_034eb250(uVar9,uVar6);
      return *puVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


