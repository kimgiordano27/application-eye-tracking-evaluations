/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_GetDesiredEyeTextureFormat
ENTRY_POINT: 0316d44c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_11_0__ovrp_GetDesiredEyeTextureFormat
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_0316d494;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_0316d494:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 != 2) {
    return;
  }
  if (*(int *)(unaff_x19 + 0x40) == 0) {
    if (*(char *)(unaff_x19 + 0x50) != '\0') {
      return;
    }
    if (*(char *)(unaff_x19 + 0x60) != '\0') {
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0x38);
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13348) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto FUN_0316d5b0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)StringLiteral_13348,0);
FUN_0316d5b0:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      FUN_0316d5d0();
      return;
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x40) != 1) {
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0x38);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13348) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0316d530;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)StringLiteral_13348,0);
LAB_0316d530:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      FUN_0316d67c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


