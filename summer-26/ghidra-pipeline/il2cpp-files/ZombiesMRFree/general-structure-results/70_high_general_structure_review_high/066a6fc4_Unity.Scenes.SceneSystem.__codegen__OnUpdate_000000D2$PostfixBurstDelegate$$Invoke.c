/*
FUNCTION_NAME: Unity.Scenes.SceneSystem.__codegen__OnUpdate_000000D2$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 066a6fc4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Scenes_SceneSystem___codegen__OnUpdate_000000D2_PostfixBurstDelegate__Invoke
               (undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 *in_stack_00000130;
  int iStack0000000000000138;
  undefined8 *in_stack_00000140;
  int iStack0000000000000148;
  
  if ((DAT_073a0f72 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_List<Grabber>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<Graph>_TypeInfo);
    DAT_073a0f72 = 1;
  }
  in_stack_00000140 = (undefined8 *)0x0;
  _iStack0000000000000148 = 0;
  in_stack_00000130 = (undefined8 *)0x0;
  _iStack0000000000000138 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000100 = 0;
  in_stack_00000108 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  uStack00000000000000ec = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  uStack00000000000000f4 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uStack00000000000000cc = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  uStack00000000000000d4 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  uStack00000000000000ac = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  uStack00000000000000b4 = 0;
  if (0.0 < (float)param_1) {
    if (param_3 == 0) goto LAB_066a7654;
    iVar5 = FUN_068b687c(param_3,0);
    if (iVar5 == 0) {
      return;
    }
    if ((float)param_1 < 1.0) {
      if (*param_2 == 0) goto LAB_066a7654;
      iVar5 = FUN_068b687c(*param_2,0);
      if (iVar5 != 0) {
        if (*param_2 != 0) {
          uVar6 = FUN_068b687c(*param_2,0);
          puVar3 = System_Collections_Generic_List<Graph>_TypeInfo;
          FUN_046ef67c(&stack0x00000140,uVar6,2,1,
                       *(undefined8 *)System_Collections_Generic_List<Graph>_TypeInfo);
          uVar6 = FUN_068b687c(param_3,0);
          FUN_046ef67c(&stack0x00000130,uVar6,2,1,*(undefined8 *)puVar3);
          lVar8 = *param_2;
          if (lVar8 != 0) {
            lVar11 = 0;
            uVar10 = 0;
            do {
              iVar5 = FUN_068b687c(lVar8,0);
              if ((long)iVar5 <= (long)uVar10) {
                iVar5 = FUN_068b687c(param_3,0);
                if (0 < iVar5) {
                  lVar8 = 0;
                  uVar10 = 0;
                  do {
                    FUN_068b6774(&stack0x00000060,param_3,uVar10 & 0xffffffff,0);
                    uStack0000000000000094 = uStack0000000000000074;
                    uStack0000000000000090 = uStack0000000000000070;
                    uStack0000000000000088 = uStack0000000000000068;
                    uStack000000000000008c = uStack000000000000006c;
                    in_stack_00000080 = in_stack_00000060;
                    puVar9 = (undefined8 *)((long)in_stack_00000130 + lVar8);
                    puVar9[1] = CONCAT44(uStack000000000000006c,uStack0000000000000068);
                    *puVar9 = in_stack_00000060;
                    *(undefined8 *)((long)puVar9 + 0x14) = uStack0000000000000074;
                    *(ulong *)((long)puVar9 + 0xc) =
                         CONCAT44(uStack0000000000000070,uStack000000000000006c);
                    uVar10 = uVar10 + 1;
                    iVar5 = FUN_068b687c(param_3,0);
                    lVar8 = lVar8 + 0x1c;
                  } while ((long)uVar10 < (long)iVar5);
                }
                in_stack_00000108 = in_stack_00000140[1];
                in_stack_00000100 = *in_stack_00000140;
                in_stack_00000110 = in_stack_00000140[2];
                in_stack_00000118 = *(undefined4 *)(in_stack_00000140 + 3);
                fVar13 = (float)FUN_068b6184(&stack0x00000100,0);
                in_stack_00000108 = in_stack_00000130[1];
                in_stack_00000100 = *in_stack_00000130;
                in_stack_00000110 = in_stack_00000130[2];
                in_stack_00000118 = *(undefined4 *)(in_stack_00000130 + 3);
                fVar14 = (float)FUN_068b6184(&stack0x00000100,0);
                if (fVar14 <= fVar13) {
                  fVar13 = fVar14;
                }
                if (*param_2 == 0) break;
                iVar5 = FUN_068b687c(*param_2,0);
                puVar9 = (undefined8 *)((long)in_stack_00000140 + (long)(iVar5 + -1) * 0x1c);
                in_stack_00000108 = puVar9[1];
                in_stack_00000100 = *puVar9;
                in_stack_00000110 = puVar9[2];
                in_stack_00000118 = *(undefined4 *)(puVar9 + 3);
                fVar14 = (float)FUN_068b6184(&stack0x00000100,0);
                iVar5 = FUN_068b687c(param_3,0);
                puVar9 = (undefined8 *)((long)in_stack_00000130 + (long)(iVar5 + -1) * 0x1c);
                in_stack_00000108 = puVar9[1];
                in_stack_00000100 = *puVar9;
                in_stack_00000110 = puVar9[2];
                in_stack_00000118 = *(undefined4 *)(puVar9 + 3);
                fVar15 = (float)FUN_068b6184(&stack0x00000100,0);
                if (fVar14 <= fVar15) {
                  fVar14 = fVar15;
                }
                if (*param_2 == 0) break;
                iVar5 = FUN_068b687c(*param_2,0);
                iVar7 = FUN_068b687c(param_3,0);
                FUN_046ef67c(&stack0x00000120,iVar7 + iVar5,2,1,*(undefined8 *)puVar3);
                bVar1 = 0 < iStack0000000000000138;
                bVar2 = 0 < iStack0000000000000148;
                if ((iStack0000000000000148 < 1) && (iStack0000000000000138 < 1)) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  iVar5 = 0;
                  iVar7 = 0;
                  do {
                    in_stack_000000e0 = 0;
                    in_stack_000000e8 = 0;
                    uStack00000000000000ec = 0;
                    in_stack_000000f8 = 0;
                    in_stack_000000f0 = 0;
                    uStack00000000000000f4 = 0;
                    in_stack_000000c8 = 0;
                    uStack00000000000000cc = 0;
                    in_stack_000000d0 = 0;
                    uStack00000000000000d4 = 0;
                    in_stack_000000c0 = 0;
                    in_stack_000000d8 = 0;
                    if ((bVar2) && (bVar1)) {
                      FUN_066a6a94(&stack0x00000080,in_stack_00000140,_iStack0000000000000148,iVar5)
                      ;
                      in_stack_000000e8 = uStack0000000000000088;
                      in_stack_000000e0 = in_stack_00000080;
                      uStack00000000000000f4 = (undefined4)uStack0000000000000094;
                      in_stack_000000f8 = SUB84(uStack0000000000000094,4);
                      uStack00000000000000ec = uStack000000000000008c;
                      in_stack_000000f0 = uStack0000000000000090;
                      FUN_066a6a94(&stack0x00000060,in_stack_00000130,_iStack0000000000000138,iVar7)
                      ;
                      in_stack_000000c8 = uStack0000000000000068;
                      in_stack_000000c0 = in_stack_00000060;
                      uStack00000000000000d4 = (undefined4)uStack0000000000000074;
                      in_stack_000000d8 = SUB84(uStack0000000000000074,4);
                      uStack00000000000000cc = uStack000000000000006c;
                      in_stack_000000d0 = uStack0000000000000070;
                      fVar15 = (float)FUN_068b6184(&stack0x000000e0,0);
                      fVar16 = (float)FUN_068b6184(&stack0x000000c0,0);
                      if (fVar15 != fVar16) {
                        fVar15 = (float)FUN_068b6184(&stack0x000000e0,0);
                        fVar16 = (float)FUN_068b6184(&stack0x000000c0,0);
                        uVar17 = _iStack0000000000000148;
                        puVar4 = in_stack_00000140;
                        uVar18 = _iStack0000000000000138;
                        puVar9 = in_stack_00000130;
                        if (fVar16 <= fVar15) {
                          uVar18 = FUN_068b6184(&stack0x000000c0,0);
                          FUN_066a6ec0(&stack0x00000080,fVar13,fVar14,uVar18,puVar4,uVar17,
                                       iVar5 + -1,iVar5);
                          in_stack_000000e0 = in_stack_00000080;
                          uVar18 = uStack0000000000000094;
                          in_stack_000000e8 = uStack0000000000000088;
                          uStack00000000000000ec = uStack000000000000008c;
                          in_stack_000000f0 = uStack0000000000000090;
                          goto LAB_066a752c;
                        }
                        uVar17 = FUN_068b6184(&stack0x000000e0,0);
                        FUN_066a6ec0(&stack0x00000080,fVar13,fVar14,uVar17,puVar9,uVar18,iVar7 + -1,
                                     iVar7);
                        in_stack_000000c0 = in_stack_00000080;
                        uVar18 = uStack0000000000000094;
                        in_stack_000000c8 = uStack0000000000000088;
                        uStack00000000000000cc = uStack000000000000008c;
                        in_stack_000000d0 = uStack0000000000000090;
                        goto LAB_066a74e0;
                      }
                      iVar5 = iVar5 + 1;
LAB_066a7534:
                      iVar7 = iVar7 + 1;
                    }
                    else {
                      if (!bVar2) {
                        FUN_066a6a94(&stack0x00000080,in_stack_00000130,_iStack0000000000000138,
                                     iVar7);
                        uVar18 = _iStack0000000000000148;
                        puVar9 = in_stack_00000140;
                        in_stack_000000c8 = uStack0000000000000088;
                        in_stack_000000c0 = in_stack_00000080;
                        uStack00000000000000d4 = (undefined4)uStack0000000000000094;
                        in_stack_000000d8 = SUB84(uStack0000000000000094,4);
                        uStack00000000000000cc = uStack000000000000008c;
                        in_stack_000000d0 = uStack0000000000000090;
                        uVar17 = FUN_068b6184(&stack0x000000c0,0);
                        FUN_066a6ec0(&stack0x00000060,fVar13,fVar14,uVar17,puVar9,uVar18,iVar5 + -1,
                                     iVar5);
                        in_stack_000000e0 = in_stack_00000060;
                        uVar18 = uStack0000000000000074;
                        in_stack_000000e8 = uStack0000000000000068;
                        uStack00000000000000ec = uStack000000000000006c;
                        in_stack_000000f0 = uStack0000000000000070;
LAB_066a752c:
                        uStack00000000000000f4 = (undefined4)uVar18;
                        in_stack_000000f8 = (undefined4)((ulong)uVar18 >> 0x20);
                        goto LAB_066a7534;
                      }
                      FUN_066a6a94(&stack0x00000080,in_stack_00000140,_iStack0000000000000148,iVar5)
                      ;
                      uVar18 = _iStack0000000000000138;
                      puVar9 = in_stack_00000130;
                      in_stack_000000e8 = uStack0000000000000088;
                      in_stack_000000e0 = in_stack_00000080;
                      uStack00000000000000f4 = (undefined4)uStack0000000000000094;
                      in_stack_000000f8 = SUB84(uStack0000000000000094,4);
                      uStack00000000000000ec = uStack000000000000008c;
                      in_stack_000000f0 = uStack0000000000000090;
                      uVar17 = FUN_068b6184(&stack0x000000e0,0);
                      FUN_066a6ec0(&stack0x00000060,fVar13,fVar14,uVar17,puVar9,uVar18,iVar7 + -1,
                                   iVar7);
                      in_stack_000000c0 = in_stack_00000060;
                      uVar18 = uStack0000000000000074;
                      in_stack_000000c8 = uStack0000000000000068;
                      uStack00000000000000cc = uStack000000000000006c;
                      in_stack_000000d0 = uStack0000000000000070;
LAB_066a74e0:
                      uStack00000000000000d4 = (undefined4)uVar18;
                      in_stack_000000d8 = (undefined4)((ulong)uVar18 >> 0x20);
                      iVar5 = iVar5 + 1;
                    }
                    uStack0000000000000054 = CONCAT44(in_stack_000000f8,uStack00000000000000f4);
                    uStack0000000000000034 = CONCAT44(in_stack_000000d8,uStack00000000000000d4);
                    in_stack_00000048 = in_stack_000000e8;
                    in_stack_00000040 = in_stack_000000e0;
                    uStack0000000000000050 = in_stack_000000f0;
                    in_stack_00000028 = in_stack_000000c8;
                    in_stack_00000020 = in_stack_000000c0;
                    uStack0000000000000030 = in_stack_000000d0;
                    FUN_066a68d8(&stack0x000000a0,param_1,&stack0x00000040,&stack0x00000020);
                    puVar9 = (undefined8 *)(in_stack_00000120 + (long)(int)uVar12 * 0x1c);
                    *(ulong *)((long)puVar9 + 0x14) =
                         CONCAT44(in_stack_000000b8,uStack00000000000000b4);
                    *(ulong *)((long)puVar9 + 0xc) =
                         CONCAT44(in_stack_000000b0,uStack00000000000000ac);
                    puVar9[1] = CONCAT44(uStack00000000000000ac,in_stack_000000a8);
                    *puVar9 = in_stack_000000a0;
                    uVar12 = uVar12 + 1;
                    bVar1 = iVar7 < iStack0000000000000138;
                    bVar2 = iVar5 < iStack0000000000000148;
                  } while ((iVar5 < iStack0000000000000148) || (iVar7 < iStack0000000000000138));
                }
                if (*param_2 != 0) {
                  FUN_068b66f4(*param_2,0);
                  if (0 < (int)uVar12) {
                    lVar8 = 0;
                    do {
                      puVar9 = (undefined8 *)(in_stack_00000120 + lVar8);
                      in_stack_00000080 = *puVar9;
                      uStack0000000000000094 = *(undefined8 *)((long)puVar9 + 0x14);
                      uStack0000000000000088 = (undefined4)puVar9[1];
                      uStack000000000000008c = (undefined4)*(undefined8 *)((long)puVar9 + 0xc);
                      uStack0000000000000090 =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar9 + 0xc) >> 0x20);
                      if (*param_2 == 0) goto LAB_066a7654;
                      FUN_068b6568();
                      lVar8 = lVar8 + 0x1c;
                    } while ((ulong)uVar12 * 0x1c - lVar8 != 0);
                  }
                  FUN_046ef9d0(&stack0x00000120,
                               *(undefined8 *)System_Collections_Generic_List<Grabber>_TypeInfo);
                  return;
                }
                break;
              }
              if (*param_2 == 0) break;
              FUN_068b6774(&stack0x00000060,*param_2,uVar10 & 0xffffffff,0);
              uStack0000000000000094 = uStack0000000000000074;
              in_stack_00000080 = in_stack_00000060;
              uVar10 = uVar10 + 1;
              uStack0000000000000090 = uStack0000000000000070;
              uStack0000000000000088 = uStack0000000000000068;
              uStack000000000000008c = uStack000000000000006c;
              puVar9 = (undefined8 *)((long)in_stack_00000140 + lVar11);
              lVar11 = lVar11 + 0x1c;
              puVar9[1] = CONCAT44(uStack000000000000006c,uStack0000000000000068);
              *puVar9 = in_stack_00000060;
              *(undefined8 *)((long)puVar9 + 0x14) = uStack0000000000000074;
              *(ulong *)((long)puVar9 + 0xc) =
                   CONCAT44(uStack0000000000000070,uStack000000000000006c);
              lVar8 = *param_2;
            } while (lVar8 != 0);
          }
        }
        goto LAB_066a7654;
      }
    }
    if (*param_2 == 0) {
LAB_066a7654:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_068b6f88(*param_2,param_3,0);
  }
  return;
}


