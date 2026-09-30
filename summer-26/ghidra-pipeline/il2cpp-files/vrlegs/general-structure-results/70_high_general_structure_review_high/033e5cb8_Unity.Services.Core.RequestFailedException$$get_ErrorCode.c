/*
FUNCTION_NAME: Unity.Services.Core.RequestFailedException$$get_ErrorCode
ENTRY_POINT: 033e5cb8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Core_RequestFailedException__get_ErrorCode(void)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w25;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x28;
  long *unaff_x29;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined8 in_stack_00000790;
  undefined8 in_stack_00000798;
  undefined8 in_stack_000007a0;
  uint uVar23;
  
  uVar4 = FUN_03404c60();
  if ((uVar4 == 0xffffffff) || (*(char *)(unaff_x22 + 0x1a0) == '\0')) {
    bVar2 = false;
  }
  else {
    *(undefined1 *)(unaff_x22 + 0x1a0) = 0;
    if (((*(uint *)(unaff_x21 + 0xcc) ^ unaff_w23) & 1) == 0) {
      fVar15 = (float)*(undefined8 *)(unaff_x20 + 0x1d8) - (float)*(undefined8 *)(unaff_x21 + 0xd0);
      fVar16 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x1d8) >> 0x20) -
               (float)((ulong)*(undefined8 *)(unaff_x21 + 0xd0) >> 0x20);
      fVar17 = (float)*(undefined8 *)(unaff_x20 + 0x1e0) - (float)*(undefined8 *)(unaff_x21 + 0xd8);
      fVar18 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x1e0) >> 0x20) -
               (float)((ulong)*(undefined8 *)(unaff_x21 + 0xd8) >> 0x20);
      bVar2 = DAT_00d38798 <= fVar18 * fVar18 + fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
    }
    else {
      bVar2 = true;
    }
  }
  lVar9 = unaff_x22 + 0x140;
  FUN_033e9ac4(&stack0x00000150,lVar9,0);
  if (*(long *)(unaff_x20 + 0x180) == 0) goto LAB_033e701c;
  uVar6 = FUN_03380ff0(*(long *)(unaff_x20 + 0x180),0);
  if ((uVar6 & 1) != 0) {
    FUN_036ee7a0(&stack0x000009a0,&stack0x00000810,0,0xffffffff,0xffffffff,0);
  }
  FUN_033db094(&stack0x00000150);
  uVar6 = FUN_036eee34(&stack0x000007e0,&stack0x000007b0,0);
  if (((uVar6 & 1) == 0) || (*(char *)(unaff_x22 + 0x1a1) == '\0')) {
    bVar3 = false;
  }
  else {
    *(undefined1 *)(unaff_x22 + 0x1a1) = 0;
    bVar3 = ((*(uint *)(unaff_x21 + 0xcc) ^ unaff_w23) & 6) != 0;
  }
  if (bVar2) {
    if (((unaff_w25 & 1) != 0) &&
       ((((*(char *)(unaff_x21 + 0x42) == '\0' || (*(char *)(unaff_x21 + 0x70) == '\0')) ||
         (*(char *)(unaff_x22 + 0x1a4) == '\0')) || (uVar6 = FUN_03423a00(), (uVar6 & 1) == 0)))) {
      lVar8 = *(long *)(unaff_x21 + 0x80);
      if (lVar8 == 0) goto LAB_033e701c;
      if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_033e7020;
      lVar8 = lVar8 + (long)(int)uVar4 * 0x28;
      in_stack_00000170 = *(undefined8 *)(lVar8 + 0x40);
      in_stack_00000158 = *(undefined8 *)(lVar8 + 0x28);
      in_stack_00000150 = *(undefined8 *)(lVar8 + 0x20);
      in_stack_00000168 = *(undefined8 *)(lVar8 + 0x38);
      in_stack_00000160 = *(undefined8 *)(lVar8 + 0x30);
      FUN_033db094(&stack0x00000780);
      uVar22 = *(undefined4 *)(unaff_x20 + 0x1d8);
      uVar21 = *(undefined4 *)(unaff_x20 + 0x1dc);
      uVar19 = *(undefined4 *)(unaff_x20 + 0x1e0);
      uVar20 = *(undefined4 *)(unaff_x20 + 0x1e4);
      in_stack_00000120 = in_stack_00000780;
      in_stack_00000128 = in_stack_00000788;
      in_stack_00000130 = in_stack_00000790;
      in_stack_00000138 = in_stack_00000798;
      in_stack_00000140 = in_stack_000007a0;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_033e7024(uVar22,uVar21,uVar19,uVar20,in_stack_00000028,&stack0x00000750,&stack0x00000720,1
                  );
    }
    if ((*(byte *)(unaff_x21 + 0xcc) & 1) != 0) {
      uVar13 = *(undefined8 *)(unaff_x21 + 0x80);
      FUN_033e9ac4(&stack0x00000120);
      in_stack_00000158 = in_stack_00000128;
      in_stack_00000150 = in_stack_00000120;
      in_stack_00000168 = in_stack_00000138;
      in_stack_00000160 = in_stack_00000130;
      in_stack_00000170 = in_stack_00000140;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_03404d08(uVar13,&stack0x000006f0,0);
      lVar8 = *unaff_x28;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
        lVar8 = *unaff_x28;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x58);
      if (lVar8 != 0) {
        if (uVar4 < *(uint *)(lVar8 + 0x18)) {
          lVar11 = *(long *)(lVar8 + (ulong)uVar4 * 8 + 0x20);
          uVar23 = 0;
          lVar8 = *(long *)(unaff_x21 + 0x80);
          if (lVar8 != 0) {
            uVar6 = 0;
            lVar12 = 0x20;
            do {
              if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar6) {
                if ((long)(int)uVar23 != (ulong)uVar4) {
                  uVar13 = FUN_0276793c(&stack0x00000998,0);
                  uVar14 = FUN_0278d4e8(&stack0x0000099c,0);
                  uVar13 = FUN_025be45c(*(undefined8 *)
                                         XRIF__Core_MotionDetection_MotionData_TypeInfo,uVar13,
                                        *(undefined8 *)Unity_Physics_MotionData_TypeInfo,uVar14,0);
                  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                  }
                  FUN_0367ae18(uVar13,0);
                }
                if (((*(char *)(unaff_x21 + 0x42) == '\0') || (*(char *)(unaff_x21 + 0x70) == '\0'))
                   || ((*(char *)(unaff_x22 + 0x1a4) == '\0' ||
                       (uVar6 = FUN_03423a00(), (uVar6 & 1) == 0)))) {
                  FUN_033e9ac4(&stack0x00000120,lVar9,0);
                  in_stack_00000158 = in_stack_00000128;
                  in_stack_00000150 = in_stack_00000120;
                  in_stack_00000168 = in_stack_00000138;
                  in_stack_00000160 = in_stack_00000130;
                  in_stack_00000170 = in_stack_00000140;
                  uVar22 = *(undefined4 *)(unaff_x21 + 0xd0);
                  uVar20 = *(undefined4 *)(unaff_x21 + 0xd4);
                  uVar21 = *(undefined4 *)(unaff_x21 + 0xd8);
                  uVar19 = *(undefined4 *)(unaff_x21 + 0xdc);
                  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_033e72f4(uVar22,uVar20,uVar21,uVar19,in_stack_00000028,lVar11,&stack0x000005d0
                               ,1);
                }
                goto LAB_033e6aac;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_033e7020;
              puVar1 = (undefined8 *)(lVar8 + lVar12);
              in_stack_00000170 = puVar1[4];
              in_stack_00000158 = puVar1[1];
              in_stack_00000150 = *puVar1;
              in_stack_00000168 = puVar1[3];
              in_stack_00000160 = puVar1[2];
              FUN_033e9ac4(&stack0x00000120);
              uVar7 = FUN_036eee64(&stack0x000006c0,&stack0x00000690,0);
              if ((uVar7 & 1) != 0) {
                lVar8 = *(long *)(unaff_x21 + 0x80);
                if (lVar8 == 0) break;
                if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_033e7020;
                puVar1 = (undefined8 *)(lVar8 + lVar12);
                in_stack_00000170 = puVar1[4];
                in_stack_00000158 = puVar1[1];
                in_stack_00000150 = *puVar1;
                in_stack_00000168 = puVar1[3];
                in_stack_00000160 = puVar1[2];
                FUN_036ee960(&stack0x00000120,0,0);
                uVar7 = FUN_036eee64(&stack0x00000660,&stack0x00000630,0);
                if ((uVar7 & 1) != 0) {
                  lVar8 = *(long *)(unaff_x21 + 0x80);
                  if (lVar8 == 0) break;
                  if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_033e7020;
                  puVar1 = (undefined8 *)(lVar8 + lVar12);
                  in_stack_00000170 = puVar1[4];
                  in_stack_00000158 = puVar1[1];
                  in_stack_00000150 = *puVar1;
                  in_stack_00000168 = puVar1[3];
                  in_stack_00000160 = puVar1[2];
                  if (lVar11 == 0) break;
                  if (*(uint *)(lVar11 + 0x18) <= uVar23) goto LAB_033e7020;
                  lVar8 = lVar11 + (long)(int)uVar23 * 0x28;
                  uVar23 = uVar23 + 1;
                  *(undefined8 *)(lVar8 + 0x40) = in_stack_00000170;
                  *(undefined8 *)(lVar8 + 0x28) = in_stack_00000158;
                  *(undefined8 *)(lVar8 + 0x20) = in_stack_00000150;
                  *(undefined8 *)(lVar8 + 0x38) = in_stack_00000168;
                  *(undefined8 *)(lVar8 + 0x30) = in_stack_00000160;
                }
              }
              lVar8 = *(long *)(unaff_x21 + 0x80);
              uVar6 = uVar6 + 1;
              lVar12 = lVar12 + 0x28;
            } while (lVar8 != 0);
          }
          goto LAB_033e701c;
        }
        goto LAB_033e7020;
      }
      goto LAB_033e701c;
    }
  }
LAB_033e6aac:
  if (!bVar3) {
    unaff_w25 = *(uint *)(unaff_x21 + 0xcc);
  }
  if (bVar2) {
    if (*(char *)(unaff_x21 + 0x42) == '\0') {
      uVar4 = 0;
      cVar10 = '\0';
      goto LAB_033e6bfc;
    }
    if ((*(char *)(unaff_x21 + 0x70) == '\0') || (*(char *)(unaff_x22 + 0x1a4) == '\0')) {
      uVar4 = 0;
      cVar10 = '\x01';
      goto LAB_033e6bfc;
    }
    uVar4 = unaff_w23 & 1 | unaff_w25 & 6;
LAB_033e6c08:
    if (((*(char *)(unaff_x21 + 0x70) != '\0') && (*(char *)(unaff_x22 + 0x1a4) != '\0')) &&
       (uVar6 = FUN_03423a00(), (uVar6 & 1) != 0)) {
      FUN_033dca44();
    }
  }
  else {
    cVar10 = *(char *)(unaff_x21 + 0x42);
    uVar4 = *(uint *)(unaff_x21 + 0xcc) & 1;
LAB_033e6bfc:
    uVar4 = uVar4 | unaff_w25 & 6;
    if (cVar10 != '\0') goto LAB_033e6c08;
  }
  lVar8 = *unaff_x28;
  uVar13 = *(undefined8 *)(unaff_x21 + 0x80);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *unaff_x28;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x29);
  }
  uVar6 = FUN_03404ed8(uVar13,uVar14,0);
  if ((uVar6 & 1) != 0) {
    FUN_033db094(&stack0x00000120);
    lVar8 = *unaff_x28;
    in_stack_00000158 = in_stack_00000128;
    in_stack_00000150 = in_stack_00000120;
    in_stack_00000168 = in_stack_00000138;
    in_stack_00000160 = in_stack_00000130;
    in_stack_00000170 = in_stack_00000140;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *unaff_x28;
    }
    lVar8 = *(long *)(lVar8 + 0xb8);
    in_stack_00000128 = *(undefined8 *)(lVar8 + 0x28);
    in_stack_00000120 = *(undefined8 *)(lVar8 + 0x20);
    in_stack_00000138 = *(undefined8 *)(lVar8 + 0x38);
    in_stack_00000130 = *(undefined8 *)(lVar8 + 0x30);
    in_stack_00000140 = *(undefined8 *)(lVar8 + 0x40);
    uVar6 = FUN_036eee64(&stack0x000005a0,&stack0x00000570,0);
    if ((uVar4 == 0) && ((uVar6 & 1) == 0)) {
      return;
    }
  }
  uVar13 = *(undefined8 *)(unaff_x21 + 0x80);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar5 = FUN_03404e28(uVar13,0);
  if (iVar5 < 0) {
    return;
  }
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *unaff_x28;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x58);
  if (lVar8 != 0) {
    uVar23 = iVar5 + 1;
    if (*(uint *)(lVar8 + 0x18) <= uVar23) {
LAB_033e7020:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar8 = *(long *)(lVar8 + (long)(int)uVar23 * 8 + 0x20);
    if (0 < (int)uVar23) {
      uVar6 = 0;
      lVar11 = 0x20;
      do {
        lVar12 = *(long *)(unaff_x21 + 0x80);
        if (lVar12 == 0) goto LAB_033e701c;
        if (*(uint *)(lVar12 + 0x18) <= uVar6) goto LAB_033e7020;
        puVar1 = (undefined8 *)(lVar12 + lVar11);
        in_stack_00000170 = puVar1[4];
        in_stack_00000158 = puVar1[1];
        in_stack_00000150 = *puVar1;
        in_stack_00000168 = puVar1[3];
        in_stack_00000160 = puVar1[2];
        if (lVar8 == 0) goto LAB_033e701c;
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_033e7020;
        uVar6 = uVar6 + 1;
        puVar1 = (undefined8 *)(lVar8 + lVar11);
        lVar11 = lVar11 + 0x28;
        puVar1[4] = in_stack_00000170;
        puVar1[1] = in_stack_00000158;
        *puVar1 = in_stack_00000150;
        puVar1[3] = in_stack_00000168;
        puVar1[2] = in_stack_00000160;
      } while (uVar23 != uVar6);
    }
    if (((*(char *)(unaff_x21 + 0x42) == '\0') || (*(char *)(unaff_x21 + 0x70) == '\0')) ||
       ((*(char *)(unaff_x22 + 0x1a4) == '\0' || (uVar6 = FUN_03423a00(), (uVar6 & 1) == 0)))) {
      if (*(char *)(unaff_x21 + 0x70) == '\0') {
        FUN_033e9ac4(&stack0x00000150,lVar9,0);
        if (*(char *)(unaff_x21 + 0x40) == '\0') {
          *(undefined1 *)(unaff_x22 + 0x1a1) = 0;
        }
        else {
          FUN_033db094(&stack0x00000150);
        }
        uVar22 = *(undefined4 *)(unaff_x21 + 0xd0);
        uVar20 = *(undefined4 *)(unaff_x21 + 0xd4);
        uVar21 = *(undefined4 *)(unaff_x21 + 0xd8);
        uVar19 = *(undefined4 *)(unaff_x21 + 0xdc);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_033e72f4(uVar22,uVar20,uVar21,uVar19,in_stack_00000028,lVar8,&stack0x00000510,uVar4);
      }
      else {
        if (*(char *)(unaff_x21 + 0x40) == '\0') {
          uVar13 = *(undefined8 *)(unaff_x22 + 0x140);
          *(undefined1 *)(unaff_x22 + 0x1a1) = 0;
        }
        else {
          uVar13 = *(undefined8 *)(unaff_x21 + 0x98);
        }
        uVar22 = *(undefined4 *)(unaff_x21 + 0xd0);
        uVar21 = *(undefined4 *)(unaff_x21 + 0xd4);
        uVar20 = *(undefined4 *)(unaff_x21 + 0xd8);
        uVar19 = *(undefined4 *)(unaff_x21 + 0xdc);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_033e7430(uVar22,uVar21,uVar20,uVar19,in_stack_00000028,lVar8,uVar13,uVar4);
      }
    }
    if (*(long *)(unaff_x20 + 0x180) != 0) {
      uVar6 = FUN_03380ff0(*(long *)(unaff_x20 + 0x180),0);
      if ((uVar6 & 1) != 0) {
        lVar9 = *(long *)(unaff_x20 + 0x180);
        if (lVar9 == 0) goto LAB_033e701c;
        in_stack_00000170 = *(undefined8 *)(lVar9 + 0x50);
        in_stack_00000158 = *(undefined8 *)(lVar9 + 0x38);
        in_stack_00000150 = *(undefined8 *)(lVar9 + 0x30);
        in_stack_00000168 = *(undefined8 *)(lVar9 + 0x48);
        in_stack_00000160 = *(undefined8 *)(lVar9 + 0x40);
        uVar13 = *(undefined8 *)(unaff_x21 + 0x80);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar5 = FUN_03404c60(uVar13,&stack0x000004e0,0);
        FUN_03422f30();
        uVar13 = FUN_034240a0();
        if (*(int *)(*(long *)System_Linq_Expressions_Interpreter_MethodInfoCallInstruction_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)
                              System_Linq_Expressions_Interpreter_MethodInfoCallInstruction_TypeInfo
                            );
        }
        FUN_03425cdc(in_stack_00000028,uVar13,iVar5 == -1,0);
      }
      return;
    }
  }
LAB_033e701c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


