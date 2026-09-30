/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
ENTRY_POINT: 01778678
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject
          (ulong param_1,ulong param_2,int param_3,undefined8 param_4,undefined8 param_5,
          int *param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  long unaff_x24;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__);
    thunk_FUN_00d48444(StringLiteral_4591);
    *(undefined1 *)(unaff_x24 + 0xda1) = 1;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  if (param_2 < 10000000) {
    iVar11 = 1;
    uVar6 = (uint)param_2;
  }
  else if (param_2 < 100000000000000) {
    uVar6 = (uint)(param_2 / 10000000);
    iVar11 = 8;
  }
  else {
    uVar6 = (uint)(param_2 / 100000000000000);
    iVar11 = 0xf;
  }
  if (9 < uVar6) {
    if (uVar6 < 100) {
      iVar11 = iVar11 + 1;
    }
    else if (uVar6 < 1000) {
      iVar11 = iVar11 + 2;
    }
    else if (uVar6 >> 4 < 0x271) {
      iVar11 = iVar11 + 3;
    }
    else if (uVar6 >> 5 < 0xc35) {
      iVar11 = iVar11 + 4;
    }
    else if (uVar6 < 1000000) {
      iVar11 = iVar11 + 5;
    }
    else {
      iVar11 = iVar11 + 6;
    }
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_get_Current__;
  if (iVar11 <= param_3) {
    iVar11 = param_3;
  }
  if ((int)param_5 < iVar11) {
    *param_6 = 0;
    return 0;
  }
  *param_6 = iVar11;
  puVar3 = Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__;
  lVar4 = FUN_011204a4(param_4,param_5,*(undefined8 *)puVar2);
  iVar10 = param_3 + -2;
  psVar9 = (short *)(lVar4 + (ulong)(uint)(iVar11 << 1));
  while( true ) {
    iVar11 = *(int *)(*(long *)puVar3 + 0xe0);
    if (iVar11 == 0) {
      thunk_FUN_00d32864();
      iVar11 = *(int *)(*(long *)puVar3 + 0xe0);
    }
    iVar7 = (int)param_2;
    if (param_2 >> 0x20 == 0) break;
    if (iVar11 == 0) {
      thunk_FUN_00d32864();
    }
    param_2 = param_2 / 1000000000;
    uVar8 = (ulong)(uint)(iVar7 + (int)param_2 * -1000000000);
    iVar11 = 7;
    do {
      do {
        uVar5 = uVar8 / 10;
        uVar6 = (uint)uVar8;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)uVar8 + (short)(uVar8 / 10) * -10 + 0x30;
        iVar7 = iVar11 + -1;
        bVar1 = -1 < iVar11;
        uVar8 = uVar5;
        iVar11 = iVar7;
      } while (bVar1);
    } while (9 < uVar6);
    param_3 = param_3 + -9;
    iVar10 = iVar10 + -9;
  }
  if (iVar11 == 0) {
    thunk_FUN_00d32864();
  }
  if ((iVar7 != 0) || (-1 < param_3 + -1)) {
    do {
      do {
        uVar6 = (uint)param_2;
        uVar8 = (param_2 & 0xffffffff) / 10;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)param_2 + (short)((param_2 & 0xffffffff) / 10) * -10 + 0x30;
        iVar11 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        param_2 = uVar8;
        iVar10 = iVar11;
      } while (bVar1);
    } while (9 < uVar6);
  }
  return 1;
}


