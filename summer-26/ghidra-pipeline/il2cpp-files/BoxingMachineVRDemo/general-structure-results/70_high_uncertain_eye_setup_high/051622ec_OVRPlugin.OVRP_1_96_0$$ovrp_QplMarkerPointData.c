/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerPointData
ENTRY_POINT: 051622ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162568) */
/* WARNING: Removing unreachable block (ram,0x05162524) */

undefined4 OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerPointData(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  
  if (param_1 != 0) {
    uVar5 = FUN_0552ff1c(param_1,0);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    lVar6 = FUN_05161af4();
    if ((lVar6 != 0) && (plVar7 = (long *)FUN_05530070(lVar6,0), plVar7 != (long *)0x0)) {
      lVar6 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067824d0) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0516236c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_067824d0,0);
LAB_0516236c:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar4 = PTR_DAT_067824d8;
      puVar3 = PTR_DAT_0676bca0;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      bVar1 = false;
      do {
        lVar6 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_051623e8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_051623e8:
        uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_05162518;
          lVar6 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 == 0) goto LAB_051624f0;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_051624d8;
        }
        lVar6 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05162444;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar4,0);
LAB_05162444:
        lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar5 = thunk_FUN_04e8bd3c(*(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x18),
                                   *(undefined8 *)puVar3,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar9 = FUN_0552a95c(*(long *)(lVar6 + 0x28),0);
          uVar5 = FUN_050f0eb8(uVar9,0);
          if (((uVar5 & 1) != 0) &&
             (uVar5 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar6 + 0x30)), (uVar5 & 1) != 0)) {
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
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0516250c;
    }
  }
LAB_051624f0:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516250c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_05162518:
  if (!bVar1) {
    return 1;
  }
  return 0;
}


