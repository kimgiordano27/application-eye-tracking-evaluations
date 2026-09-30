/*
FUNCTION_NAME: FUN_07a65eac
ENTRY_POINT: 07a65eac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_07a65eac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar4 = PTR_DAT_092f0d40;
  if ((DAT_098955b8 & 1) == 0) {
    FUN_04077588(PTR_DAT_09288f08);
    FUN_04077588(PTR_DAT_09285d70);
    FUN_04077588(PTR_DAT_092f0d40);
    FUN_04077588(PTR_DAT_092f0d18);
    FUN_04077588(PTR_DAT_09285bb0);
    FUN_04077588(PTR_DAT_092f0d48);
    FUN_04077588(PTR_DAT_092f0d50);
    DAT_098955b8 = 1;
  }
  puVar1 = PTR_DAT_09285bb0;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar6 = *(long *)puVar4;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_09288f08;
  puVar1 = PTR_DAT_09285d70;
  uVar7 = FUN_089cc398(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    lVar9 = *(long *)puVar2;
    lVar6 = *(long *)(lVar9 + 0x38);
    if (lVar6 == 0) {
      FUN_040b1b28(lVar9);
      lVar6 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar4 = PTR_DAT_092f0d48;
    lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    uVar10 = FUN_074e752c(*(undefined8 *)puVar4,**(undefined8 **)(lVar6 + 0xb8),0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar6);
    }
    FUN_08978b08(uVar10,0);
    return;
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar6 = *(long *)puVar4;
  }
  puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  *puVar8 = param_1;
  thunk_FUN_040ec700(puVar8,param_1);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_098955e3 == '\0') {
    FUN_04077588(PTR_DAT_092f0d40);
    DAT_098955e3 = '\x01';
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar6 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_092f0d18;
  if (*(int *)(*(long *)(lVar6 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar5 = OVRPlugin_OVRP_1_8_0__ovrp_Update2();
    *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = iVar5;
    if (iVar5 != 0) {
      lVar9 = *(long *)puVar2;
      lVar6 = *(long *)(lVar9 + 0x38);
      if (lVar6 == 0) {
        FUN_040b1b28(lVar9);
        lVar6 = *(long *)(lVar9 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      uVar10 = FUN_074e752c(*(undefined8 *)PTR_DAT_092f0d50,**(undefined8 **)(lVar6 + 0xb8),0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar6);
      }
      FUN_08978b08(uVar10,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) != 0) {
    return;
  }
  thunk_FUN_040d65a8();
  return;
}


