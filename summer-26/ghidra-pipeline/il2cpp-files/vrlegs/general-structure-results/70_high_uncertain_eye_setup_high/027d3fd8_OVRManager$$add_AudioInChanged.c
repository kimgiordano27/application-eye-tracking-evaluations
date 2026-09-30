/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 027d3fd8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioInChanged(ulong param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint *unaff_x19;
  uint *unaff_x20;
  int iVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfca30);
    *(undefined1 *)(unaff_x21 + 0x19) = 1;
  }
  puVar3 = PTR_DAT_03cfca30;
  uStack0000000000000004 = 0;
  uStack000000000000000c = 0;
  if ((unaff_x20[3] == 0 && unaff_x20[2] == 0) && unaff_x20[1] == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03ce2790);
    uVar7 = thunk_FUN_01a89e68();
    FUN_0274fc50(uVar7,0);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfcaf0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,uVar8);
  }
  if ((unaff_x19[3] != 0 || unaff_x19[2] != 0) || unaff_x19[1] != 0) {
    *unaff_x20 = *unaff_x19 & 0x80000000 | *unaff_x20 & 0x7fffffff;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_027d64a4();
    if (uVar4 == 0) {
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      unaff_x19[1] = 0;
      if (*unaff_x19 < *unaff_x20) {
        *unaff_x19 = *unaff_x20;
      }
    }
    else if (-1 < (int)(*unaff_x19 ^ uVar4)) {
      iVar2 = *unaff_x19 - *unaff_x20;
      iVar11 = iVar2 * 0x100 >> 0x18;
      if (0xffffff < iVar2 * 0x100) {
        lVar6 = (long)iVar11;
        do {
          lVar5 = *(long *)puVar3;
          if (lVar6 < 9) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar5 = *(long *)puVar3;
            }
            lVar9 = **(long **)(lVar5 + 0xb8);
            if (lVar9 == 0) {
LAB_027d42f0:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar9 + 0x18) <= (uint)lVar6) {
LAB_027d42f4:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            uVar4 = *(uint *)(lVar9 + lVar6 * 4 + 0x20);
          }
          else {
            uVar4 = 1000000000;
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar9 = lVar6 + -9;
          uVar10 = (ulong)unaff_x20[2] * (ulong)uVar4;
          lVar5 = CONCAT44(unaff_x20[1],unaff_x20[3]) * (ulong)uVar4 + (uVar10 >> 0x20);
          unaff_x20[2] = (uint)uVar10;
          unaff_x20[3] = (uint)lVar5;
          unaff_x20[1] = (uint)((ulong)lVar5 >> 0x20);
          bVar1 = 8 < lVar6;
          lVar6 = lVar9;
        } while (lVar9 != 0 && bVar1);
        iVar11 = 0;
      }
      do {
        if (iVar11 < 0) {
          *unaff_x19 = *unaff_x20;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = *(ulong *)(unaff_x19 + 2);
          uStack0000000000000000 = (undefined4)uVar12;
          uStack0000000000000004 = (undefined4)(uVar12 >> 0x20);
          uVar10 = CONCAT44(unaff_x19[1],uStack0000000000000004);
          uVar13 = (ulong)unaff_x19[1];
          while( true ) {
            uStack0000000000000008 = (undefined4)(uVar10 >> 0x20);
            uStack0000000000000004 = (undefined4)uVar10;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar4 = FUN_027d629c();
            uVar10 = CONCAT44((int)uVar13,uStack0000000000000004);
            if (uVar4 == 0) break;
            lVar6 = *(long *)puVar3;
            if ((int)uVar4 < 9) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar6 = *(long *)puVar3;
              }
              lVar5 = **(long **)(lVar6 + 0xb8);
              if (lVar5 == 0) goto LAB_027d42f0;
              if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_027d42f4;
              uVar14 = *(uint *)(lVar5 + (long)(int)uVar4 * 4 + 0x20);
            }
            else {
              uVar14 = 1000000000;
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = (uVar12 & 0xffffffff) * (ulong)uVar14;
            iVar11 = uVar4 + iVar11;
            uVar10 = CONCAT44(uStack0000000000000008,uStack0000000000000004) * (ulong)uVar14 +
                     (uVar12 >> 0x20);
            uVar13 = uVar10 >> 0x20;
            uStack0000000000000000 = (undefined4)uVar12;
            if ((-1 < iVar11) || (uVar14 != 1000000000)) break;
          }
          uStack0000000000000004 = (undefined4)uVar10;
          uVar7 = CONCAT44(uStack0000000000000004,uStack0000000000000000);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          *(undefined8 *)(unaff_x19 + 2) = uVar7;
          unaff_x19[1] = (uint)(uVar10 >> 0x20);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar4 = unaff_x19[1];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
        }
        else {
          uVar4 = unaff_x19[1];
        }
        if (uVar4 == 0) {
          uVar12 = *(ulong *)(unaff_x20 + 2);
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = *(ulong *)(unaff_x19 + 2) / uVar12;
          }
          *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar10 * uVar12;
          return;
        }
        uVar4 = unaff_x20[1];
        uVar14 = unaff_x20[3];
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (uVar14 != 0 || uVar4 != 0) {
          FUN_027d6674();
          return;
        }
        uVar4 = unaff_x19[1];
        uVar14 = unaff_x20[2];
        uVar10 = (ulong)uVar14;
        unaff_x19[1] = 0;
        iVar2 = 0;
        if (uVar10 != 0) {
          iVar2 = (int)(CONCAT44(uVar4,unaff_x19[3]) / uVar10);
        }
        uVar12 = CONCAT44(unaff_x19[3] - iVar2 * uVar14,unaff_x19[2]);
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar12 / uVar10;
        }
        *(ulong *)(unaff_x19 + 2) = uVar12 - uVar13 * uVar10;
      } while (iVar11 < 0);
    }
  }
  return;
}


