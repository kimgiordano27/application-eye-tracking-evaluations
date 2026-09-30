/*
FUNCTION_NAME: RootMotion.AvatarUtility$$GetPostRotation
ENTRY_POINT: 01d5d868
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void RootMotion_AvatarUtility__GetPostRotation(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long in_x9;
  long lVar7;
  int in_w10;
  int iVar8;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  int *unaff_x24;
  int *unaff_x26;
  int unaff_w27;
  int iVar9;
  int iVar10;
  long unaff_x28;
  uint *unaff_x29;
  long in_stack_00000018;
  
  while (*(int *)(unaff_x21 + 0x1c) = in_w10, in_x9 != 0) {
    while( true ) {
      uVar3 = *unaff_x29;
      iVar6 = unaff_w23 + unaff_w27 + 2;
      if (uVar3 < *(uint *)(in_x9 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(in_x9 + (long)(int)uVar3 * 4 + 0x20) = iVar6;
        *unaff_x26 = *unaff_x26 + 1;
      }
      else {
        FUN_02d26df8();
        in_x9 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (in_x9 == 0) goto LAB_01d5e3f0;
      }
      uVar3 = *unaff_x29;
      if (uVar3 < *(uint *)(in_x9 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(in_x9 + (long)(int)uVar3 * 4 + 0x20) = iVar6;
      }
      else {
        FUN_02d26df8();
        in_x9 = *(long *)(unaff_x21 + 0x10);
      }
      iVar6 = *unaff_x24;
      *unaff_x26 = *unaff_x26 + 1;
      if (in_x9 == 0) goto LAB_01d5e3f0;
      uVar3 = *unaff_x29;
      if (uVar3 < *(uint *)(in_x9 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(in_x9 + (long)(int)uVar3 * 4 + 0x20) = unaff_w23 + unaff_w27 + iVar6 + 1;
      }
      else {
        FUN_02d26df8();
        in_x9 = *(long *)(unaff_x21 + 0x10);
      }
      iVar6 = *unaff_x24;
      *unaff_x26 = *unaff_x26 + 1;
      if (in_x9 == 0) goto LAB_01d5e3f0;
      uVar3 = *unaff_x29;
      if (uVar3 < *(uint *)(in_x9 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(in_x9 + (long)(int)uVar3 * 4 + 0x20) = unaff_w23 + unaff_w27 + iVar6 + 2;
      }
      else {
        FUN_02d26df8();
      }
      iVar6 = *unaff_x24;
      unaff_w27 = unaff_w27 + 1;
      if (iVar6 + -1 <= unaff_w27) {
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *(uint *)(unaff_x21 + 0x18);
        iVar9 = iVar6 + unaff_w23;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar9;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
        }
        iVar8 = *unaff_x24;
        *unaff_x26 = *unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar8 + iVar9;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
        }
        iVar8 = *unaff_x24;
        *unaff_x26 = *unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *unaff_x29;
        iVar6 = iVar6 + unaff_w23 + 1;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 - iVar8;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
        }
        iVar8 = *unaff_x24;
        *unaff_x26 = *unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 - iVar8;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
        }
        iVar8 = *unaff_x24;
        *unaff_x26 = *unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar8 + iVar9;
          *unaff_x26 = *unaff_x26 + 1;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_01d5e3f0;
        }
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6;
        }
        else {
          FUN_02d26df8();
        }
        iVar6 = *(int *)(unaff_x28 + 0x38);
        if (iVar6 + -1 < 1) goto LAB_01d5e0c4;
        iVar9 = 0;
        goto LAB_01d5dc1c;
      }
      in_x9 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_01d5e3f0;
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      if (uVar3 < *(uint *)(in_x9 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(in_x9 + (long)(int)uVar3 * 4 + 0x20) = unaff_w23 + unaff_w27 + 1;
      }
      else {
        FUN_02d26df8();
        in_x9 = *(long *)(unaff_x21 + 0x10);
      }
      iVar6 = *unaff_x24;
      *unaff_x26 = *unaff_x26 + 1;
      if (in_x9 == 0) goto LAB_01d5e3f0;
      uVar3 = *unaff_x29;
      if (*(uint *)(in_x9 + 0x18) <= uVar3) break;
      *unaff_x29 = uVar3 + 1;
      *(int *)(in_x9 + (long)(int)uVar3 * 4 + 0x20) = unaff_w23 + unaff_w27 + iVar6 + 1;
      *unaff_x26 = *unaff_x26 + 1;
    }
    FUN_02d26df8();
    in_w10 = *(int *)(unaff_x21 + 0x1c) + 1;
    in_x9 = *(long *)(unaff_x21 + 0x10);
  }
  goto LAB_01d5e3f0;
  while( true ) {
    uVar3 = *(uint *)(unaff_x21 + 0x18);
    iVar10 = iVar8 + iVar6;
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *unaff_x29 = uVar3 + 1;
      *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar10;
    }
    else {
      FUN_02d26df8();
      lVar7 = *(long *)(unaff_x21 + 0x10);
    }
    iVar2 = *unaff_x24;
    *unaff_x26 = *unaff_x26 + 1;
    if (lVar7 == 0) goto LAB_01d5e3f0;
    uVar3 = *unaff_x29;
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *unaff_x29 = uVar3 + 1;
      *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar2 + iVar10;
    }
    else {
      FUN_02d26df8();
      lVar7 = *(long *)(unaff_x21 + 0x10);
    }
    iVar2 = *unaff_x24;
    *unaff_x26 = *unaff_x26 + 1;
    if (lVar7 == 0) goto LAB_01d5e3f0;
    uVar3 = *unaff_x29;
    iVar8 = iVar8 + iVar6 + 1;
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *unaff_x29 = uVar3 + 1;
      *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar8 - iVar2;
    }
    else {
      FUN_02d26df8();
      lVar7 = *(long *)(unaff_x21 + 0x10);
    }
    iVar6 = *unaff_x24;
    *unaff_x26 = *unaff_x26 + 1;
    if (lVar7 == 0) goto LAB_01d5e3f0;
    uVar3 = *unaff_x29;
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *unaff_x29 = uVar3 + 1;
      *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar8 - iVar6;
    }
    else {
      FUN_02d26df8();
      lVar7 = *(long *)(unaff_x21 + 0x10);
    }
    iVar6 = *unaff_x24;
    *unaff_x26 = *unaff_x26 + 1;
    if (lVar7 == 0) goto LAB_01d5e3f0;
    uVar3 = *unaff_x29;
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *unaff_x29 = uVar3 + 1;
      *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 + iVar10;
      *unaff_x26 = *unaff_x26 + 1;
    }
    else {
      FUN_02d26df8();
      lVar7 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_01d5e3f0;
    }
    uVar3 = *unaff_x29;
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *unaff_x29 = uVar3 + 1;
      *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar8;
    }
    else {
      FUN_02d26df8();
    }
    iVar6 = *(int *)(unaff_x28 + 0x38);
    iVar9 = iVar9 + 1;
    if (iVar6 + -1 <= iVar9) break;
LAB_01d5dc1c:
    iVar8 = *unaff_x24;
    iVar6 = iVar8 * (iVar6 + iVar9);
    if (0 < iVar8 + -1) {
      iVar10 = 0;
      do {
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *(uint *)(unaff_x21 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 + iVar10 + 1;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
        }
        iVar8 = *unaff_x24;
        *unaff_x26 = *unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 + iVar10 + iVar8 + 1;
          *unaff_x26 = *unaff_x26 + 1;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_01d5e3f0;
        }
        uVar3 = *unaff_x29;
        iVar8 = iVar6 + iVar10 + 2;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar8;
          *unaff_x26 = *unaff_x26 + 1;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_01d5e3f0;
        }
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar8;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
        }
        iVar8 = *unaff_x24;
        *unaff_x26 = *unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 + iVar10 + iVar8 + 1;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
        }
        iVar8 = *unaff_x24;
        *unaff_x26 = *unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01d5e3f0;
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 + iVar10 + iVar8 + 2;
        }
        else {
          FUN_02d26df8();
        }
        iVar8 = *unaff_x24;
        iVar10 = iVar10 + 1;
        unaff_x28 = in_stack_00000018;
      } while (iVar10 < iVar8 + -1);
    }
    lVar7 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_01d5e3f0;
  }
LAB_01d5e0c4:
  iVar6 = *(int *)(unaff_x20 + 0x18);
  iVar9 = *unaff_x24;
  lVar7 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar7 != 0) {
    bVar1 = 0 < iVar9;
    iVar8 = 1;
    do {
      uVar3 = *unaff_x29;
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 + -1;
      }
      else {
        FUN_02d26df8();
      }
      if (!bVar1) {
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        puVar4 = PTR_DAT_04232b48;
        if (lVar7 == 0) break;
        uVar3 = *(uint *)(unaff_x21 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = (iVar6 + -1) - iVar9;
          *unaff_x26 = *unaff_x26 + 1;
        }
        else {
          FUN_02d26df8();
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 == 0) break;
        }
        uVar3 = *unaff_x29;
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *unaff_x29 = uVar3 + 1;
          *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar6 + -2;
        }
        else {
          FUN_02d26df8();
        }
        uVar5 = FUN_02dded90();
        *(undefined8 *)(in_stack_00000018 + 0x48) = uVar5;
        uVar5 = FUN_02d287b4();
        *(undefined8 *)(in_stack_00000018 + 0x50) = uVar5;
        lVar7 = FUN_03d468e8(in_stack_00000018,0);
        if (lVar7 != 0) {
          lVar7 = FUN_02362b68(lVar7,*(undefined8 *)PTR_DAT_04231150);
          *(long *)(in_stack_00000018 + 0x28) = lVar7;
          uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_03d215c0(uVar5,0);
          if (lVar7 != 0) {
            FUN_03d2067c(lVar7,uVar5,0);
            if ((*(long *)(in_stack_00000018 + 0x28) != 0) &&
               (lVar7 = FUN_03d205c0(*(long *)(in_stack_00000018 + 0x28),0), lVar7 != 0)) {
              FUN_03d24070(lVar7,*(undefined8 *)(in_stack_00000018 + 0x48),0);
              if ((*(long *)(in_stack_00000018 + 0x28) != 0) &&
                 (lVar7 = FUN_03d205c0(*(long *)(in_stack_00000018 + 0x28),0), lVar7 != 0)) {
                FUN_03d27b54(lVar7,*(undefined8 *)(in_stack_00000018 + 0x50),0);
                if ((*(long *)(in_stack_00000018 + 0x28) != 0) &&
                   (lVar7 = FUN_03d205c0(*(long *)(in_stack_00000018 + 0x28),0), lVar7 != 0)) {
                  FUN_03d29d3c(lVar7,0);
                  return;
                }
              }
            }
          }
        }
        break;
      }
      lVar7 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar7 == 0) break;
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      iVar10 = (iVar6 - iVar9) + iVar8;
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar10 + -1;
        *unaff_x26 = *unaff_x26 + 1;
      }
      else {
        FUN_02d26df8();
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) break;
      }
      uVar3 = *unaff_x29;
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        *unaff_x29 = uVar3 + 1;
        *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = iVar10 + -2;
      }
      else {
        FUN_02d26df8();
        lVar7 = *(long *)(unaff_x21 + 0x10);
      }
      bVar1 = iVar8 < *unaff_x24;
      iVar8 = iVar8 + 1;
      *unaff_x26 = *unaff_x26 + 1;
    } while (lVar7 != 0);
  }
LAB_01d5e3f0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


