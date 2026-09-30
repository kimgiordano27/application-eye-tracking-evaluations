/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$MoveNext
ENTRY_POINT: 0530428c
PROGRAM: Untangled-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053045e0) */
/* WARNING: Removing unreachable block (ram,0x05304550) */
/* WARNING: Removing unreachable block (ram,0x053045ec) */
/* WARNING: Removing unreachable block (ram,0x053047f0) */

long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__MoveNext
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  
  puVar1 = PTR_DAT_06d09d88;
  if ((bRam00000000071c12b9 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d09d88);
    FUN_02f07e70(PTR_DAT_06d3e5a0);
    FUN_02f07e70(PTR_DAT_06d37520);
    FUN_02f07e70(PTR_DAT_06d01f48);
    FUN_02f07e70(PTR_DAT_06d05520);
    FUN_02f07e70(PTR_DAT_06d01f60);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d3e5a8);
    FUN_02f07e70(PTR_DAT_06d3e5b0);
    FUN_02f07e70(PTR_DAT_06d3e5b8);
    bRam00000000071c12b9 = 1;
  }
  plVar4 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_06d3e5a8;
  FUN_066774c8(plVar4,*(undefined8 *)PTR_DAT_06d3e5a8,0);
  puVar1 = PTR_DAT_06d01f60;
  plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,1);
  if (*(int *)(*(long *)PTR_DAT_06d01f48 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = FUN_0668d9b4(0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
    uVar10 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar10,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  plVar5[4] = lVar6;
  thunk_FUN_02f411dc(plVar5 + 4,lVar6);
  plVar8 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37520);
  FUN_0667a2c8(plVar8,*(undefined8 *)puVar2,plVar5,0);
  puVar2 = PTR_DAT_06d05520;
  lVar7 = *(long *)PTR_DAT_06d05520;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_02eea7c4(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02eea768();
  }
  puVar3 = PTR_DAT_06d3e5a0;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar6 = FUN_037ae860(plVar8,*(undefined8 *)PTR_DAT_06d3e5b0,**(undefined8 **)(lVar6 + 0xb8),
                       *(undefined8 *)PTR_DAT_06d3e5a0);
  lVar14 = *(long *)puVar2;
  lVar7 = *(long *)(lVar14 + 0x38);
  if (lVar7 == 0) {
    FUN_02eea7c4(lVar14);
    lVar7 = *(long *)(lVar14 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02eea768();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar7 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02eea768();
  }
  lVar7 = FUN_037ae860(plVar8,*(undefined8 *)PTR_DAT_06d3e5b8,**(undefined8 **)(lVar7 + 0xb8),
                       *(undefined8 *)puVar3);
  lVar11 = *plVar8;
  lVar14 = *(long *)puVar1;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar14) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05304538;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_02eea86c(plVar8,lVar14,0);
LAB_05304538:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  if (plVar4 != (long *)0x0) {
    lVar11 = *plVar4;
    lVar14 = *(long *)puVar1;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_053045a8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02eea86c(plVar4,lVar14,0);
LAB_053045a8:
    (*(code *)*puVar9)(plVar4,puVar9[1]);
  }
  return lVar7 * lVar6;
}


