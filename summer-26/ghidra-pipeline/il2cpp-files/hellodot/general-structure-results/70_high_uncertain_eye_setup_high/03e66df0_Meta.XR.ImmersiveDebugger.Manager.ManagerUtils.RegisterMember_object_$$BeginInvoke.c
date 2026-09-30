/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<object>$$BeginInvoke
ENTRY_POINT: 03e66df0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<object>__BeginInvoke
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  uVar4 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  FUN_03e667c0(param_1,param_4,param_2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  FUN_03e667c0(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  FUN_03e667c0(param_1,param_4,uVar4,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_03e67134:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (uVar4 < *(uint *)(param_1 + 0x18)) {
    memcpy(&stack0x000001e0,(void *)(param_1 + (long)(int)uVar4 * 0x50 + 0x20),0x50);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    FUN_03e6693c(param_1,uVar4,uVar1);
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_03e670bc:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02ce0978();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02ce0978();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      FUN_03e6693c(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      memcpy(&stack0x00000190,(void *)(param_1 + (long)(int)param_2 * 0x50 + 0x20),0x50);
      memcpy(&stack0x00000140,&stack0x000001e0,0x50);
      if (param_4 == 0) goto LAB_03e67134;
      memcpy(&stack0x000000f0,&stack0x00000190,0x50);
      memcpy(&stack0x000000a0,&stack0x00000140,0x50);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      pcVar6 = *(code **)(param_4 + 0x18);
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      memcpy(&stack0x00000280,&stack0x000000f0,0x50);
      memcpy(&stack0x00000230,&stack0x000000a0,0x50);
      iVar2 = (*pcVar6)(uVar5,&stack0x00000280,&stack0x00000230,*(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          memcpy(&stack0x00000190,&stack0x000001e0,0x50);
          uVar4 = uVar4 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar4) goto LAB_03e67130;
          memcpy(&stack0x00000000,(void *)(param_1 + (long)(int)uVar4 * 0x50 + 0x20),0x50);
          memcpy(&stack0x00000050,&stack0x00000190,0x50);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_02ce0978();
          }
          pcVar6 = *(code **)(param_4 + 0x18);
          uVar5 = *(undefined8 *)(param_4 + 0x40);
          memcpy(&stack0x00000280,&stack0x00000050,0x50);
          memcpy(&stack0x00000230,&stack0x00000000,0x50);
          iVar2 = (*pcVar6)(uVar5,&stack0x00000280,&stack0x00000230,*(undefined8 *)(param_4 + 0x28))
          ;
        } while (iVar2 < 0);
        if ((int)uVar4 <= (int)param_2) goto LAB_03e670bc;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02ce0978();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02ce0978();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_02ce0978();
        }
        FUN_03e6693c(param_1,param_2,uVar4);
      }
    }
  }
LAB_03e67130:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


