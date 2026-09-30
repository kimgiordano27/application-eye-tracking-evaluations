/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 08a8ea2c
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
               (ulong param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long *unaff_x22;
  long lVar12;
  undefined4 uVar13;
  
  bVar2 = (param_1 & 1) == 0;
  lVar1 = unaff_x20;
  lVar7 = unaff_x19;
  if (bVar2) {
    lVar7 = 0;
    lVar1 = 0;
  }
  lVar8 = 3;
  if (bVar2) {
    lVar8 = 0;
  }
  lVar6 = unaff_x19;
  lVar12 = 3;
  if ((param_1 & 1) != 0) {
    plVar11 = *(long **)(unaff_x19 + 0x10);
    if (plVar11 == (long *)0x0) goto LAB_08a8ec44;
    lVar6 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_08a8eaa4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(0xbf800000,plVar11,*unaff_x22,3);
LAB_08a8eaa4:
    (*(code *)*puVar3)(plVar11,puVar3[1]);
    unaff_x20 = lVar1;
    lVar6 = lVar7;
    lVar12 = lVar8;
  }
  uVar4 = FUN_08cc67c8(0);
  if (unaff_x20 != 0) {
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)lVar12) {
LAB_08a8ec48:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    *(undefined8 *)(unaff_x20 + lVar12 * 8 + 0x20) = uVar4;
    thunk_FUN_049ee3d8();
    plVar11 = *(long **)(unaff_x19 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_08a8eb3c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar11,*unaff_x22,2);
LAB_08a8eb3c:
      uVar9 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      bVar2 = (uVar9 & 1) == 0;
      lVar1 = unaff_x20;
      lVar7 = lVar6;
      if (bVar2) {
        lVar7 = 0;
        lVar1 = 0;
      }
      uVar5 = 4;
      if (bVar2) {
        uVar5 = 0;
      }
      if ((uVar9 & 1) == 0) {
        uVar13 = 0xbf800000;
        uVar5 = 4;
      }
      else {
        plVar11 = *(long **)(unaff_x19 + 0x10);
        if (plVar11 == (long *)0x0) goto LAB_08a8ec44;
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_08a8ebc4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar11,*unaff_x22,5);
LAB_08a8ebc4:
        uVar13 = (*(code *)*puVar3)(plVar11,puVar3[1]);
        unaff_x20 = lVar1;
        lVar6 = lVar7;
      }
      uVar4 = FUN_08cc67c8(uVar13,0);
      if (unaff_x20 != 0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_08a8ec48;
        *(undefined8 *)(unaff_x20 + (ulong)uVar5 * 8 + 0x20) = uVar4;
        uVar4 = thunk_FUN_049ee3d8();
        if (((lVar6 != 0) && (lVar7 = FUN_08a8f0e4(uVar4,unaff_x20), lVar7 != 0)) &&
           (*(long *)(unaff_x19 + 0x120) != 0)) {
          FUN_09aa6978(*(long *)(unaff_x19 + 0x120),lVar7,*(undefined4 *)(lVar7 + 0x18),
                       *(undefined8 *)(unaff_x19 + 0x128),0);
          return;
        }
      }
    }
  }
LAB_08a8ec44:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


