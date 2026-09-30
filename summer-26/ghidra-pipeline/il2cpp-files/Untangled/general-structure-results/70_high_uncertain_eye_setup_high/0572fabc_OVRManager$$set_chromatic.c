/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 0572fabc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0572fc80) */

void OVRManager__set_chromatic(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  long in_x10;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0572faf4;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572faf4:
      (*(code *)*puVar1)();
      FUN_05624b0c();
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0572fa98;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572fa98:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_0572fb54;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0572fb3c;
      }
      param_1 = *unaff_x19;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_0572fb3c:
    if (*(long *)(piVar4 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0572fb70;
    }
  }
LAB_0572fb54:
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572fb70:
  (*(code *)*puVar1)();
  return;
}


