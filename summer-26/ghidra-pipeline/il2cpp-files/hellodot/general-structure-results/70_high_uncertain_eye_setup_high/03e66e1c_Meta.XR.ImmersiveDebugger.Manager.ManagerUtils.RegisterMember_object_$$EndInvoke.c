/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<object>$$EndInvoke
ENTRY_POINT: 03e66e1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<object>__EndInvoke(void)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar2 = FUN_02ce0978();
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  uVar3 = unaff_w19 + (unaff_w24 >> 1);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  FUN_03e667c0();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  FUN_03e667c0();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  FUN_03e667c0();
  if (unaff_x20 == 0) {
LAB_03e67134:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (uVar3 < *(uint *)(unaff_x20 + 0x18)) {
    memcpy(&stack0x000001e0,(void *)(unaff_x20 + (long)(int)uVar3 * 0x50 + 0x20),0x50);
    uVar3 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    FUN_03e6693c();
    if ((int)uVar3 <= (int)unaff_w19) {
LAB_03e670bc:
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02ce0978();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02ce0978();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      FUN_03e6693c();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      memcpy(&stack0x00000190,(void *)(unaff_x20 + (long)(int)unaff_w19 * 0x50 + 0x20),0x50);
      memcpy(&stack0x00000140,&stack0x000001e0,0x50);
      if (unaff_x22 == 0) goto LAB_03e67134;
      memcpy(&stack0x000000f0,&stack0x00000190,0x50);
      memcpy(&stack0x000000a0,&stack0x00000140,0x50);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      pcVar5 = *(code **)(unaff_x22 + 0x18);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
      memcpy(&stack0x00000280,&stack0x000000f0,0x50);
      memcpy(&stack0x00000230,&stack0x000000a0,0x50);
      iVar1 = (*pcVar5)(uVar4,&stack0x00000280,&stack0x00000230,*(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          memcpy(&stack0x00000190,&stack0x000001e0,0x50);
          uVar3 = uVar3 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_03e67130;
          memcpy(&stack0x00000000,(void *)(unaff_x20 + (long)(int)uVar3 * 0x50 + 0x20),0x50);
          memcpy(&stack0x00000050,&stack0x00000190,0x50);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_02ce0978();
          }
          pcVar5 = *(code **)(unaff_x22 + 0x18);
          uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
          memcpy(&stack0x00000280,&stack0x00000050,0x50);
          memcpy(&stack0x00000230,&stack0x00000000,0x50);
          iVar1 = (*pcVar5)(uVar4,&stack0x00000280,&stack0x00000230,
                            *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar3 <= (int)unaff_w19) goto LAB_03e670bc;
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02ce0978();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02ce0978();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02ce0978();
        }
        FUN_03e6693c();
      }
    }
  }
LAB_03e67130:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


