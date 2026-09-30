/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$MatchValue
ENTRY_POINT: 03265f60
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03266088) */
/* WARNING: Removing unreachable block (ram,0x0326608c) */
/* WARNING: Removing unreachable block (ram,0x032660f8) */

void Newtonsoft_Json_JsonTextReader__MatchValue(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar4;
  long lVar5;
  char in_stack_00000008;
  
  *(undefined1 *)(unaff_x19 + 0x56) = 0;
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  puVar1 = PTR_DAT_04230d18;
  if (((unaff_x21 & 1) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
    if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) == 0x1000) {
      lVar2 = *(long *)PTR_DAT_04230d18;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar2 = *(long *)puVar1;
      }
      plVar3 = *(long **)(lVar2 + 0xb8);
      if (*plVar3 == 0) {
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
        }
        lVar4 = plVar3[1];
        in_stack_00000008 = '\0';
        FUN_0333497c(lVar4,&stack0x00000008,0);
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar2 = *(long *)puVar1;
        }
        plVar3 = *(long **)(lVar2 + 0xb8);
        if (*plVar3 == 0) {
          lVar5 = *(long *)(unaff_x19 + 0x28);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            plVar3 = *(long **)(*(long *)puVar1 + 0xb8);
          }
          *plVar3 = lVar5;
        }
        if (in_stack_00000008 != '\0') {
          thunk_FUN_01c216e8(lVar4,0);
        }
      }
    }
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    if (*(int *)(*(long *)PTR_DAT_04233b00 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03309e88();
  }
  if (unaff_x20 != 0) {
    thunk_FUN_01c273e8(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                      );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c();
  }
  return;
}


