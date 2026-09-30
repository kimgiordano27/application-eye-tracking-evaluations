/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._RequestScreenshot$$EndInvoke
ENTRY_POINT: 0608fa04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0608fcb4) */

void OVR_OpenVR_IVRScreenshots__RequestScreenshot__EndInvoke(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  long *in_stack_00000048;
  
  puVar5 = PTR_DAT_07a23550;
  puVar4 = PTR_DAT_07a23010;
  puVar3 = PTR_DAT_07a208e0;
  puVar2 = PTR_DAT_079f49a8;
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0608fa78;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(param_1,*(long *)puVar2,0);
LAB_0608fa78:
    uVar9 = (*(code *)*puVar6)(param_1,puVar6[1]);
    plVar11 = in_stack_00000048;
    if ((uVar9 & 1) == 0) {
      if (in_stack_00000048 == (long *)0x0) {
        return;
      }
      lVar7 = *in_stack_00000048;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_0608fc50;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = *in_stack_00000048;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0608fadc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(in_stack_00000048,*(long *)puVar4,0);
LAB_0608fadc:
    lVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar11 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x28);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *plVar11;
    uVar1 = *(undefined4 *)(lVar7 + 0x14);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto OVR_OpenVR_IVRScreenshots__HookScreenshot__EndInvoke;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)puVar3,9);
OVR_OpenVR_IVRScreenshots__HookScreenshot__EndInvoke:
    uVar9 = (*(code *)*puVar6)(plVar11,uVar1,&stack0x00000020,puVar6[1]);
    param_1 = in_stack_00000048;
    if ((uVar9 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar11 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x60);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0608fbcc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)puVar5,1);
LAB_0608fbcc:
      uVar9 = (*(code *)*puVar6)(plVar11,lVar7,&stack0x00000010,puVar6[1]);
      param_1 = in_stack_00000048;
      if ((uVar9 & 1) != 0) {
        FUN_0608fd28(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,
                     uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                     uStack000000000000001c);
        param_1 = in_stack_00000048;
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0608fc6c;
    }
  }
LAB_0608fc50:
  puVar6 = (undefined8 *)FUN_0367cd30(in_stack_00000048,*(long *)PTR_DAT_079f4598,0);
LAB_0608fc6c:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
  return;
}


