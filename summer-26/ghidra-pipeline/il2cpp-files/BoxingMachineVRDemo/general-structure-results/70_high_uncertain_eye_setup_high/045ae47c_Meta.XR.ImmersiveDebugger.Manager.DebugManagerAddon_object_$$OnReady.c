/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManagerAddon<object>$$OnReady
ENTRY_POINT: 045ae47c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<object>__OnReady(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_0676b988);
  *(undefined1 *)(unaff_x20 + 0xb03) = 1;
  plVar4 = (long *)(unaff_x19 + 0x20);
  lVar2 = *plVar4;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *plVar4;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0676b988 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar2 = FUN_059f7110(0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *plVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar2 == 0) {
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06766e10);
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0(lVar3);
      }
      FUN_04d61e54(lVar2,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 200),0);
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      *(long *)(*(long *)(lVar3 + 0xb8) + 0x18) = lVar2;
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      thunk_FUN_02dd37b4(*(long *)(lVar3 + 0xb8) + 0x18,lVar2);
    }
    puVar1 = PTR_DAT_06767d30;
    uVar5 = FUN_033b8e98(uVar5,lVar2,*(undefined8 *)PTR_DAT_06767d30);
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar2 == 0) {
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06766e10);
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0(lVar3);
      }
      FUN_04d61e54(lVar2,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd0),0);
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      *(long *)(*(long *)(lVar3 + 0xb8) + 0x20) = lVar2;
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      thunk_FUN_02dd37b4(*(long *)(lVar3 + 0xb8) + 0x20,lVar2);
    }
    uVar5 = FUN_033b8e98(uVar5,lVar2,*(undefined8 *)puVar1);
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar2 == 0) {
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar2 = *plVar4;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d9a2e0();
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676b9f0);
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0(lVar3);
      }
      FUN_04d62ba4(lVar2,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd8),0);
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      *(long *)(*(long *)(lVar3 + 0xb8) + 0x28) = lVar2;
      lVar3 = *plVar4;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x88);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      thunk_FUN_02dd37b4(*(long *)(lVar3 + 0xb8) + 0x28,lVar2);
    }
    uVar5 = FUN_033aa318(uVar5,lVar2,*(undefined8 *)PTR_DAT_0676b9e0);
    uVar5 = FUN_033b7c6c(uVar5,*(undefined8 *)PTR_DAT_0676b9e8);
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar5;
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d9a2e0();
    }
    thunk_FUN_02dd37b4(*(undefined8 *)(lVar2 + 0xb8),uVar5);
  }
  lVar2 = *plVar4;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = *plVar4;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


