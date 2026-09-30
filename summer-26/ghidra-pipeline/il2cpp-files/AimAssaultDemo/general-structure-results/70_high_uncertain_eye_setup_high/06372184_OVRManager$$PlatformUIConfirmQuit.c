/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 06372184
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06372370) */

void OVRManager__PlatformUIConfirmQuit(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
code_r0x06372184:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_06372178;
LAB_06372190:
  puVar1 = (undefined8 *)FUN_0377596c();
  do {
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined8 *)(lVar2 + 0x10) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar2 + 0x10),0);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar2 + 0x18),0);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar2 + 0x20),0);
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06372150;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_06372150:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_06372254;
      lVar2 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_0637222c;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x21;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_06372190;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06372178:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x06372184;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_06372248;
    }
  }
LAB_0637222c:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_06372248:
  (*(code *)*puVar1)();
LAB_06372254:
  lVar2 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07db3528) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_063722b0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063722b0:
  (*(code *)*puVar1)();
  if (unaff_x19[6] != 0) {
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a18);
    FUN_06ae967c(uVar3,0,0xffffffff,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] == 0) {
    return;
  }
  uVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
  FUN_06b19a20(uVar3,4,0);
                    /* WARNING: Could not recover jumptable at 0x0637234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x628))();
  return;
}


