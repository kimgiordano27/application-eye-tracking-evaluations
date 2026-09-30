/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcInputVideoBufferType
ENTRY_POINT: 02c454c8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4562c) */
/* WARNING: Removing unreachable block (ram,0x02c455c8) */
/* WARNING: Removing unreachable block (ram,0x02c45638) */
/* WARNING: Removing unreachable block (ram,0x02c455f0) */

void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcInputVideoBufferType(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
code_r0x02c454c8:
  puVar2 = (undefined8 *)FUN_0185dba8();
  do {
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar3 + 0x38);
    thunk_FUN_0181f594();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar3 + 0x38), thunk_FUN_0181f594(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar3 = *(long *)(lVar3 + 0x48);
      thunk_FUN_0181f594();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      thunk_FUN_0181f594();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c44bc4(lVar3,0,0);
      FUN_02c449e8();
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02c45484;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c45484:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_02c455b8;
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_02c45590;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) goto code_r0x02c454c8;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != *unaff_x25) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x02c454c8;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02c455ac;
    }
  }
LAB_02c45590:
  puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02c455ac:
  (*(code *)*puVar2)();
LAB_02c455b8:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_0184c01c();
  }
  thunk_FUN_0181f594();
  *unaff_x19 = 0;
  thunk_FUN_0188fd20();
  return;
}


