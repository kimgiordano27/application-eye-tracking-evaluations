/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 03684a34
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


void OVRPlugin__InitializeInsightPassthrough(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  do {
    plVar6 = *(long **)(unaff_x19 + 0x58);
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03684a80;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x24,0);
LAB_03684a80:
    uVar1 = (*(code *)*puVar2)(unaff_x23,unaff_w21,puVar2[1]);
    if (plVar6 == (long *)0x0) {
LAB_03684b40:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_03684ae8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x25,9);
LAB_03684ae8:
    uVar4 = (*(code *)*puVar2)(plVar6,uVar1);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03684b40;
      FUN_0404ad8c(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                   *(long *)(unaff_x19 + 0x28),unaff_w21,0);
    }
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == unaff_w20) {
      return;
    }
    unaff_x23 = *(long **)(unaff_x19 + 0x68);
    if (unaff_x23 == (long *)0x0) goto LAB_03684b40;
    param_1 = *unaff_x23;
  } while( true );
}


