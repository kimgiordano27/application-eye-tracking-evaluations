/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 07c9ae8c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef___cctor(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 unaff_s8;
  
  FUN_04447ba8(PTR_DAT_09f4e7b0);
  *(undefined1 *)(unaff_x21 + 0x984) = 1;
  puVar1 = PTR_DAT_09f4e7b0;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_07c9af48:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = *unaff_x19;
    if (lVar2 == 0) goto LAB_07c9af48;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_07c9af4c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar3 = *(long *)(unaff_x20 + 0x140);
    if (lVar3 == 0) goto LAB_07c9af48;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_07c9af4c;
    lVar2 = lVar2 + uVar4 * 0x10;
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar3 = lVar3 + uVar4 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    if (lVar2 == 0) goto LAB_07c9af48;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_07c9af4c;
    lVar3 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(lVar2 + lVar3 + 0x20) = unaff_s8;
  } while( true );
}


