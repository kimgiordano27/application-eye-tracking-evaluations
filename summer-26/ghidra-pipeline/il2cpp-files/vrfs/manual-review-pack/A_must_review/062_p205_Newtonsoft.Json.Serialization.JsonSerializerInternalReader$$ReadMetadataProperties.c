/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 01bbb708
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
               (long param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong in_x9;
  uint in_w10;
  uint uVar15;
  uint uVar16;
  ulong in_x11;
  uint uVar17;
  ulong in_x12;
  uint *puVar18;
  int in_w13;
  uint uVar19;
  uint in_w14;
  uint uVar20;
  uint in_w15;
  long lVar21;
  uint in_w16;
  uint in_w17;
  int *piVar22;
  long unaff_x20;
  undefined8 *unaff_x22;
  uint uVar23;
  ulong uVar24;
  long unaff_x24;
  uint unaff_w25;
  int *piVar25;
  
  do {
    uVar20 = in_w16;
    if (in_w13 < param_2) {
      if (in_w15 <= in_w16) goto LAB_01bbbc54;
      *(uint *)(unaff_x20 + (long)(int)in_w16 * 4 + 0x20) = in_w17;
      uVar20 = in_w14;
      if ((int)in_w16 < 3) goto LAB_01bbb734;
    }
    else {
LAB_01bbb734:
      do {
        if (unaff_x20 == 0) goto LAB_01bbbc58;
                    /* try { // try from 01bbb73c to 01cbb763 has its CatchHandler @ 01bbb784 */
        if (*(uint *)(unaff_x20 + 0x18) <= uVar20) goto LAB_01bbbc54;
        in_w14 = unaff_w25 + 1;
        uVar24 = in_x9 & 0xffffffff;
        uVar13 = (uint)in_x9;
        *(uint *)(unaff_x20 + (long)(int)uVar20 * 4 + 0x20) = uVar13;
        do {
          in_x9 = in_x9 + 1;
          if (in_x9 == in_x11) {
                    /* try { // try from 01bbb764 to 01cbb76f has its CatchHandler @ 01bbb250 */
            if (1 < (int)in_w14) goto LAB_01bbb7c0;
            if (unaff_x20 == 0) goto LAB_01bbbc58;
                    /* catch() { ... } // from try @ 01bbb6f0 with catch @ 01bbb778 */
            uVar20 = *(uint *)(unaff_x20 + 0x18);
            lVar10 = (long)(int)in_w14;
            goto LAB_01bbb784;
          }
          if (in_x12 <= in_x9) goto LAB_01bbbc54;
          sVar5 = *(short *)(param_1 + in_x9 * 2 + 0x20);
          in_w13 = (int)sVar5;
        } while (sVar5 == 0);
        unaff_w25 = in_w14;
        uVar20 = in_w14;
      } while ((int)in_w14 < 1);
      if (unaff_x20 == 0) goto LAB_01bbbc58;
      in_w15 = *(uint *)(unaff_x20 + 0x18);
    }
    uVar20 = in_w14;
    if (-1 < (int)(in_w14 - 1)) {
      uVar20 = in_w14 - 1;
    }
    uVar20 = (int)uVar20 >> 1;
    if ((in_w15 <= uVar20) ||
       (in_w17 = *(uint *)(unaff_x20 + (long)(int)uVar20 * 4 + 0x20), in_w10 <= in_w17))
    goto LAB_01bbbc54;
    param_2 = (int)*(short *)(param_1 + (long)(int)in_w17 * 2 + 0x20);
    in_w16 = in_w14;
    in_w14 = uVar20;
  } while( true );
  while( true ) {
    iVar9 = uVar23 + 1;
    lVar11 = lVar10 + 1;
    if (1 < (int)uVar23) {
      iVar9 = 0;
    }
    *(int *)(unaff_x20 + 0x20 + lVar10 * 4) = iVar9;
    uVar24 = (ulong)uVar13;
    lVar10 = lVar11;
    if (lVar11 == 2) break;
LAB_01bbb784:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01bbb73c with catch @ 01bbb784
                       catch(type#2 @ 00000000) { ... } // from try @ 01bbb770 with catch @ 01bbb784
                        */
    uVar23 = (uint)uVar24;
    uVar13 = uVar23;
    if ((int)uVar23 < 2) {
      uVar13 = uVar23 + 1;
    }
    if (uVar20 <= (uint)lVar10) goto LAB_01bbbc54;
  }
  in_w14 = 2;
LAB_01bbb7c0:
  uVar8 = *(undefined4 *)(unaff_x24 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar8 = FUN_0321d28c(uVar13 + 1,uVar8,0);
  *(undefined4 *)(unaff_x24 + 0x24) = uVar8;
  lVar10 = FUN_0160edfc(*unaff_x22,in_w14 * 4 + -2);
  lVar11 = FUN_0160edfc(*unaff_x22,in_w14 * 2 + -1);
  if (unaff_x20 == 0) {
LAB_01bbbc58:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar23 = *(uint *)(unaff_x20 + 0x18);
  uVar13 = 0;
  uVar20 = 1;
  do {
    if (uVar23 <= uVar13) goto LAB_01bbbc54;
    puVar18 = (uint *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20);
    uVar19 = *puVar18;
    if (lVar10 == 0) goto LAB_01bbbc58;
    uVar16 = *(uint *)(lVar10 + 0x18);
    if ((uVar16 <= uVar20 - 1) ||
       (*(uint *)(lVar10 + (long)(int)(uVar20 - 1) * 4 + 0x20) = uVar19, uVar16 <= uVar20))
    goto LAB_01bbbc54;
    *(undefined4 *)(lVar10 + (long)(int)uVar20 * 4 + 0x20) = 0xffffffff;
    lVar21 = *(long *)(unaff_x24 + 0x10);
    if (lVar21 == 0) goto LAB_01bbbc58;
    if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_01bbbc54;
    if (lVar11 == 0) goto LAB_01bbbc58;
    if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_01bbbc54;
    uVar20 = uVar20 + 2;
    *(int *)(lVar11 + (long)(int)uVar13 * 4 + 0x20) =
         (int)*(short *)(lVar21 + (long)(int)uVar19 * 2 + 0x20) << 8;
    *puVar18 = uVar13;
    uVar13 = uVar13 + 1;
  } while (in_w14 != uVar13);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar20 = in_w14;
  while ((uVar13 = (uint)uVar14, uVar13 != 0 && (in_w14 = in_w14 - 1, in_w14 < uVar13))) {
    uVar23 = *(uint *)(unaff_x20 + 0x20);
    uVar19 = *(uint *)(unaff_x20 + (long)(int)in_w14 * 4 + 0x20);
    if ((int)in_w14 < 2) {
      uVar16 = 0;
    }
    else {
      uVar17 = 1;
      uVar15 = 0;
      do {
        uVar2 = uVar17 + 1;
        uVar16 = uVar17;
        if ((int)uVar2 < (int)in_w14) {
          if (uVar13 <= uVar17) goto LAB_01bbbc54;
          uVar6 = *(uint *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20);
          if (((*(uint *)(lVar11 + 0x18) <= uVar6) || (uVar13 <= uVar2)) ||
             (uVar7 = *(uint *)(unaff_x20 + (long)(int)uVar2 * 4 + 0x20),
             *(uint *)(lVar11 + 0x18) <= uVar7)) goto LAB_01bbbc54;
          uVar16 = uVar2;
          if (*(int *)(lVar11 + (long)(int)uVar6 * 4 + 0x20) <=
              *(int *)(lVar11 + (long)(int)uVar7 * 4 + 0x20)) {
            uVar16 = uVar17;
          }
        }
        if ((uVar13 <= uVar16) || (uVar13 <= uVar15)) goto LAB_01bbbc54;
        uVar17 = uVar16 << 1 | 1;
        *(undefined4 *)(unaff_x20 + 0x20 + (long)(int)uVar15 * 4) =
             *(undefined4 *)(unaff_x20 + 0x20 + (long)(int)uVar16 * 4);
        uVar15 = uVar16;
      } while ((int)uVar17 < (int)in_w14);
    }
    uVar17 = *(uint *)(lVar11 + 0x18);
    if (uVar17 <= uVar19) break;
    if (0 < (int)uVar16) {
      iVar9 = *(int *)(lVar11 + (long)(int)uVar19 * 4 + 0x20);
      do {
        uVar15 = uVar16;
        if (-1 < (int)(uVar16 - 1)) {
          uVar15 = uVar16 - 1;
        }
        uVar15 = (int)uVar15 >> 1;
        if ((uVar13 <= uVar15) ||
           (uVar2 = *(uint *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20), uVar17 <= uVar2))
        goto LAB_01bbbc54;
        if (*(int *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) <= iVar9) break;
        if (uVar13 <= uVar16) goto LAB_01bbbc54;
        *(uint *)(unaff_x20 + (long)(int)uVar16 * 4 + 0x20) = uVar2;
        bVar1 = 2 < (int)uVar16;
        uVar16 = uVar15;
      } while (bVar1);
    }
    if (uVar13 <= uVar16) break;
    *(uint *)(unaff_x20 + 0x20 + (long)(int)uVar16 * 4) = uVar19;
    uVar13 = *(uint *)(lVar10 + 0x18);
    uVar19 = uVar20 << 1;
    if (uVar13 <= uVar19) break;
    uVar16 = *(uint *)(unaff_x20 + 0x20);
    *(uint *)(lVar10 + (long)(int)uVar19 * 4 + 0x20) = uVar23;
    if ((uVar13 <= (uint)((long)(int)uVar19 | 1U)) ||
       (*(uint *)(lVar10 + ((long)(int)uVar19 | 1U) * 4 + 0x20) = uVar16, uVar17 <= uVar23)) break;
    piVar25 = (int *)(lVar11 + (long)(int)uVar23 * 4 + 0x20);
    uVar3 = *(undefined1 *)piVar25;
    if (uVar17 <= uVar16) break;
    piVar22 = (int *)(lVar11 + (long)(int)uVar16 * 4 + 0x20);
    uVar4 = *(undefined1 *)piVar22;
    if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    iVar9 = FUN_0321d484(uVar3,uVar4,0);
    uVar13 = *(uint *)(lVar11 + 0x18);
    if (((uVar13 <= uVar23) || (uVar13 <= uVar16)) || (uVar13 <= uVar20)) break;
    iVar9 = (*piVar25 - iVar9) + *piVar22 + 1;
    *(int *)(lVar11 + (long)(int)uVar20 * 4 + 0x20) = iVar9;
    if ((int)in_w14 < 2) {
      uVar23 = 0;
LAB_01bbbbe8:
      uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
    }
    else {
      uVar16 = *(uint *)(unaff_x20 + 0x18);
      uVar19 = 1;
      uVar17 = 0;
      do {
        uVar15 = uVar19 + 1;
        uVar23 = uVar19;
        if ((int)uVar15 < (int)in_w14) {
          if (((uVar16 <= uVar19) ||
              (uVar2 = *(uint *)(unaff_x20 + (long)(int)uVar19 * 4 + 0x20), uVar13 <= uVar2)) ||
             ((uVar16 <= uVar15 ||
              (uVar6 = *(uint *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20), uVar13 <= uVar6))))
          goto LAB_01bbbc54;
          uVar23 = uVar15;
          if (*(int *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) <=
              *(int *)(lVar11 + (long)(int)uVar6 * 4 + 0x20)) {
            uVar23 = uVar19;
          }
        }
        if ((uVar16 <= uVar23) || (uVar16 <= uVar17)) goto LAB_01bbbc54;
        uVar19 = uVar23 << 1 | 1;
        *(undefined4 *)(unaff_x20 + 0x20 + (long)(int)uVar17 * 4) =
             *(undefined4 *)(unaff_x20 + 0x20 + (long)(int)uVar23 * 4);
        uVar17 = uVar23;
      } while ((int)uVar19 < (int)in_w14);
      if ((int)uVar23 < 1) goto LAB_01bbbbe8;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
      do {
        uVar19 = uVar23;
        if (-1 < (int)(uVar23 - 1)) {
          uVar19 = uVar23 - 1;
        }
        uVar19 = (int)uVar19 >> 1;
        if (((uint)uVar14 <= uVar19) ||
           (uVar16 = *(uint *)(unaff_x20 + (long)(int)uVar19 * 4 + 0x20), uVar13 <= uVar16))
        goto LAB_01bbbc54;
        if (*(int *)(lVar11 + (long)(int)uVar16 * 4 + 0x20) <= iVar9) break;
        if ((uint)uVar14 <= uVar23) goto LAB_01bbbc54;
        *(uint *)(unaff_x20 + (long)(int)uVar23 * 4 + 0x20) = uVar16;
        bVar1 = 2 < (int)uVar23;
        uVar23 = uVar19;
      } while (bVar1);
    }
    if ((uint)uVar14 <= uVar23) break;
    *(uint *)(unaff_x20 + (long)(int)uVar23 * 4 + 0x20) = uVar20;
    uVar20 = uVar20 + 1;
    if ((int)in_w14 < 2) {
      iVar9 = *(int *)(lVar10 + 0x18);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      if (*(int *)(unaff_x20 + 0x20) != (iVar9 >> 1) + -1) {
        thunk_FUN_0159f088(PTR_DAT_06da2b60);
        uVar14 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        uVar12 = thunk_FUN_0159f088(PTR_DAT_06e19fd8);
        FUN_04437484(uVar14,uVar12,0);
        uVar12 = thunk_FUN_0159f088(PTR_DAT_06dc9058);
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar14,uVar12);
      }
      FUN_01bbbf7c(unaff_x24,lVar10);
      return;
    }
  }
LAB_01bbbc54:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


