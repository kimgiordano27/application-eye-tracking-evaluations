/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeSerialize
ENTRY_POINT: 0845ca28
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0845cb8c) */

void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeSerialize
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
code_r0x0845ca28:
  piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0845cabc;
    }
    in_x9 = in_x9 - 1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
LAB_0845ca48:
  puVar1 = (undefined8 *)FUN_03cf1348(unaff_x23,param_3,0);
LAB_0845cabc:
  (*(code *)*puVar1)(unaff_x23);
  do {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0845c99c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0845c99c:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_0845cb34;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_0845cb1c;
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0845c9f8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0845c9f8:
    lVar2 = (*(code *)*puVar1)();
    unaff_x23 = (long *)thunk_FUN_03cf5138(lVar2,*unaff_x27);
    if (unaff_x23 != (long *)0x0) break;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085dbb98(lVar2,0);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
          goto LAB_0845cae4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0845cae4:
    (*(code *)*puVar1)();
  } while( true );
  param_1 = *unaff_x23;
  param_3 = *unaff_x27;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x0845ca28;
  goto LAB_0845ca48;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_0845cb1c:
    if (*(long *)(piVar4 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0845cb50;
    }
  }
LAB_0845cb34:
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0845cb50:
  (*(code *)*puVar1)();
  return;
}


