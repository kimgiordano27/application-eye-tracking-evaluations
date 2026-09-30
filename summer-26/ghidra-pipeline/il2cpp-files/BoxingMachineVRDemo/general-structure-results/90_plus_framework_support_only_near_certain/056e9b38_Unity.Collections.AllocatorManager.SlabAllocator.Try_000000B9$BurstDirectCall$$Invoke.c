/*
FUNCTION_NAME: Unity.Collections.AllocatorManager.SlabAllocator.Try_000000B9$BurstDirectCall$$Invoke
ENTRY_POINT: 056e9b38
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_BurstDirectCall__Invoke
               (ulong param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  ushort uVar16;
  int iVar17;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint uVar18;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  ushort *unaff_x26;
  uint unaff_w27;
  long lVar19;
  int iStack0000000000000018;
  int iStack000000000000001c;
  char cStack0000000000000020;
  int iStack0000000000000024;
  long in_stack_00000028;
  
  do {
    uVar12 = FUN_04f84e4c(param_1,0);
    if (((uVar12 & 1) == 0) || (iVar17 = unaff_w25 + 1, unaff_w20 <= iVar17)) {
      if (((unaff_w27 - 0xa0 >> 5 & 0x7ff) < 0x6bb) || ((unaff_w27 + 0x700 & 0xffff) < 0x4d0)) {
LAB_056e9bec:
        if (*(int *)(*(long *)PTR_DAT_06764580 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar12 = FUN_056c308c(unaff_w27,0);
        if ((uVar12 & 1) == 0) {
          uVar16 = *unaff_x26;
          iVar17 = iStack0000000000000024;
          goto LAB_056e9c24;
        }
      }
      else {
        if ((iStack0000000000000018 == 0x20) && (0x1ff < (unaff_w27 + 0x210 & 0xffff))) {
          if ((unaff_w27 + 0x2000 >> 8 & 0xff) < 0x19) goto LAB_056e9bec;
        }
        else if ((unaff_w27 + 0x210 & 0xffff) < 0x200) goto LAB_056e9bec;
Unity_Collections_AllocatorManager_SlabAllocator__Dispose:
        if (iStack000000000000001c < 0xc) {
          if (unaff_x22 == 0) goto LAB_056ea154;
          if (0x7fffffa5 < *(int *)(unaff_x22 + 0x18)) {
            uVar11 = FUN_02d60af8();
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar11,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
          }
          unaff_x22 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,*(int *)(unaff_x22 + 0x18) + 0x5a
                                  );
          lVar15 = unaff_x22;
          if (unaff_x22 != 0) {
            if (*(int *)(unaff_x22 + 0x18) == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = unaff_x22 + 0x20;
            }
          }
          FUN_05033a40(lVar15,unaff_x24,iStack0000000000000024 << 1,0);
          if (in_stack_00000028 != 0) {
            FUN_04f29514(&stack0x00000028,0);
          }
          iStack000000000000001c = iStack000000000000001c + 0x5a;
          in_stack_00000028 = FUN_04f29500(unaff_x22,3,0);
          uVar11 = FUN_04f2942c(&stack0x00000028,0);
          unaff_x24 = FUN_05052634(uVar11,0);
        }
        lVar15 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,4);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) == 0)) {
          lVar19 = 0;
        }
        else {
          lVar19 = lVar15 + 0x20;
        }
        plVar13 = (long *)FUN_04ea62a0(0);
        if (plVar13 == (long *)0x0) {
LAB_056ea154:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar14 = 1;
        if (cStack0000000000000020 != '\0') {
          uVar14 = 2;
        }
        uVar9 = (**(code **)(*plVar13 + 0x278))
                          (plVar13,unaff_x26,uVar14,lVar19,4,*(undefined8 *)(*plVar13 + 0x280));
        iStack000000000000001c = uVar9 * -3 + iStack000000000000001c;
        if (0 < (int)uVar9) {
          if (lVar15 == 0) goto LAB_056ea154;
          uVar12 = 0;
          do {
            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_056ea150;
            uVar4 = *(undefined1 *)(lVar15 + 0x20 + uVar12);
            if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02dbd7b4();
            }
            FUN_056ea790(uVar4,unaff_x22,(long)&stack0x00000020 + 4);
            uVar12 = uVar12 + 1;
          } while (uVar9 != uVar12);
        }
      }
    }
    else {
      uVar12 = FUN_056e91bc(unaff_w27,*(undefined2 *)(unaff_x21 + (long)iVar17 * 2),&stack0x00000020
                            ,iStack0000000000000018 == 0x20);
      if ((uVar12 & 1) == 0) goto Unity_Collections_AllocatorManager_SlabAllocator__Dispose;
      lVar15 = (long)iStack0000000000000024;
      iVar1 = iStack0000000000000024 + 1;
      iStack0000000000000024 = iStack0000000000000024 + 2;
      *(ushort *)(unaff_x24 + lVar15 * 2) = *unaff_x26;
      *(undefined2 *)(unaff_x24 + (long)iVar1 * 2) = *(undefined2 *)(unaff_x21 + (long)iVar17 * 2);
      unaff_w25 = iVar17;
    }
LAB_056e9c2c:
    while( true ) {
      iVar1 = unaff_w25 + 1;
      if (unaff_w20 <= iVar1) {
        if (in_stack_00000028 != 0) {
          FUN_04f29514(&stack0x00000028,0);
        }
        FUN_04e938a4(0,unaff_x22,0,iStack0000000000000024,0);
        return;
      }
      cStack0000000000000020 = '\0';
      unaff_x26 = (ushort *)(unaff_x21 + (long)iVar1 * 2);
      uVar16 = *unaff_x26;
      unaff_w27 = (uint)uVar16;
      if (uVar16 != 0x25) break;
      iVar17 = unaff_w25 + 3;
      if (iVar17 < unaff_w20) {
        uVar5 = *(undefined2 *)(unaff_x21 + (long)(unaff_w25 + 2) * 2);
        uVar6 = *(undefined2 *)(unaff_x21 + (long)iVar17 * 2);
        if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_056ea174(uVar5,uVar6);
        uVar9 = (uint)uVar11;
        if ((((uVar9 & 0xffff) == 0x25) || ((uVar9 & 0xffff) == 0xffff)) ||
           (uVar12 = FUN_056e97d8(uVar11,iStack0000000000000018), (uVar12 & 1) != 0)) {
LAB_056e9aa8:
          iVar1 = iStack0000000000000024 + 1;
          iVar10 = iStack0000000000000024 + 2;
          *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = *unaff_x26;
          iStack0000000000000024 = iStack0000000000000024 + 3;
          *(undefined2 *)(unaff_x24 + (long)iVar1 * 2) =
               *(undefined2 *)(unaff_x21 + (long)(unaff_w25 + 2) * 2);
          *(undefined2 *)(unaff_x24 + (long)iVar10 * 2) =
               *(undefined2 *)(unaff_x21 + (long)iVar17 * 2);
          unaff_w25 = iVar17;
        }
        else {
          if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (((uVar9 & 0xffff) < 0x20) || ((uVar9 - 0x7f & 0xffff) < 0x21)) goto LAB_056e9aa8;
          if (((uVar9 - 0x23 & 0xffff) < 4) ||
             ((uVar9 - 0x3b & 0xffff) < 6 && (uVar9 & 0xfffd) != 0x3c)) goto LAB_056e9aa8;
          uVar18 = (uVar9 & 0xffff) - 0x2b;
          if ((uVar18 < 0x32) && ((1L << ((ulong)uVar18 & 0x3f) & 0x2000000000013U) != 0))
          goto LAB_056e9aa8;
          if ((uVar9 & 0xffff) < 0x80) {
            lVar15 = (long)iStack0000000000000024;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            *(short *)(unaff_x24 + lVar15 * 2) = (short)uVar11;
            unaff_w25 = iVar17;
          }
          else {
            if ((unaff_x23 == 0) &&
               (unaff_x23 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,unaff_w20 - iVar1),
               unaff_x23 == 0)) goto LAB_056ea154;
            puVar7 = PTR_DAT_0675e638;
            if (*(int *)(unaff_x23 + 0x18) == 0) {
LAB_056ea150:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(char *)(unaff_x23 + 0x20) = (char)uVar11;
            if (unaff_w25 + 4 < unaff_w20) {
              iVar10 = iVar1;
              uVar18 = 1;
              do {
                iVar17 = iVar10;
                uVar9 = uVar18;
                if ((*(short *)(unaff_x21 + (long)(iVar10 + 3) * 2) != 0x25) ||
                   (unaff_w20 <= iVar10 + 5)) break;
                uVar5 = *(undefined2 *)(unaff_x21 + (long)(iVar10 + 5) * 2);
                uVar6 = *(undefined2 *)(unaff_x21 + (long)(iVar10 + 4) * 2);
                if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) ==
                    0) {
                  thunk_FUN_02dbd7b4();
                }
                sVar8 = FUN_056ea174(uVar6,uVar5);
                if (0xff7e < (ushort)(sVar8 - 0x80U)) break;
                if (*(uint *)(unaff_x23 + 0x18) <= uVar18) goto LAB_056ea150;
                uVar9 = uVar18 + 1;
                iVar17 = iVar10 + 3;
                iVar2 = iVar10 + 6;
                *(char *)(unaff_x23 + (int)uVar18 + 0x20) = (char)sVar8;
                iVar10 = iVar17;
                uVar18 = uVar9;
              } while (iVar2 < unaff_w20);
              iVar17 = iVar17 + 2;
            }
            else {
              uVar9 = 1;
            }
            plVar13 = (long *)FUN_04ea62a0(0);
            if (plVar13 == (long *)0x0) goto LAB_056ea154;
            plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
            if (plVar13 != (long *)0x0) {
              bVar3 = *(byte *)(*(long *)PTR_DAT_06771318 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)PTR_DAT_06771318)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(plVar13);
              }
            }
            uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771238);
            FUN_04e93b68(uVar11,*(undefined8 *)puVar7,0);
            if (plVar13 == (long *)0x0) goto LAB_056ea154;
            FUN_04ea81dc(plVar13,uVar11,0);
            uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771558);
            FUN_0508bde4(uVar11,*(undefined8 *)puVar7,0);
            FUN_04ea8298(plVar13,uVar11,0);
            uVar11 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,*(undefined4 *)(unaff_x23 + 0x18))
            ;
            iVar10 = (**(code **)(*plVar13 + 0x2d8))
                               (plVar13,unaff_x23,0,uVar9,uVar11,0,*(undefined8 *)(*plVar13 + 0x2e0)
                               );
            unaff_w25 = iVar17;
            if (iVar10 == 0) {
              for (; iVar1 <= iVar17; iVar1 = iVar1 + 1) {
                *(undefined2 *)(unaff_x24 + (long)iStack0000000000000024 * 2) =
                     *(undefined2 *)(unaff_x21 + (long)iVar1 * 2);
                iStack0000000000000024 = iStack0000000000000024 + 1;
              }
            }
            else {
              if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0
                 ) {
                thunk_FUN_02dbd7b4();
              }
              FUN_056ea2bc(unaff_x24,unaff_x22,(long)&stack0x00000020 + 4,uVar11,iVar10,unaff_x23,
                           uVar9,iStack0000000000000018 == 0x20);
            }
          }
        }
      }
      else {
        uVar16 = 0x25;
        iVar17 = iStack0000000000000024;
        unaff_w25 = iVar1;
LAB_056e9c24:
        iStack0000000000000024 = iVar17 + 1;
        *(ushort *)(unaff_x24 + (long)iVar17 * 2) = uVar16;
      }
    }
    if (uVar16 < 0x80) {
      lVar15 = (long)iStack0000000000000024;
      iStack0000000000000024 = iStack0000000000000024 + 1;
      *(ushort *)(unaff_x24 + lVar15 * 2) = uVar16;
      unaff_w25 = iVar1;
      goto LAB_056e9c2c;
    }
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    param_1 = (ulong)uVar16;
    unaff_w25 = iVar1;
  } while( true );
}


