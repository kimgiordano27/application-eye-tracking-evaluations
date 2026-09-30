/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterSerialize
ENTRY_POINT: 08400288
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0840047c) */

void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterSerialize
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_03f4b594();
      goto LAB_084002b0;
    }
    plVar5 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar5 != param_3);
                    /* try { // try from 084002ac to 085002cf has its CatchHandler @ 084005c8 */
  puVar4 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
LAB_084002b0:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_0918a188;
  puVar2 = PTR_DAT_0910d218;
  puVar1 = PTR_DAT_0910bb08;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08400334;
        }
                    /* try { // try from 0840030c to 0850031b has its CatchHandler @ 084005b8 */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 0840031c to 08500327 has its CatchHandler @ 084005b4 */
    puVar4 = (undefined8 *)FUN_03f4b594(plVar5,*(long *)puVar2,0);
LAB_08400334:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_08400430;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08400398;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594(plVar5,*(long *)puVar3,0);
LAB_08400398:
    lVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar7 = FUN_087fdf64(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      FUN_08400148(lVar6);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0910bb38) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0840044c;
    }
  }
LAB_08400430:
  puVar4 = (undefined8 *)FUN_03f4b594(plVar5,*(long *)PTR_DAT_0910bb38,0);
LAB_0840044c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


