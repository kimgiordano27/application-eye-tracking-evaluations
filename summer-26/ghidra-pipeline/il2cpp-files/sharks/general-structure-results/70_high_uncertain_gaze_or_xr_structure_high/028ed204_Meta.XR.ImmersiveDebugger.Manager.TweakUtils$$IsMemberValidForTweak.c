/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$IsMemberValidForTweak
ENTRY_POINT: 028ed204
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__IsMemberValidForTweak(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar5;
  long in_stack_00000018;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
  if (lVar5 != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *unaff_x21;
    uVar4 = unaff_x21[1];
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    uVar2 = FUN_02171fa4(lVar5,uVar3,uVar4,&stack0x00000018,
                         *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xd0));
    lVar5 = in_stack_00000018;
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      uVar2 = FUN_028ed498();
      if ((uVar2 & 1) == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f9268);
        thunk_FUN_018617ec();
        thunk_FUN_01851c08(PTR_DAT_037fb618);
        uVar3 = FUN_02a50b00();
        thunk_FUN_01851c08(PTR_DAT_037f8d50);
        uVar4 = thunk_FUN_01861bbc();
        FUN_02bcf6b4(uVar4,uVar3);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar4);
      }
      lVar5 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar5 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
      if (lVar5 != 0) {
        lVar1 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *unaff_x21;
        uVar4 = unaff_x21[1];
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0185daa4();
        }
        uVar2 = FUN_02171fa4(lVar5,uVar3,uVar4,&stack0x00000010,
                             *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xf8));
        if ((uVar2 & 1) == 0) {
          lVar5 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar5 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0185daa4();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar5 != 0) {
            FUN_02170834(lVar5,*unaff_x21,unaff_x21[1]);
            if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
              FUN_0185daa4();
            }
            FUN_028ed6dc();
            return;
          }
        }
        else {
          lVar5 = FUN_02afcf34();
          if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02afcff4(lVar5,0);
          }
        }
      }
    }
    else if (in_stack_00000018 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_01de7084(lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


