/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$add_OnAssemblyParsed
ENTRY_POINT: 028cd088
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__add_OnAssemblyParsed
               (ulong param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined *puVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fb660);
    *(undefined1 *)(unaff_x23 + 0x59a) = 1;
  }
  if (unaff_x22 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar4 = thunk_FUN_01861bbc();
    FUN_02b3cbec();
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28);
    if (lVar1 == 0) {
LAB_028cd2e4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = FUN_02170a40(lVar1,*param_2,param_2[1],*(undefined8 *)PTR_DAT_037fb660);
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
      if (lVar1 == 0) goto LAB_028cd2e4;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *param_2;
      uVar5 = param_2[1];
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      uVar2 = FUN_02170a40(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1f0));
      if ((uVar2 & 1) == 0) {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0185daa4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0185daa4();
        }
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0185daa4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0185daa4();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
        if (lVar1 == 0) goto LAB_028cd2e4;
        lVar3 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *param_2;
        uVar5 = param_2[1];
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        uVar2 = FUN_02170a40(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x278));
        if ((uVar2 & 1) == 0) {
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
          if (lVar1 == 0) goto LAB_028cd2e4;
          lVar3 = *(long *)(unaff_x19 + 0x20);
          uVar4 = *param_2;
          uVar5 = param_2[1];
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0185daa4();
          }
          uVar2 = FUN_02170a40(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x280));
          if ((uVar2 & 1) == 0) {
            return;
          }
          thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar4 = thunk_FUN_018617ec();
          puVar6 = PTR_DAT_037fb690;
        }
        else {
          thunk_FUN_01851c08(PTR_DAT_037f9268);
          uVar4 = thunk_FUN_018617ec();
          puVar6 = PTR_DAT_037fb688;
        }
      }
      else {
        thunk_FUN_01851c08(PTR_DAT_037f9268);
        uVar4 = thunk_FUN_018617ec();
        puVar6 = PTR_DAT_037fb678;
      }
    }
    else {
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar4 = thunk_FUN_018617ec();
      puVar6 = PTR_DAT_037fb670;
    }
    uVar5 = thunk_FUN_01851c08(puVar6);
    uVar5 = FUN_02a473b8(uVar5,uVar4,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar4 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar4);
}


