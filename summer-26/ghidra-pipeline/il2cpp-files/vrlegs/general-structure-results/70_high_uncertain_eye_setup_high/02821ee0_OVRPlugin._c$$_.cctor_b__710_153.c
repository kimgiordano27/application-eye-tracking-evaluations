/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_153
ENTRY_POINT: 02821ee0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__710_153(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int in_w8;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_0271c480(0);
  lVar4 = FUN_02768e08(&stack0x00000018,uVar3,0);
  if (lVar4 == 0) goto LAB_02822078;
  FUN_025c5094(lVar4,0);
  puVar1 = PTR_DAT_03cbeeb0;
  iVar2 = *(int *)(lVar4 + 0x10) + unaff_w22 + 7;
  if (unaff_w21 == 2) {
LAB_02821f98:
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar2 = FUN_02822080();
  }
  else if (unaff_w21 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_027486b4();
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_027486b4();
      if ((uVar5 & 1) != 0) goto LAB_02821f98;
    }
  }
  if (*(long *)PTR_DAT_03cfe828 != 0) {
    FUN_025c5094(*(long *)PTR_DAT_03cfe828,0);
    return iVar2 + 3;
  }
LAB_02822078:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


