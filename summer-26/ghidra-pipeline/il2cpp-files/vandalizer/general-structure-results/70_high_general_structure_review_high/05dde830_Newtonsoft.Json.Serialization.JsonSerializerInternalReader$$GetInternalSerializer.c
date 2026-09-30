/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 05dde830
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 in_CY;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint in_w8;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  uint uVar16;
  long lVar17;
  long unaff_x24;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
code_r0x05dde830:
  if ((bool)in_CY) {
LAB_05dded50:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  uVar15 = (uint)*(ushort *)(unaff_x28 + (long)(int)in_w8 * 2);
  uVar16 = in_w8 + 1;
                    /* try { // try from 05dde840 to 05ede85f has its CatchHandler @ 05dde988 */
LAB_05dde874:
                    /* try { // try from 05dde874 to 05ede87f has its CatchHandler @ 05dde978 */
  uVar12 = (uint)unaff_x19;
  *(uint *)(unaff_x29 + -0x94) = uVar15;
  bVar7 = (uVar15 & 0xffff) == 0x2e;
  *(uint *)(unaff_x29 + -0x74) = in_w8;
  uVar14 = 0;
  uVar15 = uVar16;
  if (uVar16 <= uVar12) {
    uVar15 = uVar12;
  }
  uVar11 = (ulong)(int)unaff_w22;
  unaff_w22 = 0;
  *(uint *)(unaff_x29 + -0x78) = (uint)(bVar7 || (int)uVar12 <= (int)in_w8);
  *(uint *)(unaff_x29 + -100) = (uint)(!bVar7 || (int)uVar12 <= (int)in_w8);
  *(uint *)(unaff_x29 + -0x60) =
       (uint)((int)uVar12 <= (int)uVar16) | ((int)in_w8 < (int)uVar12 && bVar7) ^ 1;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(ulong *)(unaff_x29 + -0x88) = uVar11;
  *(uint *)(unaff_x29 + -0x68) = uVar16;
  in_w8 = uVar16;
  do {
    uVar14 = (ulong)(int)uVar14;
    uVar2 = uVar14;
    if ((long)uVar14 <= (long)uVar11) {
      uVar2 = uVar11;
    }
    *(ulong *)(unaff_x29 + -0x80) = uVar2;
    do {
      if (uVar14 == *(ulong *)(unaff_x29 + -0x80)) {
        if (unaff_w22 == 0) {
          lVar17 = *(long *)(unaff_x29 + -0xa0);
          bVar7 = false;
        }
        else {
          uVar18 = *(undefined8 *)(unaff_x29 + -0x10);
          uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
          *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
          *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
          uVar15 = (uint)unaff_x19;
          *(undefined8 *)(unaff_x29 + -0x28) = uVar18;
          *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
          if (*(int *)(unaff_x29 + -0x74) < (int)uVar15) {
            in_CY = uVar15 <= in_w8;
            if ((int)in_w8 < (int)uVar15) goto code_r0x05dde830;
            uVar12 = *(uint *)(unaff_x29 + -0x28);
            if (uVar12 <= unaff_w22 - 1) goto LAB_05dded50;
            uVar15 = *(uint *)(unaff_x29 + -0x94);
            uVar16 = in_w8;
            if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) !=
                *(int *)(unaff_x29 + -0x5c)) goto LAB_05dde874;
          }
          else {
            uVar12 = *(uint *)(unaff_x29 + -0x28);
          }
          lVar17 = *(long *)(unaff_x29 + -0xa0);
          if (uVar12 <= unaff_w22 - 1) goto LAB_05dded50;
          bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                  *(int *)(unaff_x29 + -0x5c);
        }
        if (*(long *)(lVar17 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return bVar7;
      }
      if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar14) goto LAB_05dded50;
      *(ulong *)(unaff_x29 + -0x70) = uVar14;
      iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar14 * 4);
      iVar1 = iVar3 + 2;
      if (-1 < iVar3 + 1) {
        iVar1 = iVar3 + 1;
      }
      if (iVar1 >> 1 < (int)unaff_x27) {
        lVar17 = (long)(iVar1 >> 1);
        do {
          puVar5 = PTR_DAT_0759b6a8;
          uVar16 = (uint)lVar17;
          if ((uint)unaff_x27 <= uVar16) goto LAB_05dded50;
          uVar4 = *(ushort *)(unaff_x21 + lVar17 * 2);
          if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
            iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
            uVar10 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b6a8,iVar1);
            puVar6 = PTR_DAT_075a5e78;
            auVar19 = FUN_05048b80(uVar10,*(undefined8 *)PTR_DAT_075a5e78);
            FUN_05048684(unaff_x29 + -0x18,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)PTR_DAT_075a5e50);
            uVar10 = *(undefined8 *)puVar5;
            *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar19;
            uVar10 = FUN_031f21dc(uVar10,iVar1);
            auVar19 = FUN_05048b80(uVar10,*(undefined8 *)puVar6);
            FUN_05048684(unaff_x29 + -0x30,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)PTR_DAT_075a5e50);
            *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar19;
            unaff_x21 = *(long *)(unaff_x29 + -0x50);
            unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
            unaff_x24 = *(long *)(unaff_x29 + -0x40);
            unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
          }
          uVar12 = uVar16 * 2;
          if (uVar4 == 0x2a) {
LAB_05ddea84:
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
            uVar16 = unaff_w22 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12;
LAB_05ddeaa0:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_05dded50;
            unaff_w22 = uVar16 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar12 | 1;
          }
          else {
            uVar13 = (uint)unaff_x19;
            if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                uVar16 = *(uint *)(unaff_x29 + -0x68);
                do {
                  if (uVar15 == uVar16) goto LAB_05dded50;
                  if (*(short *)(unaff_x28 + (long)(int)uVar16 * 2) == 0x2e) {
                    bVar7 = true;
                    goto LAB_05ddea78;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar13 != uVar16);
              }
              bVar7 = false;
LAB_05ddea78:
              uVar16 = unaff_w22;
              if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_05ddea84;
              goto LAB_05ddeaa0;
            }
            if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_05ddeb60:
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12 + 2;
                unaff_w22 = unaff_w22 + 1;
                break;
              }
            }
            else {
              if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                if (uVar4 == 0x5c) {
                  uVar16 = uVar16 + 1;
                  if (uVar16 != (uint)unaff_x27) {
                    if (uVar16 < (uint)unaff_x27) {
                      uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
                      uVar12 = uVar16 * 2;
                      goto LAB_05ddeb90;
                    }
                    goto LAB_05dded50;
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
                  *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                       *(undefined4 *)(unaff_x29 + -0x5c);
                }
                else {
LAB_05ddeb90:
                  if ((int)uVar13 <= *(int *)(unaff_x29 + -0x74)) break;
                  if (uVar4 != 0x3f) {
                    if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                      if ((uint)uVar4 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                    }
                    else {
                      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      sVar8 = FUN_05d7c024(uVar4,0);
                      sVar9 = FUN_05d7c024(*(undefined4 *)(unaff_x29 + -0x94),0);
                      if (sVar8 != sVar9) break;
                    }
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12 + 2;
                }
                unaff_w22 = unaff_w22 + 1;
                break;
              }
              if (*(int *)(unaff_x29 + -0x74) < (int)uVar13) {
                if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_05ddeb60;
                break;
              }
            }
          }
          lVar17 = lVar17 + 1;
          if (lVar17 == unaff_x24) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
            *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                 *(undefined4 *)(unaff_x29 + -0x5c);
            unaff_w22 = unaff_w22 + 1;
          }
        } while (lVar17 != unaff_x24);
      }
      uVar11 = *(ulong *)(unaff_x29 + -0x88);
      in_w8 = *(uint *)(unaff_x29 + -0x68);
      uVar14 = *(long *)(unaff_x29 + -0x70) + 1;
    } while (((long)uVar11 <= (long)uVar14) ||
            ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
    uVar16 = *(uint *)(unaff_x29 + -0x28);
    lVar17 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar14 = uVar14 & 0xffffffff;
    do {
      uVar12 = (uint)uVar14;
      if ((int)uVar12 < (int)uVar16) {
        if (uVar12 <= uVar16) {
          uVar12 = uVar16;
        }
        do {
          uVar13 = (uint)uVar14;
          if ((uVar12 == uVar13) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar17))
          goto LAB_05dded50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar17 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar13 * 4)) goto LAB_05ddec78;
          uVar14 = (ulong)(uVar13 + 1);
        } while (uVar16 != uVar13 + 1);
        uVar14 = (ulong)uVar16;
      }
LAB_05ddec78:
      lVar17 = lVar17 + 1;
    } while (lVar17 != (int)unaff_w22);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
  } while( true );
}


