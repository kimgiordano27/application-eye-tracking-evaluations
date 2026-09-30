/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$.cctor
ENTRY_POINT: 033f0090
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_12_0___cctor(void)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_w8;
  long lVar10;
  ulong uVar11;
  uint *unaff_x19;
  uint *unaff_x20;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  
  puVar4 = StringLiteral_9323;
  if (in_w8 == 0) {
    thunk_FUN_01dd295c(StringLiteral_9346);
    uVar8 = thunk_FUN_01de27b8();
    FUN_0337ebbc(uVar8,0);
    uVar9 = thunk_FUN_01dd295c(StringLiteral_9347);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar8,uVar9);
  }
  if ((unaff_x19[3] != 0 || unaff_x19[2] != 0) || unaff_x19[1] != 0) {
    *unaff_x20 = *unaff_x19 & 0x80000000 | *unaff_x20 & 0x7fffffff;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033f2530();
    if (uVar5 == 0) {
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      unaff_x19[1] = 0;
      if (*unaff_x19 < *unaff_x20) {
        *unaff_x19 = *unaff_x20;
      }
    }
    else if (-1 < (int)(*unaff_x19 ^ uVar5)) {
      iVar3 = *unaff_x19 - *unaff_x20;
      iVar12 = iVar3 * 0x100 >> 0x18;
      if (0xffffff < iVar3 * 0x100) {
        lVar7 = (long)iVar12;
        do {
          lVar6 = *(long *)puVar4;
          if (lVar7 < 9) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar6 = *(long *)puVar4;
            }
            lVar10 = **(long **)(lVar6 + 0xb8);
            if (lVar10 == 0) {
LAB_033f037c:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar10 + 0x18) <= (uint)lVar7) {
LAB_033f0380:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            uVar5 = *(uint *)(lVar10 + lVar7 * 4 + 0x20);
          }
          else {
            uVar5 = 1000000000;
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar10 = lVar7 + -9;
          uVar11 = (ulong)unaff_x20[2] * (ulong)uVar5;
          lVar6 = CONCAT44(unaff_x20[1],unaff_x20[3]) * (ulong)uVar5 + (uVar11 >> 0x20);
          unaff_x20[2] = (uint)uVar11;
          unaff_x20[3] = (uint)lVar6;
          unaff_x20[1] = (uint)((ulong)lVar6 >> 0x20);
          bVar1 = 8 < lVar7;
          lVar7 = lVar10;
        } while (lVar10 != 0 && bVar1);
        iVar12 = 0;
      }
      do {
        if (iVar12 < 0) {
          *unaff_x19 = *unaff_x20;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar13 = *(ulong *)(unaff_x19 + 2);
          uStack0000000000000000 = (undefined4)uVar13;
          uStack0000000000000004 = (undefined4)(uVar13 >> 0x20);
          uVar14 = (ulong)unaff_x19[1];
          uVar11 = CONCAT44(unaff_x19[1],uStack0000000000000004);
          while( true ) {
            uStack0000000000000004 = (undefined4)uVar11;
            uVar2 = CONCAT44((int)uVar14,uStack0000000000000004);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar5 = FUN_033f2328();
            if (uVar5 == 0) break;
            lVar7 = *(long *)puVar4;
            if ((int)uVar5 < 9) {
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar7 = *(long *)puVar4;
              }
              lVar6 = **(long **)(lVar7 + 0xb8);
              if (lVar6 == 0) goto LAB_033f037c;
              if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_033f0380;
              uVar15 = *(uint *)(lVar6 + (long)(int)uVar5 * 4 + 0x20);
            }
            else {
              uVar15 = 1000000000;
            }
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar13 = (uVar13 & 0xffffffff) * (ulong)uVar15;
            iVar12 = uVar5 + iVar12;
            uVar2 = uVar11 * uVar15 + (uVar13 >> 0x20);
            uVar14 = uVar2 >> 0x20;
            uStack0000000000000000 = (undefined4)uVar13;
            if ((-1 < iVar12) || (uVar11 = uVar2, uVar15 != 1000000000)) break;
          }
          uStack0000000000000004 = (undefined4)uVar2;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          *(ulong *)(unaff_x19 + 2) = CONCAT44(uStack0000000000000004,uStack0000000000000000);
          unaff_x19[1] = (uint)(uVar2 >> 0x20);
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          uVar5 = unaff_x19[1];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
        }
        else {
          uVar5 = unaff_x19[1];
        }
        if (uVar5 == 0) {
          uVar13 = *(ulong *)(unaff_x20 + 2);
          uVar11 = 0;
          if (uVar13 != 0) {
            uVar11 = *(ulong *)(unaff_x19 + 2) / uVar13;
          }
          *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar11 * uVar13;
          return;
        }
        uVar5 = unaff_x20[1];
        uVar15 = unaff_x20[3];
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (uVar15 != 0 || uVar5 != 0) {
          OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose();
          return;
        }
        uVar5 = unaff_x19[1];
        uVar15 = unaff_x20[2];
        uVar11 = (ulong)uVar15;
        unaff_x19[1] = 0;
        iVar3 = 0;
        if (uVar11 != 0) {
          iVar3 = (int)(CONCAT44(uVar5,unaff_x19[3]) / uVar11);
        }
        uVar13 = CONCAT44(unaff_x19[3] - iVar3 * uVar15,unaff_x19[2]);
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = uVar13 / uVar11;
        }
        *(ulong *)(unaff_x19 + 2) = uVar13 - uVar14 * uVar11;
      } while (iVar12 < 0);
    }
  }
  return;
}


