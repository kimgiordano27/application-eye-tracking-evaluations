/*
FUNCTION_NAME: OVA.WisteriaX.Server.Application.Servers.ServerCore$$CloseCreateSession
ENTRY_POINT: 08c2c884
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08c2ca70) */

void OVA_WisteriaX_Server_Application_Servers_ServerCore__CloseCreateSession(code *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  plVar5 = (long *)(*param_1)();
  puVar4 = PTR_DAT_09346e60;
  puVar3 = PTR_DAT_092bc438;
  puVar2 = PTR_DAT_092860c8;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08c2c904;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar2,0);
LAB_08c2c904:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_08c2ca20;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08c2c968;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)puVar3,0);
LAB_08c2c968:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
        lVar8 = FUN_08c2c6a4();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar8 + 0x560) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_08af6f04(plVar7,*(undefined1 *)(*(long *)(lVar8 + 0x560) + 0x70),0);
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_08c2ca3c;
    }
  }
LAB_08c2ca20:
  puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092860c0,0);
LAB_08c2ca3c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


