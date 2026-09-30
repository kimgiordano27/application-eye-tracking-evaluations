/*
FUNCTION_NAME: Interop.Sys$$CloseDir
ENTRY_POINT: 073c0f74
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x073c2844) */
/* WARNING: Removing unreachable block (ram,0x073c2558) */
/* WARNING: Removing unreachable block (ram,0x073c15a4) */
/* WARNING: Removing unreachable block (ram,0x073c1c88) */
/* WARNING: Removing unreachable block (ram,0x073c2660) */
/* WARNING: Removing unreachable block (ram,0x073c1ecc) */
/* WARNING: Removing unreachable block (ram,0x073c1c80) */
/* WARNING: Removing unreachable block (ram,0x073c1c90) */
/* WARNING: Removing unreachable block (ram,0x073c1dd8) */
/* WARNING: Removing unreachable block (ram,0x073c2728) */

void Interop_Sys__CloseDir
               (undefined8 param_1,undefined8 param_2,ulong param_3,float param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *unaff_x19;
  long unaff_x22;
  undefined8 uVar18;
  int iVar19;
  undefined8 *puVar20;
  long *unaff_x28;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000b8;
  char cStack00000000000000d0;
  undefined1 *in_stack_000000d8;
  undefined4 in_stack_000000e0;
  char cStack00000000000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 *in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_00000228;
  undefined1 *in_stack_00000230;
  long in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  int in_stack_000004cc;
  undefined8 in_stack_00000508;
  undefined4 in_stack_00000660;
  float in_stack_00000664;
  undefined4 in_stack_00000668;
  undefined4 in_stack_0000066c;
  undefined4 in_stack_00000670;
  undefined4 in_stack_00000674;
  undefined4 in_stack_00000678;
  undefined4 in_stack_0000067c;
  undefined8 in_stack_00000680;
  
  puVar4 = (undefined8 *)CONCAT44(in_stack_00000674,in_stack_00000670);
  puVar3 = (undefined1 *)CONCAT44(in_stack_0000066c,in_stack_00000668);
  if (*(int *)(param_5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  in_stack_00000090 = param_1;
  in_stack_000000a0 = param_2;
  in_stack_000000b0 = param_3;
  FUN_07ab5b74();
  if (*(int *)(*(long *)PTR_DAT_092bc638 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_092bc638);
  }
  auVar26 = FUN_06080478(&stack0x00000440,*(undefined8 *)PTR_DAT_092bc630);
  uVar12 = FUN_06722430(&stack0x00000450,*(undefined8 *)PTR_DAT_092bc610);
  if ((uVar12 & 1) == 0) {
    *unaff_x19 = 0;
    puVar6 = PTR_DAT_092c9f98;
    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar26;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_051cc49c(unaff_x19 + 2,&stack0x00000450);
    return;
  }
  FUN_06722530(&stack0x00000580,&stack0x00000450,*(undefined8 *)PTR_DAT_092bc608);
  uVar11 = FUN_0606d28c(&stack0x00000490,*(undefined8 *)PTR_DAT_092bc618);
  puVar6 = PTR_DAT_092c9ff8;
  unaff_x19[0x12] = uVar11;
  uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
  FUN_05d52ce0(uVar13,*(undefined8 *)PTR_DAT_092ca000);
  thunk_FUN_040ec700(&stack0x00000438,uVar13);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  thunk_FUN_040ec700(unaff_x19 + 0x18,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_05c1fe80(&stack0x000004e8,*(long *)(unaff_x19 + 0xc),*(undefined8 *)PTR_DAT_092c7818);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x1e) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x24) = uVar24;
  *(undefined8 *)(unaff_x19 + 0x22) = uVar18;
  *(undefined8 *)(unaff_x19 + 0x26) = in_stack_00000508;
  thunk_FUN_040ec700(unaff_x19 + 0x1e,0);
  puVar10 = PTR_DAT_092ca0a0;
  puVar9 = PTR_DAT_092c7800;
  puVar8 = PTR_DAT_092b8980;
  puVar6 = PTR_DAT_09285d70;
  if (in_stack_000004cc == 2) {
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    in_stack_000004cc = -1;
    *unaff_x19 = 0xffffffff;
    goto LAB_073c2304;
  }
  if (in_stack_000004cc != 3) goto LAB_073c1eec;
  *(undefined8 *)(unaff_x19 + 0x3e) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  in_stack_000004cc = -1;
  *unaff_x19 = 0xffffffff;
  do {
    FUN_06722e9c(&stack0x000002f0,*(undefined8 *)PTR_DAT_092ca268);
    lVar14 = *(long *)(unaff_x19 + 0x3c);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_05c1fe80(&stack0x00000660,lVar14,*(undefined8 *)PTR_DAT_092c7818);
    fVar5 = DAT_01aec2c8;
    uVar13 = CONCAT44(in_stack_0000067c,in_stack_00000678);
    puVar20 = puVar4;
    while( true ) {
      uVar11 = SUB84(puVar20,0);
      uVar12 = FUN_0715bec8(&stack0x00000330,*(undefined8 *)puVar9);
      if ((uVar12 & 1) == 0) break;
      lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285898);
      FUN_05c26598(lVar14,1,*(undefined8 *)PTR_DAT_09286128);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_050e1584(&stack0x000002c0,&stack0x000002b8,*(undefined8 *)PTR_DAT_092ca308);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_07ac6b24(&stack0x000002b8,0);
        if ((uVar12 & 1) != 0) {
          if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar18 = *(undefined8 *)(in_stack_00000028 + 0xc0);
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07ac704c(&stack0x000002b8,uVar18,0);
          if (*(long *)(in_stack_00000028 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_05bcd750(&stack0x00000660,*(long *)(in_stack_00000028 + 0xc0),
                       *(undefined8 *)PTR_DAT_092ca2a0);
          in_stack_00000660 = 0;
          in_stack_00000664 = 0.0;
          puVar3 = &stack0x000004cc;
          puVar20 = (undefined8 *)&stack0x000001f0;
          while( true ) {
            uVar12 = FUN_0712a3e4(&stack0x000001f0,*(undefined8 *)PTR_DAT_092ca280);
            if ((uVar12 & 1) == 0) break;
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar18 = FUN_07ac7d34(uVar11,0);
            if (lVar14 == 0) {
LAB_073c1be0:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)PTR_DAT_092858c0;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_073c1be0;
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
              thunk_FUN_040ec700();
            }
            else {
              FUN_05c26d88(lVar14,uVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (in_stack_000004cc < 0) {
            GLTFast_Jobs_CachedFunction_GetFloat3Int8Normalized_00000305_PostfixBurstDelegate__BeginInvoke
                      (puVar20,*(undefined8 *)PTR_DAT_092ca278);
          }
        }
      }
      fVar25 = 0.0;
      in_stack_00000170 = 0;
      in_stack_00000180 = 0;
      in_stack_00000178 = 0;
      in_stack_00000190 = 0;
      in_stack_00000188 = 0;
      in_stack_000001a0 = 0;
      in_stack_00000198 = 0;
      in_stack_000001b0 = 0;
      in_stack_000001a8 = 0;
      in_stack_000001c0 = 0;
      in_stack_000001b8 = 0;
      in_stack_000001d0 = 0;
      in_stack_000001c8 = 0;
      in_stack_000001e0 = 0;
      in_stack_000001d8 = 0;
      in_stack_00000150 = puVar4;
      in_stack_00000158 = uVar13;
      in_stack_00000160 = in_stack_00000680;
      in_stack_00000168 = lVar14;
      thunk_FUN_040ec700(&stack0x00000168,lVar14);
      memcpy(&stack0x00000220,&stack0x00000150,0x98);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_050e0ecc(&stack0x000002c0,&stack0x00000218,*(undefined8 *)PTR_DAT_092ca2f8);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_092b8960 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_07ac5a84(&stack0x00000218,0);
        fVar22 = (float)param_3;
        if ((uVar12 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_092b8960 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar11 = FUN_07ac5ec0(&stack0x00000218,0);
          fVar23 = fVar25;
          fVar21 = (float)FUN_07ac5ec0(&stack0x00000218,0);
          puVar3 = (undefined1 *)0x0;
          param_3 = (ulong)(uint)(fVar22 + fVar21);
          in_stack_00000660 = 0;
          in_stack_00000664 = 0.0;
          param_4 = param_4 + fVar23;
          puVar20 = (undefined8 *)((ulong)puVar20 & 0xffffffff00000000);
          FUN_0604e33c(uVar11,fVar25,param_3,param_4,&stack0x00000660,
                       *(undefined8 *)PTR_DAT_092ca2e0);
          uVar12 = FUN_07ac5ff4(&stack0x00000218,(long)&stack0x00000148 + 4,0);
          if ((uVar12 & 1) != 0) {
            FUN_05f80bc4(&stack0x00000138,in_stack_00000148._4_4_,2,1,
                         *(undefined8 *)PTR_DAT_092ca2d0);
            uVar18 = in_stack_00000140;
            lVar14 = in_stack_00000138;
            puVar3 = &stack0x000004cc;
            puVar20 = &stack0x00000138;
            in_stack_00000660 = 0;
            in_stack_00000664 = 0.0;
            if (*(int *)(*(long *)PTR_DAT_092b8960 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar12 = FUN_07ac6084(&stack0x00000218,lVar14,uVar18,0);
            if ((uVar12 & 1) != 0) {
              lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09289618);
              FUN_05d0c958(lVar14,*(undefined8 *)PTR_DAT_09289608);
              thunk_FUN_040ec700(&stack0x00000298,lVar14);
              if (0 < in_stack_00000148._4_4_) {
                lVar15 = 0;
                do {
                  puVar7 = PTR_DAT_0928a148;
                  if (lVar14 == 0) {
LAB_073c1be8:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar14 + 0x10);
                  uVar12 = *(ulong *)(in_stack_00000138 + lVar15 * 8);
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_073c1be8;
                  uVar2 = *(uint *)(lVar14 + 0x18);
                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                    *(ulong *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                  }
                  else {
                    FUN_05d0d1f0(uVar12,uVar12 >> 0x20,lVar14,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 < in_stack_00000148._4_4_);
              }
            }
            if (in_stack_000004cc < 0) {
              FUN_05f80ec0(puVar20,*(undefined8 *)PTR_DAT_092ca2c8);
            }
          }
        }
      }
      fVar25 = (float)((ulong)puVar20 >> 0x20);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_050e1024(&stack0x000002c0,&stack0x00000210,*(undefined8 *)PTR_DAT_092ca300);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_092b8968 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_07ac638c(&stack0x00000210,0);
        if ((uVar12 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_092b8968 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07ac67c8(&stack0x00000660,&stack0x00000210,0);
          FUN_07ac67c8(&stack0x00000660,&stack0x00000210,0);
          in_stack_00000660 = 0;
          puVar3 = (undefined1 *)0x0;
          param_3 = (ulong)(uint)(in_stack_00000664 - SUB84(puVar20,0));
          in_stack_00000678 = 0;
          puVar20 = (undefined8 *)0x0;
          FUN_0604e7ac(&stack0x00000660,&stack0x000004d0,*(undefined8 *)PTR_DAT_092ca2d8);
          param_4 = fVar25;
          in_stack_00000664 = 0.0;
        }
      }
      uVar11 = SUB84(puVar20,0);
      if (DAT_098854f0 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f0 = '\x01';
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_050e12d4(&stack0x000002c0,&stack0x00000208,*(undefined8 *)PTR_DAT_092c7828);
      if ((uVar12 & 1) == 0) {
LAB_073c1acc:
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        in_stack_00000660 = (undefined4)in_stack_00000228;
        in_stack_00000664 = (float)((ulong)in_stack_00000228 >> 0x20);
        uVar18 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_09289148,&stack0x00000660);
        uVar18 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092ca338,uVar18,0);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_08978b08(uVar18,0);
        puVar3 = in_stack_00000230;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_092b7108 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_07ac1774(&stack0x00000208,0);
        if ((uVar12 & 1) == 0) goto LAB_073c1acc;
        if (*(int *)(*(long *)PTR_DAT_092b7108 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_07ac1d9c(&stack0x00000208,&stack0x00000100,0);
        if ((uVar12 & 1) == 0) goto LAB_073c1acc;
        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(in_stack_00000028 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        auVar26 = FUN_07ac3dd8(&stack0x00000100,
                               *(undefined8 *)(*(long *)(in_stack_00000028 + 0x90) + 0x20),0);
        _cStack00000000000000f0 = auVar26;
        if (*(long *)(in_stack_00000028 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_07ac3f24(&stack0x00000660,&stack0x00000100,
                     *(undefined8 *)(*(long *)(in_stack_00000028 + 0x90) + 0x20),0);
        fVar25 = (float)param_3;
        _cStack00000000000000d0 = CONCAT44(in_stack_00000664,in_stack_00000660);
        in_stack_000000d8 = puVar3;
        in_stack_000000e0 = uVar11;
        if ((cStack00000000000000f0 == '\0') ||
           (cStack00000000000000d0 = (char)in_stack_00000660, bVar1 = cStack00000000000000d0 == '\0'
           , bVar1)) goto LAB_073c1acc;
        FUN_06049664(&stack0x000000f0,*(undefined8 *)PTR_DAT_09289098);
        FUN_06018e00(&stack0x000000d0,*(undefined8 *)PTR_DAT_09289090);
        fVar22 = (float)FUN_089b9218(0);
        param_3 = (ulong)(uint)(fVar25 * fVar5);
        FUN_089b98cc(fVar22 * fVar5,0);
      }
      lVar14 = *(long *)(unaff_x19 + 0x38);
      if (lVar14 == 0) {
LAB_073c1c68:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      memcpy(&stack0x000004e8,&stack0x00000220,0x98);
      lVar15 = *(long *)(lVar14 + 0x10);
      lVar17 = *(long *)PTR_DAT_092ca060;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_073c1c68;
      uVar2 = *(uint *)(lVar14 + 0x18);
      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
        lVar15 = lVar15 + (long)(int)uVar2 * 0x98;
        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
        memcpy((void *)(lVar15 + 0x20),&stack0x000004e8,0x98);
        thunk_FUN_040ec700(lVar15 + 0x38,0);
      }
      else {
        uVar18 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000580,&stack0x000004e8,0x98);
        FUN_05d50878(lVar14,&stack0x00000580,uVar18);
      }
    }
    if (in_stack_000004cc < 0) {
      FUN_0715bec4(&stack0x00000330,*(undefined8 *)PTR_DAT_092c7858);
    }
    lVar14 = *(long *)(unaff_x19 + 0x18);
    if (lVar14 == 0) {
LAB_073c1ec8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    memcpy(&stack0x00000618,unaff_x19 + 0x28,0x48);
    lVar15 = *(long *)(lVar14 + 0x10);
    lVar17 = *(long *)PTR_DAT_092ca290;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_073c1ec8;
    uVar2 = *(uint *)(lVar14 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar2 * 0x48;
      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
      memcpy((void *)(lVar15 + 0x20),&stack0x00000618,0x48);
      thunk_FUN_040ec700(lVar15 + 0x58,0);
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000660,&stack0x00000618,0x48);
      FUN_05d53608(lVar14,&stack0x00000660,uVar13);
    }
    *(undefined8 *)(unaff_x19 + 0x3c) = 0;
    *(undefined8 *)(unaff_x19 + 0x2e) = 0;
    *(undefined8 *)(unaff_x19 + 0x2c) = 0;
    *(undefined8 *)(unaff_x19 + 0x32) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x36) = 0;
    *(undefined8 *)(unaff_x19 + 0x34) = 0;
    *(undefined8 *)(unaff_x19 + 0x3a) = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    *(undefined8 *)(unaff_x19 + 0x2a) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    thunk_FUN_040ec700(unaff_x19 + 0x3c,0);
    puVar4 = puVar20;
LAB_073c1eec:
    while( true ) {
      uVar12 = FUN_0715bec8(unaff_x19 + 0x1e,*(undefined8 *)puVar9);
      if ((uVar12 & 1) == 0) {
        iVar19 = 0x28;
        goto LAB_073c2014;
      }
      uVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092ca0c8);
      FUN_05d4ff50(uVar13,*(undefined8 *)puVar10);
      thunk_FUN_040ec700(&stack0x00000400,uVar13);
      memcpy(unaff_x19 + 0x28,&stack0x000003c0,0x48);
      thunk_FUN_040ec700(unaff_x19 + 0x36,0);
      if (*(char *)(unaff_x19 + 0x14) == '\0') break;
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_050e08d8(&stack0x00000410,*(undefined8 *)PTR_DAT_092ca2f0);
      if (*(int *)(*(long *)PTR_DAT_092b8978 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_07ac8f0c(&stack0x000003b8,&stack0x000003a8,&stack0x00000398,&stack0x00000390,0);
      if ((uVar12 & 1) != 0) {
        uVar11 = 0;
        *(undefined8 *)(unaff_x19 + 0x30) = in_stack_000003a0;
        *(undefined8 *)(unaff_x19 + 0x2e) = in_stack_00000398;
        *(undefined8 *)(unaff_x19 + 0x34) = in_stack_000003b0;
        *(undefined8 *)(unaff_x19 + 0x32) = in_stack_000003a8;
        if (in_stack_00000390 != 0) {
          uVar11 = *(undefined4 *)(in_stack_00000390 + 0x18);
        }
        uVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928bc90);
        FUN_05baf170(uVar13,uVar11,*(undefined8 *)PTR_DAT_0929b548);
        *(undefined8 *)(unaff_x19 + 0x36) = uVar13;
        thunk_FUN_040ec700(unaff_x19 + 0x36,uVar13);
        if (in_stack_00000390 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (0 < (int)*(ulong *)(in_stack_00000390 + 0x18)) {
          uVar12 = 0;
          uVar16 = *(ulong *)(in_stack_00000390 + 0x18) & 0xffffffff;
          puVar20 = (undefined8 *)(in_stack_00000390 + 0x28);
          do {
            if (uVar16 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar14 = *(long *)(unaff_x19 + 0x36);
            if (lVar14 == 0) {
LAB_073c2548:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar13 = puVar20[-1];
            uVar18 = *puVar20;
            lVar15 = *(long *)(lVar14 + 0x10);
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_073c2548;
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + (long)(int)uVar2 * 0x10;
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar15 + 0x20) = uVar13;
              *(undefined8 *)(lVar15 + 0x28) = uVar18;
            }
            else {
              FUN_05baf990();
            }
            uVar16 = (ulong)*(uint *)(in_stack_00000390 + 0x18);
            uVar12 = uVar12 + 1;
            puVar20 = puVar20 + 2;
          } while ((long)uVar12 < (long)(int)*(uint *)(in_stack_00000390 + 0x18));
        }
        break;
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08978b08(*(undefined8 *)PTR_DAT_092ca330,0);
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar13 = FUN_050e0298(&stack0x00000410,*(undefined8 *)PTR_DAT_092ca2e8);
    puVar7 = PTR_DAT_092ca2b8;
    *(undefined8 *)(unaff_x19 + 0x3a) = uVar13;
    uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar7);
    FUN_05c1e9dc(uVar13,*(undefined8 *)PTR_DAT_092ca2b0);
    puVar20 = (undefined8 *)(unaff_x19 + 0x3c);
    *puVar20 = uVar13;
    thunk_FUN_040ec700(puVar20,uVar13);
    uVar13 = *puVar20;
    if (*(int *)(*(long *)PTR_DAT_092b8958 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar18 = FUN_07ac9614(unaff_x19 + 0x3a,0);
    thunk_FUN_040ec700(&stack0x00000378);
    param_3 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = uVar18;
    FUN_07ab5b74(uVar13,&stack0x00000030,0,0);
    if (*(int *)(*(long *)PTR_DAT_092bc638 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092bc638);
    }
    auVar26 = FUN_06080478(&stack0x00000440,*(undefined8 *)PTR_DAT_092bc630);
    uVar12 = FUN_06722430(&stack0x00000450,*(undefined8 *)PTR_DAT_092bc610);
    if ((uVar12 & 1) == 0) {
      *unaff_x19 = 2;
      puVar6 = PTR_DAT_092c9f98;
      *(undefined1 (*) [16])(unaff_x19 + 0x1a) = auVar26;
      in_stack_000004cc = 2;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_051cc49c(unaff_x19 + 2,&stack0x00000450);
      goto LAB_073c271c;
    }
LAB_073c2304:
    FUN_06722530(&stack0x00000660,&stack0x00000450,*(undefined8 *)PTR_DAT_092bc608);
    if (*(long *)(unaff_x19 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x3c) + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_092b8958 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar14 = FUN_07ac9614(unaff_x19 + 0x3a,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000660 = (undefined4)*(undefined8 *)(lVar14 + 0x18);
      uVar13 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x00000660);
      uVar13 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092ca340,uVar13,0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08978b08(uVar13,0);
      goto LAB_073c1eec;
    }
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092ca2c0);
    FUN_05abd764(lVar14,*(undefined8 *)PTR_DAT_092ca2a8);
    if (*(long *)(unaff_x19 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_05c1fe80(&stack0x00000660,*(long *)(unaff_x19 + 0x3c),*(undefined8 *)PTR_DAT_092c7818);
LAB_073c2384:
    uVar12 = FUN_0715bec8(&stack0x00000330,*(undefined8 *)puVar9);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_050e12d4(&stack0x00000310,&stack0x00000308,*(undefined8 *)PTR_DAT_092c7828);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_092b7108 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        auVar26 = FUN_07ac1854(0,&stack0x00000308,1,0);
        if (lVar14 != 0) {
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar17 = *(long *)PTR_DAT_092ca298;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              *(undefined1 (*) [16])(lVar15 + (long)(int)uVar2 * 0x10 + 0x20) = auVar26;
            }
            else {
              FUN_05abdffc(lVar14,auVar26._0_8_,auVar26._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_073c2384;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_073c2384;
    }
    if (in_stack_000004cc < 0) {
      FUN_0715bec4(&stack0x00000330,*(undefined8 *)PTR_DAT_092c7858);
    }
    FUN_050eec98(lVar14,*(undefined8 *)PTR_DAT_092ca328);
    if (*(int *)(*(long *)PTR_DAT_092ca320 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092ca320);
    }
    auVar26 = FUN_06097a0c(&stack0x000002e0,*(undefined8 *)PTR_DAT_092ca318);
    uVar12 = FUN_06722d9c(&stack0x000002f0,*(undefined8 *)PTR_DAT_092ca270);
    if ((uVar12 & 1) == 0) {
      *unaff_x19 = 3;
      puVar6 = PTR_DAT_092c9f98;
      *(undefined1 (*) [16])(unaff_x19 + 0x3e) = auVar26;
      in_stack_000004cc = 3;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_051cc6e4(unaff_x19 + 2,&stack0x000002f0);
LAB_073c271c:
      iVar19 = 8;
LAB_073c2014:
      if (in_stack_000004cc < 0) {
        FUN_0715bec4(unaff_x19 + 0x1e,*(undefined8 *)PTR_DAT_092c7858);
      }
      if ((iVar19 != 0x28) && (iVar19 != 0)) {
        return;
      }
      *(undefined8 *)(unaff_x19 + 0x26) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x19 + 0x18);
      *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x19 + 0x16);
      *(undefined8 *)(unaff_x19 + 0x24) = 0;
      *(undefined8 *)(unaff_x19 + 0x22) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x1e) = 0;
      thunk_FUN_040ec700(unaff_x19 + 0x10,0);
      puVar8 = PTR_DAT_092ca260;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = 0;
      puVar6 = PTR_DAT_092c9f98;
      *(undefined8 *)(unaff_x19 + 0x16) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_06718a70(unaff_x19 + 2,&stack0x000006b0,*(undefined8 *)puVar8);
      return;
    }
  } while( true );
}


