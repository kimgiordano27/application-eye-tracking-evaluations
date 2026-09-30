/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_119
ENTRY_POINT: 05bfd944
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_119(ulong param_1)

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
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c6d58);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(PTR_DAT_071170a8);
    FUN_03188a78(PTR_DAT_07117018);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_071170b0);
    FUN_03188a78(PTR_DAT_071170b8);
    *(undefined1 *)(unaff_x20 + 0xea8) = 1;
  }
  puVar1 = PTR_DAT_070c1b68;
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar5 = *unaff_x22;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_070c6d58;
  puVar1 = PTR_DAT_070c2418;
  uVar6 = FUN_069d8404(uVar8,0,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)puVar2;
    lVar5 = *(long *)(lVar7 + 0x38);
    if (lVar5 == 0) {
      FUN_031c0a30(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    puVar2 = PTR_DAT_071170b0;
    lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    uVar8 = FUN_057c0370(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar5);
    }
    FUN_0698c5bc(uVar8,0);
    return;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    iVar4 = *(int *)(*unaff_x22 + 0xe4);
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x19;
    if (iVar4 == 0) {
      thunk_FUN_031e5338();
    }
  }
  else {
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x19;
  }
  if (DAT_0754eed6 == '\0') {
    FUN_03188a78(PTR_DAT_071170a8);
    DAT_0754eed6 = '\x01';
  }
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar5 = *unaff_x22;
  }
  puVar3 = PTR_DAT_07117018;
  if (*(int *)(*(long *)(lVar5 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    iVar4 = FUN_05bfdbf4();
    *(int *)(*(long *)(*unaff_x22 + 0xb8) + 8) = iVar4;
    if (iVar4 != 0) {
      lVar7 = *(long *)puVar2;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_031c0a30(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      uVar8 = FUN_057c0370(*(undefined8 *)PTR_DAT_071170b8,**(undefined8 **)(lVar5 + 0xb8),0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar5);
      }
      FUN_0698c5bc(uVar8,0);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) != 0) {
    return;
  }
  thunk_FUN_031e5338();
  return;
}


