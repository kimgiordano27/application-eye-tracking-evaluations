/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterSerialize
ENTRY_POINT: 0845cad4
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

void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterSerialize(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
code_r0x0845cad4:
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xb) * 0x10 + 0x138);
LAB_0845cae4:
  (*(code *)*puVar1)();
  do {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0845c99c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0845c99c:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_0845cb34;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_0845cb1c;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0845c9f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0845c9f8:
    lVar3 = (*(code *)*puVar1)();
    plVar2 = (long *)thunk_FUN_03cf5138(lVar3,*unaff_x27);
    if (plVar2 == (long *)0x0) break;
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0845cabc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(plVar2,*unaff_x27,0);
LAB_0845cabc:
    (*(code *)*puVar1)(plVar2);
  } while( true );
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_085dbb98(lVar3,0);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  param_1 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(in_x10 + -2) == *unaff_x28) goto code_r0x0845cad4;
      uVar4 = uVar4 - 1;
      in_x10 = in_x10 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03cf1348();
  goto LAB_0845cae4;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_0845cb1c:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0845cb50;
    }
  }
LAB_0845cb34:
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0845cb50:
  (*(code *)*puVar1)();
  return;
}


