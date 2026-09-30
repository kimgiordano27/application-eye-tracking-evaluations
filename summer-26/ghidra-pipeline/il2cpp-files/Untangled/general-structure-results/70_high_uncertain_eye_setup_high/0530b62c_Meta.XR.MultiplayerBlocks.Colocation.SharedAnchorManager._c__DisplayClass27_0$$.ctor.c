/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<>c__DisplayClass27_0$$.ctor
ENTRY_POINT: 0530b62c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass27_0___ctor
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_06d01e20;
  if ((bRam00000000071c1321 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01e20);
    bRam00000000071c1321 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar4,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0530b890;
      if (*(char *)(*(long *)(param_1 + 0x68) + 0x120) == '\0') {
LAB_0530b7b8:
        lVar3 = *(long *)(param_1 + 0x60);
        puVar5 = (undefined8 *)(param_1 + 0x28);
      }
      else {
        puVar5 = (undefined8 *)(param_1 + 0x30);
        uVar4 = *puVar5;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar2 = FUN_066c971c(uVar4,0,0);
        if ((uVar2 & 1) == 0) goto LAB_0530b7b8;
        lVar3 = *(long *)(param_1 + 0x60);
      }
      if (lVar3 != 0) {
        FUN_0678e014(lVar3,*puVar5,0);
        if ((*(long *)(param_1 + 0x60) == 0) ||
           (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x60),0), lVar3 == 0)) goto LAB_0530b890;
        uVar2 = FUN_066c9b48(lVar3,0);
        if ((uVar2 & 1) == 0) {
          if ((*(long *)(param_1 + 0x60) == 0) ||
             (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x60),0), lVar3 == 0)) goto LAB_0530b890;
          FUN_066c9b04(lVar3,1,0);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar2 = FUN_066cd30c(uVar4,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x48),0), lVar3 == 0)) goto LAB_0530b890;
        uVar2 = FUN_066c9b48(lVar3,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x48),0), lVar3 == 0)) goto LAB_0530b890;
        uVar4 = 0;
        goto LAB_0530b86c;
      }
      goto LAB_0530b890;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x60),0), lVar3 == 0)) goto LAB_0530b890;
    uVar2 = FUN_066c9b48(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x60),0), lVar3 == 0)) goto LAB_0530b890;
      FUN_066c9b04(lVar3,0,0);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x48),0), lVar3 != 0)) {
    uVar2 = FUN_066c9b48(lVar3,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = FUN_066c67ec(*(long *)(param_1 + 0x48),0), lVar3 != 0)) {
      uVar4 = 1;
LAB_0530b86c:
      FUN_066c9b04(lVar3,uVar4,0);
      return;
    }
  }
LAB_0530b890:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


