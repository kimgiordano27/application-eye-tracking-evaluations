/*
FUNCTION_NAME: FUN_015b0e60
ENTRY_POINT: 015b0e60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_015b0e60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_03777dd0 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_Add__
                      );
    thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_Trace<Exception>__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                      );
    thunk_FUN_00d48444(
                      UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_5534);
    DAT_03777dd0 = 1;
  }
  puVar4 = StringLiteral_5534;
  puVar3 = Method_System_Data_DataCommonEventSource_Trace<Exception>__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
  ;
  puVar1 = UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_0129b5d0(*(long *)(param_1 + 0x58),&local_70,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_Add__
                );
    while( true ) {
      uVar5 = FUN_012bf140(&local_70,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        FUN_012bf83c(&local_70,*(undefined8 *)puVar3);
        return;
      }
      auVar8 = FUN_00bd3fc8(&local_70,*(undefined8 *)puVar1);
      lVar7 = *(long *)(param_1 + 0x50);
      local_80 = auVar8;
      uVar6 = FUN_00bd41d8(local_80,*(undefined8 *)puVar4);
      if (lVar7 == 0) break;
      FUN_015af008(uVar6,uVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


