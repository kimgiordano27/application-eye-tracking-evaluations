/*
FUNCTION_NAME: FUN_03573e40
ENTRY_POINT: 03573e40
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03573e40(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint *puVar14;
  short *psVar15;
  byte *pbVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined4 *puVar23;
  long *plVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 uVar31;
  int iVar32;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  long *local_88;
  long lStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0453798b & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_var);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>__ctor__);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<CustomEventToFireInfo>_get_Count__);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(PTR_DAT_042305d0);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<string,_Type>>>__ctor__
                );
    FUN_01c5d288(PTR_DAT_04234b08);
    FUN_01c5d288(PTR_DAT_04234b10);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>__ctor__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<short[]>_get_Count__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Dequeue__);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_CopyTo__);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>__ctor__);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_Oculus_Platform_Message<bool>_get_Data__);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_Slice__);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_Slice__);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_ToString__);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_TryCopyTo__);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_get_Empty__);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_get_IsEmpty__);
    FUN_01c5d288(System_Func<Type,_Type>_TypeInfo);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_get_Length__);
    FUN_01c5d288(PTR_DAT_04236ef0);
    FUN_01c5d288(Method_System_ReadOnlySpan<char>_op_Implicit__);
    FUN_01c5d288(Method_System_ReadOnlySpan<int>_GetPinnableReference__);
    FUN_01c5d288(Method_System_ReadOnlySpan<int>_ToArray__);
    FUN_01c5d288(Method_System_ReadOnlySpan<int>_get_IsEmpty__);
    FUN_01c5d288(Method_System_ReadOnlySpan<int>_get_Length__);
    FUN_01c5d288(Method_System_ReadOnlySpan<Quaternion>__ctor__);
    FUN_01c5d288(Method_System_ReadOnlySpan<Quaternion>_GetPinnableReference__);
    FUN_01c5d288(Method_System_ReadOnlySpan<Quaternion>_get_Empty__);
    FUN_01c5d288(Method_System_ReadOnlySpan<Quaternion>_get_Length__);
    FUN_01c5d288(Method_System_ReadOnlySpan<ushort>__ctor__);
    FUN_01c5d288(Method_System_ReadOnlySpan<ushort>__ctor__);
    FUN_01c5d288(Method_System_ReadOnlySpan<ushort>_get_Length__);
    FUN_01c5d288(Method_System_ReadOnlySpan<ushort>_op_Implicit__);
    DAT_0453798b = 1;
  }
  puVar5 = Method_System_ReadOnlySpan<char>_ToString__;
  puVar4 = Method_Oculus_Platform_Message<bool>_get_Data__;
  puVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_var;
  plVar22 = (long *)PTR_DAT_04237a90;
  plVar21 = (long *)PTR_DAT_0422fae0;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  if (param_1 == 0) {
LAB_035742c0:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
  }
  else {
    lVar11 = *(long *)PTR_DAT_04237a90;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *plVar22;
    }
    uVar12 = FUN_0290ca2c(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x120),
                          *(undefined8 *)puVar3);
    if ((uVar12 & 1) == 0) goto LAB_035742c0;
    lVar11 = *plVar22;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *plVar22;
    }
    plVar13 = (long *)FUN_035097bc(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x120),0);
    if (plVar13 == (long *)0x0) goto LAB_035750b0;
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
LAB_03575470:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    puVar14 = (uint *)thunk_FUN_01c49834();
    uVar25 = *puVar14;
    local_68 = (ulong)uVar25 << 0x20;
    uVar12 = FUN_0290ca2c(param_1,*(undefined8 *)(*(long *)(*plVar22 + 0xb8) + 0x128),
                          *(undefined8 *)puVar3);
    iVar32 = 0;
    if ((uVar12 & 1) != 0) {
      lVar11 = *plVar22;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar11 = *plVar22;
      }
      plVar13 = (long *)FUN_035097bc(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x128),0);
      if (plVar13 == (long *)0x0) goto LAB_035750b0;
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)PTR_DAT_042305d0 + 0x40))
      goto LAB_03575470;
      psVar15 = (short *)thunk_FUN_01c49834();
      iVar32 = (int)*psVar15;
      local_68 = CONCAT44(local_68._4_4_,iVar32);
    }
    lVar11 = *plVar22;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *plVar22;
    }
    uVar12 = FUN_0290ca2c(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x148),
                          *(undefined8 *)puVar3);
    lVar11 = *plVar22;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar11);
      lVar11 = *plVar22;
    }
    if ((uVar12 & 1) == 0) {
      plVar13 = (long *)FUN_035097bc(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x138),0);
      if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar13);
      }
    }
    else {
      plVar13 = (long *)FUN_035097bc(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x148),0);
      if (plVar13 == (long *)0x0) goto LAB_035750b0;
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)PTR_DAT_042303a0 + 0x40))
      goto LAB_03575470;
      pbVar16 = (byte *)thunk_FUN_01c49834();
      bVar1 = *pbVar16;
      local_70 = (ulong)CONCAT14(bVar1,(undefined4)local_70);
      lVar11 = FUN_03563428();
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x30) == 0)) goto LAB_035750b0;
      if (*(int *)(*(long *)(lVar11 + 0x30) + 0x18) + -1 < (int)(uint)bVar1) {
        uVar17 = FUN_032cf308((long)&local_70 + 4,0);
        uVar17 = FUN_03152fb8(*(undefined8 *)Method_System_ReadOnlySpan<int>_ToArray__,uVar17,
                              *(undefined8 *)Method_System_ReadOnlySpan<int>_get_IsEmpty__,0);
        goto LAB_035742f4;
      }
      if (*(int *)(*plVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar11 = FUN_03563428();
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x30) == 0)) goto LAB_035750b0;
      plVar13 = (long *)FUN_02d4fd88(*(long *)(lVar11 + 0x30),bVar1,*(undefined8 *)PTR_DAT_04234b10)
      ;
    }
    lVar11 = *plVar22;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *plVar22;
    }
    uVar12 = FUN_0290ca2c(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x140),
                          *(undefined8 *)puVar3);
    if ((uVar12 & 1) == 0) {
      plVar18 = (long *)0x0;
    }
    else {
      lVar11 = *plVar22;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar11 = *plVar22;
      }
      lVar11 = FUN_035097bc(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x140),0);
      if (lVar11 == 0) {
        plVar18 = (long *)0x0;
      }
      else {
        uVar17 = *(undefined8 *)PTR_DAT_042305b8;
        plVar18 = (long *)thunk_FUN_01c495e4(lVar11,uVar17);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar11,uVar17);
        }
      }
    }
    if (*(int *)(*plVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar11 = FUN_03575480(uVar25);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
    }
    uVar12 = FUN_03d4dc54(lVar11,0,0);
    if ((uVar12 & 1) != 0) {
      lVar11 = *plVar22;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar11 = *plVar22;
      }
      lVar30 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if ((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x108), lVar30 != 0)) {
        iVar32 = *(int *)(*(long *)(lVar11 + 0xb8) + 0x10);
        iVar9 = 0;
        if (iVar32 != 0) {
          iVar9 = (int)uVar25 / iVar32;
        }
        if (param_2 == (long *)0x0) {
          bVar8 = true;
        }
        else {
          bVar8 = iVar9 != (int)param_2[3];
        }
        if (iVar9 == *(int *)(lVar30 + 0x18)) {
          lVar11 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,8);
          if (lVar11 != 0) {
            uVar25 = *(uint *)(lVar11 + 0x18);
            if (((uVar25 != 0) &&
                (*(undefined8 *)(lVar11 + 0x20) =
                      *(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__, uVar25 != 1)) &&
               (*(long **)(lVar11 + 0x28) = plVar13, 2 < uVar25)) {
              *(undefined8 *)(lVar11 + 0x30) =
                   *(undefined8 *)Method_System_ReadOnlySpan<ushort>_get_Length__;
              uVar17 = FUN_032cf308((long)&local_68 + 4,0);
              uVar25 = *(uint *)(lVar11 + 0x18);
              if (((3 < uVar25) && (*(undefined8 *)(lVar11 + 0x38) = uVar17, uVar25 != 4)) &&
                 (*(undefined8 *)(lVar11 + 0x40) =
                       *(undefined8 *)Method_System_ReadOnlySpan<char>_op_Implicit__, 5 < uVar25)) {
                puVar29 = (undefined8 *)Method_System_ReadOnlySpan<char>_TryCopyTo__;
                if (!bVar8) {
                  puVar29 = (undefined8 *)Method_System_ReadOnlySpan<int>_get_Length__;
                }
                *(undefined8 *)(lVar11 + 0x48) = *puVar29;
                if (uVar25 != 6) {
                  *(undefined8 *)(lVar11 + 0x50) =
                       *(undefined8 *)Method_System_ReadOnlySpan<Quaternion>_get_Length__;
                  if (param_2 == (long *)0x0) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = (**(code **)(*param_2 + 0x168))
                                       (param_2,*(undefined8 *)(*param_2 + 0x170));
                    uVar25 = *(uint *)(lVar11 + 0x18);
                  }
                  if (7 < uVar25) {
                    *(undefined8 *)(lVar11 + 0x58) = uVar17;
LAB_035749b8:
                    uVar17 = FUN_031533cc(lVar11,0);
                    if (*(int *)(*plVar21 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*plVar21);
                    }
                    FUN_03d046d0(uVar17,0);
                    return;
                  }
                }
              }
            }
            goto LAB_0357546c;
          }
        }
        else {
          lVar11 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,9);
          if (lVar11 != 0) {
            uVar25 = *(uint *)(lVar11 + 0x18);
            if (((uVar25 != 0) &&
                (*(undefined8 *)(lVar11 + 0x20) =
                      *(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__, uVar25 != 1)) &&
               (*(long **)(lVar11 + 0x28) = plVar13, 2 < uVar25)) {
              *(undefined8 *)(lVar11 + 0x30) =
                   *(undefined8 *)Method_System_ReadOnlySpan<ushort>_get_Length__;
              uVar17 = FUN_032cf308((long)&local_68 + 4,0);
              uVar25 = (uint)*(undefined8 *)(lVar11 + 0x18);
              if (((3 < uVar25) && (*(undefined8 *)(lVar11 + 0x38) = uVar17, uVar25 != 4)) &&
                 (*(undefined8 *)(lVar11 + 0x40) =
                       *(undefined8 *)Method_System_ReadOnlySpan<char>_Slice__, 5 < uVar25)) {
                puVar29 = (undefined8 *)Method_System_ReadOnlySpan<char>_TryCopyTo__;
                if (!bVar8) {
                  puVar29 = (undefined8 *)Method_System_ReadOnlySpan<int>_get_Length__;
                }
                *(undefined8 *)(lVar11 + 0x48) = *puVar29;
                if (uVar25 != 6) {
                  *(undefined8 *)(lVar11 + 0x50) =
                       *(undefined8 *)Method_System_ReadOnlySpan<Quaternion>_get_Length__;
                  if (param_2 == (long *)0x0) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = (**(code **)(*param_2 + 0x168))
                                       (param_2,*(undefined8 *)(*param_2 + 0x170));
                    uVar25 = (uint)*(undefined8 *)(lVar11 + 0x18);
                  }
                  if ((7 < uVar25) && (*(undefined8 *)(lVar11 + 0x58) = uVar17, uVar25 != 8)) {
                    *(undefined8 *)(lVar11 + 0x60) =
                         *(undefined8 *)Method_System_ReadOnlySpan<char>_get_IsEmpty__;
                    goto LAB_035749b8;
                  }
                }
              }
            }
            goto LAB_0357546c;
          }
        }
      }
LAB_035750b0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (lVar11 == 0) goto LAB_035750b0;
    iVar9 = FUN_03575518(lVar11);
    if (iVar9 != iVar32) {
      lVar30 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,9);
      if (lVar30 == 0) goto LAB_035750b0;
      uVar25 = *(uint *)(lVar30 + 0x18);
      if (((uVar25 == 0) ||
          (*(undefined8 *)(lVar30 + 0x20) =
                *(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__, uVar25 == 1)) ||
         (*(long **)(lVar30 + 0x28) = plVar13, uVar25 < 3)) {
LAB_0357546c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(undefined8 *)(lVar30 + 0x30) = *(undefined8 *)Method_System_ReadOnlySpan<Quaternion>__ctor__
      ;
      uVar17 = FUN_032cf308((long)&local_68 + 4,0);
      if ((*(uint *)(lVar30 + 0x18) < 4) ||
         (*(undefined8 *)(lVar30 + 0x38) = uVar17, *(uint *)(lVar30 + 0x18) == 4))
      goto LAB_0357546c;
      *(undefined8 *)(lVar30 + 0x40) = *(undefined8 *)Method_System_ReadOnlySpan<char>_get_Length__;
      uVar17 = FUN_032cf308(&local_68,0);
      if ((*(uint *)(lVar30 + 0x18) < 6) ||
         (*(undefined8 *)(lVar30 + 0x48) = uVar17, *(uint *)(lVar30 + 0x18) == 6))
      goto LAB_0357546c;
      *(undefined8 *)(lVar30 + 0x50) = *(undefined8 *)Method_System_ReadOnlySpan<ushort>__ctor__;
      uVar10 = FUN_03575518(lVar11);
      local_70 = CONCAT44(local_70._4_4_,uVar10);
      uVar17 = FUN_032cf308(&local_70,0);
      if ((*(uint *)(lVar30 + 0x18) < 8) ||
         (*(undefined8 *)(lVar30 + 0x58) = uVar17, *(uint *)(lVar30 + 0x18) == 8))
      goto LAB_0357546c;
      *(undefined8 *)(lVar30 + 0x60) =
           *(undefined8 *)Method_System_ReadOnlySpan<ushort>_op_Implicit__;
      uVar17 = FUN_031533cc(lVar30,0);
      goto LAB_035742f4;
    }
    uVar12 = FUN_031532a8(plVar13,0);
    if ((uVar12 & 1) == 0) {
      lVar30 = *plVar22;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar30 = *plVar22;
      }
      if (1 < *(int *)(*(long *)(lVar30 + 0xb8) + 0x24)) {
        uVar17 = FUN_03146988(*(undefined8 *)Method_System_ReadOnlySpan<char>_get_Empty__,plVar13,0)
        ;
        if (*(int *)(*plVar21 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*plVar21);
        }
        FUN_03d03d14(uVar17,0);
      }
      if (*(char *)(lVar11 + 0x20) != '\0') {
        lVar30 = *plVar22;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar30 = *plVar22;
        }
        lVar30 = *(long *)(*(long *)(lVar30 + 0xb8) + 0x98);
        if (lVar30 == 0) goto LAB_035750b0;
        uVar12 = FUN_02b85b58(lVar30,*(undefined1 *)(lVar11 + 0x20),
                              *(undefined8 *)
                               Method_System_Collections_Generic_Queue<CustomEventToFireInfo>_get_Count__
                             );
        if ((uVar12 & 1) == 0) {
          return;
        }
      }
      if ((plVar18 == (long *)0x0) || (plVar18[3] == 0)) {
        plVar19 = (long *)0x0;
      }
      else {
        plVar19 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910);
        if (0 < (int)plVar18[3]) {
          uVar12 = 0;
          uVar27 = plVar18[3] & 0xffffffff;
          do {
            if (uVar27 <= uVar12) goto LAB_0357546c;
            if (plVar18[uVar12 + 4] == 0) {
              if (plVar19 == (long *)0x0) goto LAB_035750b0;
              if (*(uint *)(plVar19 + 3) <= uVar12) goto LAB_0357546c;
              plVar19[uVar12 + 4] = 0;
            }
            else {
              lVar30 = thunk_FUN_01c5d21c(plVar18[uVar12 + 4],0);
              if (plVar19 == (long *)0x0) goto LAB_035750b0;
              if ((lVar30 != 0) &&
                 (lVar20 = thunk_FUN_01c495e4(lVar30,*(undefined8 *)(*plVar19 + 0x40)), lVar20 == 0)
                 ) goto LAB_03575474;
              if (*(uint *)(plVar19 + 3) <= uVar12) goto LAB_0357546c;
              plVar19[uVar12 + 4] = lVar30;
              uVar27 = (ulong)*(uint *)(plVar18 + 3);
            }
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)uVar27);
        }
      }
      lVar30 = *plVar22;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar30 = *plVar22;
      }
      if (((*(char *)(*(long *)(lVar30 + 0xb8) + 0xe0) == '\0') ||
          (lVar30 = *(long *)(lVar11 + 0x60), lVar30 == 0)) || (*(long *)(lVar30 + 0x18) == 0)) {
        FUN_035755a8(lVar11);
        lVar30 = *(long *)(lVar11 + 0x60);
        if (lVar30 == 0) goto LAB_035750b0;
      }
      puVar3 = Method_System_ReadOnlySpan<char>__ctor__;
      local_98 = 0;
      uVar12 = 0;
      iVar32 = 0;
      do {
        puVar6 = System_Func<Type,_Type>_TypeInfo;
        puVar5 = PTR_DAT_04236ef0;
        puVar4 = PTR_DAT_0422fc38;
        if ((long)(int)*(uint *)(lVar30 + 0x18) <= (long)uVar12) {
          if (local_98 == 1) {
            return;
          }
          lVar30 = **(long **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
          if ((plVar19 == (long *)0x0) || ((int)plVar19[3] < 1)) goto LAB_035751b0;
          uVar12 = 0;
          uVar27 = plVar19[3] & 0xffffffff;
          goto LAB_03575104;
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar12) goto LAB_0357546c;
        lVar30 = *(long *)(lVar30 + uVar12 * 8 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar27 = FUN_03d4dc54(lVar30,0,0);
        if ((uVar27 & 1) == 0) {
          if (lVar30 == 0) break;
          uVar17 = thunk_FUN_01c5d21c(lVar30,0);
          lVar20 = *plVar22;
          local_78 = 0;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar20);
            lVar20 = *plVar22;
          }
          lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 0xe8);
          if (lVar20 == 0) break;
          uVar27 = FUN_0290dfa8(lVar20,uVar17,&local_78,
                                *(undefined8 *)Method_System_ReadOnlySpan<char>__ctor__);
          plVar21 = (long *)PTR_DAT_0422fae0;
          if ((uVar27 & 1) == 0) {
            lVar20 = *plVar22;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar20 = *plVar22;
            }
            uVar31 = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x110);
            if (*(int *)(*(long *)Method_Oculus_Platform_Message<bool>_get_Data__ + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)Method_Oculus_Platform_Message<bool>_get_Data__);
            }
            lVar20 = FUN_0353ab80(uVar17,uVar31,0);
            lVar28 = *(long *)(*(long *)(*plVar22 + 0xb8) + 0xe8);
            if (lVar28 == 0) break;
            FUN_0290c824(lVar28,uVar17,lVar20,
                         *(undefined8 *)Method_System_ReadOnlySpan<char>__ctor__);
            local_78 = lVar20;
            plVar21 = (long *)PTR_DAT_0422fae0;
          }
          PTR_DAT_0422fae0 = (undefined *)plVar21;
          if (local_78 != 0) {
            iVar9 = 0;
            while (plVar21 = (long *)PTR_DAT_0422fae0, iVar9 < *(int *)(local_78 + 0x18)) {
              plVar21 = (long *)FUN_02d4fd88(local_78,iVar9,*(undefined8 *)puVar3);
              if ((plVar21 == (long *)0x0) ||
                 (lVar20 = (**(code **)(*plVar21 + 0x1b8))
                                     (plVar21,*(undefined8 *)(*plVar21 + 0x1c0)), lVar20 == 0))
              goto LAB_035750b0;
              uVar27 = FUN_0315243c(lVar20,plVar13,0);
              iVar7 = local_98;
              if ((uVar27 & 1) != 0) {
                if (*(int *)(*(long *)
                              Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>__ctor__
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar20 = FUN_0358d9a8(plVar21,0);
                if (lVar20 == 0) goto LAB_035750b0;
                lVar28 = *(long *)(lVar20 + 0x18);
                iVar32 = iVar32 + 1;
                iVar26 = (int)lVar28;
                if (plVar18 == (long *)0x0) {
                  if (lVar28 == 0) {
                    plVar24 = (long *)0x0;
LAB_03574ff0:
                    uVar17 = FUN_032108c8(plVar21,lVar30,plVar24,0);
                    lVar20 = *plVar22;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(lVar20);
                      lVar20 = *plVar22;
                    }
                    cVar2 = *(char *)(*(long *)(lVar20 + 0xb8) + 0xf8);
joined_r0x03574f5c:
                    iVar7 = local_98 + 1;
                    if (cVar2 != '\0') {
                      local_98 = local_98 + 1;
                      lVar20 = thunk_FUN_01c495e4(uVar17,*(undefined8 *)PTR_DAT_04230960);
                      iVar7 = local_98;
                      if (lVar20 != 0) {
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_Queue<short[]>_get_Count__ +
                                    0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        lVar28 = FUN_03562e20();
                        if (lVar28 == 0) goto LAB_035750b0;
                        FUN_03d4b1bc(lVar28,lVar20,0);
                      }
                    }
                  }
                  else if (iVar26 == 1) {
                    plVar22 = *(long **)(lVar20 + 0x20);
                    if (plVar22 == (long *)0x0) goto LAB_035750b0;
                    uVar17 = (**(code **)(*plVar22 + 0x1e8))
                                       (plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
                    uVar31 = *(undefined8 *)
                              Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Dequeue__
                    ;
                    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
                    }
                    uVar31 = FUN_032e04b8(uVar31,0);
                    uVar27 = FUN_032e935c(uVar17,uVar31,0);
                    puVar4 = PTR_DAT_04237a90;
                    plVar22 = (long *)PTR_DAT_04237a90;
                    if ((uVar27 & 1) != 0) {
                      lVar20 = *(long *)PTR_DAT_04237a90;
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                        lVar20 = *(long *)puVar4;
                      }
                      plVar22 = (long *)FUN_035097bc(param_1,*(undefined8 *)
                                                              (*(long *)(lVar20 + 0xb8) + 0x130),0);
                      if (plVar22 != (long *)0x0) {
                        if (*(long *)(*plVar22 + 0x40) ==
                            *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
                          puVar23 = (undefined4 *)thunk_FUN_01c49834();
                          uVar10 = *puVar23;
                          plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
                          uStack_8c = 0;
                          local_90 = uVar10;
                          local_88 = param_2;
                          lStack_80 = lVar11;
                          lVar20 = thunk_FUN_01c49334(*(undefined8 *)
                                                       Method_System_ReadOnlySpan<char>_CopyTo__,
                                                      &local_90);
                          if (plVar22 != (long *)0x0) {
                            if ((lVar20 == 0) ||
                               (lVar28 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar22 + 0x40))
                               , lVar28 != 0)) {
                              if ((int)plVar22[3] != 0) {
                                plVar22[4] = lVar20;
LAB_03574f2c:
                                uVar17 = FUN_032108c8(plVar21,lVar30,plVar22,0);
                                cVar2 = *(char *)(*(long *)(*(long *)PTR_DAT_04237a90 + 0xb8) + 0xf8
                                                 );
                                plVar22 = (long *)PTR_DAT_04237a90;
                                goto joined_r0x03574f5c;
                              }
                              goto LAB_0357546c;
                            }
                            goto LAB_03575474;
                          }
                          goto LAB_035750b0;
                        }
                        goto LAB_03575470;
                      }
                      goto LAB_035750b0;
                    }
                  }
                }
                else if (iVar26 == (int)plVar18[3]) {
                  if (*(int *)(*plVar22 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar27 = FUN_035755f8(lVar20,plVar19);
                  plVar24 = plVar18;
                  if ((uVar27 & 1) != 0) goto LAB_03574ff0;
                }
                else if ((int)plVar18[3] + 1 == iVar26) {
                  if (iVar26 == 0) goto LAB_0357546c;
                  plVar22 = *(long **)(lVar20 + ((lVar28 << 0x20) + -0x100000000 >> 0x1d) + 0x20);
                  if (plVar22 == (long *)0x0) goto LAB_035750b0;
                  uVar17 = (**(code **)(*plVar22 + 0x1e8))
                                     (plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
                  uVar31 = *(undefined8 *)
                            Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Dequeue__
                  ;
                  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
                  }
                  uVar31 = FUN_032e04b8(uVar31,0);
                  uVar27 = FUN_032e935c(uVar17,uVar31,0);
                  plVar22 = (long *)PTR_DAT_04237a90;
                  if ((uVar27 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar27 = FUN_035755f8(lVar20,plVar19);
                    if ((uVar27 & 1) != 0) {
                      lVar20 = *plVar22;
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                        lVar20 = *plVar22;
                      }
                      plVar22 = (long *)FUN_035097bc(param_1,*(undefined8 *)
                                                              (*(long *)(lVar20 + 0xb8) + 0x130),0);
                      if (plVar22 != (long *)0x0) {
                        if (*(long *)(*plVar22 + 0x40) ==
                            *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
                          puVar23 = (undefined4 *)thunk_FUN_01c49834();
                          uVar10 = *puVar23;
                          plVar22 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,
                                                         (int)plVar18[3] + 1);
                          FUN_032f41fc(plVar18,plVar22,0,0);
                          if (plVar22 != (long *)0x0) {
                            uStack_8c = 0;
                            local_90 = uVar10;
                            local_88 = param_2;
                            lStack_80 = lVar11;
                            lVar20 = thunk_FUN_01c49334(*(undefined8 *)
                                                         Method_System_ReadOnlySpan<char>_CopyTo__,
                                                        &local_90);
                            if ((lVar20 == 0) ||
                               (lVar28 = thunk_FUN_01c495e4(lVar20,*(undefined8 *)(*plVar22 + 0x40))
                               , lVar28 != 0)) {
                              if ((int)plVar22[3] != 0) {
                                *(long *)((long)plVar22 +
                                         ((plVar22[3] << 0x20) + -0x100000000 >> 0x1d) + 0x20) =
                                     lVar20;
                                goto LAB_03574f2c;
                              }
                              goto LAB_0357546c;
                            }
                            goto LAB_03575474;
                          }
                          goto LAB_035750b0;
                        }
                        goto LAB_03575470;
                      }
                      goto LAB_035750b0;
                    }
                  }
                }
                else if (iVar26 == 1) {
                  plVar24 = *(long **)(lVar20 + 0x20);
                  if ((plVar24 == (long *)0x0) ||
                     (lVar20 = (**(code **)(*plVar24 + 0x1e8))
                                         (plVar24,*(undefined8 *)(*plVar24 + 0x1f0)), lVar20 == 0))
                  goto LAB_035750b0;
                  uVar27 = FUN_032eaf80(lVar20,0);
                  if ((uVar27 & 1) != 0) {
                    plVar24 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
                    if (plVar24 != (long *)0x0) {
                      lVar20 = thunk_FUN_01c495e4(plVar18,*(undefined8 *)(*plVar24 + 0x40));
                      if (lVar20 != 0) {
                        if ((int)plVar24[3] != 0) {
                          plVar24[4] = (long)plVar18;
                          goto LAB_03574ff0;
                        }
                        goto LAB_0357546c;
                      }
                      goto LAB_03575474;
                    }
                    goto LAB_035750b0;
                  }
                }
              }
              local_98 = iVar7;
              iVar9 = iVar9 + 1;
              if (local_78 == 0) goto LAB_035750b0;
            }
          }
        }
        else {
          if (*(int *)(*plVar21 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_03d04168(*(undefined8 *)Method_System_ReadOnlySpan<Quaternion>_get_Empty__,0);
        }
        uVar12 = uVar12 + 1;
        lVar30 = *(long *)(lVar11 + 0x60);
      } while (lVar30 != 0);
      goto LAB_035750b0;
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<bool>_get_Data__ + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
  }
  uVar17 = FUN_0353b8cc(param_1,1,0);
  uVar17 = FUN_03146988(*(undefined8 *)puVar5,uVar17,0);
LAB_035742f4:
  if (*(int *)(*plVar21 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*plVar21);
  }
  FUN_03d04168(uVar17,0);
  return;
  while( true ) {
    plVar21 = (long *)plVar19[uVar12 + 4];
    uVar27 = FUN_031529f8(lVar30,**(undefined8 **)(*(long *)puVar4 + 0xb8),0);
    if ((uVar27 & 1) != 0) {
      lVar30 = FUN_03146988(lVar30,*(undefined8 *)puVar5,0);
    }
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar27 = FUN_032e935c(plVar21,0,0);
    if ((uVar27 & 1) == 0) {
      if (plVar21 == (long *)0x0) goto LAB_035750b0;
      uVar17 = (**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
    }
    else {
      uVar17 = *(undefined8 *)puVar6;
    }
    lVar30 = FUN_03146988(lVar30,uVar17,0);
    uVar12 = uVar12 + 1;
    uVar27 = (ulong)*(uint *)(plVar19 + 3);
    if ((long)(int)*(uint *)(plVar19 + 3) <= (long)uVar12) break;
LAB_03575104:
    if (uVar27 <= uVar12) goto LAB_0357546c;
  }
LAB_035751b0:
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar12 = FUN_03d4f3bc(lVar11,0,0);
  uVar17 = 0;
  if ((uVar12 & 1) != 0) {
    uVar17 = FUN_03d468e8(lVar11,0);
  }
  puVar3 = PTR_DAT_0422fae0;
  if (local_98 != 0) {
    plVar21 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,4);
    if (plVar21 == (long *)0x0) goto LAB_035750b0;
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = thunk_FUN_01c495e4(plVar13,*(undefined8 *)(*plVar21 + 0x40)), lVar11 == 0)) {
LAB_03575474:
      uVar17 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar17,0);
    }
    if ((int)plVar21[3] != 0) {
      plVar21[4] = (long)plVar13;
      local_90 = local_68._4_4_;
      lVar11 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_90);
      if ((lVar11 != 0) &&
         (lVar20 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar21 + 0x40)), lVar20 == 0))
      goto LAB_03575474;
      uVar25 = *(uint *)(plVar21 + 3);
      if (1 < uVar25) {
        plVar21[5] = lVar11;
        if (lVar30 != 0) {
          lVar11 = thunk_FUN_01c495e4(lVar30,*(undefined8 *)(*plVar21 + 0x40));
          if (lVar11 == 0) goto LAB_03575474;
          uVar25 = *(uint *)(plVar21 + 3);
        }
        if (2 < uVar25) {
          plVar21[6] = lVar30;
          local_94 = iVar32;
          lVar11 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_94);
          if ((lVar11 != 0) &&
             (lVar30 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar21 + 0x40)), lVar30 == 0))
          goto LAB_03575474;
          if (3 < *(uint *)(plVar21 + 3)) {
            plVar21[7] = lVar11;
            puVar29 = (undefined8 *)Method_System_ReadOnlySpan<Quaternion>_GetPinnableReference__;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              puVar29 = (undefined8 *)Method_System_ReadOnlySpan<Quaternion>_GetPinnableReference__;
            }
            goto LAB_03575454;
          }
        }
      }
    }
    goto LAB_0357546c;
  }
  plVar21 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
  if (plVar21 != (long *)0x0) {
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = thunk_FUN_01c495e4(plVar13,*(undefined8 *)(*plVar21 + 0x40)), lVar11 == 0))
    goto LAB_03575474;
    if ((int)plVar21[3] == 0) goto LAB_0357546c;
    plVar21[4] = (long)plVar13;
    if (iVar32 == 0) {
      local_90 = local_68._4_4_;
      lVar11 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_90);
      if ((lVar11 == 0) ||
         (lVar20 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar21 + 0x40)), lVar20 != 0)) {
        uVar25 = *(uint *)(plVar21 + 3);
        if (1 < uVar25) {
          plVar21[5] = lVar11;
          if (lVar30 != 0) {
            lVar11 = thunk_FUN_01c495e4(lVar30,*(undefined8 *)(*plVar21 + 0x40));
            if (lVar11 == 0) goto LAB_03575474;
            uVar25 = *(uint *)(plVar21 + 3);
          }
          if (2 < uVar25) {
            plVar21[6] = lVar30;
            puVar29 = (undefined8 *)Method_System_ReadOnlySpan<int>_GetPinnableReference__;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              puVar29 = (undefined8 *)Method_System_ReadOnlySpan<int>_GetPinnableReference__;
            }
            goto LAB_03575454;
          }
        }
        goto LAB_0357546c;
      }
    }
    else {
      local_90 = local_68._4_4_;
      lVar11 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_90);
      if ((lVar11 == 0) ||
         (lVar20 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar21 + 0x40)), lVar20 != 0)) {
        uVar25 = *(uint *)(plVar21 + 3);
        if (1 < uVar25) {
          plVar21[5] = lVar11;
          if (lVar30 != 0) {
            lVar11 = thunk_FUN_01c495e4(lVar30,*(undefined8 *)(*plVar21 + 0x40));
            if (lVar11 == 0) goto LAB_03575474;
            uVar25 = *(uint *)(plVar21 + 3);
          }
          if (2 < uVar25) {
            plVar21[6] = lVar30;
            puVar29 = (undefined8 *)Method_System_ReadOnlySpan<char>_Slice__;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              puVar29 = (undefined8 *)Method_System_ReadOnlySpan<char>_Slice__;
            }
LAB_03575454:
            FUN_03d044a0(uVar17,*puVar29,plVar21,0);
            return;
          }
        }
        goto LAB_0357546c;
      }
    }
    goto LAB_03575474;
  }
  goto LAB_035750b0;
}


