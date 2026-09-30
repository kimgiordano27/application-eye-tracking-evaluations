/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 063640a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0636447c) */

void OVRManager__set_instance(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long *plVar12;
  long unaff_x21;
  long *plVar13;
  undefined4 uStack000000000000000c;
  
  iVar4 = (**(code **)(*unaff_x19 + 0x228))();
  if (iVar4 == 2) {
    if (*(long *)(unaff_x21 + 0x28) != 0) {
      *(undefined1 *)(*(long *)(unaff_x21 + 0x28) + 0xa0) = 1;
      lVar9 = *unaff_x19;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db52e8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06364194;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c();
LAB_06364194:
      plVar12 = (long *)(*(code *)*puVar6)();
      puVar3 = PTR_DAT_07db52e0;
      puVar2 = PTR_DAT_07d9b068;
      puVar1 = PTR_DAT_07d89700;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0636420c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar1,0);
LAB_0636420c:
        uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar12 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_0636433c;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_06364324;
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06364268;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar2,0);
LAB_06364268:
        uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if (*(long *)(unaff_x21 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4(uVar5,uVar5);
        }
        plVar13 = *(long **)(*(long *)(unaff_x21 + 0x28) + 0x98);
        uVar5 = FUN_0636137c();
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_063642e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar3,2);
LAB_063642e4:
        (*(code *)*puVar6)(plVar13,uVar5,puVar6[1]);
      } while( true );
    }
  }
  else {
    if (iVar4 != 1) {
      FUN_031a5e18();
      FUN_0637e1e4();
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar5 = FUN_061d52c8(0);
      FUN_031a5e18();
      uStack000000000000000c = (**(code **)(*unaff_x19 + 0x228))();
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db33b8);
      uVar7 = thunk_FUN_037784fc(uVar7,&stack0x0000000c);
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db5488);
      FUN_063349e4(uVar8,uVar5,uVar7,0);
      uVar5 = FUN_062d6e78();
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db5490);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar7);
    }
    if (*(long *)(unaff_x21 + 0x28) != 0) {
      plVar12 = *(long **)(*(long *)(unaff_x21 + 0x28) + 0x98);
      uVar5 = FUN_0636137c();
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db52e0) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_0636435c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07db52e0,2);
LAB_0636435c:
        (*(code *)*puVar6)(plVar12,uVar5,puVar6[1]);
        if (*(long *)(unaff_x21 + 0x28) != 0) {
          *(undefined1 *)(*(long *)(unaff_x21 + 0x28) + 0xa0) = 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_06364324:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06364388;
    }
  }
LAB_0636433c:
  puVar6 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07d896f8,0);
LAB_06364388:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
  return;
}


