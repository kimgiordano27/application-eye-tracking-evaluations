/*
FUNCTION_NAME: FUN_01e46784
ENTRY_POINT: 01e46784
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


void FUN_01e46784(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  
  if ((DAT_0377fc4e & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f74c0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Guid>_Clear__);
    thunk_FUN_00d48444(PTR_DAT_033f24b0);
    DAT_0377fc4e = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<Guid>_Clear__;
  if ((*(char *)(param_1 + 0x88) != '\0') && (*(char *)(param_1 + 0x89) != '\0')) {
    FUN_01e3e788(param_1,0);
  }
  FUN_01e3e970(param_1,*(undefined8 *)puVar1);
  FUN_01e3e970(param_1,param_2);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_14__;
  if (param_3 == 0) {
    if (param_4 != 0) {
      FUN_01e3e970(param_1,*(undefined8 *)PTR_DAT_033f24b0);
      goto LAB_01e46880;
    }
    uVar5 = *(uint *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x70);
    uVar3 = uVar5 + 1;
    *(uint *)(param_1 + 0x50) = uVar3;
    if (lVar2 == 0) goto LAB_01e4696c;
    uVar4 = (uint)*(undefined8 *)(lVar2 + 0x18);
    if (uVar4 <= uVar5) goto LAB_01e46968;
    uVar6 = 0x20;
  }
  else {
    FUN_01e3e970(param_1,*(undefined8 *)PTR_DAT_033f74c0);
    FUN_01e3e970(param_1,param_3);
    FUN_01e3e970(param_1,*(undefined8 *)puVar1);
    if (param_4 != 0) {
LAB_01e46880:
      FUN_01e3e970(param_1,param_4);
    }
    uVar5 = *(uint *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x70);
    uVar3 = uVar5 + 1;
    *(uint *)(param_1 + 0x50) = uVar3;
    if (lVar2 == 0) goto LAB_01e4696c;
    uVar4 = (uint)*(undefined8 *)(lVar2 + 0x18);
    if (uVar4 <= uVar5) goto LAB_01e46968;
    uVar6 = 0x22;
  }
  *(undefined2 *)(lVar2 + (long)(int)uVar5 * 2 + 0x20) = uVar6;
  if (param_5 != 0) {
    *(uint *)(param_1 + 0x50) = uVar3 + 1;
    if (uVar4 <= uVar3) goto LAB_01e46968;
    *(undefined2 *)(lVar2 + (long)(int)uVar3 * 2 + 0x20) = 0x5b;
    FUN_01e3e970(param_1,param_5);
    uVar5 = *(uint *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x70);
    uVar3 = uVar5 + 1;
    *(uint *)(param_1 + 0x50) = uVar3;
    if (lVar2 == 0) {
LAB_01e4696c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = (uint)*(undefined8 *)(lVar2 + 0x18);
    if (uVar4 <= uVar5) goto LAB_01e46968;
    *(undefined2 *)(lVar2 + (long)(int)uVar5 * 2 + 0x20) = 0x5d;
  }
  *(uint *)(param_1 + 0x50) = uVar3 + 1;
  if (uVar3 < uVar4) {
    *(undefined2 *)(lVar2 + (long)(int)uVar3 * 2 + 0x20) = 0x3e;
    return;
  }
LAB_01e46968:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


