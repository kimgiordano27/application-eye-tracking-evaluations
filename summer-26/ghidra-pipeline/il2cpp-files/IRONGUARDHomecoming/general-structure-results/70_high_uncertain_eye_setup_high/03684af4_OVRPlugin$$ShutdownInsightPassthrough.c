/*
FUNCTION_NAME: OVRPlugin$$ShutdownInsightPassthrough
ENTRY_POINT: 03684af4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShutdownInsightPassthrough(code *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined4 unaff_w23;
  long *plVar5;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  do {
    uVar2 = (*param_1)(param_2,unaff_w23);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_03684b40:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0404ad8c(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                   *(long *)(unaff_x19 + 0x28),unaff_w21,0);
    }
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == unaff_w20) {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x68);
    if (plVar5 == (long *)0x0) goto LAB_03684b40;
    lVar3 = *plVar5;
    param_2 = *(long **)(unaff_x19 + 0x58);
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03684a80;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x24,0);
LAB_03684a80:
    unaff_w23 = (*(code *)*puVar1)(plVar5,unaff_w21,puVar1[1]);
    if (param_2 == (long *)0x0) goto LAB_03684b40;
    lVar3 = *param_2;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_03684ae8;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(param_2,*unaff_x25,9);
LAB_03684ae8:
    param_1 = (code *)*puVar1;
  } while( true );
}


