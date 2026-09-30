/*
FUNCTION_NAME: Unity.Collections.AllocatorManager.SlabAllocator.Try_000000B9$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 056e9d1c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 156
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate__BeginInvoke
               (void)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint in_w8;
  undefined4 uVar13;
  long lVar14;
  ushort uVar15;
  ulong in_x9;
  int iVar16;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w25;
  ushort *unaff_x26;
  uint uVar17;
  ulong unaff_x27;
  long lVar18;
  long unaff_x29;
  int iStack0000000000000018;
  int iStack000000000000001c;
  char cStack0000000000000020;
  int iStack0000000000000024;
  long in_stack_00000028;
  
code_r0x056e9d1c:
  if ((in_x9 & 0x2000000000013) != 0) goto LAB_056e9aa8;
LAB_056e9d2c:
  if (in_w8 < 0x80) {
    lVar14 = (long)iStack0000000000000024;
    iStack0000000000000024 = iStack0000000000000024 + 1;
    *(short *)(unaff_x24 + lVar14 * 2) = (short)unaff_x27;
    iVar16 = unaff_w19;
LAB_056e9c2c:
    do {
      while( true ) {
        unaff_w25 = iVar16 + 1;
        if (unaff_w20 <= unaff_w25) {
          if (in_stack_00000028 != 0) {
            FUN_04f29514(&stack0x00000028,0);
          }
          FUN_04e938a4(0,unaff_x22,0,iStack0000000000000024,0);
          return;
        }
        cStack0000000000000020 = '\0';
        unaff_x26 = (ushort *)(unaff_x21 + (long)unaff_w25 * 2);
        uVar15 = *unaff_x26;
        if (uVar15 == 0x25) break;
        uVar8 = (uint)uVar15;
        if (uVar15 < 0x80) {
          lVar14 = (long)iStack0000000000000024;
          iStack0000000000000024 = iStack0000000000000024 + 1;
          *(ushort *)(unaff_x24 + lVar14 * 2) = uVar15;
          iVar16 = unaff_w25;
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar17 = (uint)uVar15;
          uVar10 = FUN_04f84e4c(uVar15,0);
          if (((uVar10 & 1) == 0) || (iVar16 = iVar16 + 2, unaff_w20 <= iVar16)) {
            if (((uVar17 - 0xa0 >> 5 & 0x7ff) < 0x6bb) || ((uVar17 + 0x700 & 0xffff) < 0x4d0)) {
LAB_056e9bec:
              if (*(int *)(*(long *)PTR_DAT_06764580 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar10 = FUN_056c308c(uVar8,0);
              iVar16 = unaff_w25;
              if ((uVar10 & 1) == 0) {
                uVar15 = *unaff_x26;
                iVar16 = iStack0000000000000024;
LAB_056e9c24:
                iStack0000000000000024 = iVar16 + 1;
                *(ushort *)(unaff_x24 + (long)iVar16 * 2) = uVar15;
                iVar16 = unaff_w25;
              }
            }
            else {
              if ((iStack0000000000000018 == 0x20) && (0x1ff < (uVar8 + 0x210 & 0xffff))) {
                if ((uVar8 + 0x2000 >> 8 & 0xff) < 0x19) goto LAB_056e9bec;
              }
              else if ((uVar8 + 0x210 & 0xffff) < 0x200) goto LAB_056e9bec;
Unity_Collections_AllocatorManager_SlabAllocator__Dispose:
              if (iStack000000000000001c < 0xc) {
                if (unaff_x22 == 0) goto LAB_056ea154;
                if (0x7fffffa5 < *(int *)(unaff_x22 + 0x18)) {
                  uVar12 = FUN_02d60af8();
                    /* WARNING: Subroutine does not return */
                  FUN_02d609b4(uVar12,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
                }
                unaff_x22 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,
                                         *(int *)(unaff_x22 + 0x18) + 0x5a);
                lVar14 = unaff_x22;
                if (unaff_x22 != 0) {
                  if (*(int *)(unaff_x22 + 0x18) == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = unaff_x22 + 0x20;
                  }
                }
                FUN_05033a40(lVar14,unaff_x24,iStack0000000000000024 << 1,0);
                if (in_stack_00000028 != 0) {
                  FUN_04f29514(&stack0x00000028,0);
                }
                iStack000000000000001c = iStack000000000000001c + 0x5a;
                in_stack_00000028 = FUN_04f29500(unaff_x22,3,0);
                uVar12 = FUN_04f2942c(&stack0x00000028,0);
                unaff_x24 = FUN_05052634(uVar12,0);
              }
              lVar14 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,4);
              if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) == 0)) {
                lVar18 = 0;
              }
              else {
                lVar18 = lVar14 + 0x20;
              }
              plVar11 = (long *)FUN_04ea62a0(0);
              if (plVar11 == (long *)0x0) goto LAB_056ea154;
              uVar13 = 1;
              if (cStack0000000000000020 != '\0') {
                uVar13 = 2;
              }
              uVar8 = (**(code **)(*plVar11 + 0x278))
                                (plVar11,unaff_x26,uVar13,lVar18,4,*(undefined8 *)(*plVar11 + 0x280)
                                );
              iStack000000000000001c = uVar8 * -3 + iStack000000000000001c;
              iVar16 = unaff_w25;
              if (0 < (int)uVar8) {
                if (lVar14 == 0) goto LAB_056ea154;
                uVar10 = 0;
                do {
                  if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_056ea150;
                  uVar3 = *(undefined1 *)(lVar14 + 0x20 + uVar10);
                  if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_056ea790(uVar3,unaff_x22,(long)&stack0x00000020 + 4);
                  uVar10 = uVar10 + 1;
                } while (uVar8 != uVar10);
              }
            }
          }
          else {
            uVar10 = FUN_056e91bc(uVar17,*(undefined2 *)(unaff_x21 + (long)iVar16 * 2),
                                  &stack0x00000020,iStack0000000000000018 == 0x20);
            if ((uVar10 & 1) == 0) goto Unity_Collections_AllocatorManager_SlabAllocator__Dispose;
            lVar14 = (long)iStack0000000000000024;
            iVar9 = iStack0000000000000024 + 1;
            iStack0000000000000024 = iStack0000000000000024 + 2;
            *(ushort *)(unaff_x24 + lVar14 * 2) = *unaff_x26;
            *(undefined2 *)(unaff_x24 + (long)iVar9 * 2) =
                 *(undefined2 *)(unaff_x21 + (long)iVar16 * 2);
          }
        }
      }
      unaff_w19 = iVar16 + 3;
      if (unaff_w20 <= unaff_w19) {
        uVar15 = 0x25;
        iVar16 = iStack0000000000000024;
        goto LAB_056e9c24;
      }
      unaff_w23 = iVar16 + 2;
      uVar4 = *(undefined2 *)(unaff_x21 + (long)unaff_w23 * 2);
      uVar5 = *(undefined2 *)(unaff_x21 + (long)unaff_w19 * 2);
      if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_056ea174(uVar4,uVar5);
      uVar8 = (uint)uVar10;
      if (((uVar8 & 0xffff) != 0x25) && ((uVar8 & 0xffff) != 0xffff)) {
        unaff_x27 = uVar10 & 0xffffffff;
        uVar10 = FUN_056e97d8(uVar10,iStack0000000000000018);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if ((0x1f < (uVar8 & 0xffff)) && (0x20 < (uVar8 - 0x7f & 0xffff))) {
            if ((3 < (uVar8 - 0x23 & 0xffff)) &&
               (5 < (uVar8 - 0x3b & 0xffff) || (uVar8 & 0xfffd) == 0x3c)) goto code_r0x056e9d04;
          }
        }
      }
LAB_056e9aa8:
      iVar16 = iStack0000000000000024 + 1;
      iVar9 = iStack0000000000000024 + 2;
      *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = *unaff_x26;
      iStack0000000000000024 = iStack0000000000000024 + 3;
      *(undefined2 *)(unaff_x24 + (long)iVar16 * 2) =
           *(undefined2 *)(unaff_x21 + (long)unaff_w23 * 2);
      *(undefined2 *)(unaff_x24 + (long)iVar9 * 2) =
           *(undefined2 *)(unaff_x21 + (long)unaff_w19 * 2);
      iVar16 = unaff_w19;
    } while( true );
  }
  if ((unaff_x29 != 0) ||
     (unaff_x29 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,unaff_w20 - unaff_w25),
     unaff_x29 != 0)) {
    puVar6 = PTR_DAT_0675e638;
    if (*(int *)(unaff_x29 + 0x18) == 0) {
LAB_056ea150:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(char *)(unaff_x29 + 0x20) = (char)unaff_x27;
    if (unaff_w25 + 3 < unaff_w20) {
      iVar16 = unaff_w25;
      uVar17 = 1;
      do {
        iVar9 = iVar16;
        uVar8 = uVar17;
        if ((*(short *)(unaff_x21 + (long)(iVar16 + 3) * 2) != 0x25) || (unaff_w20 <= iVar16 + 5))
        break;
        uVar4 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 5) * 2);
        uVar5 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 4) * 2);
        if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        sVar7 = FUN_056ea174(uVar5,uVar4);
        if (0xff7e < (ushort)(sVar7 - 0x80U)) break;
        if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_056ea150;
        uVar8 = uVar17 + 1;
        iVar9 = iVar16 + 3;
        iVar1 = iVar16 + 6;
        *(char *)(unaff_x29 + (int)uVar17 + 0x20) = (char)sVar7;
        iVar16 = iVar9;
        uVar17 = uVar8;
      } while (iVar1 < unaff_w20);
      unaff_w19 = iVar9 + 2;
    }
    else {
      uVar8 = 1;
    }
    plVar11 = (long *)FUN_04ea62a0(0);
    if (plVar11 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      if (plVar11 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_06771318 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)PTR_DAT_06771318)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar11);
        }
      }
      uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771238);
      FUN_04e93b68(uVar12,*(undefined8 *)puVar6,0);
      if (plVar11 != (long *)0x0) {
        FUN_04ea81dc(plVar11,uVar12,0);
        uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771558);
        FUN_0508bde4(uVar12,*(undefined8 *)puVar6,0);
        FUN_04ea8298(plVar11,uVar12,0);
        uVar12 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,*(undefined4 *)(unaff_x29 + 0x18));
        iVar9 = (**(code **)(*plVar11 + 0x2d8))
                          (plVar11,unaff_x29,0,uVar8,uVar12,0,*(undefined8 *)(*plVar11 + 0x2e0));
        iVar16 = unaff_w19;
        if (iVar9 == 0) {
          for (; unaff_w25 <= unaff_w19; unaff_w25 = unaff_w25 + 1) {
            *(undefined2 *)(unaff_x24 + (long)iStack0000000000000024 * 2) =
                 *(undefined2 *)(unaff_x21 + (long)unaff_w25 * 2);
            iStack0000000000000024 = iStack0000000000000024 + 1;
          }
        }
        else {
          if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_056ea2bc(unaff_x24,unaff_x22,(long)&stack0x00000020 + 4,uVar12,iVar9,unaff_x29,uVar8,
                       iStack0000000000000018 == 0x20);
        }
        goto LAB_056e9c2c;
      }
    }
  }
LAB_056ea154:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
code_r0x056e9d04:
  in_w8 = uVar8 & 0xffff;
  if (in_w8 - 0x2b < 0x32) goto code_r0x056e9d14;
  goto LAB_056e9d2c;
code_r0x056e9d14:
  in_x9 = 1L << ((ulong)(in_w8 - 0x2b) & 0x3f);
  goto code_r0x056e9d1c;
}


