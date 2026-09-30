/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 07cac600
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_SetInsightPassthroughKeyboardHandsIntensity(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  undefined8 unaff_x19;
  long lVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x21;
  
                    /* try { // try from 07cac600 to 07dac607 has its CatchHandler @ 07cac608 */
  plVar5 = *(long **)(unaff_x20 + 0x538);
  if (in_w8 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07cac5e8 with catch @ 07cac608
                       catch(type#2 @ 00000000) { ... } // from try @ 07cac600 with catch @ 07cac608
                        */
    thunk_FUN_044a54b4();
    param_1 = *unaff_x21;
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*plVar5);
  }
  uVar2 = FUN_0952c404(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)PTR_DAT_09f22e40;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_04482014(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar6 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f511c0,**(undefined8 **)(lVar3 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c33b0(uVar6,0);
    return;
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x21;
  }
  *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10) = unaff_x19;
  thunk_FUN_044bb4b4();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a526ad1 == '\0') {
    FUN_04447ba8(PTR_DAT_09f511b8);
    DAT_0a526ad1 = '\x01';
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x21;
  }
  if (*(int *)(*(long *)(lVar3 + 0xb8) + 8) != 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    iVar1 = FUN_07cac838();
    *(int *)(*(long *)(*unaff_x21 + 0xb8) + 8) = iVar1;
    if (iVar1 != 0) {
      lVar4 = *(long *)PTR_DAT_09f22e40;
      lVar3 = *(long *)(lVar4 + 0x38);
      if (lVar3 == 0) {
        FUN_04482014(lVar4);
        lVar3 = *(long *)(lVar4 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      uVar6 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f511c8,**(undefined8 **)(lVar3 + 0xb8),0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c33b0(uVar6,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_09f51160 + 0xe4) != 0) {
    return;
  }
  thunk_FUN_044a54b4();
  return;
}


