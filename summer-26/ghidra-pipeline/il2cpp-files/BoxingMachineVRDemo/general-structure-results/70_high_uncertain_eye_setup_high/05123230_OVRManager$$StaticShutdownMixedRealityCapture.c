/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 05123230
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05123504) */
/* WARNING: Removing unreachable block (ram,0x05123558) */

void OVRManager__StaticShutdownMixedRealityCapture(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *plVar14;
  
  FUN_04894d4c(param_1,*unaff_x23);
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
    thunk_FUN_02dd37b4((undefined8 *)(unaff_x22 + 0xb8),param_1);
    puVar1 = PTR_DAT_0675f3d0;
    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0xd8) != 0)) {
      plVar6 = (long *)FUN_04387c28(*(long *)(unaff_x21 + 0xd8),*(undefined8 *)PTR_DAT_06780250);
      puVar5 = PTR_DAT_06780b68;
      puVar4 = PTR_DAT_06780258;
      puVar3 = PTR_DAT_067680d0;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_051232e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0);
LAB_051232e8:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_051234f8;
          lVar11 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_051234d0;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_051234b8;
        }
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto OVRManager__ShutdownInsightPassthrough;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar4,0);
OVRManager__ShutdownInsightPassthrough:
        lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(char *)(lVar11 + 0x80) == '\0') {
          FUN_05101ee4(lVar11,0);
          lVar8 = FUN_05122044();
          lVar9 = FUN_050f7004(lVar11,0);
          if (lVar9 != 0) {
            uVar10 = FUN_050f7004(lVar11,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_05141898(uVar10,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar8 + 0xf0) = uVar10;
            thunk_FUN_02dd37b4();
          }
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          plVar14 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xb8);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar9 = *plVar14;
          uVar10 = *(undefined8 *)(lVar11 + 0x30);
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                goto LAB_0512346c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(plVar14,*(long *)puVar5,5);
LAB_0512346c:
          (*(code *)*puVar7)(plVar14,uVar10,lVar8,puVar7[1]);
        }
      } while( true );
    }
  }
LAB_05123550:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_051234b8:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_051234ec;
    }
  }
LAB_051234d0:
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,0);
LAB_051234ec:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_051234f8:
  uVar12 = FUN_050f1f10();
  if ((uVar12 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05123550;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 0;
  }
  return;
}


