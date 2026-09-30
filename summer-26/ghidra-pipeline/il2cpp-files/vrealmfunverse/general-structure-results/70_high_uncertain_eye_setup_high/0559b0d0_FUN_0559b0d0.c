/*
FUNCTION_NAME: FUN_0559b0d0
ENTRY_POINT: 0559b0d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0559b89c) */
/* WARNING: Removing unreachable block (ram,0x0559bf88) */

long FUN_0559b0d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long **pplVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  ushort uVar21;
  long lVar22;
  ushort uVar23;
  ushort local_c4 [2];
  long *local_c0;
  long **pplStack_b8;
  long **local_b0;
  undefined4 local_a0;
  long *local_98;
  long *local_90;
  ulong local_88;
  long *local_80;
  long **pplStack_78;
  long **local_70;
  
  if ((DAT_066d1750 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_List<int>>_set_Item__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>__ctor__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TryGetValue__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_set_Item__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_List<Volume>>__ctor__);
    FUN_02b3c81c(PTR_DAT_0631f238);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_List<Volume>>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_List<Volume>>_GetEnumerator__);
    FUN_02b3c81c(PTR_DAT_0631a490);
    FUN_02b3c81c(PTR_DAT_063140b0);
    FUN_02b3c81c(PTR_DAT_0631a7d0);
    FUN_02b3c81c(PTR_DAT_0631ea90);
    FUN_02b3c81c(PTR_DAT_063201f0);
    FUN_02b3c81c(PTR_DAT_06321760);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_ContainsKey__
                );
    FUN_02b3c81c(PTR_DAT_0632cea8);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_List<Volume>>_TryGetValue__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__);
    FUN_02b3c81c(OVRPlugin_OVRP_1_79_0_TypeInfo);
    DAT_066d1750 = 1;
  }
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_70 = (long **)0x0;
  local_90 = (long *)0x0;
  local_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = 0;
  if (param_2 == 0) goto LAB_0559bca0;
  plVar17 = *(long **)(param_2 + 0x10);
  if ((*(char *)(param_1 + 0x40) == '\0') && ((param_5 & 1) == 0)) {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_ContainsKey__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0558ffc8(plVar17,0,0);
  }
  lVar15 = *(long *)(param_1 + 0x28);
  uVar8 = FUN_0559db40(param_1,param_2,param_3,param_4);
  if (lVar15 == 0) goto LAB_0559bca0;
  lVar15 = FUN_0558fe88(lVar15,plVar17,uVar8,0);
  if (lVar15 != 0) {
    return lVar15;
  }
  lVar15 = FUN_0559d63c(param_1,param_2,param_3,0,param_4);
  if (lVar15 == 0) goto LAB_0559bca0;
  lVar18 = *(long *)(param_1 + 0x28);
  uVar8 = FUN_055afca4(lVar15,0);
  if (lVar18 == 0) goto LAB_0559bca0;
  FUN_0558fd5c(lVar18,lVar15,plVar17,uVar8,0);
  lVar18 = *(long *)(param_1 + 0x28);
  uVar19 = *(undefined8 *)(lVar15 + 0x48);
  uVar8 = FUN_055afca4(lVar15,0);
  if (lVar18 == 0) goto LAB_0559bca0;
  FUN_0558fbbc(lVar18,lVar15,uVar19,uVar8,0);
  lVar18 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_List<int>>_set_Item__
                             );
  FUN_055ba0d4(lVar18,0);
  *(long *)(lVar15 + 0x10) = lVar18;
  thunk_FUN_02bb0e9c((long *)(lVar15 + 0x10),lVar18);
  lVar9 = FUN_0559dc54(param_1,plVar17);
  if (lVar9 == 0) goto LAB_0559bca0;
  FUN_037a6fdc(&local_c0,lVar9,
               *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_List<Volume>>_Add__)
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_set_Item__;
  puVar2 = PTR_DAT_063201f0;
  pplStack_78 = pplStack_b8;
  local_80 = local_c0;
  uVar23 = 0;
  uVar21 = 0;
  local_70 = local_b0;
  local_c0 = (long *)0x0;
  pplStack_b8 = &local_80;
  while (uVar10 = FUN_0472eaf4(&local_80,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
    if (local_70 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar11 = FUN_0559e990();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    local_88 = FUN_05597ec8(lVar11,0);
    if (uVar21 == 0) {
      if ((local_88 & 0xff) != 0) {
        uVar7 = FUN_03ad6308(&local_88,*(undefined8 *)puVar2);
        local_c4[0] = 0;
        FUN_03ad0c14(local_c4,~uVar7 >> 0x1f,*(undefined8 *)PTR_DAT_063140b0);
        uVar23 = local_c4[0] >> 8;
        uVar21 = local_c4[0] & 0xff;
      }
    }
    else if (((local_88 & 0xff) != 0) &&
            (iVar6 = FUN_03ad6308(&local_88,*(undefined8 *)puVar2), (uVar23 != 0) == iVar6 < 0)) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar8 = thunk_FUN_02b79644();
      uVar19 = thunk_FUN_02ba3594(
                                 Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>_set_Item__
                                 );
      FUN_04d7b3f4(uVar8,uVar19,0);
      uVar19 = thunk_FUN_02ba3594(
                                 Method_System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>__ctor__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar8,uVar19);
    }
  }
  FUN_0472eaf0(&local_80,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TryGetValue__
              );
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__;
  if ((uVar23 != 0) && (uVar21 != 0)) {
    lVar11 = *(long *)Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__
    ;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar11 = *(long *)puVar2;
    }
    puVar13 = *(undefined8 **)(lVar11 + 0xb8);
    lVar22 = puVar13[1];
    if (lVar22 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar8 = *puVar13;
      lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>__ctor__
                                 );
      FUN_042e1010(lVar22,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_List<Volume>>_TryGetValue__,0)
      ;
      plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar12 = lVar22;
      thunk_FUN_02bb0e9c(plVar12,lVar22);
    }
    FUN_037a7f8c(lVar9,lVar22,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_List<Volume>>_GetEnumerator__);
  }
  FUN_037a6fdc(&local_c0,lVar9,
               *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_List<Volume>>_Add__)
  ;
  puVar2 = PTR_DAT_06312310;
  pplStack_78 = pplStack_b8;
  local_80 = local_c0;
  local_70 = local_b0;
  local_c0 = (long *)0x0;
  pplStack_b8 = &local_80;
  while (uVar10 = FUN_0472eaf4(&local_80,*(undefined8 *)puVar4), pplVar5 = local_70,
        (uVar10 & 1) != 0) {
    uVar8 = FUN_055afca4(lVar15,0);
    if (pplVar5 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar9 = FUN_0559e990(pplVar5);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(char *)(lVar9 + 0x58) == '\0') {
      plVar12 = pplVar5[6];
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_04d94540(plVar12,0,0);
      if ((uVar10 & 1) != 0) {
        plVar12 = pplVar5[6];
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_04d94540(plVar12,plVar17,0);
        if ((uVar10 & 1) != 0) {
          lVar9 = FUN_0559dab0(param_1,pplVar5[6],param_3,param_4,1);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar10 = FUN_055b79d8(lVar9,0);
          if ((uVar10 & 1) != 0) {
            uVar8 = FUN_055afca4(lVar9,0);
          }
        }
      }
      lVar9 = FUN_0559ea00(param_1,plVar17,pplVar5,uVar8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_055b7200(lVar9,plVar17,0);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_055b861c(lVar18,lVar9,0);
    }
  }
  FUN_0472eaf0(&local_80,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TryGetValue__
              );
  lVar9 = *(long *)(puVar2 + 0x10);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_04d8a7b0(lVar9 + 0x20,0);
  uVar10 = FUN_04d938a0(plVar17,uVar8,0);
  if (((uVar10 & 1) != 0) && (plVar12 = *(long **)(param_1 + 0x20), plVar12 != (long *)0x0)) {
    local_90 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    puVar4 = PTR_DAT_06312f90;
    pplStack_b8 = &local_90;
    local_c0 = (long *)0x0;
    local_b0 = &local_98;
    do {
      plVar12 = local_90;
      if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *local_90;
      lVar9 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0559b724;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_02b7654c(local_90,lVar9,0);
LAB_0559b724:
      uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      plVar12 = local_90;
      puVar3 = PTR_DAT_06312f78;
      if ((uVar10 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_02b79548(local_90,*(undefined8 *)PTR_DAT_06312f78);
        local_98 = plVar12;
        if (plVar12 == (long *)0x0) break;
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_0559b864;
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0559b84c;
      }
      if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *local_90;
      lVar9 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0559b78c;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_02b7654c(local_90,lVar9,1);
LAB_0559b78c:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)(puVar2 + 0xe0) + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(puVar2 + 0xe0)
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar12);
        }
      }
      plVar20 = *(long **)(lVar15 + 0x70);
      uVar8 = FUN_0559aa94(param_1,plVar12,0,param_4);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4(uVar8,uVar8);
      }
      (**(code **)(*plVar20 + 0x308))(plVar20,uVar8,*(undefined8 *)(*plVar20 + 0x310));
    } while( true );
  }
  goto LAB_0559b8a0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar14 = piVar14 + 4;
    if (uVar10 == 0) break;
LAB_0559b84c:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0559b880;
    }
  }
LAB_0559b864:
  puVar13 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)puVar3,0);
LAB_0559b880:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0559b8a0:
  if (plVar17 == (long *)0x0) goto LAB_0559bca0;
  uVar8 = (**(code **)(*plVar17 + 0x868))(plVar17,*(undefined8 *)(*plVar17 + 0x870));
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(puVar2 + 0xe0));
  }
  uVar10 = FUN_04d94540(uVar8,0,0);
  if ((uVar10 & 1) == 0) {
LAB_0559ba9c:
    FUN_0559f4b0(param_1,plVar17,param_4);
    if (lVar18 == 0) goto LAB_0559bca0;
  }
  else {
    uVar8 = (**(code **)(*plVar17 + 0x868))(plVar17,*(undefined8 *)(*plVar17 + 0x870));
    lVar9 = FUN_0559dab0(param_1,uVar8,param_3,param_4,1);
    if (lVar9 == 0) goto LAB_0559bca0;
    plVar12 = *(long **)(lVar9 + 0x10);
    if (plVar12 == (long *)0x0) {
LAB_0559b940:
      plVar12 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<int,_List<int>>_set_Item__ +
                       0x130);
      if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_0559b940;
      if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_set_Item__) {
        plVar12 = (long *)0x0;
      }
    }
    uVar8 = (**(code **)(*plVar17 + 0x868))(plVar17,*(undefined8 *)(*plVar17 + 0x870));
    lVar11 = *(long *)(puVar2 + 0x10);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar2 + 0xe0));
    }
    uVar19 = FUN_04d8a7b0(lVar11 + 0x20,0);
    uVar10 = FUN_04d94540(uVar8,uVar19,0);
    if ((uVar10 & 1) == 0) {
      FUN_0559f3cc(param_1,lVar9,lVar15);
      if (plVar12 == (long *)0x0) goto LAB_0559bca0;
    }
    else {
      *(long *)(lVar15 + 0x60) = lVar9;
      thunk_FUN_02bb0e9c((long *)(lVar15 + 0x60),lVar9);
      if (plVar12 == (long *)0x0) goto LAB_0559bca0;
      uVar10 = FUN_055ba068(plVar12,0);
      if ((uVar10 & 1) == 0) {
        if (lVar18 == 0) goto LAB_0559bca0;
        *(undefined1 *)(lVar18 + 0x79) = 0;
      }
      FUN_0559f3cc(param_1,lVar9,lVar15);
    }
    uVar10 = FUN_055ba068(plVar12,0);
    if ((uVar10 & 1) == 0) goto LAB_0559ba9c;
    if (lVar18 == 0) goto LAB_0559bca0;
    plVar12 = *(long **)(lVar18 + 0x18);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0631f238) {
            puVar13 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0559ba88;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_0631f238,1);
LAB_0559ba88:
      iVar6 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar4 = Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>_TryGetValue__;
      if (iVar6 != 1) {
        thunk_FUN_02ba3594(
                          Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>_TryGetValue__
                          );
        FUN_0275e12c();
        lVar18 = thunk_FUN_02ba3594(puVar4);
        lVar9 = *(long *)(lVar15 + 0x58);
        uVar19 = **(undefined8 **)(lVar18 + 0xb8);
        FUN_0275e13c(lVar9);
        lVar15 = *(long *)(lVar15 + 0x60);
        uVar8 = *(undefined8 *)(lVar9 + 0x30);
        FUN_0275e13c(lVar15);
        lVar15 = *(long *)(lVar15 + 0x58);
        FUN_0275e13c(lVar15);
        uVar8 = FUN_04c0af28(uVar19,uVar8,*(undefined8 *)(lVar15 + 0x30),0);
        goto LAB_0559bd24;
      }
      goto LAB_0559ba9c;
    }
    FUN_0559f4b0(param_1,plVar17,param_4);
  }
  if ((*(long *)(lVar18 + 0x68) != 0) && (uVar10 = FUN_055ba068(lVar18,0), (uVar10 & 1) == 0)) {
    lVar18 = *(long *)(lVar18 + 0x68);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x28) == 0)) {
LAB_0559bca0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
    lVar9 = *(long *)(puVar2 + 0x90);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar19 = FUN_04d8a7b0(lVar9 + 0x20,0);
    uVar10 = FUN_04d94540(uVar8,uVar19,0);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(lVar18 + 0x28) == 0) goto LAB_0559bca0;
      uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
      uVar19 = *(undefined8 *)PTR_DAT_0632cea8;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar19 = FUN_04d8a7b0(uVar19,0);
      uVar10 = FUN_04d94540(uVar8,uVar19,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar18 + 0x28) == 0) goto LAB_0559bca0;
        uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
        uVar19 = *(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar19 = FUN_04d8a7b0(uVar19,0);
        uVar10 = FUN_04d94540(uVar8,uVar19,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar18 + 0x28) == 0) goto LAB_0559bca0;
          uVar8 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
          uVar19 = *(undefined8 *)PTR_DAT_06321760;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar19 = FUN_04d8a7b0(uVar19,0);
          uVar10 = FUN_04d94540(uVar8,uVar19,0);
          puVar2 = 
          Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>_TryGetValue__;
          if ((uVar10 & 1) != 0) {
            thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>_TryGetValue__
                              );
            FUN_0275e12c();
            lVar9 = thunk_FUN_02ba3594(puVar2);
            lVar15 = *(long *)(lVar15 + 0x58);
            uVar19 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
            FUN_0275e13c(lVar15);
            uVar16 = *(undefined8 *)(lVar18 + 0x10);
            lVar18 = *(long *)(lVar18 + 0x28);
            uVar8 = *(undefined8 *)(lVar15 + 0x30);
            FUN_0275e13c(lVar18);
            uVar8 = FUN_04c0af6c(uVar19,uVar8,uVar16,*(undefined8 *)(lVar18 + 0x30),0);
LAB_0559bd24:
            thunk_FUN_02ba3594(PTR_DAT_0631cb60);
            uVar19 = thunk_FUN_02b79644();
            FUN_04d7b3f4(uVar19,uVar8,0);
            uVar8 = thunk_FUN_02ba3594(
                                      Method_System_Collections_Generic_Dictionary<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>__ctor__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar19,uVar8);
          }
        }
      }
    }
  }
  return lVar15;
}


