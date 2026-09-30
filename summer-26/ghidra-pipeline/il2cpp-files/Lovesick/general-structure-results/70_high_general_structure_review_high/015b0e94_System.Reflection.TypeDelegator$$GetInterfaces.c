/*
FUNCTION_NAME: System.Reflection.TypeDelegator$$GetInterfaces
ENTRY_POINT: 015b0e94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void System_Reflection_TypeDelegator__GetInterfaces(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x318));
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                    );
  thunk_FUN_00d48444(
                    UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo
                    );
  thunk_FUN_00d48444(StringLiteral_5534);
  *(undefined1 *)(unaff_x20 + 0xdd0) = 1;
  puVar3 = Method_System_Data_DataCommonEventSource_Trace<Exception>__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
  ;
  puVar1 = UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_TypeInfo;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0129b5d0(*(long *)(unaff_x19 + 0x58),&stack0x00000010,
               *(undefined8 *)
                Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVProfile>_Add__
              );
  while( true ) {
    uVar4 = FUN_012bf140(&stack0x00000010,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      FUN_012bf83c(&stack0x00000010,*(undefined8 *)puVar3);
      return;
    }
    FUN_00bd3fc8(&stack0x00000010,*(undefined8 *)puVar1);
    lVar6 = *(long *)(unaff_x19 + 0x50);
    uVar5 = FUN_00bd41d8();
    if (lVar6 == 0) break;
    FUN_015af008(uVar5,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


