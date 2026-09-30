/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 023eab9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  float *unaff_x20;
  undefined8 *unaff_x24;
  int iVar6;
  long unaff_x29;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float fVar11;
  float unaff_s13;
  float fVar12;
  float fVar13;
  float unaff_s14;
  float fVar14;
  float unaff_s15;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar8 = unaff_s9 * unaff_s10;
  fVar12 = unaff_s13 * unaff_s10;
  fVar7 = unaff_s8 * unaff_s10;
  FUN_01c5dc8c();
  if (*(char *)(unaff_x29 + -0xa0) == '\0') {
    fVar28 = (float)*(undefined8 *)(unaff_x29 + -0xc0);
    *(float *)(unaff_x29 + -0x100) = unaff_s12;
    fVar9 = *(float *)(unaff_x29 + -0xfc);
    fVar21 = *(float *)(unaff_x29 + -0xf8);
  }
  else {
    fVar30 = *(float *)(unaff_x29 + -0x104);
    fVar29 = *(float *)(unaff_x29 + -0x100);
    fVar9 = *(float *)(unaff_x29 + -0xfc);
    fVar28 = *(float *)(unaff_x29 + -0x11c);
    fVar22 = fVar30 * unaff_s15 - fVar29 * unaff_s11;
    fVar23 = fVar28 * unaff_s11 - fVar30 * unaff_s14;
    fVar21 = fVar29 * unaff_s14 - fVar28 * unaff_s15;
    fVar22 = fVar22 + fVar22;
    fVar23 = fVar23 + fVar23;
    fVar21 = fVar21 + fVar21;
    fVar24 = (float)*(undefined8 *)(unaff_x29 + -0xc0) +
             fVar28 + fVar9 * fVar22 + (unaff_s15 * fVar21 - unaff_s11 * fVar23);
    fVar28 = (float)*(undefined8 *)(unaff_x29 + -0xd0) +
             fVar29 + fVar9 * fVar23 + (unaff_s11 * fVar22 - unaff_s14 * fVar21);
    fVar21 = (float)*(undefined8 *)(unaff_x29 + -0xe0) +
             fVar30 + fVar9 * fVar21 + (unaff_s14 * fVar23 - unaff_s15 * fVar22);
    fVar29 = fVar24 * unaff_x20[1] + fVar28 * unaff_x20[5] + fVar21 * unaff_x20[9] + unaff_x20[0xd];
    fVar30 = fVar24 * unaff_x20[2] + fVar28 * unaff_x20[6] + fVar21 * unaff_x20[10] + unaff_x20[0xe]
    ;
    fVar28 = (float)FUN_03a4388c(fVar24 * *unaff_x20 + fVar28 * unaff_x20[4] + fVar21 * unaff_x20[8]
                                 + unaff_x20[0xc],0);
    fVar21 = *(float *)(unaff_x29 + -0xf8) - fVar12;
    fVar23 = *(float *)(unaff_x29 + -0xa4) - fVar7;
    fVar22 = unaff_s12 - fVar8;
    if (fVar28 <= unaff_s12 - fVar8) {
      fVar22 = fVar28;
    }
    if (fVar29 <= fVar21) {
      fVar21 = fVar29;
    }
    fVar12 = *(float *)(unaff_x29 + -0xf8) + fVar12;
    if (fVar30 <= fVar23) {
      fVar23 = fVar30;
    }
    fVar7 = *(float *)(unaff_x29 + -0xa4) + fVar7;
    fVar24 = unaff_s12 + fVar8;
    if (unaff_s12 + fVar8 <= fVar28) {
      fVar24 = fVar28;
    }
    if (fVar12 <= fVar29) {
      fVar12 = fVar29;
    }
    fVar28 = (float)*(undefined8 *)(unaff_x29 + -0xc0);
    if (fVar7 <= fVar30) {
      fVar7 = fVar30;
    }
    fVar8 = (fVar24 - fVar22) * 0.5;
    fVar12 = (fVar12 - fVar21) * 0.5;
    fVar7 = (fVar7 - fVar23) * 0.5;
    fVar21 = fVar21 + fVar12;
    *(float *)(unaff_x29 + -0x100) = fVar22 + fVar8;
    *(float *)(unaff_x29 + -0xa4) = fVar23 + fVar7;
  }
  fVar31 = *(float *)(unaff_x29 + -0xf4);
  fVar30 = *(float *)(unaff_x29 + -0xf0);
  fVar22 = *(float *)(unaff_x29 + -0xec);
  fVar23 = fVar30 * unaff_s14 - fVar22 * unaff_s15;
  fVar29 = fVar31 * unaff_s15 - fVar30 * unaff_s11;
  fVar24 = fVar22 * unaff_s11 - fVar31 * unaff_s14;
  fVar29 = fVar29 + fVar29;
  fVar24 = fVar24 + fVar24;
  fVar23 = fVar23 + fVar23;
  fVar30 = (float)*(undefined8 *)(unaff_x29 + -0xd0) +
           fVar30 + fVar9 * fVar24 + (unaff_s11 * fVar29 - unaff_s14 * fVar23);
  fVar28 = fVar28 + fVar22 + fVar9 * fVar29 + (unaff_s15 * fVar23 - unaff_s11 * fVar24);
  fVar9 = (float)*(undefined8 *)(unaff_x29 + -0xe0) +
          fVar31 + fVar9 * fVar23 + (unaff_s14 * fVar24 - unaff_s15 * fVar29);
  fVar23 = fVar28 * unaff_x20[1] + fVar30 * unaff_x20[5] + fVar9 * unaff_x20[9] + unaff_x20[0xd];
  fVar29 = fVar28 * unaff_x20[2] + fVar30 * unaff_x20[6] + fVar9 * unaff_x20[10] + unaff_x20[0xe];
  fVar22 = (float)FUN_03a4388c(fVar28 * *unaff_x20 + fVar30 * unaff_x20[4] + fVar9 * unaff_x20[8] +
                               unaff_x20[0xc],0);
  plVar4 = (long *)*unaff_x24;
  fVar28 = *(float *)(unaff_x29 + -0x100) - fVar8;
  fVar9 = *(float *)(unaff_x29 + -0xa4) - fVar7;
  fVar7 = fVar7 + *(float *)(unaff_x29 + -0xa4);
  if (fVar22 <= fVar28) {
    fVar28 = fVar22;
  }
  lVar2 = *plVar4;
  fVar8 = fVar8 + *(float *)(unaff_x29 + -0x100);
  fVar30 = fVar21 - fVar12;
  if (fVar23 <= fVar21 - fVar12) {
    fVar30 = fVar23;
  }
  if (fVar29 <= fVar9) {
    fVar9 = fVar29;
  }
  if (fVar8 <= fVar22) {
    fVar8 = fVar22;
  }
  fVar22 = fVar12 + fVar21;
  if (fVar12 + fVar21 <= fVar23) {
    fVar22 = fVar23;
  }
  if (fVar7 <= fVar29) {
    fVar7 = fVar29;
  }
  fVar12 = (fVar8 - fVar28) * 0.5;
  fVar21 = (fVar22 - fVar30) * 0.5;
  fVar8 = (fVar7 - fVar9) * 0.5;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
    plVar4 = (long *)*unaff_x24;
  }
  fVar28 = fVar28 + fVar12;
  lVar3 = *(long *)(unaff_x29 + -0x68);
  if (-1 < *(int *)(*plVar4 + 0x28)) {
    lVar3 = unaff_x29 + -0x68;
  }
  fVar30 = fVar30 + fVar21;
  fVar9 = fVar9 + fVar8;
  FUN_01c5dc8c(lVar2,plVar4[1],*(undefined8 *)(unaff_x29 + -0xe8),lVar3,0,unaff_x29 + -0xa0);
  iVar1 = *(int *)(unaff_x29 + -0xa0);
  if (1 < iVar1) {
    iVar6 = 1;
    do {
      plVar4 = (long *)*unaff_x24;
      *(float *)(unaff_x29 + -0xc0) = fVar30;
      *(float *)(unaff_x29 + -0xd0) = fVar28;
      *(float *)(unaff_x29 + -0xa4) = fVar9;
      lVar2 = *plVar4;
      *(float *)(unaff_x29 + -0xe0) = fVar21;
      *(float *)(unaff_x29 + -0xec) = fVar12;
      *(float *)(unaff_x29 + -0xe8) = fVar8;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c72394();
        plVar4 = (long *)*unaff_x24;
      }
      lVar3 = plVar4[2];
      *(int *)(unaff_x29 + -0x54) = iVar6;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x54;
      FUN_01c5dc8c(lVar2,lVar3);
      fVar31 = *(float *)(unaff_x29 + -0x90);
      fVar13 = *(float *)(unaff_x29 + -0xa0);
      fVar14 = *(float *)(unaff_x29 + -0x9c);
      fVar12 = unaff_x20[4];
      fVar7 = unaff_x20[5];
      *(undefined4 *)(unaff_x29 + -0xfc) = *(undefined4 *)(unaff_x29 + -0x84);
      *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0x88);
      fVar11 = *(float *)(unaff_x29 + -0x7c);
      fVar8 = unaff_x20[2];
      fVar21 = unaff_x20[6];
      fVar10 = *(float *)(unaff_x29 + -0x98);
      fVar24 = *(float *)(unaff_x29 + -0x94);
      *(undefined4 *)(unaff_x29 + -0x100) = *(undefined4 *)(unaff_x29 + -0x80);
      fVar30 = *(float *)(unaff_x29 + -0x78);
      fVar9 = unaff_x20[8];
      fVar28 = unaff_x20[9];
      fVar22 = unaff_x20[10];
      fVar16 = unaff_x20[0xc];
      fVar23 = unaff_x20[0xd];
      *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0x74);
      *(undefined4 *)(unaff_x29 + -0xf0) = *(undefined4 *)(unaff_x29 + -0x8c);
      fVar15 = *(float *)(unaff_x29 + -0x70);
      fVar23 = fVar13 * unaff_x20[1] + fVar14 * fVar7 + fVar10 * fVar28 + fVar23;
      fVar29 = fVar13 * fVar8 + fVar14 * fVar21 + fVar10 * fVar22 + unaff_x20[0xe];
      fVar22 = (float)FUN_03a4388c(fVar13 * *unaff_x20 + fVar14 * fVar12 + fVar10 * fVar9 + fVar16,0
                                  );
      fVar27 = *(float *)(unaff_x29 + -0xf4);
      fVar25 = *(float *)(unaff_x29 + -0xf0);
      fVar21 = *(float *)(unaff_x29 + -0xc0) - *(float *)(unaff_x29 + -0xe0);
      fVar8 = *(float *)(unaff_x29 + -0xa4) - *(float *)(unaff_x29 + -0xe8);
      fVar28 = *(float *)(unaff_x29 + -0xe0) + *(float *)(unaff_x29 + -0xc0);
      fVar12 = *(float *)(unaff_x29 + -0xe8) + *(float *)(unaff_x29 + -0xa4);
      fVar7 = *(float *)(unaff_x29 + -0xd0) - *(float *)(unaff_x29 + -0xec);
      fVar9 = *(float *)(unaff_x29 + -0xec) + *(float *)(unaff_x29 + -0xd0);
      fVar16 = fVar31 * fVar11 - fVar24 * fVar30;
      fVar18 = fVar25 * fVar30 - fVar31 * fVar27;
      fVar19 = fVar24 * fVar27 - fVar25 * fVar11;
      fVar16 = fVar16 + fVar16;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      if (fVar22 <= fVar7) {
        fVar7 = fVar22;
      }
      if (fVar23 <= fVar21) {
        fVar21 = fVar23;
      }
      if (fVar29 <= fVar8) {
        fVar8 = fVar29;
      }
      if (fVar9 <= fVar22) {
        fVar9 = fVar22;
      }
      fVar22 = *unaff_x20;
      fVar26 = unaff_x20[4];
      if (fVar28 <= fVar23) {
        fVar28 = fVar23;
      }
      fVar23 = fVar13 + fVar24 + fVar15 * fVar18 + (fVar30 * fVar16 - fVar27 * fVar19);
      if (fVar12 <= fVar29) {
        fVar12 = fVar29;
      }
      fVar20 = unaff_x20[8];
      fVar17 = fVar14 + fVar31 + fVar15 * fVar19 + (fVar27 * fVar18 - fVar11 * fVar16);
      fVar25 = fVar10 + fVar25 + fVar15 * fVar16 + (fVar11 * fVar19 - fVar30 * fVar18);
      fVar19 = unaff_x20[0xc];
      fVar16 = fVar23 * unaff_x20[1] + fVar17 * unaff_x20[5] + fVar25 * unaff_x20[9] +
               unaff_x20[0xd];
      fVar18 = fVar23 * unaff_x20[2] + fVar17 * unaff_x20[6] + fVar25 * unaff_x20[10] +
               unaff_x20[0xe];
      fVar29 = (fVar9 - fVar7) * 0.5;
      *(float *)(unaff_x29 + -0xe0) = fVar10;
      *(float *)(unaff_x29 + -0xec) = fVar30;
      *(float *)(unaff_x29 + -0xe8) = fVar11;
      fVar24 = (fVar28 - fVar21) * 0.5;
      fVar31 = (fVar12 - fVar8) * 0.5;
      *(float *)(unaff_x29 + -0x104) = fVar15;
      *(float *)(unaff_x29 + -0xc0) = fVar13;
      *(float *)(unaff_x29 + -0xd0) = fVar14;
      fVar12 = (float)FUN_03a4388c(fVar23 * fVar22 + fVar17 * fVar26 + fVar25 * fVar20 + fVar19,0);
      plVar4 = (long *)*unaff_x24;
      fVar28 = (fVar7 + fVar29) - fVar29;
      fVar30 = (fVar21 + fVar24) - fVar24;
      lVar2 = *plVar4;
      fVar9 = (fVar8 + fVar31) - fVar31;
      fVar24 = fVar24 + fVar21 + fVar24;
      if (fVar12 <= fVar28) {
        fVar28 = fVar12;
      }
      fVar29 = fVar29 + fVar7 + fVar29;
      if (fVar16 <= fVar30) {
        fVar30 = fVar16;
      }
      if (fVar18 <= fVar9) {
        fVar9 = fVar18;
      }
      fVar31 = fVar31 + fVar8 + fVar31;
      if (fVar29 <= fVar12) {
        fVar29 = fVar12;
      }
      if (fVar24 <= fVar16) {
        fVar24 = fVar16;
      }
      if (fVar31 <= fVar18) {
        fVar31 = fVar18;
      }
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c72394();
        plVar4 = (long *)*unaff_x24;
      }
      fVar12 = (fVar29 - fVar28) * 0.5;
      fVar21 = (fVar24 - fVar30) * 0.5;
      fVar8 = (fVar31 - fVar9) * 0.5;
      fVar28 = fVar28 + fVar12;
      fVar30 = fVar30 + fVar21;
      fVar9 = fVar9 + fVar8;
      FUN_01c5dc8c(lVar2,plVar4[3]);
      if (*(char *)(unaff_x29 + -0xa0) == '\0') {
        plVar4 = (long *)*unaff_x24;
        lVar2 = *plVar4;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01c72394();
          plVar4 = (long *)*unaff_x24;
        }
        FUN_01c5dc8c(lVar2,plVar4[3]);
        if ((iVar6 < iVar1 + -1) && (*(char *)(unaff_x29 + -0xa0) == '\0')) goto LAB_023eb30c;
      }
      else {
LAB_023eb30c:
        fVar13 = *(float *)(unaff_x29 + -0x100);
        fVar11 = *(float *)(unaff_x29 + -0xfc);
        *(float *)(unaff_x29 + -0xa4) = fVar9;
        fVar10 = *(float *)(unaff_x29 + -0xec);
        fVar7 = *(float *)(unaff_x29 + -0xe8);
        fVar22 = *(float *)(unaff_x29 + -0xf8);
        fVar29 = fVar22 * fVar27 - fVar13 * fVar7;
        fVar31 = *(float *)(unaff_x29 + -0x104);
        fVar9 = fVar11 * fVar7 - fVar22 * fVar10;
        fVar23 = fVar13 * fVar10 - fVar11 * fVar27;
        fVar23 = fVar23 + fVar23;
        fVar29 = fVar29 + fVar29;
        fVar9 = fVar9 + fVar9;
        fVar24 = *(float *)(unaff_x29 + -0xc0) +
                 fVar22 + fVar31 * fVar23 + (fVar10 * fVar9 - fVar27 * fVar29);
        fVar22 = *(float *)(unaff_x29 + -0xd0) +
                 fVar11 + fVar31 * fVar29 + (fVar27 * fVar23 - fVar7 * fVar9);
        fVar7 = *(float *)(unaff_x29 + -0xe0) +
                fVar13 + fVar31 * fVar9 + (fVar7 * fVar29 - fVar10 * fVar23);
        fVar23 = fVar24 * unaff_x20[1] + fVar22 * unaff_x20[5] + fVar7 * unaff_x20[9] +
                 unaff_x20[0xd];
        fVar29 = fVar24 * unaff_x20[2] + fVar22 * unaff_x20[6] + fVar7 * unaff_x20[10] +
                 unaff_x20[0xe];
        fVar22 = (float)FUN_03a4388c(fVar24 * *unaff_x20 + fVar22 * unaff_x20[4] +
                                     fVar7 * unaff_x20[8] + unaff_x20[0xc],0);
        fVar9 = *(float *)(unaff_x29 + -0xa4) - fVar8;
        fVar7 = fVar28 - fVar12;
        if (fVar22 <= fVar28 - fVar12) {
          fVar7 = fVar22;
        }
        fVar24 = fVar30 - fVar21;
        if (fVar23 <= fVar30 - fVar21) {
          fVar24 = fVar23;
        }
        if (fVar29 <= fVar9) {
          fVar9 = fVar29;
        }
        fVar8 = fVar8 + *(float *)(unaff_x29 + -0xa4);
        fVar31 = fVar12 + fVar28;
        if (fVar12 + fVar28 <= fVar22) {
          fVar31 = fVar22;
        }
        fVar28 = fVar21 + fVar30;
        if (fVar21 + fVar30 <= fVar23) {
          fVar28 = fVar23;
        }
        if (fVar8 <= fVar29) {
          fVar8 = fVar29;
        }
        fVar12 = (fVar31 - fVar7) * 0.5;
        fVar21 = (fVar28 - fVar24) * 0.5;
        fVar8 = (fVar8 - fVar9) * 0.5;
        fVar28 = fVar7 + fVar12;
        fVar30 = fVar24 + fVar21;
        fVar9 = fVar9 + fVar8;
      }
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  pfVar5 = *(float **)(unaff_x29 + -0x110);
  *pfVar5 = fVar28;
  pfVar5[1] = fVar30;
  pfVar5[2] = fVar9;
  pfVar5[3] = fVar12;
  pfVar5[4] = fVar21;
  pfVar5[5] = fVar8;
  if (*(long *)(*(long *)(unaff_x29 + -0x118) + 0x28) == *(long *)(unaff_x29 + -0x50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


