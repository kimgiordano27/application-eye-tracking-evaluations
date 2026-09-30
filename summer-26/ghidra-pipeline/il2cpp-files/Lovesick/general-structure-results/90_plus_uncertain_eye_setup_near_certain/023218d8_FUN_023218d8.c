/*
FUNCTION_NAME: FUN_023218d8
ENTRY_POINT: 023218d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_023218d8(long param_1,long param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint local_bc;
  int local_8c;
  long local_88;
  undefined8 uStack_80;
  int local_74;
  long local_70;
  undefined8 uStack_68;
  
  if ((DAT_03781c50 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3232);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(Method_System_Array_Empty<ExceptionDispatchInfo>__);
    thunk_FUN_00d48444(System_ComponentModel_PropertyDescriptorCollection_TypeInfo);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Data_RBTree<int>_UpdateNodeKey__);
    DAT_03781c50 = 1;
  }
  if (param_1 != 0) {
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 == 0) {
      local_bc = 0;
    }
    else {
      local_bc = *(uint *)(lVar12 + 0x18);
      bVar1 = 0 < (int)local_bc;
      if (0 < (int)local_bc) {
        uVar18 = 0;
        iVar19 = 0;
        do {
          if (*(uint *)(lVar12 + 0x18) <= uVar18) {
LAB_02321ddc:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar12 = *(long *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
          if ((lVar12 == 0) || (lVar12 = FUN_022f8edc(lVar12,0), lVar12 == 0)) break;
          uVar18 = uVar18 + 1;
          iVar19 = iVar19 + *(int *)(lVar12 + 0x18);
          if (local_bc == uVar18) goto LAB_02321a20;
          lVar12 = *(long *)(param_1 + 0x20);
        } while (lVar12 != 0);
        goto LAB_02321dd8;
      }
    }
    bVar1 = false;
    iVar19 = 0;
LAB_02321a20:
    puVar7 = 
    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
    puVar5 = OVRPlugin_OVRP_1_79_0_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar8 = FUN_017726a0(iVar19,0x7ffe,0);
    iVar19 = iVar8 << 1;
    lVar12 = FUN_00da4fb8(*(undefined8 *)puVar7,iVar19);
    lVar10 = FUN_00da4fb8(*(undefined8 *)puVar5,iVar19);
    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,iVar19);
    if (!(bool)(bVar1 ^ 1U | iVar8 < 1)) {
      local_8c = 0;
      uVar18 = 0;
      do {
        lVar13 = *(long *)(param_1 + 0x20);
        if (lVar13 == 0) goto LAB_02321dd8;
        uVar20 = 0;
        uVar22 = local_8c << 1;
        while( true ) {
          if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_02321ddc;
          lVar13 = *(long *)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
          if ((lVar13 == 0) || (lVar13 = FUN_022f8edc(lVar13,0), lVar13 == 0)) goto LAB_02321dd8;
          iVar19 = local_8c + uVar20;
          if ((iVar8 <= iVar19) || (*(int *)(lVar13 + 0x18) <= (int)uVar20)) break;
          lVar13 = *(long *)(param_1 + 0x20);
          if (lVar13 == 0) goto LAB_02321dd8;
          if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_02321ddc;
          lVar13 = *(long *)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
          if ((lVar13 == 0) || (lVar13 = FUN_022f8edc(lVar13,0), lVar13 == 0)) goto LAB_02321dd8;
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_02321ddc;
          lVar14 = *(long *)(param_1 + 0x50);
          if (lVar14 == 0) goto LAB_02321dd8;
          lVar13 = *(long *)(lVar13 + (long)(int)uVar20 * 8 + 0x20);
          if ((*(uint *)(lVar14 + 0x18) <= (uint)lVar13) ||
             (*(uint *)(lVar14 + 0x18) <= (uint)((ulong)lVar13 >> 0x20))) goto LAB_02321ddc;
          if (lVar12 == 0) goto LAB_02321dd8;
          if (*(uint *)(lVar12 + 0x18) <= uVar22) goto LAB_02321ddc;
          lVar16 = lVar14 + (long)(int)(uint)lVar13 * 0xc;
          uVar9 = *(undefined4 *)(lVar16 + 0x28);
          lVar21 = (long)(int)uVar22;
          lVar14 = lVar14 + (lVar13 >> 0x20) * 0xc;
          lVar17 = lVar12 + lVar21 * 0xc;
          uVar15 = *(undefined8 *)(lVar14 + 0x20);
          uVar3 = *(undefined4 *)(lVar14 + 0x28);
          *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar16 + 0x20);
          *(undefined4 *)(lVar17 + 0x28) = uVar9;
          uVar2 = uVar22 + 1;
          if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_02321ddc;
          lVar16 = (long)(int)uVar2;
          lVar14 = lVar12 + lVar16 * 0xc;
          *(undefined8 *)(lVar14 + 0x20) = uVar15;
          *(undefined4 *)(lVar14 + 0x28) = uVar3;
          iVar19 = *param_3;
          if (*(int *)(*(long *)Method_System_Array_Empty<ExceptionDispatchInfo>__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_023210d4(iVar19);
          iVar19 = *param_3;
          *param_3 = iVar19 + 1;
          local_88 = 0;
          uStack_80 = 0;
          local_70 = lVar13;
          FUN_013a23f0(&local_88,param_1,&local_70,
                       *(undefined8 *)System_ComponentModel_PropertyDescriptorCollection_TypeInfo);
          if (param_2 == 0) goto LAB_02321dd8;
          local_70 = local_88;
          uStack_68 = uStack_80;
          local_74 = iVar19;
          FUN_0129a054(param_2,&local_74,&local_70,*(undefined8 *)StringLiteral_3232);
          if (lVar10 == 0) goto LAB_02321dd8;
          if ((*(uint *)(lVar10 + 0x18) <= uVar22) ||
             (*(undefined4 *)(lVar10 + lVar21 * 4 + 0x20) = uVar9, *(uint *)(lVar10 + 0x18) <= uVar2
             )) goto LAB_02321ddc;
          *(undefined4 *)(lVar10 + lVar16 * 4 + 0x20) = uVar9;
          if (lVar11 == 0) goto LAB_02321dd8;
          uVar4 = *(uint *)(lVar11 + 0x18);
          if ((uVar4 <= uVar22) || (*(uint *)(lVar11 + lVar21 * 4 + 0x20) = uVar22, uVar4 <= uVar2))
          goto LAB_02321ddc;
          *(uint *)(lVar11 + lVar16 * 4 + 0x20) = uVar2;
          lVar13 = *(long *)(param_1 + 0x20);
          uVar20 = uVar20 + 1;
          uVar22 = uVar22 + 2;
          if (lVar13 == 0) goto LAB_02321dd8;
        }
        uVar18 = uVar18 + 1;
      } while (((int)uVar18 < (int)local_bc) && (local_8c = local_8c + uVar20, iVar19 < iVar8));
    }
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
    puVar5 = Method_System_Data_RBTree<int>_UpdateNodeKey__;
    if (lVar13 != 0) {
      FUN_02669c18(lVar13,0);
      FUN_0268b75c(lVar13,*(undefined8 *)puVar5,0);
      FUN_0266b9c4(lVar13,lVar12,0);
      FUN_0266c1dc(lVar13,lVar10,0);
      FUN_0266ad68(lVar13,1,0);
      FUN_0266e648(lVar13,lVar11,3,0,0);
      return lVar13;
    }
  }
LAB_02321dd8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


