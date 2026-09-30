/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 02901438
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


undefined8 OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  ushort *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 uVar9;
  int in_w8;
  undefined1 *puVar10;
  ulong in_x9;
  int in_w10;
  ulong in_x11;
  long in_x12;
  int unaff_w19;
  uint uVar11;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int iVar12;
  long unaff_x25;
  int unaff_w26;
  int iVar13;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  int *in_stack_00000000;
  int *in_stack_00000008;
  
                    /* try { // try from 02901438 to 02a0143f has its CatchHandler @ 02901458 */
                    /* try { // try from 02901440 to 02a01443 has its CatchHandler @ 0290112c */
                    /* try { // try from 02901444 to 02a01447 has its CatchHandler @ 02901450 */
                    /* try { // try from 02901448 to 02a0147b has its CatchHandler @ 0290112c */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02901444 with catch @ 02901450
                        */
  while (uVar11 = in_w10 << 0xc | in_w8 << 0x12 | (int)*(char *)(in_x12 + in_x11) |
                  (int)*(char *)(in_x12 + in_x9) << 6, iVar13 = unaff_w26, -1 < (int)uVar11) {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02901434 with catch @ 02901454
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02901438 with catch @ 02901458
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02901340 with catch @ 0290145c
                        */
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02901258 with catch @ 02901460
                        */
      thunk_FUN_016466fc();
    }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02901298 with catch @ 02901464
                        */
    iVar13 = unaff_w26 + 4;
    puVar3 = (undefined1 *)(unaff_x23 + unaff_x25);
    *puVar3 = (char)(uVar11 >> 0x10);
                    /* try { // try from 0290147c to 02a0147f has its CatchHandler @ 029014f8 */
    puVar3[1] = (char)(uVar11 >> 8);
    puVar3[2] = (char)uVar11;
    if (unaff_w19 <= iVar13) {
      iVar12 = (int)unaff_x25 + 3;
                    /* try { // try from 029014bc to 02a014e3 has its CatchHandler @ 02901504 */
      if ((unaff_w19 != unaff_w27 + -4) || (iVar13 == unaff_w27)) goto LAB_029014f4;
      uVar4 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -4) * 2);
      uVar5 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -3) * 2);
      uVar6 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -2) * 2);
      uVar7 = *(ushort *)(unaff_x24 + (long)(unaff_w27 + -1) * 2);
                    /* try { // try from 029014e4 to 02a014ef has its CatchHandler @ 0290112c */
                    /* try { // try from 029014f0 to 02a014f7 has its CatchHandler @ 02901504 */
      if (0xff < (ushort)(uVar5 | uVar4 | uVar6 | uVar7)) goto LAB_029014f4;
      lVar2 = unaff_x29 + 0x20;
      uVar11 = (int)*(char *)(lVar2 + (ulong)uVar5) << 0xc |
               (int)*(char *)(lVar2 + (ulong)uVar4) << 0x12;
      if (uVar7 == 0x3d) {
        if (uVar6 == 0x3d) {
          if ((unaff_w22 + -1 < iVar12) || ((int)uVar11 < 0)) goto LAB_029014f4;
          puVar10 = (undefined1 *)(unaff_x23 + iVar12);
          uVar11 = uVar11 >> 0x10;
          iVar13 = 1;
        }
        else {
          if ((unaff_w22 + -2 < iVar12) ||
             (uVar8 = uVar11 | (int)*(char *)(unaff_x29 + (ulong)uVar6 + 0x20) << 6, (int)uVar8 < 0)
             ) goto LAB_029014f4;
          uVar11 = uVar8 >> 8;
          *(char *)(unaff_x23 + iVar12) = (char)(uVar8 >> 0x10);
          puVar10 = (undefined1 *)(unaff_x23 + ((int)unaff_x25 + 4));
          iVar13 = 2;
        }
      }
      else {
        if ((unaff_w22 + -3 < iVar12) ||
           (uVar11 = uVar11 | (int)*(char *)(lVar2 + (ulong)uVar7) |
                     (int)*(char *)(lVar2 + (ulong)uVar6) << 6, (int)uVar11 < 0)) goto LAB_029014f4;
        puVar3 = (undefined1 *)(unaff_x23 + iVar12);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        puVar10 = puVar3 + 2;
        *puVar3 = (char)(uVar11 >> 0x10);
        puVar3[1] = (char)(uVar11 >> 8);
        iVar13 = 3;
      }
      iVar12 = iVar12 + iVar13;
      iVar13 = unaff_w26 + 8;
      *puVar10 = (char)uVar11;
      if (unaff_w27 != unaff_w21) goto LAB_029014f4;
      uVar9 = 1;
      goto LAB_029014fc;
    }
    unaff_x25 = unaff_x25 + 3;
    puVar1 = (ushort *)(unaff_x24 + (long)iVar13 * 2);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    in_x9 = (ulong)puVar1[2];
    in_x11 = (ulong)puVar1[3];
    if (0xff < (ushort)(puVar1[1] | *puVar1 | puVar1[2] | puVar1[3])) break;
    in_x12 = unaff_x29 + 0x20;
    in_w10 = (int)*(char *)(in_x12 + (ulong)puVar1[1]);
    in_w8 = (int)*(char *)(in_x12 + (ulong)*puVar1);
    unaff_w26 = iVar13;
  }
  iVar12 = (int)unaff_x25;
LAB_029014f4:
  uVar9 = 0;
LAB_029014fc:
  *in_stack_00000008 = iVar13;
  *in_stack_00000000 = iVar12;
  return uVar9;
}


