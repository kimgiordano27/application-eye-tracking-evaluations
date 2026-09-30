/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpaceSharing>d__16$$MoveNext
ENTRY_POINT: 04ab6edc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04ab7208) */

void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpaceSharing>d__16__MoveNext
               (ulong param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    *(undefined1 *)(unaff_x22 + 0xb3a) = 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  iVar2 = FUN_031b1000();
  *param_2 = iVar2;
  if (iVar2 < 2) {
    uVar6 = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    uVar6 = FUN_02b3c908(lVar3,iVar2 + -1);
    *(undefined8 *)(param_2 + 4) = uVar6;
  }
  thunk_FUN_02bb0e9c(param_2 + 4,uVar6);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  lVar7 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04ab7014;
      }
      uVar9 = uVar9 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c();
LAB_04ab7014:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar1 = PTR_DAT_06312f90;
  if (plVar5 != (long *)0x0) {
    iVar2 = 0;
    do {
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04ab7090;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar1,0);
LAB_04ab7090:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 == 0) goto LAB_04ab71b4;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04ab719c;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04ab7124;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,lVar3,0);
LAB_04ab7124:
      uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      piVar8 = param_2 + 2;
      if (iVar2 != 0) {
        lVar3 = *(long *)(param_2 + 4);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar3 + 0x18) <= iVar2 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        piVar8 = (int *)(lVar3 + (long)(int)(iVar2 - 1U) * 8 + 0x20);
      }
      *(undefined8 *)piVar8 = uVar6;
      iVar2 = iVar2 + 1;
    } while (plVar5 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar8 = piVar8 + 4;
    if (uVar9 == 0) break;
LAB_04ab719c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04ab71d0;
    }
  }
LAB_04ab71b4:
  puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06312f78,0);
LAB_04ab71d0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


