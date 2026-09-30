/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetControllerState
ENTRY_POINT: 033edb90
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetControllerState(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint in_w8;
  long lVar6;
  ulong in_x9;
  ulong in_x10;
  int *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  ulong uVar7;
  long *unaff_x22;
  uint unaff_w23;
  uint uVar8;
  ulong unaff_x24;
  ulong uVar9;
  int unaff_w25;
  uint uVar10;
  
  do {
    unaff_x19[2] = (int)in_x10;
LAB_033edbbc:
    do {
      uVar10 = (uint)in_x9;
                    /* try { // try from 033edbbc to 034edbc3 has its CatchHandler @ 033edf40 */
      uVar8 = (uint)unaff_x24;
      if (unaff_w21 == 9) {
LAB_033edcb8:
        switch(unaff_w20) {
        case 0:
          if (((uint)((uVar10 & 1) != 0 || unaff_w23 != 0) | in_w8 << 1) <= uVar8) {
            return;
          }
          break;
        case 1:
          if (in_w8 * 2 < uVar8) {
            return;
          }
          break;
        case 2:
          goto switchD_033edcd8_caseD_2;
        case 3:
          if (in_w8 == 0 && unaff_w23 == 0) {
            return;
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          if (-1 < *unaff_x19) {
            return;
          }
          break;
        default:
          if (in_w8 == 0 && unaff_w23 == 0) {
            return;
          }
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          if (*unaff_x19 < 0) {
            return;
          }
        }
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar5 = *(long *)(unaff_x19 + 2);
        *(long *)(unaff_x19 + 2) = lVar5 + 1;
        if (lVar5 == -1) {
          unaff_x19[1] = unaff_x19[1] + 1;
        }
switchD_033edcd8_caseD_2:
        return;
      }
      unaff_w21 = unaff_w21 - 9;
                    /* try { // try from 033edbc8 to 034edbcf has its CatchHandler @ 033edf3c */
      unaff_w23 = in_w8 | unaff_w23;
      if (unaff_w21 < 9) {
                    /* try { // try from 033edbd4 to 034edbdb has its CatchHandler @ 033edf30 */
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 033edbe0 to 034edbe7 has its CatchHandler @ 033edf38 */
          thunk_FUN_01dc4f30();
          lVar5 = *unaff_x22;
        }
        lVar6 = **(long **)(lVar5 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
                    /* try { // try from 033edbf8 to 034edbff has its CatchHandler @ 033edf34 */
        if (*(uint *)(lVar6 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
                    /* try { // try from 033edc04 to 034edc3f has its CatchHandler @ 033edf58 */
        uVar10 = unaff_x19[1];
        uVar8 = *(uint *)(lVar6 + (ulong)unaff_w21 * 4 + 0x20);
        uVar7 = (ulong)uVar8;
        if (uVar10 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = *(ulong *)(unaff_x19 + 2);
          if (uVar9 == 0) {
            if (unaff_w20 < 3) {
              return;
            }
            uVar10 = 0;
            in_w8 = 0;
          }
          else {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar9 / uVar7;
            }
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            *(ulong *)(unaff_x19 + 2) = uVar4;
            uVar10 = (uint)uVar4;
            in_w8 = (int)uVar9 - uVar10 * uVar8;
          }
        }
        else {
          iVar1 = unaff_x19[3];
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar10 / uVar8;
          }
          in_w8 = uVar10 - uVar2 * uVar8;
          unaff_x19[1] = uVar2;
          if (iVar1 != 0 || in_w8 != 0) {
            iVar3 = 0;
            if (uVar7 != 0) {
              iVar3 = (int)(CONCAT44(in_w8,iVar1) / uVar7);
            }
            unaff_x19[3] = iVar3;
            in_w8 = iVar1 - uVar8 * iVar3;
          }
          uVar10 = unaff_x19[2];
          if (uVar10 != 0 || in_w8 != 0) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = (uint)(CONCAT44(in_w8,uVar10) / uVar7);
            }
            in_w8 = uVar10 - uVar8 * uVar2;
            unaff_x19[2] = uVar2;
            uVar10 = uVar2;
          }
        }
        goto LAB_033edcb8;
      }
      uVar10 = unaff_x19[1];
      if (uVar10 == 0) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 033edba4 to 034edbab has its CatchHandler @ 033edf44 */
          thunk_FUN_01dc4f30();
        }
        uVar7 = *(ulong *)(unaff_x19 + 2);
        in_x9 = 0;
        if (unaff_x24 != 0) {
          in_x9 = uVar7 / unaff_x24;
        }
                    /* try { // try from 033edbb0 to 034edbb7 has its CatchHandler @ 033edf58 */
        *(ulong *)(unaff_x19 + 2) = in_x9;
        in_w8 = (int)uVar7 + (int)in_x9 * unaff_w25;
        goto LAB_033edbbc;
      }
      iVar1 = unaff_x19[3];
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = uVar10 / uVar8;
      }
      in_w8 = uVar10 + uVar2 * unaff_w25;
      unaff_x19[1] = uVar2;
      if (iVar1 != 0 || in_w8 != 0) {
        iVar3 = 0;
        if (unaff_x24 != 0) {
          iVar3 = (int)(CONCAT44(in_w8,iVar1) / unaff_x24);
        }
        unaff_x19[3] = iVar3;
        in_w8 = iVar1 + iVar3 * unaff_w25;
      }
      uVar8 = unaff_x19[2];
      in_x9 = (ulong)uVar8;
    } while (uVar8 == 0 && in_w8 == 0);
    in_x10 = 0;
    if (unaff_x24 != 0) {
      in_x10 = CONCAT44(in_w8,uVar8) / unaff_x24;
    }
    in_w8 = uVar8 + (int)in_x10 * unaff_w25;
    in_x9 = in_x10 & 0xffffffff;
  } while( true );
}


