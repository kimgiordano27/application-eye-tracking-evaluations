/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 06629594
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Span<OVRPlugin_SpaceQueryResult>__get_Length(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  short *psVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  undefined8 uVar7;
  long unaff_x23;
  
  if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x70) + 0x40))
  goto LAB_06629948;
  plVar1 = (long *)thunk_FUN_04485360();
  if (*plVar1 == 0) {
LAB_06629884:
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    uVar7 = **(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar7 = FUN_07a4ce38(uVar7,0);
    uVar3 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x38) + 0x20,0);
    uVar4 = FUN_07a5629c(uVar7,uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = *unaff_x19;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      plVar1 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
      if (plVar1 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x38) + 0x40))
      goto LAB_06629948;
      psVar5 = (short *)thunk_FUN_04485360();
      if (*psVar5 == 0) goto LAB_06629884;
    }
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar7 = FUN_07a4ce38(uVar7,0);
    uVar3 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x40) + 0x20,0);
    uVar4 = FUN_07a5629c(uVar7,uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = *unaff_x19;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      plVar1 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
      if (plVar1 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x40) + 0x40))
      goto LAB_06629948;
      psVar5 = (short *)thunk_FUN_04485360();
      if (*psVar5 == 0) goto LAB_06629884;
    }
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar7 = FUN_07a4ce38(uVar7,0);
    uVar3 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x58) + 0x20,0);
    uVar4 = FUN_07a5629c(uVar7,uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = *unaff_x19;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      plVar1 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
      if (plVar1 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x58) + 0x40))
      goto LAB_06629948;
      plVar1 = (long *)thunk_FUN_04485360();
      if (*plVar1 == 0) goto LAB_06629884;
    }
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar7 = FUN_07a4ce38(uVar7,0);
    uVar3 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x60) + 0x20,0);
    uVar4 = FUN_07a5629c(uVar7,uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = *unaff_x19;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      plVar1 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
      if (plVar1 == (long *)0x0) {
LAB_06629944:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x60) + 0x40)) {
LAB_06629948:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      puVar6 = (undefined8 *)thunk_FUN_04485360();
      uVar4 = FUN_07a9891c(0,*puVar6,0);
      if ((uVar4 & 1) != 0) goto LAB_06629884;
    }
    lVar2 = *unaff_x19;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar7 = thunk_FUN_0448520c();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_04481fb8(*unaff_x19);
    }
    FUN_0687b240(uVar7);
  }
  return uVar7;
}


