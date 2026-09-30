/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 029012fc
PROGRAM: vrfs-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  ushort *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  uint uVar17;
  long unaff_x25;
  ulong uVar18;
  uint uVar19;
  uint *unaff_x27;
  long lVar20;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06e15a20);
  thunk_FUN_0159f088(PTR_DAT_06dccd20);
  thunk_FUN_0159f088(PTR_DAT_06d9bc98);
  thunk_FUN_0159f088(PTR_DAT_06e25a88);
  *(undefined1 *)(unaff_x25 + 0xc35) = 1;
                    /* try { // try from 02901340 to 02a01347 has its CatchHandler @ 0290145c */
  lVar9 = FUN_018cc790();
                    /* try { // try from 02901348 to 02a01433 has its CatchHandler @ 0290112c */
  lVar10 = FUN_018cc78c();
  puVar8 = PTR_DAT_06ddaad8;
  if (unaff_w21 == 0) {
    uVar19 = 0;
    uVar17 = 0;
LAB_029013d8:
    uVar12 = 1;
  }
  else {
    lVar11 = *(long *)PTR_DAT_06ddaad8;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *(long *)puVar8;
    }
    lVar20 = **(long **)(lVar11 + 0xb8);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar3 = unaff_w21 & 0xfffffffc;
    if (unaff_w22 < ((int)unaff_w21 >> 2) * 3) {
      iVar15 = (unaff_w22 / 3) * 4;
    }
    else {
      iVar15 = uVar3 - 4;
    }
    if (iVar15 < 1) {
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      uVar18 = 0;
      uVar19 = 0;
      while( true ) {
        puVar1 = (ushort *)(lVar9 + (long)(int)uVar19 * 2);
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (0xff < (ushort)(puVar1[1] | *puVar1 | puVar1[2] | puVar1[3])) goto LAB_029014f4;
        lVar11 = lVar20 + 0x20;
        uVar16 = (int)*(char *)(lVar11 + (ulong)puVar1[1]) << 0xc |
                 (int)*(char *)(lVar11 + (ulong)*puVar1) << 0x12 |
                 (int)*(char *)(lVar11 + (ulong)puVar1[3]) |
                 (int)*(char *)(lVar11 + (ulong)puVar1[2]) << 6;
        if ((int)uVar16 < 0) goto LAB_029014f4;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar19 = uVar19 + 4;
        puVar2 = (undefined1 *)(lVar10 + uVar18);
        *puVar2 = (char)(uVar16 >> 0x10);
        puVar2[1] = (char)(uVar16 >> 8);
        puVar2[2] = (char)uVar16;
        if (iVar15 <= (int)uVar19) break;
        lVar11 = *(long *)puVar8;
        uVar18 = uVar18 + 3;
      }
      uVar18 = (ulong)((int)uVar18 + 3);
    }
    if ((iVar15 == uVar3 - 4) && (uVar19 != uVar3)) {
      uVar4 = *(ushort *)(lVar9 + (long)(int)(uVar3 - 4) * 2);
      uVar5 = *(ushort *)(lVar9 + (long)(int)(uVar3 - 3) * 2);
      uVar6 = *(ushort *)(lVar9 + (long)(int)(uVar3 - 2) * 2);
      uVar7 = *(ushort *)(lVar9 + (long)(int)(uVar3 - 1) * 2);
      if ((ushort)(uVar5 | uVar4 | uVar6 | uVar7) < 0x100) {
        lVar9 = lVar20 + 0x20;
        uVar16 = (int)*(char *)(lVar9 + (ulong)uVar5) << 0xc |
                 (int)*(char *)(lVar9 + (ulong)uVar4) << 0x12;
        iVar15 = (int)uVar18;
        if (uVar7 == 0x3d) {
          if (uVar6 == 0x3d) {
            if ((iVar15 <= unaff_w22 + -1) && (-1 < (int)uVar16)) {
              puVar13 = (undefined1 *)(lVar10 + iVar15);
              uVar16 = uVar16 >> 0x10;
              iVar14 = 1;
LAB_029015f4:
              uVar17 = iVar15 + iVar14;
              uVar18 = (ulong)uVar17;
              uVar19 = uVar19 + 4;
              *puVar13 = (char)uVar16;
              if (uVar3 == unaff_w21) goto LAB_029013d8;
            }
          }
          else if ((iVar15 <= unaff_w22 + -2) &&
                  (uVar17 = uVar16 | (int)*(char *)(lVar20 + (ulong)uVar6 + 0x20) << 6,
                  -1 < (int)uVar17)) {
            uVar16 = uVar17 >> 8;
            *(char *)(lVar10 + iVar15) = (char)(uVar17 >> 0x10);
            puVar13 = (undefined1 *)(lVar10 + (iVar15 + 1));
            iVar14 = 2;
            goto LAB_029015f4;
          }
        }
        else if ((iVar15 <= unaff_w22 + -3) &&
                (uVar16 = uVar16 | (int)*(char *)(lVar9 + (ulong)uVar7) |
                          (int)*(char *)(lVar9 + (ulong)uVar6) << 6, -1 < (int)uVar16)) {
          puVar2 = (undefined1 *)(lVar10 + iVar15);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          puVar13 = puVar2 + 2;
          *puVar2 = (char)(uVar16 >> 0x10);
          puVar2[1] = (char)(uVar16 >> 8);
          iVar14 = 3;
          goto LAB_029015f4;
        }
      }
    }
LAB_029014f4:
    uVar17 = (uint)uVar18;
    uVar12 = 0;
  }
  *unaff_x27 = uVar19;
  *unaff_x20 = uVar17;
  return uVar12;
}


