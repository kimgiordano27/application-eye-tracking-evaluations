/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$EndComment
ENTRY_POINT: 03265ea4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03266088) */
/* WARNING: Removing unreachable block (ram,0x0326608c) */
/* WARNING: Removing unreachable block (ram,0x03266090) */
/* WARNING: Removing unreachable block (ram,0x032660f8) */

void Newtonsoft_Json_JsonTextReader__EndComment(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char in_stack_00000008;
  int iStack000000000000000c;
  
  if ((DAT_04532b27 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04230d18);
    FUN_01c5d288(PTR_DAT_04233b00);
    FUN_01c5d288(UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo);
    DAT_04532b27 = 1;
  }
  iStack000000000000000c = 0;
  in_stack_00000008 = '\0';
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (uVar3 = FUN_031fde5c(*(long *)(param_1 + 0x38),0), (uVar3 & 1) != 0)) ||
     (FUN_03263d98(param_1), *(char *)(param_1 + 0x54) == '\0')) {
FUN_03265f68:
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar1 = PTR_DAT_04230d18;
    if (((param_2 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == 0x1000) {
        lVar4 = *(long *)PTR_DAT_04230d18;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar1;
        }
        plVar6 = *(long **)(lVar4 + 0xb8);
        if (*plVar6 == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
          }
          lVar7 = plVar6[1];
          in_stack_00000008 = '\0';
          FUN_0333497c(lVar7,&stack0x00000008,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar4 = *(long *)puVar1;
          }
          plVar6 = *(long **)(lVar4 + 0xb8);
          if (*plVar6 == 0) {
            lVar9 = *(long *)(param_1 + 0x28);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            *plVar6 = lVar9;
          }
          if (in_stack_00000008 != '\0') {
            thunk_FUN_01c216e8(lVar7,0);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (*(int *)(*(long *)PTR_DAT_04233b00 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03309e88(param_1,0);
    }
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    if (*(int *)(*(long *)
                  UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    thunk_FUN_01c7cb44(uVar8,&stack0x0000000c);
    if (iStack000000000000000c != 0) {
      uVar8 = FUN_03262b9c(param_1,*(undefined8 *)(param_1 + 0x30));
      iVar2 = iStack000000000000000c;
      thunk_FUN_01c273e8(
                        UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass110_0_TypeInfo
                        );
      FUN_019b5f60();
      uVar8 = FUN_03262c14(uVar8,iVar2);
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar8,uVar5);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_031fd670(*(long *)(param_1 + 0x38),0);
      goto FUN_03265f68;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


