/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 029013bc
PROGRAM: vrfs-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(undefined8 param_1,long param_2)

{
  ushort *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  int *in_stack_00000008;
  
  iVar13 = (int)((ulong)param_1 >> 0x20);
  iVar13 = (iVar13 - (iVar13 >> 0x1f)) * 4;
  if (iVar13 < 1) {
    uVar14 = 0;
    iVar15 = 0;
  }
  else {
    uVar14 = 0;
    iVar15 = 0;
    while( true ) {
      puVar1 = (ushort *)(unaff_x24 + (long)iVar15 * 2);
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if (0xff < (ushort)(puVar1[1] | *puVar1 | puVar1[2] | puVar1[3])) goto LAB_029014f4;
      lVar2 = unaff_x29 + 0x20;
                    /* try { // try from 02901434 to 02a01437 has its CatchHandler @ 02901454 */
      uVar11 = (int)*(char *)(lVar2 + (ulong)puVar1[1]) << 0xc |
               (int)*(char *)(lVar2 + (ulong)*puVar1) << 0x12 |
               (int)*(char *)(lVar2 + (ulong)puVar1[3]) |
               (int)*(char *)(lVar2 + (ulong)puVar1[2]) << 6;
      if ((int)uVar11 < 0) goto LAB_029014f4;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar15 = iVar15 + 4;
      puVar3 = (undefined1 *)(unaff_x23 + uVar14);
      *puVar3 = (char)(uVar11 >> 0x10);
      puVar3[1] = (char)(uVar11 >> 8);
      puVar3[2] = (char)uVar11;
      if (iVar13 <= iVar15) break;
      param_2 = *unaff_x28;
      uVar14 = uVar14 + 3;
    }
    uVar14 = (ulong)((int)uVar14 + 3);
  }
  if ((iVar13 == unaff_w27 + -4) && (iVar15 != unaff_w27)) {
    uVar4 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -4) * 2);
    uVar5 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -3) * 2);
    uVar6 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -2) * 2);
    uVar7 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -1) * 2);
    if ((ushort)(uVar5 | uVar4 | uVar6 | uVar7) < 0x100) {
      lVar2 = unaff_x29 + 0x20;
      uVar11 = (int)*(char *)(lVar2 + (ulong)uVar5) << 0xc |
               (int)*(char *)(lVar2 + (ulong)uVar4) << 0x12;
      iVar13 = (int)uVar14;
      if (uVar7 == 0x3d) {
        if (uVar6 == 0x3d) {
          if ((iVar13 <= unaff_w22 + -1) && (-1 < (int)uVar11)) {
            puVar9 = (undefined1 *)(unaff_x23 + iVar13);
            uVar11 = uVar11 >> 0x10;
            iVar10 = 1;
LAB_029015f4:
            uVar12 = iVar13 + iVar10;
            uVar14 = (ulong)uVar12;
            iVar15 = iVar15 + 4;
            *puVar9 = (char)uVar11;
            if (unaff_w27 == unaff_w21) {
              uVar8 = 1;
              goto LAB_029014fc;
            }
          }
        }
        else if ((iVar13 <= unaff_w22 + -2) &&
                (uVar12 = uVar11 | (int)*(char *)(unaff_x29 + (ulong)uVar6 + 0x20) << 6,
                -1 < (int)uVar12)) {
          uVar11 = uVar12 >> 8;
          *(char *)(unaff_x23 + iVar13) = (char)(uVar12 >> 0x10);
          puVar9 = (undefined1 *)(unaff_x23 + (iVar13 + 1));
          iVar10 = 2;
          goto LAB_029015f4;
        }
      }
      else if ((iVar13 <= unaff_w22 + -3) &&
              (uVar11 = uVar11 | (int)*(char *)(lVar2 + (ulong)uVar7) |
                        (int)*(char *)(lVar2 + (ulong)uVar6) << 6, -1 < (int)uVar11)) {
        puVar3 = (undefined1 *)(unaff_x23 + iVar13);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        puVar9 = puVar3 + 2;
        *puVar3 = (char)(uVar11 >> 0x10);
        puVar3[1] = (char)(uVar11 >> 8);
        iVar10 = 3;
        goto LAB_029015f4;
      }
    }
  }
LAB_029014f4:
  uVar12 = (uint)uVar14;
  uVar8 = 0;
LAB_029014fc:
  *in_stack_00000008 = iVar15;
  *unaff_x20 = uVar12;
  return uVar8;
}


