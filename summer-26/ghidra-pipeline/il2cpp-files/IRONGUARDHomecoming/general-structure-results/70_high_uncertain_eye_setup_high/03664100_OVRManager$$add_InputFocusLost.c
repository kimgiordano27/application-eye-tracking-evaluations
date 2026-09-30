/*
FUNCTION_NAME: OVRManager$$add_InputFocusLost
ENTRY_POINT: 03664100
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusLost(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  
  lVar2 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_03664150;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03664150:
  (*(code *)*puVar1)();
  if ((unaff_x19 & 1) != 0) {
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_036641b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_036641b8:
    (*(code *)*puVar1)();
  }
  lVar2 = *unaff_x22;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar4 = 0;
    uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_03664228();
      uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  return;
}


