/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 036e1800
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036e1cd4) */
/* WARNING: Removing unreachable block (ram,0x036e1cdc) */
/* WARNING: Removing unreachable block (ram,0x036e1cf8) */
/* WARNING: Removing unreachable block (ram,0x036e1d00) */
/* WARNING: Removing unreachable block (ram,0x036e1d18) */
/* WARNING: Removing unreachable block (ram,0x036e1760) */
/* WARNING: Removing unreachable block (ram,0x036e1768) */
/* WARNING: Removing unreachable block (ram,0x036e1778) */
/* WARNING: Removing unreachable block (ram,0x036e1780) */

void Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w23;
  int unaff_w24;
  long lVar9;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int iStack0000000000000008;
  uint uStack000000000000000c;
  
code_r0x036e1800:
  uVar4 = FUN_03703c60();
  if (*(uint *)(unaff_x27 + 0x18) <= (uint)unaff_x26) {
LAB_036e1e58:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  *(undefined4 *)(unaff_x27 + unaff_x26 * 0xc + 0x20) = uVar4;
  lVar9 = *unaff_x20;
  if (lVar9 != 0) {
    uVar7 = *(uint *)(lVar9 + 0x18);
    if (uVar7 <= uStack000000000000000c) goto LAB_036e1e58;
    *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
    if (uVar7 <= uStack000000000000000c) goto LAB_036e1e58;
    *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x28) = 1;
    uVar4 = FUN_03703c60();
    if (*(uint *)(lVar9 + 0x18) <= uStack000000000000000c + 1) goto LAB_036e1e58;
    *(undefined4 *)(lVar9 + (long)(int)(uStack000000000000000c + 1) * 0xc + 0x20) = uVar4;
    lVar9 = *unaff_x20;
    if (lVar9 != 0) {
      uVar7 = *(uint *)(lVar9 + 0x18);
      if (uVar7 <= uStack000000000000000c + 1) goto LAB_036e1e58;
      *(int *)(lVar9 + (long)(int)(uStack000000000000000c + 1) * 0xc + 0x24) = unaff_w23;
      if (uVar7 <= uStack000000000000000c + 1) goto LAB_036e1e58;
      *(undefined4 *)(lVar9 + (long)(int)(uStack000000000000000c + 1) * 0xc + 0x28) = 1;
      uStack000000000000000c = uStack000000000000000c + 2;
LAB_036e1d9c:
      unaff_w23 = unaff_w24 + 1;
      if (unaff_w21 <= unaff_w23) {
LAB_036e1db4:
        *(undefined4 *)(unaff_x19 + 0x5c8) = 0;
        lVar9 = FUN_036de860();
        if (lVar9 == 0) goto LAB_036e1e5c;
        if (*(int *)(lVar9 + 0x18) != -0x468aaf0d) {
          FUN_036e3050();
        }
        lVar9 = *unaff_x20;
        if (lVar9 == 0) goto LAB_036e1e5c;
        if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
          FUN_01f52a3c();
          lVar9 = *(long *)(unaff_x19 + 0x478);
          if (lVar9 == 0) goto LAB_036e1e5c;
        }
        if (uStack000000000000000c < *(uint *)(lVar9 + 0x18)) {
          *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x20) = 0;
          *(uint *)(unaff_x19 + 0x480) = uStack000000000000000c;
          return;
        }
        goto LAB_036e1e58;
      }
      uVar5 = FUN_03703c60();
      iVar1 = (int)uVar5;
      if (iVar1 == 0) goto LAB_036e1db4;
      if ((iVar1 != 0x5c) || (*(int *)(unaff_x19 + 0x400) != 0)) {
        if ((int)((uVar5 & 0xffffffff) >> 10) == 0x36) {
          iVar3 = unaff_w24 + 2;
          if (((unaff_w21 <= iVar3) ||
              (uVar6 = FUN_03703c60(), ((uint)(uVar6 >> 10) & 0x3fffff) < 0x37)) ||
             (uVar6 = FUN_03703c60(), 6 < ((uint)(uVar6 >> 0xd) & 0x7ffff)))
          goto switchD_036e1564_caseD_6f;
          lVar9 = *unaff_x20;
          if (lVar9 != 0) {
            if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
              FUN_01f52a3c();
              lVar9 = *(long *)(unaff_x19 + 0x478);
              if (lVar9 == 0) goto LAB_036e1e5c;
            }
            uVar4 = FUN_03703c60();
            if (*(int *)(*(long *)PTR_DAT_03d9d658 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9d658);
            }
            uVar4 = FUN_03705158(uVar5 & 0xffffffff,uVar4,0);
            if (uStack000000000000000c < *(uint *)(lVar9 + 0x18)) {
              *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x20) = uVar4;
              lVar9 = *unaff_x20;
              if (lVar9 != 0) {
                uVar7 = *(uint *)(lVar9 + 0x18);
                if (uStack000000000000000c < uVar7) {
                  *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
                  if (uStack000000000000000c < uVar7) {
                    lVar9 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
                    uVar4 = 2;
                    goto LAB_036e1b98;
                  }
                }
                goto LAB_036e1e58;
              }
              goto LAB_036e1e5c;
            }
            goto LAB_036e1e58;
          }
          goto LAB_036e1e5c;
        }
        if ((iVar1 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0'))
        goto switchD_036e1564_caseD_6f;
        iVar3 = FUN_036e273c(uVar5,*(undefined8 *)(unaff_x19 + 0x6b0),
                             *(undefined8 *)(unaff_x19 + 0x6b8),unaff_w24 + 2);
        if (iVar3 < 0x2bc730) {
          if (iVar3 == 0x8d0) {
            lVar9 = *unaff_x20;
            if (lVar9 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
                FUN_01f52a3c();
                lVar9 = *(long *)(unaff_x19 + 0x478);
                if (lVar9 == 0) goto LAB_036e1e5c;
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (uStack000000000000000c < uVar7) {
                *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x20) = 10;
                if (uStack000000000000000c < uVar7) {
                  *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
                  if (uStack000000000000000c < uVar7) {
                    *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x28) = 4;
                    iVar3 = unaff_w24 + 4;
                    goto LAB_036e1d94;
                  }
                }
              }
              goto LAB_036e1e58;
            }
          }
          else {
            if (iVar3 != 0x2bc72f) goto switchD_036e1564_caseD_6f;
            lVar9 = *unaff_x20;
            if (lVar9 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
                FUN_01f52a3c();
                lVar9 = *(long *)(unaff_x19 + 0x478);
                if (lVar9 == 0) goto LAB_036e1e5c;
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (uStack000000000000000c < uVar7) {
                lVar8 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
                uVar4 = 0xa0;
                goto LAB_036e1c68;
              }
              goto LAB_036e1e58;
            }
          }
          goto LAB_036e1e5c;
        }
        if (iVar3 == 0x322cae) {
          lVar9 = *unaff_x20;
          if (lVar9 != 0) {
            if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
              FUN_01f52a3c();
              lVar9 = *(long *)(unaff_x19 + 0x478);
              if (lVar9 == 0) goto LAB_036e1e5c;
            }
            uVar7 = *(uint *)(lVar9 + 0x18);
            if (uStack000000000000000c < uVar7) {
              lVar8 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
              uVar4 = 0x200b;
LAB_036e1c68:
              *(undefined4 *)(lVar8 + 0x20) = uVar4;
              if (uStack000000000000000c < uVar7) {
                *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
                if (uStack000000000000000c < uVar7) {
                  *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x28) = 6;
                  iVar3 = unaff_w24 + 6;
                  goto LAB_036e1d94;
                }
              }
            }
            goto LAB_036e1e58;
          }
          goto LAB_036e1e5c;
        }
        if (iVar3 == 0x5f9bd17) goto LAB_036e1ca4;
        if (iVar3 != 0x72e6f418) goto switchD_036e1564_caseD_6f;
        FUN_036e2c64();
        unaff_w24 = unaff_w24 + 8;
        goto LAB_036e1d9c;
      }
      if (unaff_w23 < unaff_w28) {
        iVar3 = unaff_w24 + 2;
        iVar2 = FUN_03703c60();
        switch(iVar2) {
        case 0x6e:
          if (*(char *)(unaff_x19 + 0x303) == '\0') break;
          lVar9 = *unaff_x20;
          if (lVar9 != 0) {
            if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
              FUN_01f52a3c();
              lVar9 = *(long *)(unaff_x19 + 0x478);
              if (lVar9 == 0) goto LAB_036e1e5c;
            }
            uVar7 = *(uint *)(lVar9 + 0x18);
            if (uStack000000000000000c < uVar7) {
              lVar8 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
              uVar4 = 10;
LAB_036e1ac4:
              *(undefined4 *)(lVar8 + 0x20) = uVar4;
              if (uStack000000000000000c < uVar7) {
                *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
                if (uStack000000000000000c < uVar7) {
                  *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x28) = 1;
                  goto LAB_036e1d94;
                }
              }
            }
            goto LAB_036e1e58;
          }
          goto LAB_036e1e5c;
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x73:
          break;
        case 0x72:
          if (*(char *)(unaff_x19 + 0x303) != '\0') {
            lVar9 = *unaff_x20;
            if (lVar9 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
                FUN_01f52a3c();
                lVar9 = *(long *)(unaff_x19 + 0x478);
                if (lVar9 == 0) goto LAB_036e1e5c;
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (uStack000000000000000c < uVar7) {
                lVar8 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
                uVar4 = 0xd;
                goto LAB_036e1ac4;
              }
              goto LAB_036e1e58;
            }
            goto LAB_036e1e5c;
          }
          break;
        case 0x74:
          if (*(char *)(unaff_x19 + 0x303) != '\0') {
            lVar9 = *unaff_x20;
            if (lVar9 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
                FUN_01f52a3c();
                lVar9 = *(long *)(unaff_x19 + 0x478);
                if (lVar9 == 0) goto LAB_036e1e5c;
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (uStack000000000000000c < uVar7) {
                lVar8 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
                uVar4 = 9;
                goto LAB_036e1ac4;
              }
              goto LAB_036e1e58;
            }
            goto LAB_036e1e5c;
          }
          break;
        case 0x75:
          iVar3 = unaff_w24 + 6;
          if (iVar3 < unaff_w21) {
            lVar9 = *unaff_x20;
            if (lVar9 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
                FUN_01f52a3c();
                lVar9 = *(long *)(unaff_x19 + 0x478);
                if (lVar9 == 0) goto LAB_036e1e5c;
              }
              uVar4 = FUN_036e255c();
              if (uStack000000000000000c < *(uint *)(lVar9 + 0x18)) {
                *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x20) = uVar4;
                lVar9 = *unaff_x20;
                if (lVar9 != 0) {
                  uVar7 = *(uint *)(lVar9 + 0x18);
                  if (uStack000000000000000c < uVar7) {
                    *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
                    if (uStack000000000000000c < uVar7) {
                      lVar9 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
                      uVar4 = 6;
LAB_036e1b98:
                      *(undefined4 *)(lVar9 + 0x28) = uVar4;
                      goto LAB_036e1d94;
                    }
                  }
                  goto LAB_036e1e58;
                }
                goto LAB_036e1e5c;
              }
              goto LAB_036e1e58;
            }
            goto LAB_036e1e5c;
          }
          break;
        case 0x76:
          if (*(char *)(unaff_x19 + 0x303) != '\0') {
            lVar9 = *unaff_x20;
            if (lVar9 != 0) {
              if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
                FUN_01f52a3c();
                lVar9 = *(long *)(unaff_x19 + 0x478);
                if (lVar9 == 0) goto LAB_036e1e5c;
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (uStack000000000000000c < uVar7) {
                lVar8 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
                uVar4 = 0xb;
                goto LAB_036e1ac4;
              }
              goto LAB_036e1e58;
            }
            goto LAB_036e1e5c;
          }
          break;
        default:
          if (iVar2 == 0x55) {
            iVar3 = unaff_w24 + 10;
            if (iVar3 < unaff_w21) {
              lVar9 = *unaff_x20;
              if (lVar9 != 0) {
                if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
                  FUN_01f52a3c();
                  lVar9 = *(long *)(unaff_x19 + 0x478);
                  if (lVar9 == 0) goto LAB_036e1e5c;
                }
                uVar4 = FUN_036e2604();
                if (uStack000000000000000c < *(uint *)(lVar9 + 0x18)) {
                  *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x20) = uVar4;
                  lVar9 = *unaff_x20;
                  if (lVar9 != 0) {
                    uVar7 = *(uint *)(lVar9 + 0x18);
                    if (uStack000000000000000c < uVar7) {
                      *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
                      if (uStack000000000000000c < uVar7) {
                        lVar9 = lVar9 + (long)(int)uStack000000000000000c * 0xc;
                        uVar4 = 10;
                        goto LAB_036e1b98;
                      }
                    }
                    goto LAB_036e1e58;
                  }
                  goto LAB_036e1e5c;
                }
                goto LAB_036e1e58;
              }
              goto LAB_036e1e5c;
            }
          }
          else if (((iVar2 == 0x5c) && (*(char *)(unaff_x19 + 0x303) != '\0')) &&
                  (unaff_w24 = unaff_w24 + 3, unaff_w24 < unaff_w21)) goto code_r0x036e17c4;
        }
      }
      goto switchD_036e1564_caseD_6f;
    }
  }
  goto LAB_036e1e5c;
code_r0x036e17c4:
  unaff_x27 = *unaff_x20;
  if (unaff_x27 == 0) goto LAB_036e1e5c;
  unaff_x26 = (long)(int)uStack000000000000000c;
  if (*(int *)(unaff_x27 + 0x18) < (int)(uStack000000000000000c + 2)) {
    FUN_01f52a3c();
    unaff_x27 = *(long *)(unaff_x19 + 0x478);
    if (unaff_x27 == 0) {
LAB_036e1e5c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  goto code_r0x036e1800;
LAB_036e1ca4:
  uVar5 = FUN_036e2848();
  unaff_w24 = iStack0000000000000008;
  if ((uVar5 & 1) != 0) goto LAB_036e1d9c;
switchD_036e1564_caseD_6f:
  lVar9 = *unaff_x20;
  if (lVar9 == 0) goto LAB_036e1e5c;
  if (uStack000000000000000c == *(uint *)(lVar9 + 0x18)) {
    FUN_01f52a3c();
    lVar9 = *(long *)(unaff_x19 + 0x478);
    if (lVar9 == 0) goto LAB_036e1e5c;
  }
  uVar7 = *(uint *)(lVar9 + 0x18);
  if (uVar7 <= uStack000000000000000c) goto LAB_036e1e58;
  *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x20) = iVar1;
  if (uVar7 <= uStack000000000000000c) goto LAB_036e1e58;
  *(int *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x24) = unaff_w23;
  if (uVar7 <= uStack000000000000000c) goto LAB_036e1e58;
  *(undefined4 *)(lVar9 + (long)(int)uStack000000000000000c * 0xc + 0x28) = 1;
  iVar3 = unaff_w23;
LAB_036e1d94:
  uStack000000000000000c = uStack000000000000000c + 1;
  unaff_w24 = iVar3;
  goto LAB_036e1d9c;
}


