/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 051621dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162568) */
/* WARNING: Removing unreachable block (ram,0x05162524) */

undefined4 OVRPlugin_Qpl__MarkerPoint(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  FUN_02d6084c(PTR_DAT_067824d8);
  FUN_02d6084c(PTR_DAT_0675f3d8);
  FUN_02d6084c(PTR_DAT_067823f0);
  FUN_02d6084c(PTR_DAT_0676bca0);
  *(undefined1 *)(unaff_x21 + 0xe62) = 1;
  uVar5 = FUN_050f0eb8();
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  plVar6 = (long *)(**(code **)(*unaff_x19 + 600))();
  if (plVar6 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    lVar9 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_051622ac;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_067823f0,8);
LAB_051622ac:
    uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  uVar5 = FUN_04e8c024(unaff_x20,uVar8,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar8 = FUN_0516264c();
  uVar5 = FUN_050f0eb8(uVar8,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  lVar9 = FUN_05161af4();
  if (lVar9 != 0) {
    uVar5 = FUN_0552ff1c(lVar9,0);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    lVar9 = FUN_05161af4();
    if ((lVar9 != 0) && (plVar6 = (long *)FUN_05530070(lVar9,0), plVar6 != (long *)0x0)) {
      lVar9 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067824d0) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0516236c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_067824d0,0);
LAB_0516236c:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar4 = PTR_DAT_067824d8;
      puVar3 = PTR_DAT_0676bca0;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      bVar1 = false;
      do {
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_051623e8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0);
LAB_051623e8:
        uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_05162518;
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 == 0) goto LAB_051624f0;
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_051624d8;
        }
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05162444;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar4,0);
LAB_05162444:
        lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar5 = thunk_FUN_04e8bd3c(*(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x18),
                                   *(undefined8 *)puVar3,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar8 = FUN_0552a95c(*(long *)(lVar9 + 0x28),0);
          uVar5 = FUN_050f0eb8(uVar8,0);
          if (((uVar5 & 1) != 0) &&
             (uVar5 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar9 + 0x30)), (uVar5 & 1) != 0)) {
            bVar1 = true;
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_051624d8:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0516250c;
    }
  }
LAB_051624f0:
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516250c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_05162518:
  if (bVar1) {
    return 0;
  }
  return 1;
}


