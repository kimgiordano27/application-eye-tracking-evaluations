/*
FUNCTION_NAME: Amazon.S3.Model.GetObjectMetadataRequest$$set_ModifiedSinceDate
ENTRY_POINT: 041851b8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04185474) */

void Amazon_S3_Model_GetObjectMetadataRequest__set_ModifiedSinceDate(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_09837af6 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a5f40);
    FUN_03d2d2b0(PTR_DAT_091b1340);
    FUN_03d2d2b0(PTR_DAT_091a14e0);
    FUN_03d2d2b0(PTR_DAT_091af380);
    FUN_03d2d2b0(PTR_DAT_091af388);
    FUN_03d2d2b0(PTR_DAT_091a1508);
    FUN_03d2d2b0(PTR_DAT_091af1c8);
    FUN_03d2d2b0(PTR_DAT_091af1d0);
    DAT_09837af6 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_091af380) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto Amazon_S3_Model_GetObjectMetadataRequest__get_ModifiedSinceDateUtc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_03d8f370(param_2,*(long *)PTR_DAT_091af380,0);
Amazon_S3_Model_GetObjectMetadataRequest__get_ModifiedSinceDateUtc:
  puVar1 = PTR_DAT_091a14e0;
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  puVar5 = PTR_DAT_091b1340;
  puVar4 = PTR_DAT_091af388;
  puVar3 = PTR_DAT_091a5f40;
  puVar2 = PTR_DAT_091a1508;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04185318;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar2,0);
LAB_04185318:
    uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_04185418;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04185374;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar4,0);
LAB_04185374:
    auVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar5;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar9 = FUN_055dc1dc(**(long **)(lVar8 + 0xb8),auVar11._0_8_,*(undefined8 *)puVar3);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = FUN_079408a0(*(long *)(param_1 + 0x18),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_07950bb4(lVar8,auVar11._0_8_,auVar11._8_8_,0);
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04185434;
    }
  }
LAB_04185418:
  puVar6 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar1,0);
LAB_04185434:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


