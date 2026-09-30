/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$.cctor
ENTRY_POINT: 028cb5e4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings___cctor(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long in_stack_00000018;
  
  uVar1 = FUN_02171fa4();
  lVar2 = in_stack_00000018;
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    uVar1 = FUN_028cb844();
    if ((uVar1 & 1) == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      thunk_FUN_018617ec();
      thunk_FUN_01851c08(PTR_DAT_037fb618);
      uVar4 = FUN_02a50b00();
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar5 = thunk_FUN_01861bbc();
      FUN_02bcf6b4(uVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5);
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      uVar4 = *unaff_x21;
      uVar5 = unaff_x21[1];
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      uVar1 = FUN_02171fa4(lVar2,uVar4,uVar5,&stack0x00000010,
                           *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xf8));
      if ((uVar1 & 1) == 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
        if (lVar2 != 0) {
          FUN_02170834(lVar2,*unaff_x21,unaff_x21[1]);
          if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          FUN_028cba88();
          return;
        }
      }
      else {
        lVar2 = FUN_02afcf34();
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02afcff4(lVar2,0);
        }
      }
    }
  }
  else if (in_stack_00000018 != 0) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_01de588c(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


