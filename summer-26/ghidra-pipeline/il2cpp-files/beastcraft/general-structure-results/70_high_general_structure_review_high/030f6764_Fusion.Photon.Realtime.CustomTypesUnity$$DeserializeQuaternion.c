/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$DeserializeQuaternion
ENTRY_POINT: 030f6764
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__DeserializeQuaternion(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined *puVar24;
  undefined *puVar25;
  uint *puVar26;
  int in_w8;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  long unaff_x21;
  uint uVar33;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  uint uVar34;
  ulong unaff_x25;
  uint uVar35;
  long unaff_x27;
  uint uVar36;
  long unaff_x28;
  long lVar37;
  uint uStack0000000000000004;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  uint uStack000000000000001c;
  uint uStack0000000000000024;
  uint uStack000000000000002c;
  long in_stack_00000038;
  
  if (in_w8 == 0) {
    FUN_02e3ca1c(PTR_DAT_06a322c0);
    FUN_02e3ca1c(PTR_DAT_06a312b0);
    *(undefined1 *)(unaff_x27 + 0x5da) = 1;
  }
  puVar24 = PTR_DAT_06a312a8;
  if ((int)unaff_w24 < 4) {
    FUN_05626668(0x1c,0);
  }
  puVar25 = PTR_DAT_06a322c0;
  puVar26 = (uint *)FUN_0399923c();
  lVar32 = *(long *)puVar24;
  uVar35 = *puVar26;
  if (unaff_w24 < 4) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar32 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  if (*(char *)(unaff_x28 + 0x5e1) == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a322b8);
    *(undefined1 *)(unaff_x28 + 0x5e1) = 1;
  }
  if (*(char *)(unaff_x27 + 0x5da) == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a322c0);
    FUN_02e3ca1c(PTR_DAT_06a312b0);
    *(undefined1 *)(unaff_x27 + 0x5da) = 1;
  }
  if ((int)(unaff_w24 - 4) < 4) {
    FUN_05626668(0x1c,0);
  }
  puVar26 = (uint *)FUN_0399923c(unaff_x23 + 4,unaff_w24 - 4,*(undefined8 *)puVar25);
  lVar32 = *(long *)puVar24;
  uVar33 = *puVar26;
  if (unaff_w24 < 8) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar32 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  if (*(char *)(unaff_x28 + 0x5e1) == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a322b8);
    *(undefined1 *)(unaff_x28 + 0x5e1) = 1;
  }
  if (*(char *)(unaff_x27 + 0x5da) == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a322c0);
    FUN_02e3ca1c(PTR_DAT_06a312b0);
    *(undefined1 *)(unaff_x27 + 0x5da) = 1;
  }
  if ((int)(unaff_w24 - 8) < 4) {
    FUN_05626668(0x1c,0);
  }
  puVar26 = (uint *)FUN_0399923c(unaff_x23 + 8,unaff_w24 - 8,*(undefined8 *)puVar25);
  lVar32 = *(long *)puVar24;
  uVar34 = *puVar26;
  if (unaff_w24 < 0xc) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar32 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  if (*(char *)(unaff_x28 + 0x5e1) == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a322b8);
    *(undefined1 *)(unaff_x28 + 0x5e1) = 1;
  }
  if (*(char *)(unaff_x27 + 0x5da) == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a322c0);
    FUN_02e3ca1c(PTR_DAT_06a312b0);
    *(undefined1 *)(unaff_x27 + 0x5da) = 1;
  }
  if ((int)(unaff_w24 - 0xc) < 4) {
    FUN_05626668(0x1c,0);
  }
  puVar26 = (uint *)FUN_0399923c(unaff_x23 + 0xc,unaff_w24 - 0xc,*(undefined8 *)puVar25);
  puVar24 = PTR_DAT_06a37260;
  if (unaff_x21 != 0) {
    uVar27 = *(uint *)(unaff_x21 + 0x18);
    uVar28 = (ulong)uVar27;
    if (uVar28 != 0) {
      lVar32 = *(long *)(unaff_x21 + 0x20);
      if (lVar32 == 0) goto LAB_030f74d4;
      uVar36 = *(uint *)(lVar32 + 0x18);
      if ((((uVar36 != 0) && (uVar36 != 1)) && (2 < uVar36)) && (uVar36 != 3)) {
        uVar35 = *(uint *)(lVar32 + 0x20) ^ uVar35;
        uVar33 = *(uint *)(lVar32 + 0x24) ^ uVar33;
        uVar34 = *(uint *)(lVar32 + 0x28) ^ uVar34;
        uVar36 = *(uint *)(lVar32 + 0x2c) ^ *puVar26;
        if (*(int *)(unaff_x22 + 0x18) + -1 < 2) {
          uVar31 = 1;
        }
        else {
          uVar1 = 1;
          do {
            uVar31 = uVar1;
            if ((uint)uVar28 <= uVar31) goto LAB_030f74d0;
            lVar32 = *(long *)puVar24;
            lVar37 = *(long *)(unaff_x21 + (long)(int)uVar31 * 8 + 0x20);
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar32 = *(long *)puVar24;
            }
            lVar32 = *(long *)(*(long *)(lVar32 + 0xb8) + 0x18);
            if (lVar32 == 0) goto LAB_030f74d4;
            uVar1 = *(uint *)(lVar32 + 0x18);
            if (((uVar1 <= (uVar35 & 0xff)) || (uVar16 = uVar33 >> 8 & 0xff, uVar1 <= uVar16)) ||
               ((uVar17 = uVar34 >> 0x10 & 0xff, uVar1 <= uVar17 || (uVar1 <= uVar36 >> 0x18))))
            goto LAB_030f74d0;
            if (lVar37 == 0) goto LAB_030f74d4;
            uVar27 = *(uint *)(lVar37 + 0x18);
            if (((uVar27 == 0) || (uVar1 <= (uVar33 & 0xff))) ||
               ((((uVar18 = uVar34 >> 8 & 0xff, uVar1 <= uVar18 ||
                  ((((uVar19 = uVar36 >> 0x10 & 0xff, uVar1 <= uVar19 || (uVar1 <= uVar35 >> 0x18))
                    || (uVar27 == 1)) ||
                   ((uVar1 <= (uVar34 & 0xff) || (uVar20 = uVar36 >> 8 & 0xff, uVar1 <= uVar20))))))
                 || (uVar21 = uVar35 >> 0x10 & 0xff, uVar1 <= uVar21)) ||
                ((uVar1 <= uVar33 >> 0x18 || (uVar27 < 3)))))) goto LAB_030f74d0;
            if (uVar1 <= (uVar36 & 0xff)) goto LAB_030f74d0;
            uVar22 = uVar35 >> 8 & 0xff;
            if ((((uVar1 <= uVar22) || (uVar23 = uVar33 >> 0x10 & 0xff, uVar1 <= uVar23)) ||
                (uVar1 <= uVar34 >> 0x18)) ||
               ((uVar27 == 3 ||
                (uVar28 = *(ulong *)(unaff_x21 + 0x18), uVar27 = (uint)uVar28, uVar27 <= uVar31 + 1)
                ))) goto LAB_030f74d0;
            uVar16 = *(uint *)(lVar32 + (ulong)uVar16 * 4 + 0x20);
            uVar17 = *(uint *)(lVar32 + (ulong)uVar17 * 4 + 0x20);
            uVar2 = *(uint *)(lVar32 + (ulong)(uVar36 >> 0x18) * 4 + 0x20);
            uVar16 = (uVar16 >> 0x18 | uVar16 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar35 & 0xff) * 4 + 0x20) ^
                     (uVar17 >> 0x10 | uVar17 << 0x10) ^ (uVar2 >> 8 | uVar2 << 0x18) ^
                     *(uint *)(lVar37 + 0x20);
            if (uVar1 <= (uVar16 & 0xff)) goto LAB_030f74d0;
            uVar17 = *(uint *)(lVar32 + (ulong)uVar18 * 4 + 0x20);
            uVar18 = *(uint *)(lVar32 + (ulong)uVar19 * 4 + 0x20);
            uVar35 = *(uint *)(lVar32 + (ulong)(uVar35 >> 0x18) * 4 + 0x20);
            uVar17 = (uVar17 >> 0x18 | uVar17 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar33 & 0xff) * 4 + 0x20) ^
                     (uVar18 >> 0x10 | uVar18 << 0x10) ^ (uVar35 >> 8 | uVar35 << 0x18) ^
                     *(uint *)(lVar37 + 0x24);
            uVar35 = uVar17 >> 8 & 0xff;
            if (uVar1 <= uVar35) goto LAB_030f74d0;
            uVar18 = *(uint *)(lVar32 + (ulong)uVar20 * 4 + 0x20);
            uVar19 = *(uint *)(lVar32 + (ulong)uVar21 * 4 + 0x20);
            uVar33 = *(uint *)(lVar32 + (ulong)(uVar33 >> 0x18) * 4 + 0x20);
            uVar18 = (uVar18 >> 0x18 | uVar18 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar34 & 0xff) * 4 + 0x20) ^
                     (uVar19 >> 0x10 | uVar19 << 0x10) ^ (uVar33 >> 8 | uVar33 << 0x18) ^
                     *(uint *)(lVar37 + 0x28);
            uVar33 = uVar18 >> 0x10 & 0xff;
            if (uVar1 <= uVar33) goto LAB_030f74d0;
            uVar19 = *(uint *)(lVar32 + (ulong)uVar22 * 4 + 0x20);
            uVar20 = *(uint *)(lVar32 + (ulong)uVar23 * 4 + 0x20);
            uVar34 = *(uint *)(lVar32 + (ulong)(uVar34 >> 0x18) * 4 + 0x20);
            uVar36 = (uVar19 >> 0x18 | uVar19 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar36 & 0xff) * 4 + 0x20) ^
                     (uVar20 >> 0x10 | uVar20 << 0x10) ^ (uVar34 >> 8 | uVar34 << 0x18) ^
                     *(uint *)(lVar37 + 0x2c);
            if (uVar1 <= uVar36 >> 0x18) goto LAB_030f74d0;
            lVar37 = *(long *)(unaff_x21 + (long)(int)(uVar31 + 1) * 8 + 0x20);
            if (lVar37 == 0) goto LAB_030f74d4;
            uVar34 = *(uint *)(lVar37 + 0x18);
            if (((((uVar34 == 0) || (uVar1 <= (uVar17 & 0xff))) ||
                 ((uVar19 = uVar18 >> 8 & 0xff, uVar1 <= uVar19 ||
                  (((uVar20 = uVar36 >> 0x10 & 0xff, uVar1 <= uVar20 || (uVar1 <= uVar16 >> 0x18))
                   || (uVar34 == 1)))))) ||
                ((uVar1 <= (uVar18 & 0xff) || (uVar21 = uVar36 >> 8 & 0xff, uVar1 <= uVar21)))) ||
               (uVar22 = uVar16 >> 0x10 & 0xff, uVar1 <= uVar22)) goto LAB_030f74d0;
            if ((uVar1 <= uVar17 >> 0x18) || (uVar34 < 3)) goto LAB_030f74d0;
            if ((uVar1 <= (uVar36 & 0xff)) ||
               ((((uVar23 = uVar16 >> 8 & 0xff, uVar1 <= uVar23 ||
                  (uVar2 = uVar17 >> 0x10 & 0xff, uVar1 <= uVar2)) || (uVar1 <= uVar18 >> 0x18)) ||
                (uVar34 == 3)))) goto LAB_030f74d0;
            uVar35 = *(uint *)(lVar32 + (ulong)uVar35 * 4 + 0x20);
            uVar33 = *(uint *)(lVar32 + (ulong)uVar33 * 4 + 0x20);
            uVar34 = *(uint *)(lVar32 + (ulong)(uVar36 >> 0x18) * 4 + 0x20);
            uVar1 = *(uint *)(lVar32 + (ulong)uVar19 * 4 + 0x20);
            uVar19 = *(uint *)(lVar32 + (ulong)uVar20 * 4 + 0x20);
            uVar20 = *(uint *)(lVar32 + (ulong)uVar21 * 4 + 0x20);
            uVar21 = *(uint *)(lVar32 + (ulong)uVar22 * 4 + 0x20);
            uVar22 = *(uint *)(lVar32 + (ulong)uVar23 * 4 + 0x20);
            uVar23 = *(uint *)(lVar32 + (ulong)(uVar17 >> 0x18) * 4 + 0x20);
            uVar2 = *(uint *)(lVar32 + (ulong)uVar2 * 4 + 0x20);
            uVar3 = *(uint *)(lVar32 + (ulong)(uVar16 >> 0x18) * 4 + 0x20);
            uVar4 = *(uint *)(lVar32 + (ulong)(uVar18 >> 0x18) * 4 + 0x20);
            uVar35 = (uVar35 >> 0x18 | uVar35 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar16 & 0xff) * 4 + 0x20) ^
                     (uVar33 >> 0x10 | uVar33 << 0x10) ^ (uVar34 >> 8 | uVar34 << 0x18) ^
                     *(uint *)(lVar37 + 0x20);
            uVar33 = (uVar1 >> 0x18 | uVar1 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar17 & 0xff) * 4 + 0x20) ^
                     (uVar19 >> 0x10 | uVar19 << 0x10) ^ (uVar3 >> 8 | uVar3 << 0x18) ^
                     *(uint *)(lVar37 + 0x24);
            uVar34 = (uVar20 >> 0x18 | uVar20 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar18 & 0xff) * 4 + 0x20) ^
                     (uVar21 >> 0x10 | uVar21 << 0x10) ^ (uVar23 >> 8 | uVar23 << 0x18) ^
                     *(uint *)(lVar37 + 0x28);
            uVar36 = (uVar22 >> 0x18 | uVar22 << 8) ^
                     *(uint *)(lVar32 + (ulong)(uVar36 & 0xff) * 4 + 0x20) ^
                     (uVar2 >> 0x10 | uVar2 << 0x10) ^ (uVar4 >> 8 | uVar4 << 0x18) ^
                     *(uint *)(lVar37 + 0x2c);
            uVar1 = uVar31 + 2;
          } while ((int)(uVar31 + 2) < *(int *)(unaff_x22 + 0x18) + -1);
          uVar31 = uVar31 + 2;
        }
        if (uVar31 < uVar27) {
          lVar32 = *(long *)puVar24;
          lVar37 = *(long *)(unaff_x21 + (long)(int)uVar31 * 8 + 0x20);
          if (*(int *)(lVar32 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar32 = *(long *)puVar24;
          }
          lVar29 = (*(long **)(lVar32 + 0xb8))[3];
          if (lVar29 == 0) goto LAB_030f74d4;
          uVar27 = *(uint *)(lVar29 + 0x18);
          if ((((uVar35 & 0xff) < uVar27) && (uVar1 = uVar33 >> 8 & 0xff, uVar1 < uVar27)) &&
             ((uVar16 = uVar34 >> 0x10 & 0xff, uVar16 < uVar27 && (uVar36 >> 0x18 < uVar27)))) {
            if (lVar37 == 0) goto LAB_030f74d4;
            uVar17 = *(uint *)(lVar37 + 0x18);
            if ((((uVar17 != 0) && ((uVar33 & 0xff) < uVar27)) &&
                ((uVar18 = uVar34 >> 8 & 0xff, uVar18 < uVar27 &&
                 (((uVar19 = uVar36 >> 0x10 & 0xff, uVar19 < uVar27 && (uVar35 >> 0x18 < uVar27)) &&
                  (uVar17 != 1)))))) &&
               ((((((uVar34 & 0xff) < uVar27 && (uVar20 = uVar36 >> 8 & 0xff, uVar20 < uVar27)) &&
                  (uVar21 = uVar35 >> 0x10 & 0xff, uVar21 < uVar27)) &&
                 ((uVar33 >> 0x18 < uVar27 && (2 < uVar17)))) && ((uVar36 & 0xff) < uVar27)))) {
              uVar22 = uVar35 >> 8 & 0xff;
              if ((((uVar22 < uVar27) && (uVar23 = uVar33 >> 0x10 & 0xff, uVar23 < uVar27)) &&
                  (uVar34 >> 0x18 < uVar27)) && (uVar17 != 3)) {
                if (uVar31 + 1 < *(uint *)(unaff_x21 + 0x18)) {
                  lVar32 = **(long **)(lVar32 + 0xb8);
                  if (lVar32 == 0) goto LAB_030f74d4;
                  uVar27 = *(uint *)(lVar29 + (ulong)uVar1 * 4 + 0x20);
                  uVar1 = *(uint *)(lVar29 + (ulong)uVar16 * 4 + 0x20);
                  uVar16 = *(uint *)(lVar29 + (ulong)(uVar36 >> 0x18) * 4 + 0x20);
                  uVar17 = *(uint *)(lVar32 + 0x18);
                  uVar27 = (uVar27 >> 0x18 | uVar27 << 8) ^
                           *(uint *)(lVar29 + (ulong)(uVar35 & 0xff) * 4 + 0x20) ^
                           (uVar1 >> 0x10 | uVar1 << 0x10) ^ (uVar16 >> 8 | uVar16 << 0x18) ^
                           *(uint *)(lVar37 + 0x20);
                  if ((uVar27 & 0xff) < uVar17) {
                    uVar1 = *(uint *)(lVar29 + (ulong)uVar18 * 4 + 0x20);
                    uVar16 = *(uint *)(lVar29 + (ulong)uVar19 * 4 + 0x20);
                    uVar35 = *(uint *)(lVar29 + (ulong)(uVar35 >> 0x18) * 4 + 0x20);
                    uVar35 = (uVar1 >> 0x18 | uVar1 << 8) ^
                             *(uint *)(lVar29 + (ulong)(uVar33 & 0xff) * 4 + 0x20) ^
                             (uVar16 >> 0x10 | uVar16 << 0x10) ^ (uVar35 >> 8 | uVar35 << 0x18) ^
                             *(uint *)(lVar37 + 0x24);
                    uVar1 = uVar35 >> 8 & 0xff;
                    if (uVar1 < uVar17) {
                      lVar30 = *(long *)(unaff_x22 + 0x30);
                      if (lVar30 == 0) goto LAB_030f74d4;
                      uVar16 = *(uint *)(lVar29 + (ulong)uVar20 * 4 + 0x20);
                      uVar18 = *(uint *)(lVar29 + (ulong)uVar21 * 4 + 0x20);
                      uVar33 = *(uint *)(lVar29 + (ulong)(uVar33 >> 0x18) * 4 + 0x20);
                      uVar19 = *(uint *)(lVar30 + 0x18);
                      uVar33 = (uVar16 >> 0x18 | uVar16 << 8) ^
                               *(uint *)(lVar29 + (ulong)(uVar34 & 0xff) * 4 + 0x20) ^
                               (uVar18 >> 0x10 | uVar18 << 0x10) ^ (uVar33 >> 8 | uVar33 << 0x18) ^
                               *(uint *)(lVar37 + 0x28);
                      uVar16 = uVar33 >> 0x10 & 0xff;
                      if (uVar16 < uVar19) {
                        uVar18 = *(uint *)(lVar29 + (ulong)uVar22 * 4 + 0x20);
                        uVar20 = *(uint *)(lVar29 + (ulong)uVar23 * 4 + 0x20);
                        uVar34 = *(uint *)(lVar29 + (ulong)(uVar34 >> 0x18) * 4 + 0x20);
                        uVar34 = (uVar18 >> 0x18 | uVar18 << 8) ^
                                 *(uint *)(lVar29 + (ulong)(uVar36 & 0xff) * 4 + 0x20) ^
                                 (uVar20 >> 0x10 | uVar20 << 0x10) ^ (uVar34 >> 8 | uVar34 << 0x18)
                                 ^ *(uint *)(lVar37 + 0x2c);
                        if (uVar34 >> 0x18 < uVar19) {
                          lVar37 = *(long *)(unaff_x21 + (long)(int)(uVar31 + 1) * 8 + 0x20);
                          if (lVar37 == 0) goto LAB_030f74d4;
                          uVar36 = *(uint *)(lVar37 + 0x18);
                          if (uVar36 != 0) {
                            if ((uVar35 & 0xff) < uVar19) {
                              uVar31 = uVar33 >> 8 & 0xff;
                              if ((uVar31 < uVar17) &&
                                 (uVar18 = uVar34 >> 0x10 & 0xff, uVar18 < uVar17)) {
                                if ((uVar27 >> 0x18 < uVar19) && (uVar36 != 1)) {
                                  if ((uVar33 & 0xff) < uVar19) {
                                    uVar20 = uVar34 >> 8 & 0xff;
                                    if (((uVar20 < uVar17) &&
                                        (uVar21 = uVar27 >> 0x10 & 0xff, uVar21 < uVar17)) &&
                                       ((uVar35 >> 0x18 < uVar17 &&
                                        ((((2 < uVar36 && ((uVar34 & 0xff) < uVar19)) &&
                                          (uVar22 = uVar27 >> 8 & 0xff, uVar22 < uVar19)) &&
                                         (uVar23 = uVar35 >> 0x10 & 0xff, uVar23 < uVar19)))))) {
                                      if ((uVar33 >> 0x18 < uVar17) && (uVar36 != 3)) {
                                        uVar5 = *(undefined1 *)
                                                 (lVar32 + (ulong)(uVar27 & 0xff) + 0x20);
                                        uVar6 = *(undefined1 *)(lVar32 + (ulong)uVar1 + 0x20);
                                        uVar7 = *(undefined1 *)
                                                 (lVar30 + (ulong)(uVar34 >> 0x18) + 0x20);
                                        uVar8 = *(undefined1 *)
                                                 (lVar30 + (ulong)(uVar35 & 0xff) + 0x20);
                                        uVar9 = *(undefined1 *)(lVar32 + (ulong)uVar31 + 0x20);
                                        uVar36 = *(uint *)(lVar37 + 0x20);
                                        uStack0000000000000004 = *(uint *)(lVar37 + 0x24);
                                        uVar10 = *(undefined1 *)(lVar32 + (ulong)uVar18 + 0x20);
                                        uVar11 = *(undefined1 *)
                                                  (lVar30 + (ulong)(uVar27 >> 0x18) + 0x20);
                                        uVar12 = *(undefined1 *)(lVar30 + (ulong)uVar16 + 0x20);
                                        bVar13 = *(byte *)(lVar32 + (ulong)uVar20 + 0x20);
                                        bVar14 = *(byte *)(lVar32 + (ulong)uVar21 + 0x20);
                                        uStack000000000000000c =
                                             (uint)*(byte *)(lVar30 + (ulong)(uVar33 & 0xff) + 0x20)
                                        ;
                                        uStack000000000000002c =
                                             (uint)*(byte *)(lVar30 + (ulong)(uVar34 & 0xff) + 0x20)
                                        ;
                                        bVar15 = *(byte *)(lVar30 + (ulong)uVar22 + 0x20);
                                        uStack0000000000000024 =
                                             (uint)*(byte *)(lVar30 + (ulong)uVar23 + 0x20);
                                        uVar34 = *(uint *)(lVar37 + 0x28);
                                        uStack0000000000000014 =
                                             (uint)*(byte *)(lVar32 + (ulong)(uVar35 >> 0x18) + 0x20
                                                            );
                                        uVar35 = *(uint *)(lVar37 + 0x2c);
                                        uStack000000000000001c =
                                             (uint)*(byte *)(lVar32 + (ulong)(uVar33 >> 0x18) + 0x20
                                                            );
                                        if (DAT_06e855df == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a310a0);
                                          DAT_06e855df = '\x01';
                                        }
                                        if (DAT_06e84ff4 == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a31098);
                                          FUN_02e3ca1c(PTR_DAT_06a31088);
                                          DAT_06e84ff4 = '\x01';
                                        }
                                        puVar24 = PTR_DAT_06a31080;
                                        if ((unaff_x25 & 0xfffffffc) == 0) {
                                          FUN_05626668(0x1c,0);
                                        }
                                        puVar25 = PTR_DAT_06a31098;
                                        puVar26 = (uint *)FUN_03999240(in_stack_00000038,unaff_x25,
                                                                       *(undefined8 *)
                                                                        PTR_DAT_06a31098);
                                        lVar32 = *(long *)puVar24;
                                        uVar33 = (uint)unaff_x25;
                                        *puVar26 = uVar36 ^ CONCAT13(uVar7,CONCAT12(uVar12,CONCAT11(
                                                  uVar6,uVar5)));
                                        if (uVar33 < 4) {
                                          FUN_056265f0(0);
                                        }
                                        if ((*(ushort *)(*(long *)(lVar32 + 0x20) + 0x135) & 1) == 0
                                           ) {
                                          FUN_02e7568c();
                                        }
                                        if (DAT_06e855df == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a310a0);
                                          DAT_06e855df = '\x01';
                                        }
                                        if (DAT_06e84ff4 == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a31098);
                                          FUN_02e3ca1c(PTR_DAT_06a31088);
                                          DAT_06e84ff4 = '\x01';
                                        }
                                        uVar27 = CONCAT13(uVar11,CONCAT12(uVar10,CONCAT11(uVar9,
                                                  uVar8))) ^ uStack0000000000000004;
                                        if ((unaff_x25 + 0xfffffffc & 0xfffffffc) == 0) {
                                          FUN_05626668(0x1c,0);
                                        }
                                        puVar26 = (uint *)FUN_03999240(in_stack_00000038 + 4,
                                                                       unaff_x25 + 0xfffffffc &
                                                                       0xffffffff,
                                                                       *(undefined8 *)puVar25);
                                        puVar24 = PTR_DAT_06a31080;
                                        *puVar26 = uVar27;
                                        lVar32 = *(long *)puVar24;
                                        if (uVar33 < 8) {
                                          FUN_056265f0(0);
                                        }
                                        uVar27 = uStack000000000000000c | (uint)bVar13 << 8;
                                        if ((*(ushort *)(*(long *)(lVar32 + 0x20) + 0x135) & 1) == 0
                                           ) {
                                          FUN_02e7568c();
                                        }
                                        if (DAT_06e855df == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a310a0);
                                          DAT_06e855df = '\x01';
                                        }
                                        uVar36 = uStack0000000000000014 << 0x18;
                                        if (DAT_06e84ff4 == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a31098);
                                          FUN_02e3ca1c(PTR_DAT_06a31088);
                                          DAT_06e84ff4 = '\x01';
                                        }
                                        if ((unaff_x25 + 0xfffffff8 & 0xfffffffc) == 0) {
                                          FUN_05626668(0x1c,0);
                                        }
                                        puVar26 = (uint *)FUN_03999240(in_stack_00000038 + 8,
                                                                       unaff_x25 + 0xfffffff8 &
                                                                       0xffffffff,
                                                                       *(undefined8 *)puVar25);
                                        lVar32 = *(long *)puVar24;
                                        *puVar26 = (uVar27 | (uint)bVar14 << 0x10 | uVar36) ^ uVar34
                                        ;
                                        if (uVar33 < 0xc) {
                                          FUN_056265f0(0);
                                        }
                                        if ((*(ushort *)(*(long *)(lVar32 + 0x20) + 0x135) & 1) == 0
                                           ) {
                                          FUN_02e7568c();
                                        }
                                        if (DAT_06e855df == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a310a0);
                                          DAT_06e855df = '\x01';
                                        }
                                        if (DAT_06e84ff4 == '\0') {
                                          FUN_02e3ca1c(PTR_DAT_06a31098);
                                          FUN_02e3ca1c(PTR_DAT_06a31088);
                                          DAT_06e84ff4 = '\x01';
                                        }
                                        if ((unaff_x25 + 0xfffffff4 & 0xfffffffc) == 0) {
                                          FUN_05626668(0x1c,0);
                                        }
                                        uVar27 = uStack000000000000002c | (uint)bVar15 << 8;
                                        uVar33 = uStack0000000000000024 << 0x10;
                                        uVar34 = uStack000000000000001c << 0x18;
                                        puVar26 = (uint *)FUN_03999240(in_stack_00000038 + 0xc,
                                                                       unaff_x25 + 0xfffffff4 &
                                                                       0xffffffff,
                                                                       *(undefined8 *)puVar25);
                                        *puVar26 = uVar35 ^ (uVar27 | uVar33 | uVar34);
                                        return;
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
              }
            }
          }
        }
      }
    }
LAB_030f74d0:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
LAB_030f74d4:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


