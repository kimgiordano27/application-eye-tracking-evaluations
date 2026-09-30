/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 07a65f80
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


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  long lVar6;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  uVar3 = FUN_089cc398();
  if ((uVar3 & 1) == 0) {
    lVar6 = *unaff_x23;
    lVar4 = *(long *)(lVar6 + 0x38);
    if (lVar4 == 0) {
      FUN_040b1b28(lVar6);
      lVar4 = *(long *)(lVar6 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar1 = PTR_DAT_092f0d48;
    lVar4 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar5 = FUN_074e752c(*(undefined8 *)puVar1,**(undefined8 **)(lVar4 + 0xb8),0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x21);
    }
    FUN_08978b08(uVar5,0);
    return;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x22;
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10) = unaff_x19;
  thunk_FUN_040ec700();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_098955e3 == '\0') {
    FUN_04077588(PTR_DAT_092f0d40);
    DAT_098955e3 = '\x01';
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x22;
  }
  puVar1 = PTR_DAT_092f0d18;
  if (*(int *)(*(long *)(lVar4 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar2 = OVRPlugin_OVRP_1_8_0__ovrp_Update2();
    *(int *)(*(long *)(*unaff_x22 + 0xb8) + 8) = iVar2;
    if (iVar2 != 0) {
      lVar6 = *unaff_x23;
      lVar4 = *(long *)(lVar6 + 0x38);
      if (lVar4 == 0) {
        FUN_040b1b28(lVar6);
        lVar4 = *(long *)(lVar6 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar4 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      uVar5 = FUN_074e752c(*(undefined8 *)PTR_DAT_092f0d50,**(undefined8 **)(lVar4 + 0xb8),0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x21);
      }
      FUN_08978b08(uVar5,0);
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) != 0) {
    return;
  }
  thunk_FUN_040d65a8();
  return;
}


