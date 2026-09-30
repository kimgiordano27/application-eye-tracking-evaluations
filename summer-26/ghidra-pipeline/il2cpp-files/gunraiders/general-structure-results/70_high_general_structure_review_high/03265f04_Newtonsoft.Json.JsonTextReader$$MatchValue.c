/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$MatchValue
ENTRY_POINT: 03265f04
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03266088) */
/* WARNING: Removing unreachable block (ram,0x0326608c) */
/* WARNING: Removing unreachable block (ram,0x03266090) */
/* WARNING: Removing unreachable block (ram,0x032660f8) */

void Newtonsoft_Json_JsonTextReader__MatchValue(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  ulong unaff_x21;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char cStack0000000000000008;
  int iStack000000000000000c;
  
  FUN_03263d98();
  if (*(char *)(unaff_x19 + 0x54) == '\0') {
FUN_03265f68:
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
        plVar4 = *(long **)(lVar2 + 0xb8);
        if (*plVar4 == 0) {
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
          }
          lVar5 = plVar4[1];
          cStack0000000000000008 = '\0';
          FUN_0333497c(lVar5,&stack0x00000008,0);
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar2 = *(long *)puVar1;
          }
          plVar4 = *(long **)(lVar2 + 0xb8);
          if (*plVar4 == 0) {
            lVar7 = *(long *)(unaff_x19 + 0x28);
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            *plVar4 = lVar7;
          }
          if (cStack0000000000000008 != '\0') {
            thunk_FUN_01c216e8(lVar5,0);
          }
        }
      }
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      if (*(int *)(*(long *)PTR_DAT_04233b00 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03309e88();
    }
    return;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)
                  UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    thunk_FUN_01c7cb44(uVar6,(long)&stack0x00000008 + 4);
    if (iStack000000000000000c != 0) {
      uVar6 = FUN_03262b9c();
      thunk_FUN_01c273e8(
                        UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo
                        );
      FUN_019b5f60();
      uVar6 = FUN_03262c14(uVar6,iStack000000000000000c);
      uVar3 = thunk_FUN_01c273e8(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar3);
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_031fd670(*(long *)(unaff_x19 + 0x38),0);
      goto FUN_03265f68;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


