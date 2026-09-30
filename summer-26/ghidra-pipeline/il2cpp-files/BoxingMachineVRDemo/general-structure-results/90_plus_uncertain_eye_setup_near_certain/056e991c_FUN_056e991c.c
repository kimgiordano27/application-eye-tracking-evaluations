/*
FUNCTION_NAME: FUN_056e991c
ENTRY_POINT: 056e991c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_056e991c(long param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 uVar15;
  long lVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  int local_74;
  char local_70 [4];
  int local_6c;
  long local_68;
  
  puVar6 = PTR_DAT_06760700;
  if ((DAT_06b7fb7d & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e1c0);
    FUN_02d6084c(PTR_DAT_06760700);
    FUN_02d6084c(PTR_DAT_06771558);
    FUN_02d6084c(PTR_DAT_06771238);
    FUN_02d6084c(PTR_DAT_06771318);
    FUN_02d6084c(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_02d6084c(Unity_Properties_TypeConverter<uint,_long>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06764580);
    FUN_02d6084c(PTR_DAT_0675e638);
    DAT_06b7fb7d = 1;
  }
  local_68 = 0;
  local_6c = 0;
  local_70[0] = '\0';
  lVar10 = FUN_02d60934(*(undefined8 *)puVar6,param_3 - param_2);
  local_68 = FUN_04f29500(lVar10,3,0);
  uVar11 = FUN_04f2942c(&local_68,0);
  lVar12 = FUN_05052634(uVar11,0);
  local_6c = 0;
  local_70[0] = '\0';
  if (param_2 < param_3) {
    lVar20 = 0;
    local_74 = 0;
    do {
      local_70[0] = '\0';
      puVar1 = (ushort *)(param_1 + (long)param_2 * 2);
      uVar17 = *puVar1;
      if (uVar17 == 0x25) {
        iVar19 = param_2 + 2;
        if (iVar19 < param_3) {
          uVar4 = *(undefined2 *)(param_1 + (long)(param_2 + 1) * 2);
          uVar5 = *(undefined2 *)(param_1 + (long)iVar19 * 2);
          if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_056ea174(uVar4,uVar5);
          uVar8 = (uint)uVar11;
          if ((((uVar8 & 0xffff) != 0x25) && ((uVar8 & 0xffff) != 0xffff)) &&
             (uVar13 = FUN_056e97d8(uVar11,param_4), (uVar13 & 1) == 0)) {
            if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0)
            {
              thunk_FUN_02dbd7b4();
            }
            if ((0x1f < (uVar8 & 0xffff)) && (0x20 < (uVar8 - 0x7f & 0xffff))) {
              if ((3 < (uVar8 - 0x23 & 0xffff)) &&
                 (5 < (uVar8 - 0x3b & 0xffff) || (uVar8 & 0xfffd) == 0x3c)) {
                uVar21 = (uVar8 & 0xffff) - 0x2b;
                if ((0x31 < uVar21) || ((1L << ((ulong)uVar21 & 0x3f) & 0x2000000000013U) == 0)) {
                  if ((uVar8 & 0xffff) < 0x80) {
                    lVar16 = (long)local_6c;
                    local_6c = local_6c + 1;
                    *(short *)(lVar12 + lVar16 * 2) = (short)uVar11;
                    param_2 = iVar19;
                  }
                  else {
                    if ((lVar20 == 0) &&
                       (lVar20 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,param_3 - param_2),
                       lVar20 == 0)) goto LAB_056ea154;
                    puVar6 = PTR_DAT_0675e638;
                    if (*(int *)(lVar20 + 0x18) == 0) {
LAB_056ea150:
                    /* WARNING: Subroutine does not return */
                      FUN_02d60af0();
                    }
                    *(char *)(lVar20 + 0x20) = (char)uVar11;
                    if (param_2 + 3 < param_3) {
                      uVar21 = 1;
                      iVar18 = param_2;
                      do {
                        uVar8 = uVar21;
                        iVar19 = iVar18;
                        if ((*(short *)(param_1 + (long)(iVar18 + 3) * 2) != 0x25) ||
                           (param_3 <= iVar18 + 5)) break;
                        uVar4 = *(undefined2 *)(param_1 + (long)(iVar18 + 5) * 2);
                        uVar5 = *(undefined2 *)(param_1 + (long)(iVar18 + 4) * 2);
                        if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo +
                                    0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        sVar7 = FUN_056ea174(uVar5,uVar4);
                        if (0xff7e < (ushort)(sVar7 - 0x80U)) break;
                        if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_056ea150;
                        uVar8 = uVar21 + 1;
                        iVar19 = iVar18 + 3;
                        iVar9 = iVar18 + 6;
                        *(char *)(lVar20 + (int)uVar21 + 0x20) = (char)sVar7;
                        uVar21 = uVar8;
                        iVar18 = iVar19;
                      } while (iVar9 < param_3);
                      iVar19 = iVar19 + 2;
                    }
                    else {
                      uVar8 = 1;
                    }
                    plVar14 = (long *)FUN_04ea62a0(0);
                    if (plVar14 == (long *)0x0) goto LAB_056ea154;
                    plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))
                                                (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
                    if (plVar14 != (long *)0x0) {
                      bVar2 = *(byte *)(*(long *)PTR_DAT_06771318 + 0x130);
                      if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)PTR_DAT_06771318)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60e88(plVar14);
                      }
                    }
                    uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771238);
                    FUN_04e93b68(uVar11,*(undefined8 *)puVar6,0);
                    if (plVar14 == (long *)0x0) goto LAB_056ea154;
                    FUN_04ea81dc(plVar14,uVar11,0);
                    uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771558);
                    FUN_0508bde4(uVar11,*(undefined8 *)puVar6,0);
                    FUN_04ea8298(plVar14,uVar11,0);
                    uVar11 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,
                                          *(undefined4 *)(lVar20 + 0x18));
                    iVar9 = (**(code **)(*plVar14 + 0x2d8))
                                      (plVar14,lVar20,0,uVar8,uVar11,0,
                                       *(undefined8 *)(*plVar14 + 0x2e0));
                    iVar18 = param_2;
                    param_2 = iVar19;
                    if (iVar9 == 0) {
                      for (; iVar18 <= iVar19; iVar18 = iVar18 + 1) {
                        *(undefined2 *)(lVar12 + (long)local_6c * 2) =
                             *(undefined2 *)(param_1 + (long)iVar18 * 2);
                        local_6c = local_6c + 1;
                      }
                    }
                    else {
                      if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo +
                                  0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_056ea2bc(lVar12,lVar10,&local_6c,uVar11,iVar9,lVar20,uVar8,param_4 == 0x20
                                   ,1);
                    }
                  }
                  goto LAB_056e9c2c;
                }
              }
            }
          }
          iVar18 = local_6c + 1;
          iVar9 = local_6c + 2;
          *(ushort *)(lVar12 + (long)local_6c * 2) = *puVar1;
          local_6c = local_6c + 3;
          *(undefined2 *)(lVar12 + (long)iVar18 * 2) =
               *(undefined2 *)(param_1 + (long)(param_2 + 1) * 2);
          *(undefined2 *)(lVar12 + (long)iVar9 * 2) = *(undefined2 *)(param_1 + (long)iVar19 * 2);
          param_2 = iVar19;
        }
        else {
          uVar17 = 0x25;
          iVar19 = local_6c;
LAB_056e9c24:
          local_6c = iVar19 + 1;
          *(ushort *)(lVar12 + (long)iVar19 * 2) = uVar17;
        }
      }
      else {
        uVar8 = (uint)uVar17;
        if (uVar17 < 0x80) {
          lVar16 = (long)local_6c;
          local_6c = local_6c + 1;
          *(ushort *)(lVar12 + lVar16 * 2) = uVar17;
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar21 = (uint)uVar17;
          uVar13 = FUN_04f84e4c(uVar17,0);
          if (((uVar13 & 1) == 0) || (iVar19 = param_2 + 1, param_3 <= iVar19)) {
            if (((uVar21 - 0xa0 >> 5 & 0x7ff) < 0x6bb) || ((uVar21 + 0x700 & 0xffff) < 0x4d0)) {
LAB_056e9bec:
              if (*(int *)(*(long *)PTR_DAT_06764580 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar13 = FUN_056c308c(uVar8,0);
              if ((uVar13 & 1) == 0) {
                uVar17 = *puVar1;
                iVar19 = local_6c;
                goto LAB_056e9c24;
              }
            }
            else {
              if ((param_4 == 0x20) && (0x1ff < (uVar8 + 0x210 & 0xffff))) {
                if ((uVar8 + 0x2000 >> 8 & 0xff) < 0x19) goto LAB_056e9bec;
              }
              else if ((uVar8 + 0x210 & 0xffff) < 0x200) goto LAB_056e9bec;
Unity_Collections_AllocatorManager_SlabAllocator__Dispose:
              if (local_74 < 0xc) {
                if (lVar10 == 0) goto LAB_056ea154;
                if (0x7fffffa5 < *(int *)(lVar10 + 0x18)) {
                  uVar11 = FUN_02d60af8();
                    /* WARNING: Subroutine does not return */
                  FUN_02d609b4(uVar11,*(undefined8 *)OVRPlugin_SpaceQueryResult___TypeInfo);
                }
                lVar10 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,*(int *)(lVar10 + 0x18) + 0x5a
                                     );
                lVar16 = lVar10;
                if (lVar10 != 0) {
                  if (*(int *)(lVar10 + 0x18) == 0) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = lVar10 + 0x20;
                  }
                }
                FUN_05033a40(lVar16,lVar12,local_6c << 1,0);
                if (local_68 != 0) {
                  FUN_04f29514(&local_68,0);
                }
                local_74 = local_74 + 0x5a;
                local_68 = FUN_04f29500(lVar10,3,0);
                uVar11 = FUN_04f2942c(&local_68,0);
                lVar12 = FUN_05052634(uVar11,0);
              }
              lVar16 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,4);
              if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
                lVar22 = 0;
              }
              else {
                lVar22 = lVar16 + 0x20;
              }
              plVar14 = (long *)FUN_04ea62a0(0);
              if (plVar14 == (long *)0x0) {
LAB_056ea154:
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar15 = 1;
              if (local_70[0] != '\0') {
                uVar15 = 2;
              }
              uVar8 = (**(code **)(*plVar14 + 0x278))
                                (plVar14,puVar1,uVar15,lVar22,4,*(undefined8 *)(*plVar14 + 0x280));
              local_74 = uVar8 * -3 + local_74;
              if (0 < (int)uVar8) {
                if (lVar16 == 0) goto LAB_056ea154;
                uVar13 = 0;
                do {
                  if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_056ea150;
                  uVar3 = *(undefined1 *)(lVar16 + 0x20 + uVar13);
                  if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_056ea790(uVar3,lVar10,&local_6c);
                  uVar13 = uVar13 + 1;
                } while (uVar8 != uVar13);
              }
            }
          }
          else {
            uVar13 = FUN_056e91bc(uVar21,*(undefined2 *)(param_1 + (long)iVar19 * 2),local_70,
                                  param_4 == 0x20);
            if ((uVar13 & 1) == 0) goto Unity_Collections_AllocatorManager_SlabAllocator__Dispose;
            lVar16 = (long)local_6c;
            iVar18 = local_6c + 1;
            local_6c = local_6c + 2;
            *(ushort *)(lVar12 + lVar16 * 2) = *puVar1;
            *(undefined2 *)(lVar12 + (long)iVar18 * 2) = *(undefined2 *)(param_1 + (long)iVar19 * 2)
            ;
            param_2 = iVar19;
          }
        }
      }
LAB_056e9c2c:
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  if (local_68 != 0) {
    FUN_04f29514(&local_68,0);
  }
  FUN_04e938a4(0,lVar10,0,local_6c,0);
  return;
}


