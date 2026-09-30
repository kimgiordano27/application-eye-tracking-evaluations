/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 033841b4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActiveController(void)

{
  undefined1 in_CY;
  undefined2 uVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x21;
  undefined2 *unaff_x22;
  undefined2 *puVar3;
  uint uVar4;
  ulong unaff_x23;
  ulong uVar5;
  
  do {
    if ((bool)in_CY) {
LAB_03384298:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar1 = unaff_x22[1];
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar2 = FUN_0324ca78(uVar1,0);
    if ((uVar2 & 1) == 0) {
      uVar4 = (uint)unaff_x23;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar4 + 1) goto LAB_03384298;
      uVar1 = unaff_x22[1];
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar2 = FUN_0324dc50(uVar1,0);
      if ((uVar2 & 1) != 0) {
        if ((*(uint *)(unaff_x19 + 0x18) <= uVar4) ||
           (uVar1 = FUN_033842a0(*unaff_x22), *(uint *)(unaff_x19 + 0x18) <= uVar4))
        goto LAB_03384298;
        *unaff_x22 = uVar1;
      }
LAB_0338427c:
      FUN_03151314(0);
      return;
    }
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
    puVar3 = unaff_x22;
    do {
      uVar5 = unaff_x23;
      if (uVar2 <= uVar5) goto LAB_03384298;
      uVar1 = FUN_033842a0(*puVar3);
      uVar4 = *(uint *)(unaff_x19 + 0x18);
      uVar2 = (ulong)uVar4;
      if (uVar2 <= uVar5) goto LAB_03384298;
      unaff_x23 = uVar5 + 1;
      unaff_x22 = puVar3 + 1;
      *puVar3 = uVar1;
      if ((long)(int)uVar4 <= (long)unaff_x23) goto LAB_0338427c;
      if (unaff_x23 == 1) {
        if ((uVar4 & 0xfffffffe) == 0) goto LAB_03384298;
        uVar1 = *(undefined2 *)(unaff_x19 + 0x22);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar2 = FUN_0324ca78(uVar1,0);
        if ((uVar2 & 1) == 0) goto LAB_0338427c;
        uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
      }
      puVar3 = unaff_x22;
    } while ((unaff_x23 == 0) || ((int)uVar2 <= (int)(uVar5 + 2)));
    in_CY = uVar2 <= uVar5 + 2;
  } while( true );
}


