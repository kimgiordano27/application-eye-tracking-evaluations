/*
FUNCTION_NAME: Unity.Collections.AllocatorManager.SlabAllocator.Try_000000B9$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 056e9dc8
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


void Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate__EndInvoke
               (ulong param_1)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  ushort uVar15;
  int iVar16;
  int unaff_w19;
  int iVar17;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  int unaff_w25;
  uint uVar18;
  uint unaff_w27;
  long unaff_x28;
  long lVar19;
  undefined8 *unaff_x29;
  int iStack0000000000000018;
  int iStack000000000000001c;
  char cStack0000000000000020;
  int iStack0000000000000024;
  long in_stack_00000028;
  
code_r0x056e9dc8:
  sVar7 = FUN_056ea174(param_1,unaff_w27);
  iVar17 = unaff_w19;
  if ((ushort)(sVar7 - 0x80U) < 0xff7f) {
    if (*(uint *)(unaff_x28 + 0x18) <= unaff_w23) {
LAB_056ea150:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar8 = unaff_w23 + 1;
    iVar17 = unaff_w19 + 3;
    iVar16 = unaff_w19 + 6;
    *(char *)(unaff_x28 + (int)unaff_w23 + 0x20) = (char)sVar7;
    unaff_w19 = iVar17;
    unaff_w23 = uVar8;
    if (iVar16 < unaff_w20) goto LAB_056e9d84;
  }
LAB_056e9f80:
  unaff_w19 = unaff_w25;
  iVar17 = iVar17 + 2;
  do {
    plVar11 = (long *)FUN_04ea62a0(0);
    if (plVar11 == (long *)0x0) {
LAB_056ea154:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
    if (plVar11 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_06771318 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06771318)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar11);
      }
    }
    uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771238);
    FUN_04e93b68(uVar12,*unaff_x29,0);
    if (plVar11 == (long *)0x0) goto LAB_056ea154;
    FUN_04ea81dc(plVar11,uVar12,0);
    uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771558);
    FUN_0508bde4(uVar12,*unaff_x29,0);
    FUN_04ea8298(plVar11,uVar12,0);
    uVar12 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,*(undefined4 *)(unaff_x28 + 0x18));
    iVar9 = (**(code **)(*plVar11 + 0x2d8))
                      (plVar11,unaff_x28,0,unaff_w23,uVar12,0,*(undefined8 *)(*plVar11 + 0x2e0));
    iVar16 = iVar17;
    if (iVar9 == 0) {
      for (; unaff_w19 <= iVar17; unaff_w19 = unaff_w19 + 1) {
        *(undefined2 *)(unaff_x24 + (long)iStack0000000000000024 * 2) =
             *(undefined2 *)(unaff_x21 + (long)unaff_w19 * 2);
        iStack0000000000000024 = iStack0000000000000024 + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_056ea2bc(unaff_x24,unaff_x22,(long)&stack0x00000020 + 4,uVar12,iVar9,unaff_x28,unaff_w23,
                   iStack0000000000000018 == 0x20);
    }
LAB_056e9c2c:
    while( true ) {
      unaff_w19 = iVar16 + 1;
      if (unaff_w20 <= unaff_w19) {
        if (in_stack_00000028 != 0) {
          FUN_04f29514(&stack0x00000028,0);
        }
        FUN_04e938a4(0,unaff_x22,0,iStack0000000000000024,0);
        return;
      }
      cStack0000000000000020 = '\0';
      puVar1 = (ushort *)(unaff_x21 + (long)unaff_w19 * 2);
      uVar15 = *puVar1;
      if (uVar15 == 0x25) break;
      uVar8 = (uint)uVar15;
      if (uVar15 < 0x80) {
        lVar14 = (long)iStack0000000000000024;
        iStack0000000000000024 = iStack0000000000000024 + 1;
        *(ushort *)(unaff_x24 + lVar14 * 2) = uVar15;
        iVar16 = unaff_w19;
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar18 = (uint)uVar15;
        uVar10 = FUN_04f84e4c(uVar15,0);
        if (((uVar10 & 1) == 0) || (iVar16 = iVar16 + 2, unaff_w20 <= iVar16)) {
          if (((uVar18 - 0xa0 >> 5 & 0x7ff) < 0x6bb) || ((uVar18 + 0x700 & 0xffff) < 0x4d0)) {
LAB_056e9bec:
            if (*(int *)(*(long *)PTR_DAT_06764580 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_056c308c(uVar8,0);
            iVar16 = unaff_w19;
            if ((uVar10 & 1) == 0) {
              uVar15 = *puVar1;
              iVar17 = iStack0000000000000024;
LAB_056e9c24:
              iStack0000000000000024 = iVar17 + 1;
              *(ushort *)(unaff_x24 + (long)iVar17 * 2) = uVar15;
              iVar16 = unaff_w19;
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
              lVar19 = 0;
            }
            else {
              lVar19 = lVar14 + 0x20;
            }
            plVar11 = (long *)FUN_04ea62a0(0);
            if (plVar11 == (long *)0x0) goto LAB_056ea154;
            uVar13 = 1;
            if (cStack0000000000000020 != '\0') {
              uVar13 = 2;
            }
            uVar8 = (**(code **)(*plVar11 + 0x278))
                              (plVar11,puVar1,uVar13,lVar19,4,*(undefined8 *)(*plVar11 + 0x280));
            iStack000000000000001c = uVar8 * -3 + iStack000000000000001c;
            iVar16 = unaff_w19;
            if (0 < (int)uVar8) {
              if (lVar14 == 0) goto LAB_056ea154;
              uVar10 = 0;
              do {
                if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_056ea150;
                uVar4 = *(undefined1 *)(lVar14 + 0x20 + uVar10);
                if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) ==
                    0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_056ea790(uVar4,unaff_x22,(long)&stack0x00000020 + 4);
                uVar10 = uVar10 + 1;
              } while (uVar8 != uVar10);
            }
          }
        }
        else {
          uVar10 = FUN_056e91bc(uVar18,*(undefined2 *)(unaff_x21 + (long)iVar16 * 2),
                                &stack0x00000020,iStack0000000000000018 == 0x20);
          if ((uVar10 & 1) == 0) goto Unity_Collections_AllocatorManager_SlabAllocator__Dispose;
          lVar14 = (long)iStack0000000000000024;
          iVar17 = iStack0000000000000024 + 1;
          iStack0000000000000024 = iStack0000000000000024 + 2;
          *(ushort *)(unaff_x24 + lVar14 * 2) = *puVar1;
          *(undefined2 *)(unaff_x24 + (long)iVar17 * 2) =
               *(undefined2 *)(unaff_x21 + (long)iVar16 * 2);
        }
      }
    }
    iVar17 = iVar16 + 3;
    if (unaff_w20 <= iVar17) {
      uVar15 = 0x25;
      iVar17 = iStack0000000000000024;
      goto LAB_056e9c24;
    }
    uVar5 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 2) * 2);
    uVar6 = *(undefined2 *)(unaff_x21 + (long)iVar17 * 2);
    if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar12 = FUN_056ea174(uVar5,uVar6);
    uVar8 = (uint)uVar12;
    if ((((uVar8 & 0xffff) == 0x25) || ((uVar8 & 0xffff) == 0xffff)) ||
       (uVar10 = FUN_056e97d8(uVar12,iStack0000000000000018), (uVar10 & 1) != 0)) {
LAB_056e9aa8:
      iVar9 = iStack0000000000000024 + 1;
      iVar2 = iStack0000000000000024 + 2;
      *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = *puVar1;
      iStack0000000000000024 = iStack0000000000000024 + 3;
      *(undefined2 *)(unaff_x24 + (long)iVar9 * 2) =
           *(undefined2 *)(unaff_x21 + (long)(iVar16 + 2) * 2);
      *(undefined2 *)(unaff_x24 + (long)iVar2 * 2) = *(undefined2 *)(unaff_x21 + (long)iVar17 * 2);
      iVar16 = iVar17;
      goto LAB_056e9c2c;
    }
    if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (((uVar8 & 0xffff) < 0x20) || ((uVar8 - 0x7f & 0xffff) < 0x21)) goto LAB_056e9aa8;
    if (((uVar8 - 0x23 & 0xffff) < 4) || ((uVar8 - 0x3b & 0xffff) < 6 && (uVar8 & 0xfffd) != 0x3c))
    goto LAB_056e9aa8;
    uVar18 = (uVar8 & 0xffff) - 0x2b;
    if ((uVar18 < 0x32) && ((1L << ((ulong)uVar18 & 0x3f) & 0x2000000000013U) != 0))
    goto LAB_056e9aa8;
    if ((uVar8 & 0xffff) < 0x80) {
      lVar14 = (long)iStack0000000000000024;
      iStack0000000000000024 = iStack0000000000000024 + 1;
      *(short *)(unaff_x24 + lVar14 * 2) = (short)uVar12;
      iVar16 = iVar17;
      goto LAB_056e9c2c;
    }
    if ((unaff_x28 == 0) &&
       (unaff_x28 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,unaff_w20 - unaff_w19),
       unaff_x28 == 0)) goto LAB_056ea154;
    unaff_x29 = (undefined8 *)PTR_DAT_0675e638;
    if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_056ea150;
    *(char *)(unaff_x28 + 0x20) = (char)uVar12;
    if (iVar16 + 4 < unaff_w20) break;
    unaff_w23 = 1;
  } while( true );
  unaff_w23 = 1;
  unaff_w25 = unaff_w19;
LAB_056e9d84:
  iVar17 = unaff_w19;
  if ((*(short *)(unaff_x21 + (long)(unaff_w19 + 3) * 2) != 0x25) || (unaff_w20 <= unaff_w19 + 5))
  goto LAB_056e9f80;
  unaff_w27 = (uint)*(ushort *)(unaff_x21 + (long)(unaff_w19 + 5) * 2);
  param_1 = (ulong)*(ushort *)(unaff_x21 + (long)(unaff_w19 + 4) * 2);
  if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  goto code_r0x056e9dc8;
}


