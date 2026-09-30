/*
FUNCTION_NAME: RootMotion.AvatarUtility$$GetPostRotation
ENTRY_POINT: 0503b730
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

float RootMotion_AvatarUtility__GetPostRotation(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 unaff_w19;
  uint unaff_w20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float fVar8;
  float unaff_s11;
  float fVar9;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    fVar9 = -unaff_s8;
    if (0.0 <= unaff_s8) {
      fVar9 = unaff_s8;
    }
    fVar8 = -unaff_s11;
    if (0.0 <= unaff_s11) {
      fVar8 = unaff_s11;
    }
    if (fVar8 <= fVar9) {
      unaff_s11 = unaff_s8;
    }
    do {
      fVar9 = unaff_s11;
      if ((unaff_w24 >> 0xd & 1) != 0) {
        fVar9 = *(float *)(unaff_x23 + 0x114);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar8 = -unaff_s11;
        if (0.0 <= unaff_s11) {
          fVar8 = unaff_s11;
        }
        fVar7 = -fVar9;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        if (fVar7 <= fVar8) {
          fVar9 = unaff_s11;
        }
      }
      do {
        unaff_w22 = unaff_w22 + 1;
        lVar3 = *unaff_x25;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar3 = *unaff_x25;
        }
        lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_0503b7c0;
        if (*(int *)(lVar5 + 0x18) <= unaff_w22) {
          return fVar9;
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar5 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
          if (lVar5 == 0) goto LAB_0503b7c0;
        }
        unaff_x23 = FUN_037a6268(lVar5,unaff_w22,*unaff_x26);
        lVar3 = *unaff_x27;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar3);
          lVar3 = *unaff_x27;
        }
        if (*(int *)(*(long *)(lVar3 + 0xb8) + 0x120) == 1) {
          if (unaff_x23 == 0) goto LAB_0503b7c0;
        }
        else {
          if (unaff_x23 == 0) goto LAB_0503b7c0;
          *(undefined1 *)(unaff_x23 + 0x118) = 0;
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x10);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar4 = FUN_05039f68(uVar1,unaff_w19);
      } while ((uVar4 & 1) == 0);
      if (*(long *)(unaff_x23 + 0x30) == 0) {
LAB_0503b7c0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar2 = FUN_0503e05c(*(long *)(unaff_x23 + 0x30),unaff_w21);
      unaff_w24 = uVar2 | unaff_w20;
      fVar8 = fVar9;
      if ((unaff_w24 & 1) != 0) {
        fVar8 = *(float *)(unaff_x23 + 0xbc);
        lVar3 = *unaff_x25;
        if (*(char *)(unaff_x23 + 0x118) != '\0') {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *unaff_x25;
          }
          fVar7 = -fVar8;
          if (0.0 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar6 = *(float *)(*(long *)(lVar3 + 0xb8) + 4);
          if (fVar7 <= fVar6) {
            fVar8 = 0.0;
          }
          else {
            fVar7 = fVar8 * ((fVar7 - fVar6) / (unaff_s9 - fVar6));
            fVar8 = fVar7;
            if ((unaff_s9 < fVar7 * fVar7) && (fVar8 = unaff_s9, fVar7 < 0.0)) {
              fVar8 = unaff_s10;
            }
          }
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar9;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar6 = -fVar8;
        if (0.0 <= fVar8) {
          fVar6 = fVar8;
        }
        if (fVar6 <= fVar7) {
          fVar8 = fVar9;
        }
      }
      fVar9 = fVar8;
      if ((unaff_w24 >> 1 & 1) != 0) {
        fVar9 = *(float *)(unaff_x23 + 0xc0);
        lVar3 = *unaff_x25;
        if (*(char *)(unaff_x23 + 0x118) != '\0') {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *unaff_x25;
          }
          fVar7 = -fVar9;
          if (0.0 <= fVar9) {
            fVar7 = fVar9;
          }
          fVar6 = *(float *)(*(long *)(lVar3 + 0xb8) + 4);
          if (fVar7 <= fVar6) {
            fVar9 = 0.0;
          }
          else {
            fVar7 = fVar9 * ((fVar7 - fVar6) / (unaff_s9 - fVar6));
            fVar9 = fVar7;
            if ((unaff_s9 < fVar7 * fVar7) && (fVar9 = unaff_s9, fVar7 < 0.0)) {
              fVar9 = unaff_s10;
            }
          }
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar8;
        if (0.0 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar6 = -fVar9;
        if (0.0 <= fVar9) {
          fVar6 = fVar9;
        }
        if (fVar6 <= fVar7) {
          fVar9 = fVar8;
        }
      }
      fVar8 = fVar9;
      if ((unaff_w24 >> 2 & 1) != 0) {
        fVar8 = *(float *)(unaff_x23 + 0xc4);
        lVar3 = *unaff_x25;
        if (*(char *)(unaff_x23 + 0x118) != '\0') {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *unaff_x25;
          }
          fVar7 = -fVar8;
          if (0.0 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar6 = *(float *)(*(long *)(lVar3 + 0xb8) + 4);
          if (fVar7 <= fVar6) {
            fVar8 = 0.0;
          }
          else {
            fVar7 = fVar8 * ((fVar7 - fVar6) / (unaff_s9 - fVar6));
            fVar8 = fVar7;
            if ((unaff_s9 < fVar7 * fVar7) && (fVar8 = unaff_s9, fVar7 < 0.0)) {
              fVar8 = unaff_s10;
            }
          }
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar9;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar6 = -fVar8;
        if (0.0 <= fVar8) {
          fVar6 = fVar8;
        }
        if (fVar6 <= fVar7) {
          fVar8 = fVar9;
        }
      }
      fVar9 = fVar8;
      if ((unaff_w24 >> 3 & 1) != 0) {
        fVar9 = *(float *)(unaff_x23 + 200);
        lVar3 = *unaff_x25;
        if (*(char *)(unaff_x23 + 0x118) != '\0') {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar3 = *unaff_x25;
          }
          fVar7 = -fVar9;
          if (0.0 <= fVar9) {
            fVar7 = fVar9;
          }
          fVar6 = *(float *)(*(long *)(lVar3 + 0xb8) + 4);
          if (fVar7 <= fVar6) {
            fVar9 = 0.0;
          }
          else {
            fVar7 = fVar9 * ((fVar7 - fVar6) / (unaff_s9 - fVar6));
            fVar9 = fVar7;
            if ((unaff_s9 < fVar7 * fVar7) && (fVar9 = unaff_s9, fVar7 < 0.0)) {
              fVar9 = unaff_s10;
            }
          }
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar8;
        if (0.0 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar6 = -fVar9;
        if (0.0 <= fVar9) {
          fVar6 = fVar9;
        }
        if (fVar6 <= fVar7) {
          fVar9 = fVar8;
        }
      }
      fVar8 = fVar9;
      if ((unaff_w24 >> 4 & 1) != 0) {
        fVar8 = *(float *)(unaff_x23 + 0x100);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar9;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar6 = -fVar8;
        if (0.0 <= fVar8) {
          fVar6 = fVar8;
        }
        if (fVar6 <= fVar7) {
          fVar8 = fVar9;
        }
      }
      fVar9 = fVar8;
      if ((unaff_w24 >> 8 & 1) != 0) {
        fVar9 = *(float *)(unaff_x23 + 0x104);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar8;
        if (0.0 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar6 = -fVar9;
        if (0.0 <= fVar9) {
          fVar6 = fVar9;
        }
        if (fVar6 <= fVar7) {
          fVar9 = fVar8;
        }
      }
      fVar8 = fVar9;
      if ((unaff_w24 >> 5 & 1) != 0) {
        fVar8 = *(float *)(unaff_x23 + 0x108);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar9;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar6 = -fVar8;
        if (0.0 <= fVar8) {
          fVar6 = fVar8;
        }
        if (fVar6 <= fVar7) {
          fVar8 = fVar9;
        }
      }
      fVar9 = fVar8;
      if ((unaff_w24 >> 9 & 1) != 0) {
        fVar9 = *(float *)(unaff_x23 + 0x10c);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar8;
        if (0.0 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar6 = -fVar9;
        if (0.0 <= fVar9) {
          fVar6 = fVar9;
        }
        if (fVar6 <= fVar7) {
          fVar9 = fVar8;
        }
      }
      fVar8 = fVar9;
      if ((unaff_w24 >> 6 & 1) != 0) {
        fVar8 = *(float *)(unaff_x23 + 0xf0);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar9;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar6 = -fVar8;
        if (0.0 <= fVar8) {
          fVar6 = fVar8;
        }
        if (fVar6 <= fVar7) {
          fVar8 = fVar9;
        }
      }
      fVar9 = fVar8;
      if ((unaff_w24 >> 10 & 1) != 0) {
        fVar9 = *(float *)(unaff_x23 + 0xf4);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar8;
        if (0.0 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar6 = -fVar9;
        if (0.0 <= fVar9) {
          fVar6 = fVar9;
        }
        if (fVar6 <= fVar7) {
          fVar9 = fVar8;
        }
      }
      fVar8 = fVar9;
      if ((unaff_w24 >> 7 & 1) != 0) {
        fVar8 = *(float *)(unaff_x23 + 0xf8);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar7 = -fVar9;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        fVar6 = -fVar8;
        if (0.0 <= fVar8) {
          fVar6 = fVar8;
        }
        if (fVar6 <= fVar7) {
          fVar8 = fVar9;
        }
      }
      unaff_s8 = fVar8;
      if ((unaff_w24 >> 0xb & 1) != 0) {
        unaff_s8 = *(float *)(unaff_x23 + 0xfc);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        fVar9 = -fVar8;
        if (0.0 <= fVar8) {
          fVar9 = fVar8;
        }
        fVar7 = -unaff_s8;
        if (0.0 <= unaff_s8) {
          fVar7 = unaff_s8;
        }
        if (fVar7 <= fVar9) {
          unaff_s8 = fVar8;
        }
      }
      unaff_s11 = unaff_s8;
    } while ((unaff_w24 >> 0xc & 1) == 0);
    param_1 = *unaff_x25;
    unaff_s11 = *(float *)(unaff_x23 + 0x110);
  } while( true );
}


