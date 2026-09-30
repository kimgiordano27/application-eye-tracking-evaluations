/*
FUNCTION_NAME: OVRManager$$get_instance
ENTRY_POINT: 0636404c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0636447c) */

void OVRManager__get_instance(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined4 uStack000000000000000c;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x700));
  FUN_0373b518(PTR_DAT_07db52a8);
  FUN_0373b518(PTR_DAT_07db52a0);
  *(undefined1 *)(unaff_x20 + 0x41e) = 1;
  lVar10 = *(long *)(unaff_x21 + 0x28);
  uVar5 = thunk_FUN_037788cc(*unaff_x23);
  FUN_049ce6c0(uVar5,*unaff_x22);
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)(lVar10 + 0x98);
    *puVar11 = uVar5;
    thunk_FUN_037aeb94(puVar11,uVar5);
    if (unaff_x19 != (long *)0x0) {
      iVar4 = (**(code **)(*unaff_x19 + 0x228))();
      if (iVar4 == 2) {
        if (*(long *)(unaff_x21 + 0x28) != 0) {
          *(undefined1 *)(*(long *)(unaff_x21 + 0x28) + 0xa0) = 1;
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52e8) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06364194;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_0377596c();
LAB_06364194:
          plVar12 = (long *)(*(code *)*puVar11)();
          puVar3 = PTR_DAT_07db52e0;
          puVar2 = PTR_DAT_07d9b068;
          puVar1 = PTR_DAT_07d89700;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          do {
            lVar10 = *plVar12;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0636420c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar1,0);
LAB_0636420c:
            uVar8 = (*(code *)*puVar11)(plVar12,puVar11[1]);
            if ((uVar8 & 1) == 0) {
              if (plVar12 == (long *)0x0) {
                return;
              }
              lVar10 = *plVar12;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 == 0) goto LAB_0636433c;
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_06364324;
            }
            lVar10 = *plVar12;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06364268;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar2,0);
LAB_06364268:
            uVar5 = (*(code *)*puVar11)(plVar12,puVar11[1]);
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
            lVar10 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                  puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_063642e4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar3,2);
LAB_063642e4:
            (*(code *)*puVar11)(plVar13,uVar5,puVar11[1]);
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
          uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db33b8);
          uVar6 = thunk_FUN_037784fc(uVar6,&stack0x0000000c);
          uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db5488);
          FUN_063349e4(uVar7,uVar5,uVar6,0);
          uVar5 = FUN_062d6e78();
          uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db5490);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar5,uVar6);
        }
        if (*(long *)(unaff_x21 + 0x28) != 0) {
          plVar12 = *(long **)(*(long *)(unaff_x21 + 0x28) + 0x98);
          uVar5 = FUN_0636137c();
          if (plVar12 != (long *)0x0) {
            lVar10 = *plVar12;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52e0) {
                  puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_0636435c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07db52e0,2);
LAB_0636435c:
            (*(code *)*puVar11)(plVar12,uVar5,puVar11[1]);
            if (*(long *)(unaff_x21 + 0x28) != 0) {
              *(undefined1 *)(*(long *)(unaff_x21 + 0x28) + 0xa0) = 0;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_06364324:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06364388;
    }
  }
LAB_0636433c:
  puVar11 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07d896f8,0);
LAB_06364388:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
  return;
}


