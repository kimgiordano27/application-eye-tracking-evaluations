/*
FUNCTION_NAME: Unity.Collections.AllocatorManager.SlabAllocator.Try_000000B9$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 056e9c68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate___ctor(void)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int unaff_100001ca;
  undefined *puVar6;
  char in_NG;
  char in_OV;
  short sVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int in_w8;
  undefined4 uVar14;
  ushort uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ushort *unaff_x26;
  uint uVar19;
  long lVar20;
  int iStack0000000000000018;
  int iStack000000000000001c;
  char cStack0000000000000020;
  int iStack0000000000000024;
  long in_stack_00000028;
  
code_r0x056e9c68:
  if (in_NG == in_OV) {
    uVar11 = FUN_02d60af8();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar11,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
  }
  lVar10 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,in_w8 + 0x5a);
  lVar12 = lVar10;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar10 + 0x20;
    }
  }
  FUN_05033a40(lVar12,unaff_x24,iStack0000000000000024 << 1,0);
  if (in_stack_00000028 != 0) {
    FUN_04f29514(&stack0x00000028,0);
  }
  iStack000000000000001c = iStack000000000000001c + 0x5a;
  in_stack_00000028 = FUN_04f29500(lVar10,3,0);
  uVar11 = FUN_04f2942c(&stack0x00000028,0);
  unaff_x24 = FUN_05052634(uVar11,0);
LAB_056e9e7c:
  lVar12 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,4);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) == 0)) {
    lVar20 = 0;
  }
  else {
    lVar20 = lVar12 + 0x20;
  }
  plVar13 = (long *)FUN_04ea62a0(0);
  if (plVar13 == (long *)0x0) goto LAB_056ea154;
  uVar14 = 1;
  if (cStack0000000000000020 != '\0') {
    uVar14 = 2;
  }
  uVar8 = (**(code **)(*plVar13 + 0x278))
                    (plVar13,unaff_x26,uVar14,lVar20,4,*(undefined8 *)(*plVar13 + 0x280));
  iStack000000000000001c = uVar8 * -3 + iStack000000000000001c;
  iVar16 = unaff_w25;
  if (0 < (int)uVar8) {
    if (lVar12 == 0) goto LAB_056ea154;
    uVar18 = 0;
    do {
      if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_056ea150;
      uVar3 = *(undefined1 *)(lVar12 + 0x20 + uVar18);
      if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_056ea790(uVar3,lVar10,(long)&stack0x00000020 + 4);
      uVar18 = uVar18 + 1;
      iVar16 = unaff_100001ca;
    } while (uVar8 != uVar18);
  }
LAB_056e9c2c:
  do {
    unaff_w25 = iVar16 + 1;
    if (unaff_w20 <= unaff_w25) {
      if (in_stack_00000028 != 0) {
        FUN_04f29514(&stack0x00000028,0);
      }
      FUN_04e938a4(0,lVar10,0,iStack0000000000000024,0);
      return;
    }
    cStack0000000000000020 = '\0';
    unaff_x26 = (ushort *)(unaff_x21 + (long)unaff_w25 * 2);
    uVar15 = *unaff_x26;
    if (uVar15 == 0x25) {
      iVar17 = iVar16 + 3;
      if (iVar17 < unaff_w20) {
        uVar4 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 2) * 2);
        uVar5 = *(undefined2 *)(unaff_x21 + (long)iVar17 * 2);
        if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_056ea174(uVar4,uVar5);
        uVar8 = (uint)uVar11;
        if ((((uVar8 & 0xffff) != 0x25) && ((uVar8 & 0xffff) != 0xffff)) &&
           (uVar18 = FUN_056e97d8(uVar11,iStack0000000000000018), (uVar18 & 1) == 0)) {
          if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if ((0x1f < (uVar8 & 0xffff)) && (0x20 < (uVar8 - 0x7f & 0xffff))) {
            if ((3 < (uVar8 - 0x23 & 0xffff)) &&
               (5 < (uVar8 - 0x3b & 0xffff) || (uVar8 & 0xfffd) == 0x3c)) {
              uVar19 = (uVar8 & 0xffff) - 0x2b;
              if ((0x31 < uVar19) || ((1L << ((ulong)uVar19 & 0x3f) & 0x2000000000013U) == 0)) {
                if ((uVar8 & 0xffff) < 0x80) {
                  lVar12 = (long)iStack0000000000000024;
                  iStack0000000000000024 = iStack0000000000000024 + 1;
                  *(short *)(unaff_x24 + lVar12 * 2) = (short)uVar11;
                  iVar16 = iVar17;
                }
                else {
                  if ((unaff_x23 == 0) &&
                     (unaff_x23 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,unaff_w20 - unaff_w25
                                              ), unaff_x23 == 0)) goto LAB_056ea154;
                  puVar6 = PTR_DAT_0675e638;
                  if (*(int *)(unaff_x23 + 0x18) == 0) {
LAB_056ea150:
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  *(char *)(unaff_x23 + 0x20) = (char)uVar11;
                  if (iVar16 + 4 < unaff_w20) {
                    iVar16 = unaff_w25;
                    uVar19 = 1;
                    do {
                      iVar17 = iVar16;
                      uVar8 = uVar19;
                      if ((*(short *)(unaff_x21 + (long)(iVar16 + 3) * 2) != 0x25) ||
                         (unaff_w20 <= iVar16 + 5)) break;
                      uVar4 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 5) * 2);
                      uVar5 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 4) * 2);
                      if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      sVar7 = FUN_056ea174(uVar5,uVar4);
                      if (0xff7e < (ushort)(sVar7 - 0x80U)) break;
                      if (*(uint *)(unaff_x23 + 0x18) <= uVar19) goto LAB_056ea150;
                      uVar8 = uVar19 + 1;
                      iVar17 = iVar16 + 3;
                      iVar9 = iVar16 + 6;
                      *(char *)(unaff_x23 + (int)uVar19 + 0x20) = (char)sVar7;
                      iVar16 = iVar17;
                      uVar19 = uVar8;
                    } while (iVar9 < unaff_w20);
                    iVar17 = iVar17 + 2;
                  }
                  else {
                    uVar8 = 1;
                  }
                  plVar13 = (long *)FUN_04ea62a0(0);
                  if (plVar13 == (long *)0x0) goto LAB_056ea154;
                  plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                              (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                  if (plVar13 != (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_06771318 + 0x130);
                    if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_06771318)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60e88(plVar13);
                    }
                  }
                  uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771238);
                  FUN_04e93b68(uVar11,*(undefined8 *)puVar6,0);
                  if (plVar13 == (long *)0x0) goto LAB_056ea154;
                  FUN_04ea81dc(plVar13,uVar11,0);
                  uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771558);
                  FUN_0508bde4(uVar11,*(undefined8 *)puVar6,0);
                  FUN_04ea8298(plVar13,uVar11,0);
                  uVar11 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,
                                        *(undefined4 *)(unaff_x23 + 0x18));
                  iVar9 = (**(code **)(*plVar13 + 0x2d8))
                                    (plVar13,unaff_x23,0,uVar8,uVar11,0,
                                     *(undefined8 *)(*plVar13 + 0x2e0));
                  iVar16 = iVar17;
                  if (iVar9 == 0) {
                    for (; unaff_w25 <= iVar17; unaff_w25 = unaff_w25 + 1) {
                      *(undefined2 *)(unaff_x24 + (long)iStack0000000000000024 * 2) =
                           *(undefined2 *)(unaff_x21 + (long)unaff_w25 * 2);
                      iStack0000000000000024 = iStack0000000000000024 + 1;
                    }
                  }
                  else {
                    if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_056ea2bc(unaff_x24,lVar10,(long)&stack0x00000020 + 4,uVar11,iVar9,unaff_x23,
                                 uVar8,iStack0000000000000018 == 0x20);
                  }
                }
                goto LAB_056e9c2c;
              }
            }
          }
        }
        iVar9 = iStack0000000000000024 + 1;
        iVar1 = iStack0000000000000024 + 2;
        *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = *unaff_x26;
        iStack0000000000000024 = iStack0000000000000024 + 3;
        *(undefined2 *)(unaff_x24 + (long)iVar9 * 2) =
             *(undefined2 *)(unaff_x21 + (long)(iVar16 + 2) * 2);
        *(undefined2 *)(unaff_x24 + (long)iVar1 * 2) = *(undefined2 *)(unaff_x21 + (long)iVar17 * 2)
        ;
        iVar16 = iVar17;
      }
      else {
        uVar15 = 0x25;
        iVar16 = iStack0000000000000024;
LAB_056e9c24:
        iStack0000000000000024 = iVar16 + 1;
        *(ushort *)(unaff_x24 + (long)iVar16 * 2) = uVar15;
        iVar16 = unaff_w25;
      }
      goto LAB_056e9c2c;
    }
    uVar8 = (uint)uVar15;
    if (0x7f < uVar15) {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar19 = (uint)uVar15;
      uVar18 = FUN_04f84e4c(uVar15,0);
      if (((uVar18 & 1) != 0) && (iVar16 = iVar16 + 2, iVar16 < unaff_w20)) {
        uVar18 = FUN_056e91bc(uVar19,*(undefined2 *)(unaff_x21 + (long)iVar16 * 2),&stack0x00000020,
                              iStack0000000000000018 == 0x20);
        if ((uVar18 & 1) == 0) break;
        lVar12 = (long)iStack0000000000000024;
        iVar17 = iStack0000000000000024 + 1;
        iStack0000000000000024 = iStack0000000000000024 + 2;
        *(ushort *)(unaff_x24 + lVar12 * 2) = *unaff_x26;
        *(undefined2 *)(unaff_x24 + (long)iVar17 * 2) =
             *(undefined2 *)(unaff_x21 + (long)iVar16 * 2);
        goto LAB_056e9c2c;
      }
      if ((0x6ba < (uVar19 - 0xa0 >> 5 & 0x7ff)) && (0x4cf < (uVar19 + 0x700 & 0xffff))) {
        if ((iStack0000000000000018 == 0x20) && (0x1ff < (uVar8 + 0x210 & 0xffff))) {
          if (0x18 < (uVar8 + 0x2000 >> 8 & 0xff)) break;
        }
        else if (0x1ff < (uVar8 + 0x210 & 0xffff)) break;
      }
      if (*(int *)(*(long *)PTR_DAT_06764580 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar18 = FUN_056c308c(uVar8,0);
      iVar16 = unaff_w25;
      if ((uVar18 & 1) == 0) {
        uVar15 = *unaff_x26;
        iVar16 = iStack0000000000000024;
        goto LAB_056e9c24;
      }
      goto LAB_056e9c2c;
    }
    lVar12 = (long)iStack0000000000000024;
    iStack0000000000000024 = iStack0000000000000024 + 1;
    *(ushort *)(unaff_x24 + lVar12 * 2) = uVar15;
    iVar16 = unaff_w25;
  } while( true );
  unaff_100001ca = unaff_w25;
  if (iStack000000000000001c < 0xc) goto code_r0x056e9c54;
  goto LAB_056e9e7c;
code_r0x056e9c54:
  if (lVar10 == 0) {
LAB_056ea154:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  in_w8 = *(int *)(lVar10 + 0x18);
  in_OV = SBORROW4(in_w8,0x7fffffa6);
  in_NG = in_w8 + -0x7fffffa6 < 0;
  goto code_r0x056e9c68;
}


