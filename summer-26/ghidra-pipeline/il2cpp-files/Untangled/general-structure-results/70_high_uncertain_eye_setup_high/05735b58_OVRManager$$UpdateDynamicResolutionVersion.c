/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 05735b58
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05735d34) */

void OVRManager__UpdateDynamicResolutionVersion(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *piVar4;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  while (*(long *)(param_1 + in_x9 * 8 + -8) == param_3) {
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03e589f0();
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)(unaff_w23 + unaff_w20)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar2 = unaff_x21 + (long)(unaff_w23 + unaff_w20) * 0x10;
    puVar1 = (undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *puVar1 = 0;
    thunk_FUN_02f411dc(puVar1,0);
    unaff_w23 = unaff_w23 + 1;
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05735ad0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_05735ad0:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_05735bf0;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_05735bd8;
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05735b2c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_05735b2c:
    param_2 = (long *)(*(code *)*puVar1)();
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(byte *)(param_3 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < *(byte *)(param_3 + 0x130)) break;
    param_1 = *(long *)(*param_2 + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_05735bd8:
    if (*(long *)(piVar4 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_05735c0c;
    }
  }
LAB_05735bf0:
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_05735c0c:
  (*(code *)*puVar1)();
  return;
}


