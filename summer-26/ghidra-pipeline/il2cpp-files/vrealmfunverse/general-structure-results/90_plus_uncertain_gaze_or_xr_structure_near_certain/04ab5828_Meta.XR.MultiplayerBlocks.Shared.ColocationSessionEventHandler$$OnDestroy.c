/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 04ab5828
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ab5b64) */

void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy
               (int *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_066c6b38 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    DAT_066c6b38 = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  iVar2 = FUN_031b0c68(param_2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
  *param_1 = iVar2;
  if (iVar2 < 2) {
    uVar6 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    uVar6 = FUN_02b3c908(lVar3,iVar2 + -1);
    *(undefined8 *)(param_1 + 4) = uVar6;
  }
  thunk_FUN_02bb0e9c(param_1 + 4,uVar6);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  lVar7 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04ab5978;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c(param_2,lVar3,0);
LAB_04ab5978:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar1 = PTR_DAT_06312f90;
  if (plVar5 != (long *)0x0) {
    iVar2 = 0;
    do {
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04ab59f0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar1,0);
LAB_04ab59f0:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 == 0) goto LAB_04ab5b14;
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04ab5afc;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar3 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04ab5a84;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar5,lVar3,0);
LAB_04ab5a84:
      uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 1) = uVar6;
      }
      else {
        lVar3 = *(long *)(param_1 + 4);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar3 + 0x18) <= iVar2 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar3 + (long)(int)(iVar2 - 1U) * 8 + 0x20) = uVar6;
      }
      iVar2 = iVar2 + 1;
    } while (plVar5 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_04ab5afc:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04ab5b30;
    }
  }
LAB_04ab5b14:
  puVar4 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06312f78,0);
LAB_04ab5b30:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


