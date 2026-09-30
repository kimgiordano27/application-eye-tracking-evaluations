/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._RequestScreenshot$$Invoke
ENTRY_POINT: 0608f928
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0608fcb4) */

void OVR_OpenVR_IVRScreenshots__RequestScreenshot__Invoke(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  long *in_stack_00000048;
  
  FUN_03642964();
  FUN_03642964(PTR_DAT_07a23010);
  FUN_03642964(PTR_DAT_079f49a8);
  FUN_03642964(PTR_DAT_07a208e0);
  FUN_03642964(PTR_DAT_07a23550);
  *(undefined1 *)(unaff_x20 + 0x83e) = 1;
  in_stack_00000048 = (long *)0x0;
  _uStack0000000000000020 = 0;
  _uStack0000000000000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  _uStack0000000000000010 = 0;
  _uStack0000000000000018 = 0;
  FUN_0608f75c();
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar6 = (long *)FUN_06080800(*(long *)(unaff_x19 + 0x20),0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar8 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07a23008) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0608f9ec;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_07a23008,0);
LAB_0608f9ec:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar5 = PTR_DAT_07a23550;
  puVar4 = PTR_DAT_07a23010;
  puVar3 = PTR_DAT_07a208e0;
  puVar2 = PTR_DAT_079f49a8;
  do {
    in_stack_00000048 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0608fa78;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar2,0);
LAB_0608fa78:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    plVar6 = in_stack_00000048;
    if ((uVar10 & 1) == 0) {
      if (in_stack_00000048 == (long *)0x0) {
        return;
      }
      lVar8 = *in_stack_00000048;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0608fc50;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *in_stack_00000048;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0608fadc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(in_stack_00000048,*(long *)puVar4,0);
LAB_0608fadc:
    lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar6 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar9 = *plVar6;
    uVar1 = *(undefined4 *)(lVar8 + 0x14);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto OVR_OpenVR_IVRScreenshots__HookScreenshot__EndInvoke;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar3,9);
OVR_OpenVR_IVRScreenshots__HookScreenshot__EndInvoke:
    uVar10 = (*(code *)*puVar7)(plVar6,uVar1,&stack0x00000020,puVar7[1]);
    plVar6 = in_stack_00000048;
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar6 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x60);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0608fbcc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)puVar5,1);
LAB_0608fbcc:
      uVar10 = (*(code *)*puVar7)(plVar6,lVar8,&stack0x00000010,puVar7[1]);
      plVar6 = in_stack_00000048;
      if ((uVar10 & 1) != 0) {
        FUN_0608fd28(uStack0000000000000020,uStack0000000000000024,uStack0000000000000028,
                     uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                     uStack000000000000001c);
        plVar6 = in_stack_00000048;
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0608fc6c;
    }
  }
LAB_0608fc50:
  puVar7 = (undefined8 *)FUN_0367cd30(in_stack_00000048,*(long *)PTR_DAT_079f4598,0);
LAB_0608fc6c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


