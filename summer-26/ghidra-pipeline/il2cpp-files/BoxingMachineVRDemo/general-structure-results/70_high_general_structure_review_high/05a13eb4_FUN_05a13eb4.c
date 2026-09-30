/*
FUNCTION_NAME: FUN_05a13eb4
ENTRY_POINT: 05a13eb4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05a13eb4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_06b8110a & 1) == 0) {
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
                );
    DAT_06b8110a = 1;
  }
  uVar2 = _DAT_0120b730;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x110) = _UNK_0120b738;
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined8 *)(param_1 + 0x118) = 0x8000000080000000;
  if ((*(long *)(param_1 + 0x80) == 0) ||
     (lVar5 = FUN_047cac14(*(long *)(param_1 + 0x80),
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                          ),
     puVar4 = 
     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
     , puVar3 = 
       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
     , lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_04472220(&local_48,lVar5,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
              );
  while( true ) {
    do {
      uVar6 = FUN_04b1ba5c(&local_48,*(undefined8 *)puVar4);
      if ((uVar6 & 1) == 0) {
        FUN_04b1ba58(&local_48,*(undefined8 *)puVar3);
        return;
      }
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
    } while (*(char *)(local_38 + 0x44) == '\0');
    lVar5 = *(long *)(local_38 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar7 = *(ulong *)(lVar5 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x108);
    uVar6 = uVar7;
    if ((int)uVar8 <= (int)uVar7) {
      uVar6 = uVar8;
    }
    if ((int)(uVar8 >> 0x20) <= (int)(uVar7 >> 0x20)) {
      uVar7 = uVar8;
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    if (*(int *)(param_1 + 0x110) <= *(int *)(lVar5 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x110);
    }
    *(ulong *)(param_1 + 0x108) = uVar6 & 0xffffffff | uVar7 & 0xffffffff00000000;
    *(int *)(param_1 + 0x110) = iVar1;
    lVar5 = *(long *)(local_38 + 0x10);
    if (lVar5 == 0) break;
    uVar7 = *(ulong *)(lVar5 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x114);
    uVar6 = uVar7;
    if ((int)uVar7 <= (int)uVar8) {
      uVar6 = uVar8;
    }
    if ((int)(uVar7 >> 0x20) <= (int)(uVar8 >> 0x20)) {
      uVar7 = uVar8;
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    if (*(int *)(lVar5 + 0x18) <= *(int *)(param_1 + 0x11c)) {
      iVar1 = *(int *)(param_1 + 0x11c);
    }
    *(ulong *)(param_1 + 0x114) = uVar6 & 0xffffffff | uVar7 & 0xffffffff00000000;
    *(int *)(param_1 + 0x11c) = iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


