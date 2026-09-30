/*
FUNCTION_NAME: FUN_01f3063c
ENTRY_POINT: 01f3063c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01f3063c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  
  puVar1 = Method_System_Collections_Generic_List<Guid>_Clear__;
  if ((DAT_03780282 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f74c0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Guid>_Clear__);
    thunk_FUN_00d48444(PTR_DAT_033f24b0);
    DAT_03780282 = 1;
  }
  FUN_01f30588(param_1,*(undefined8 *)puVar1);
  FUN_01f30588(param_1,param_2);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_14__;
  if (param_3 == 0) {
    if (param_4 != 0) {
      FUN_01f30588(param_1,*(undefined8 *)PTR_DAT_033f24b0);
      goto LAB_01f3071c;
    }
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar2 + 1;
    if (lVar3 == 0) goto LAB_01f30824;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_01f30828;
    uVar4 = 0x20;
  }
  else {
    FUN_01f30588(param_1,*(undefined8 *)PTR_DAT_033f74c0);
    FUN_01f30588(param_1,param_3);
    FUN_01f30588(param_1,*(undefined8 *)puVar1);
    if (param_4 != 0) {
LAB_01f3071c:
      FUN_01f30588(param_1,param_4);
    }
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar2 + 1;
    if (lVar3 == 0) goto LAB_01f30824;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_01f30828;
    uVar4 = 0x22;
  }
  *(undefined1 *)(lVar3 + (int)uVar2 + 0x20) = uVar4;
  if (param_5 != 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar2 + 1;
    if (lVar3 == 0) goto LAB_01f30824;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_01f30828;
    *(undefined1 *)(lVar3 + (int)uVar2 + 0x20) = 0x5b;
    FUN_01f30588(param_1,param_5);
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar2 + 1;
    if (lVar3 == 0) goto LAB_01f30824;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_01f30828;
    *(undefined1 *)(lVar3 + (int)uVar2 + 0x20) = 0x5d;
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  lVar3 = *(long *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x50) = uVar2 + 1;
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(undefined1 *)(lVar3 + (int)uVar2 + 0x20) = 0x3e;
      return;
    }
LAB_01f30828:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_01f30824:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


