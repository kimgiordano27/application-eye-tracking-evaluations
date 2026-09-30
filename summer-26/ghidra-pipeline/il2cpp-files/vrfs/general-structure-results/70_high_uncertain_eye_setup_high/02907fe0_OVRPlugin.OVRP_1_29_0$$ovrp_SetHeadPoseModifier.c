/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_SetHeadPoseModifier
ENTRY_POINT: 02907fe0
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_29_0__ovrp_SetHeadPoseModifier(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined2 uVar8;
  int iVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  
  thunk_FUN_0159f088(PTR_DAT_06ddaad8);
  *(undefined1 *)(unaff_x25 + 0xcbd) = 1;
  lVar7 = *unaff_x24;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar7 = *unaff_x24;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
                    /* try { // try from 02908020 to 02a0804f has its CatchHandler @ 02907f70 */
    iVar4 = (unaff_w23 / 3) * 3;
    iVar3 = iVar4 + unaff_w22;
    lVar2 = lVar7 + 0x20;
    iVar6 = 0;
    if (unaff_w22 < iVar3) {
                    /* try { // try from 02908050 to 02a0805b has its CatchHandler @ 0290805c */
      iVar9 = 0;
      do {
        iVar5 = iVar6;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 02907fc4 with catch @ 0290805c
                       catch(type#1 @ 06a5a440) { ... } // from try @ 02908050 with catch @ 0290805c
                       try { // try from 0290805c to 02a08073 has its CatchHandler @ 02907f70 */
        if ((unaff_x21 & 1) != 0) {
          if (iVar9 == 0x4c) {
            iVar9 = 0;
            iVar6 = iVar5 + 1;
            *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) = 0xd;
            iVar5 = iVar5 + 2;
            *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) = 10;
          }
          iVar9 = iVar9 + 4;
        }
        iVar6 = unaff_w22 + 1;
        *(undefined2 *)(unaff_x19 + (long)iVar5 * 2) =
             *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + unaff_w22) >> 1) & 0x7e) + lVar2);
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 1) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + iVar6) >> 4) |
                              (*(byte *)(unaff_x20 + unaff_w22) & 3) << 4) * 2);
        iVar1 = unaff_w22 + 2;
        unaff_w22 = unaff_w22 + 3;
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 2) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + iVar1) >> 6) |
                              (*(byte *)(unaff_x20 + iVar6) & 0xf) << 2) * 2);
        iVar6 = iVar5 + 4;
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 3) * 2) =
             *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + iVar1) & 0x3f) * 2 + lVar2);
      } while (unaff_w22 < iVar3);
      if (((unaff_w23 != iVar4) && ((unaff_x21 & 1) != 0)) && (iVar9 == 0x4c)) {
        *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) = 0xd;
        iVar6 = iVar5 + 6;
        *(undefined2 *)(unaff_x19 + (long)(iVar5 + 5) * 2) = 10;
      }
    }
    if (unaff_w23 % 3 == 1) {
      *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(unaff_x19 + (long)(iVar6 + 1) * 2) =
           *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + iVar3) & 3) * 0x20 + lVar2);
      uVar8 = *(undefined2 *)(lVar7 + 0xa0);
    }
    else {
      if (unaff_w23 % 3 != 2) {
        return iVar6;
      }
      *(undefined2 *)(unaff_x19 + (long)iVar6 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(unaff_x20 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(unaff_x19 + (long)(iVar6 + 1) * 2) =
           *(undefined2 *)
            (lVar2 + (ulong)((uint)(*(byte *)(unaff_x20 + (iVar3 + 1)) >> 4) |
                            (*(byte *)(unaff_x20 + iVar3) & 3) << 4) * 2);
      uVar8 = *(undefined2 *)(((ulong)*(byte *)(unaff_x20 + (iVar3 + 1)) & 0xf) * 8 + lVar2);
    }
    *(undefined2 *)(unaff_x19 + (long)(iVar6 + 2) * 2) = uVar8;
    *(undefined2 *)(unaff_x19 + (long)(iVar6 + 3) * 2) = *(undefined2 *)(lVar7 + 0xa0);
    return iVar6 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


