/*
FUNCTION_NAME: FUN_01e32d68
ENTRY_POINT: 01e32d68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01e32d68(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  
  if ((DAT_0377fbb3 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f74c0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_14__);
    thunk_FUN_00d48444(StringLiteral_11439);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Guid>_Clear__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonTextReader_set_ArrayPool__);
    thunk_FUN_00d48444(PTR_DAT_033f24b0);
    DAT_0377fbb3 = 1;
  }
  puVar4 = (undefined8 *)StringLiteral_11439;
  puVar2 = Method_Newtonsoft_Json_JsonTextReader_set_ArrayPool__;
  puVar1 = Method_System_Collections_Generic_List<Guid>_Clear__;
  if ((*(char *)(param_1 + 0x88) != '\0') && (*(char *)(param_1 + 0x89) != '\0')) {
    FUN_01e3e788(param_1,0,0);
  }
  FUN_01e3e970(param_1,*(undefined8 *)puVar1,0);
  uVar3 = thunk_FUN_015fe514(param_2,*puVar4,0);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)puVar2;
  }
  FUN_01e3e970(param_1,*puVar4,0);
  if (param_3 == 0) {
    puVar4 = (undefined8 *)PTR_DAT_033f24b0;
    if (param_4 != 0) goto LAB_01e32ea4;
    uVar8 = *(uint *)(param_1 + 0x50);
    lVar5 = *(long *)(param_1 + 0x70);
    uVar6 = uVar8 + 1;
    *(uint *)(param_1 + 0x50) = uVar6;
    if (lVar5 == 0) goto LAB_01e32fac;
    uVar7 = (uint)*(undefined8 *)(lVar5 + 0x18);
    if (uVar7 <= uVar8) goto LAB_01e32fa8;
    uVar9 = 0x20;
  }
  else {
    FUN_01e3e970(param_1,*(undefined8 *)PTR_DAT_033f74c0,0);
    FUN_01e3e970(param_1,param_3,0);
    puVar4 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_14__;
    if (param_4 != 0) {
LAB_01e32ea4:
      FUN_01e3e970(param_1,*puVar4,0);
      FUN_01e3e970(param_1,param_4,0);
    }
    uVar8 = *(uint *)(param_1 + 0x50);
    lVar5 = *(long *)(param_1 + 0x70);
    uVar6 = uVar8 + 1;
    *(uint *)(param_1 + 0x50) = uVar6;
    if (lVar5 == 0) goto LAB_01e32fac;
    uVar7 = (uint)*(undefined8 *)(lVar5 + 0x18);
    if (uVar7 <= uVar8) goto LAB_01e32fa8;
    uVar9 = 0x22;
  }
  *(undefined2 *)(lVar5 + (long)(int)uVar8 * 2 + 0x20) = uVar9;
  if (param_5 != 0) {
    *(uint *)(param_1 + 0x50) = uVar6 + 1;
    if (uVar7 <= uVar6) goto LAB_01e32fa8;
    *(undefined2 *)(lVar5 + (long)(int)uVar6 * 2 + 0x20) = 0x5b;
    FUN_01e3e970(param_1,param_5,0);
    uVar8 = *(uint *)(param_1 + 0x50);
    lVar5 = *(long *)(param_1 + 0x70);
    uVar6 = uVar8 + 1;
    *(uint *)(param_1 + 0x50) = uVar6;
    if (lVar5 == 0) {
LAB_01e32fac:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = (uint)*(undefined8 *)(lVar5 + 0x18);
    if (uVar7 <= uVar8) goto LAB_01e32fa8;
    *(undefined2 *)(lVar5 + (long)(int)uVar8 * 2 + 0x20) = 0x5d;
  }
  *(uint *)(param_1 + 0x50) = uVar6 + 1;
  if (uVar6 < uVar7) {
    *(undefined2 *)(lVar5 + (long)(int)uVar6 * 2 + 0x20) = 0x3e;
    return;
  }
LAB_01e32fa8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


