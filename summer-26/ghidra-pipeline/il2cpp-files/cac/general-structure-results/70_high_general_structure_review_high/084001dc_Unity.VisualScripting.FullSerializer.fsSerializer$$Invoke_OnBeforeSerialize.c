/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeSerialize
ENTRY_POINT: 084001dc
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0840047c) */

void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeSerialize(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  
  if ((param_1 & 1) != 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_08400478;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 08400204 to 08500227 has its CatchHandler @ 084005d8 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0918a5e0) {
                    /* try { // try from 08400234 to 08500257 has its CatchHandler @ 084005d4 */
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0840023c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594();
LAB_0840023c:
    (*(code *)*puVar4)();
  }
  FUN_083fcc8c();
  plVar8 = *(long **)(unaff_x20 + 0x78);
  if (plVar8 != (long *)0x0) {
                    /* try { // try from 0840025c to 0850027f has its CatchHandler @ 084005d0 */
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 08400284 to 085002a7 has its CatchHandler @ 084005cc */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0918a180) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_084002b0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)PTR_DAT_0918a180,0);
LAB_084002b0:
    plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
    puVar3 = PTR_DAT_0918a188;
    puVar2 = PTR_DAT_0910d218;
    puVar1 = PTR_DAT_0910bb08;
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_08400334;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)puVar2,0);
LAB_08400334:
      uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_08400430;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_08400418;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_08400398;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)puVar3,0);
LAB_08400398:
      lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar6 = FUN_087fdf64(lVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        FUN_08400148(lVar5);
      }
    } while( true );
  }
LAB_08400478:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_08400418:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0910bb38) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0840044c;
    }
  }
LAB_08400430:
  puVar4 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)PTR_DAT_0910bb38,0);
LAB_0840044c:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
  return;
}


