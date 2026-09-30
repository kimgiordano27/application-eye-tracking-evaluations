/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryPoint
ENTRY_POINT: 07a65ed4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryPoint(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_x19;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x22;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xf08));
  FUN_04077588(PTR_DAT_09285d70);
  FUN_04077588(PTR_DAT_092f0d40);
  FUN_04077588(PTR_DAT_092f0d18);
  FUN_04077588(PTR_DAT_09285bb0);
  FUN_04077588(PTR_DAT_092f0d48);
  FUN_04077588(PTR_DAT_092f0d50);
  *(undefined1 *)(unaff_x20 + 0x5b8) = 1;
  puVar1 = PTR_DAT_09285bb0;
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *unaff_x22;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_09288f08;
  puVar1 = PTR_DAT_09285d70;
  uVar6 = FUN_089cc398(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)puVar2;
    lVar5 = *(long *)(lVar7 + 0x38);
    if (lVar5 == 0) {
      FUN_040b1b28(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar2 = PTR_DAT_092f0d48;
    lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    uVar8 = FUN_074e752c(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar5);
    }
    FUN_08978b08(uVar8,0);
    return;
  }
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *unaff_x22;
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10) = unaff_x19;
  thunk_FUN_040ec700();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_098955e3 == '\0') {
    FUN_04077588(PTR_DAT_092f0d40);
    DAT_098955e3 = '\x01';
  }
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *unaff_x22;
  }
  puVar3 = PTR_DAT_092f0d18;
  if (*(int *)(*(long *)(lVar5 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar4 = OVRPlugin_OVRP_1_8_0__ovrp_Update2();
    *(int *)(*(long *)(*unaff_x22 + 0xb8) + 8) = iVar4;
    if (iVar4 != 0) {
      lVar7 = *(long *)puVar2;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_040b1b28(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      uVar8 = FUN_074e752c(*(undefined8 *)PTR_DAT_092f0d50,**(undefined8 **)(lVar5 + 0xb8),0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar5);
      }
      FUN_08978b08(uVar8,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) != 0) {
    return;
  }
  thunk_FUN_040d65a8();
  return;
}


