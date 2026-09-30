/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 03155370
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdatePassthroughColorLut(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
code_r0x03155370:
  puVar2 = (undefined8 *)FUN_01ae9f78(param_1,param_2,0);
  param_1 = unaff_x23;
  do {
    uVar1 = (*(code *)*puVar2)(param_1,unaff_w21,puVar2[1]);
    if (unaff_x22 == (long *)0x0) {
LAB_03155448:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_031553f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(unaff_x22,*unaff_x25,9);
LAB_031553f0:
    uVar4 = (*(code *)*puVar2)(unaff_x22,uVar1);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03155448;
      FUN_038fcfa4(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                   *(long *)(unaff_x19 + 0x28),unaff_w21,0);
    }
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == unaff_w20) {
      return;
    }
    param_1 = *(long **)(unaff_x19 + 0x68);
    if (param_1 == (long *)0x0) goto LAB_03155448;
    lVar3 = *param_1;
    unaff_x22 = *(long **)(unaff_x19 + 0x58);
    param_2 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x23 = param_1;
    if (uVar4 == 0) goto code_r0x03155370;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x03155370;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
}


