/*
FUNCTION_NAME: FUN_06ce9f48
ENTRY_POINT: 06ce9f48
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_21
*/


void FUN_06ce9f48(long param_1,long param_2,uint param_3,int param_4,ulong *param_5,ulong *param_6,
                 uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong local_110;
  ulong uStack_108;
  undefined8 local_100;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  
  lVar11 = param_1;
  if ((DAT_076e97b2 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory2__);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory3__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory4__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory5__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemId__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemListID__);
    lVar11 = thunk_FUN_032e1da0(
                               Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemListName__
                               );
    DAT_076e97b2 = 1;
  }
  plVar15 = (long *)PTR_DAT_072798f8;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (*(uint *)(param_1 + 0x34) < param_3) {
    FUN_06ce96e8(param_1);
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
      lVar18 = 0;
LAB_06cea11c:
      uVar4 = *(uint *)(param_1 + 0xa8);
      uVar9 = 2;
      if (param_3 <= uVar4) {
        uVar9 = param_3;
      }
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb34ec(param_3 <= uVar4,
                   *(undefined8 *)
                    Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemListName__,0);
      uVar3 = *(undefined1 *)(param_1 + 0x10);
      lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory5__
                                 );
      FUN_06ceb4e8(lVar13,uVar9,param_4,4,uVar3);
      plVar17 = (long *)(param_1 + 0x28);
      if (lVar18 != 0) {
        plVar17 = (long *)(lVar18 + 0x28);
      }
      *plVar17 = lVar13;
      thunk_FUN_0333a630(plVar17,lVar13);
      if (lVar13 == 0) goto LAB_06cea5d4;
    }
    else {
      uVar9 = 0x7fffffff;
      lVar16 = 0;
      do {
        lVar18 = lVar11;
        if ((*(long *)(lVar18 + 0x18) == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_06cea5d4;
        iVar1 = *(int *)(*(long *)(lVar18 + 0x20) + 0x28);
        uVar4 = *(int *)(*(long *)(lVar18 + 0x18) + 0x28) - param_3;
        bVar8 = FUN_06ceb64c(lVar18);
        lVar13 = lVar18;
        if (((int)uVar4 < (int)uVar9 & bVar8 & -1 < (int)(iVar1 - param_4 | uVar4)) == 0) {
          lVar13 = lVar16;
          uVar4 = uVar9;
        }
        uVar9 = uVar4;
        lVar11 = *(long *)(lVar18 + 0x28);
        lVar16 = lVar13;
      } while (*(long *)(lVar18 + 0x28) != 0);
      plVar15 = (long *)PTR_DAT_072798f8;
      if (lVar13 == 0) goto LAB_06cea11c;
    }
    if ((*(long *)(lVar13 + 0x18) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40), lVar11 == 0)) goto LAB_06cea5d4;
    FUN_06ceb338(&local_c0,lVar11,param_3,param_7 & 1);
    local_70 = local_b0;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    if ((*(long *)(lVar13 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar13 + 0x20) + 0x40), lVar11 == 0)) goto LAB_06cea5d4;
    FUN_06ceb338(&local_d8,lVar11,param_4,param_7 & 1);
    uStack_98 = uStack_d0;
    local_a0 = local_d8;
    local_90 = local_c8;
  }
  else {
    plVar17 = (long *)(param_1 + 0x28);
    lVar13 = *plVar17;
    if (lVar13 == 0) {
      FUN_06ce96e8(param_1);
    }
    else {
      uVar12 = FUN_06ceb21c(lVar11,lVar13,param_3,param_4,&local_80,&local_a0,param_7 & 1);
      while (((uVar12 & 1) == 0 && (lVar11 = *(long *)(lVar13 + 0x28), lVar11 != 0))) {
        uVar12 = FUN_06ceb21c(uVar12,lVar11,param_3,param_4,&local_80,&local_a0,param_7 & 1);
        lVar13 = lVar11;
      }
    }
    if (local_a0._4_4_ == 0) {
      iVar1 = *(int *)(param_1 + 0x30) << 1;
      *(int *)(param_1 + 0x30) = iVar1;
      if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = FUN_05924754(iVar1,param_3 << 1,0);
      *(int *)(param_1 + 0x30) = (int)uVar14;
      uVar9 = FUN_0592489c(uVar14,*(undefined4 *)(param_1 + 0xa8),0);
      *(uint *)(param_1 + 0x30) = uVar9;
      uVar10 = FUN_05924754((int)(*(float *)(param_1 + 0x38) * (float)uVar9 + 0.5),param_4 << 1,0);
      if (lVar13 == 0) {
        bVar7 = true;
      }
      else {
        bVar7 = *(long *)(lVar13 + 0x28) == 0;
      }
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb33bc(bVar7,0);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      uVar3 = *(undefined1 *)(param_1 + 0x10);
      lVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory5__
                                 );
      FUN_06ceb4e8(lVar13,uVar2,uVar10,4,uVar3);
      if (lVar13 == 0) goto LAB_06cea5d4;
      *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(param_1 + 0x28);
      thunk_FUN_0333a630();
      *plVar17 = lVar13;
      thunk_FUN_0333a630(plVar17,lVar13);
      plVar15 = (long *)PTR_DAT_072798f8;
      if ((*(long *)(lVar13 + 0x18) == 0) ||
         (lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40), lVar11 == 0)) goto LAB_06cea5d4;
      FUN_06ceb338(&local_c0,lVar11,param_3,param_7 & 1);
      local_70 = local_b0;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      if ((*(long *)(lVar13 + 0x20) == 0) ||
         (lVar11 = *(long *)(*(long *)(lVar13 + 0x20) + 0x40), lVar11 == 0)) goto LAB_06cea5d4;
      FUN_06ceb338(&local_d8,lVar11,param_4,param_7 & 1);
      uStack_98 = uStack_d0;
      local_a0 = local_d8;
      local_90 = local_c8;
      FUN_06bb33bc(local_80._4_4_ != 0,0);
      FUN_06bb33bc(local_a0._4_4_ != 0,0);
    }
  }
  puVar6 = Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemListID__;
  puVar5 = Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemId__;
  uVar9 = local_80._4_4_;
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06bb34ec(uVar9 == param_3,*(undefined8 *)puVar5,0);
  FUN_06bb34ec(local_a0._4_4_ == param_4,*(undefined8 *)puVar6,0);
  if ((local_80._4_4_ != param_3) || (local_a0._4_4_ != param_4)) {
    if (uStack_78 != 0) {
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_06cea5d4;
      lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      local_b0 = local_70;
      if (lVar11 == 0) goto LAB_06cea5d4;
      uStack_e8 = uStack_78;
      local_f0 = local_80;
      local_e0 = local_70;
      FUN_06ceb464(lVar11,&local_f0);
    }
    if (uStack_98 != 0) {
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_06cea5d4;
      lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
      uStack_b8 = uStack_98;
      local_c0 = local_a0;
      local_b0 = local_90;
      if (lVar11 == 0) goto LAB_06cea5d4;
      uStack_108 = uStack_98;
      local_110 = local_a0;
      local_100 = local_90;
      FUN_06ceb464(lVar11,&local_110);
    }
    param_3 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
  }
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
    FUN_04ef0f78(*(long *)(lVar13 + 0x18),local_80 & 0xffffffff,param_3,
                 *(undefined8 *)
                  Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory__);
    if (*(long *)(lVar13 + 0x20) != 0) {
      System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>__System_Collections_Generic_IDictionary<TKey,TValue>_get_Values
                (*(long *)(lVar13 + 0x20),local_a0 & 0xffffffff,local_a0._4_4_,
                 *(undefined8 *)
                  Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory2__);
      lVar11 = *(long *)(lVar13 + 0x18);
      if (lVar11 != 0) {
        local_c0 = 0;
        uStack_b8 = 0;
        FUN_046237b8(&local_c0,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                     local_80 & 0xffffffff,local_80._4_4_,
                     *(undefined8 *)
                      Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory3__);
        param_5[1] = uStack_b8;
        *param_5 = local_c0;
        lVar11 = *(long *)(lVar13 + 0x20);
        if (lVar11 != 0) {
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_046217d8(&local_d8,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                       local_a0 & 0xffffffff,local_a0._4_4_,
                       *(undefined8 *)
                        Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterItemCategory4__);
          param_6[1] = uStack_d0;
          *param_6 = local_d8;
          if (param_2 != 0) {
            *(long *)(param_2 + 0x50) = lVar13;
            thunk_FUN_0333a630((long *)(param_2 + 0x50),lVar13);
            *(undefined8 *)(param_2 + 0x28) = local_70;
            *(ulong *)(param_2 + 0x20) = uStack_78;
            *(ulong *)(param_2 + 0x18) = local_80;
            thunk_FUN_0333a630(param_2 + 0x20,0);
            *(undefined8 *)(param_2 + 0x40) = local_90;
            *(ulong *)(param_2 + 0x38) = uStack_98;
            *(ulong *)(param_2 + 0x30) = local_a0;
            thunk_FUN_0333a630(param_2 + 0x38,0);
            *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x60);
            return;
          }
        }
      }
    }
  }
LAB_06cea5d4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


