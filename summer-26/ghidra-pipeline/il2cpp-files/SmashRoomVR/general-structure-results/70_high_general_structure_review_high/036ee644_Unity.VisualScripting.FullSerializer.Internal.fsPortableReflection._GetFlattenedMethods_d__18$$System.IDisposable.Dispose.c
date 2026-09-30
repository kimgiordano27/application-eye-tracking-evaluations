/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection.<GetFlattenedMethods>d__18$$System.IDisposable.Dispose
ENTRY_POINT: 036ee644
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_<GetFlattenedMethods>d__18__System_IDisposable_Dispose
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  long *unaff_x25;
  uint *unaff_x26;
  float unaff_s8;
  float unaff_s9;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  
  lVar10 = *(long *)(unaff_x19 + 0x580);
  if (lVar10 != 0) {
    fVar18 = (float)(unaff_w20 & 0xff) / 255.0;
    fVar16 = (float)(unaff_w20 >> 8 & 0xff) / 255.0;
    fVar12 = (float)(unaff_w20 >> 0x10 & 0xff) / 255.0;
    fVar14 = (float)unaff_w22 / 255.0;
    FUN_036c10cc(*(undefined4 *)(lVar10 + 0x3c),*(undefined4 *)(lVar10 + 0x40),
                 *(undefined4 *)(lVar10 + 0x44),*(undefined4 *)(lVar10 + 0x48),fVar18,fVar16,fVar12,
                 fVar14,0);
    uVar3 = FUN_01bd7168(0);
    *(undefined4 *)(unaff_x21 + unaff_x23 * 0x178 + 0x94) = uVar3;
    if ((*unaff_x25 != 0) && (lVar10 = *(long *)(*unaff_x25 + 0x38), lVar10 != 0)) {
      uVar1 = *unaff_x26;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_036ee9dc;
      lVar11 = *(long *)(unaff_x19 + 0x580);
      if (lVar11 != 0) {
        FUN_036c10cc(*(undefined4 *)(lVar11 + 0x1c),*(undefined4 *)(lVar11 + 0x20),
                     *(undefined4 *)(lVar11 + 0x24),*(undefined4 *)(lVar11 + 0x28),fVar18,fVar16,
                     fVar12,fVar14,0);
        uVar3 = FUN_01bd7168(0);
        *(undefined4 *)(lVar10 + (long)(int)uVar1 * 0x178 + 0xbc) = uVar3;
        if ((*unaff_x25 != 0) && (lVar10 = *(long *)(*unaff_x25 + 0x38), lVar10 != 0)) {
          uVar1 = *unaff_x26;
          if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_036ee9dc;
          lVar11 = *(long *)(unaff_x19 + 0x580);
          if (lVar11 != 0) {
            FUN_036c10cc(*(undefined4 *)(lVar11 + 0x2c),*(undefined4 *)(lVar11 + 0x30),
                         *(undefined4 *)(lVar11 + 0x34),*(undefined4 *)(lVar11 + 0x38),fVar18,fVar16
                         ,fVar12,fVar14,0);
            uVar3 = FUN_01bd7168(0);
            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 0x178 + 0xe4) = uVar3;
            if ((*unaff_x25 != 0) && (lVar10 = *(long *)(*unaff_x25 + 0x38), lVar10 != 0)) {
              uVar1 = *unaff_x26;
              if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_036ee9dc;
              lVar11 = *(long *)(unaff_x19 + 0x580);
              if (lVar11 != 0) {
                FUN_036c10cc(*(undefined4 *)(lVar11 + 0x4c),*(undefined4 *)(lVar11 + 0x50),
                             *(undefined4 *)(lVar11 + 0x54),*(undefined4 *)(lVar11 + 0x58),fVar18,
                             fVar16,fVar12,fVar14,0);
                uVar3 = FUN_01bd7168(0);
                *(undefined4 *)(lVar10 + (long)(int)uVar1 * 0x178 + 0x10c) = uVar3;
                puVar2 = StringLiteral_2271;
                fVar12 = 0.0;
                if (*(char *)(unaff_x19 + 0x108) != '\0') {
                  fVar12 = unaff_s9;
                }
                if ((*(long *)(unaff_x19 + 0x648) != 0) &&
                   (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x648) + 0x20), lVar10 != 0)) {
                  FUN_0396b168(lVar10,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  iVar4 = FUN_0396ad2c();
                  if (*(long *)(unaff_x19 + 0x100) != 0) {
                    iVar15 = *(int *)(*(long *)(unaff_x19 + 0x100) + 0x108);
                    iVar5 = FUN_0396ad34();
                    if (*(long *)(unaff_x19 + 0x100) != 0) {
                      iVar17 = *(int *)(*(long *)(unaff_x19 + 0x100) + 0x10c);
                      iVar6 = FUN_0396ad34();
                      iVar7 = FUN_0396ad44();
                      if (*(long *)(unaff_x19 + 0x100) != 0) {
                        iVar13 = *(int *)(*(long *)(unaff_x19 + 0x100) + 0x10c);
                        iVar8 = FUN_0396ad2c();
                        iVar9 = FUN_0396ad3c();
                        if (((*(long *)(unaff_x19 + 0x100) != 0) && (*unaff_x25 != 0)) &&
                           (lVar10 = *(long *)(*unaff_x25 + 0x38), lVar10 != 0)) {
                          if (*unaff_x26 < *(uint *)(lVar10 + 0x18)) {
                            fVar16 = (((float)iVar4 - unaff_s8) - fVar12) / (float)iVar15;
                            fVar14 = (((float)iVar5 - unaff_s8) - fVar12) / (float)iVar17;
                            iVar4 = *(int *)(*(long *)(unaff_x19 + 0x100) + 0x108);
                            lVar10 = lVar10 + (long)(int)*unaff_x26 * 0x178;
                            *(float *)(lVar10 + 0x7c) = fVar16;
                            *(float *)(lVar10 + 0x80) = fVar14;
                            if ((*unaff_x25 == 0) ||
                               (lVar10 = *(long *)(*unaff_x25 + 0x38), lVar10 == 0))
                            goto LAB_036ee9d8;
                            if (*unaff_x26 < *(uint *)(lVar10 + 0x18)) {
                              lVar10 = lVar10 + (long)(int)*unaff_x26 * 0x178;
                              fVar18 = (fVar12 + (float)iVar6 + unaff_s8 + (float)iVar7) /
                                       (float)iVar13;
                              *(float *)(lVar10 + 0xa4) = fVar16;
                              *(float *)(lVar10 + 0xa8) = fVar18;
                              if ((*unaff_x25 == 0) ||
                                 (lVar10 = *(long *)(*unaff_x25 + 0x38), lVar10 == 0))
                              goto LAB_036ee9d8;
                              if (*unaff_x26 < *(uint *)(lVar10 + 0x18)) {
                                lVar10 = lVar10 + (long)(int)*unaff_x26 * 0x178;
                                fVar12 = (fVar12 + (float)iVar8 + unaff_s8 + (float)iVar9) /
                                         (float)iVar4;
                                *(float *)(lVar10 + 0xcc) = fVar12;
                                *(float *)(lVar10 + 0xd0) = fVar18;
                                if ((*unaff_x25 == 0) ||
                                   (lVar10 = *(long *)(*unaff_x25 + 0x38), lVar10 == 0))
                                goto LAB_036ee9d8;
                                if (*unaff_x26 < *(uint *)(lVar10 + 0x18)) {
                                  lVar10 = lVar10 + (long)(int)*unaff_x26 * 0x178;
                                  *(float *)(lVar10 + 0xf4) = fVar12;
                                  *(float *)(lVar10 + 0xf8) = fVar14;
                                  return;
                                }
                              }
                            }
                          }
LAB_036ee9dc:
                    /* WARNING: Subroutine does not return */
                          FUN_01b48180();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036ee9d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


