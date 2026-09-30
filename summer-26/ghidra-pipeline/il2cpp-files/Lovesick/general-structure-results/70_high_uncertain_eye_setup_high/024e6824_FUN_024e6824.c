/*
FUNCTION_NAME: FUN_024e6824
ENTRY_POINT: 024e6824
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_024e6824(long *param_1,long param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_037827b2 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ed410);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
    DAT_037827b2 = 1;
  }
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar18 = FUN_0268b4e0(param_2,0,0);
  if ((uVar18 & 1) == 0) {
    if (param_2 == 0) goto LAB_024e6fa4;
    FUN_0266ed50(param_2,0);
  }
  else {
    param_2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
    if (param_2 == 0) goto LAB_024e6fa4;
    FUN_02669c18(param_2,0);
  }
  puVar16 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar15 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  puVar14 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar13 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  puVar12 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  puVar11 = PTR_DAT_033ed410;
  *param_1 = param_2;
  bVar17 = (param_4 & 1) == 0;
  uVar22 = 8;
  if (bVar17) {
    uVar22 = 4;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  uVar21 = 0;
  if (uVar22 != 0) {
    uVar21 = 0xfffc / uVar22;
  }
  iVar23 = 0x24;
  if (bVar17) {
    iVar23 = 6;
  }
  if ((int)uVar21 <= (int)param_3) {
    param_3 = uVar21;
  }
  iVar7 = param_3 * uVar22;
  lVar19 = FUN_00da4fb8(*(undefined8 *)puVar16,iVar7);
  param_1[2] = lVar19;
  lVar19 = FUN_00da4fb8(*(undefined8 *)puVar15,iVar7);
  param_1[5] = lVar19;
  lVar19 = FUN_00da4fb8(*(undefined8 *)puVar15,iVar7);
  param_1[6] = lVar19;
  lVar19 = FUN_00da4fb8(*(undefined8 *)puVar12,iVar7);
  param_1[7] = lVar19;
  lVar19 = FUN_00da4fb8(*(undefined8 *)puVar16,iVar7);
  param_1[3] = lVar19;
  lVar19 = FUN_00da4fb8(*(undefined8 *)puVar13,iVar7);
  param_1[4] = lVar19;
  lVar19 = FUN_00da4fb8(*(undefined8 *)puVar14,param_3 * iVar23);
  param_1[8] = lVar19;
  puVar12 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
  if (0 < (int)param_3) {
    uVar18 = 0;
    uVar21 = 0;
    do {
      uVar25 = 0;
      uVar20 = (uint)uVar18;
      lVar19 = uVar18 << 0x20;
      do {
        lVar26 = param_1[2];
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar26 == 0) goto LAB_024e6fa4;
        uVar4 = uVar18 + uVar25;
        if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_024e6fa0;
        lVar24 = lVar19 >> 0x20;
        lVar26 = lVar26 + lVar24 * 0xc;
        uVar5 = *(undefined4 *)
                 (*(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8) + 1);
        *(undefined8 *)(lVar26 + 0x20) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar26 + 0x28) = uVar5;
        lVar26 = param_1[5];
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(puVar12);
          DAT_03774d77 = '\x01';
        }
        if (lVar26 == 0) goto LAB_024e6fa4;
        if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_024e6fa0;
        *(undefined8 *)(lVar26 + lVar24 * 8 + 0x20) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
        lVar26 = param_1[6];
        if (lVar26 == 0) goto LAB_024e6fa4;
        if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_024e6fa0;
        *(undefined8 *)(lVar26 + lVar24 * 8 + 0x20) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
        lVar26 = *(long *)puVar11;
        lVar27 = param_1[7];
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar26 = *(long *)puVar11;
        }
        if (lVar27 == 0) goto LAB_024e6fa4;
        if (*(uint *)(lVar27 + 0x18) <= uVar4) goto LAB_024e6fa0;
        *(undefined4 *)(lVar27 + lVar24 * 4 + 0x20) = **(undefined4 **)(lVar26 + 0xb8);
        lVar26 = param_1[3];
        if (lVar26 == 0) goto LAB_024e6fa4;
        if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_024e6fa0;
        lVar26 = lVar26 + lVar24 * 0xc;
        uVar5 = *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xc);
        *(undefined8 *)(lVar26 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 4);
        *(undefined4 *)(lVar26 + 0x28) = uVar5;
        lVar26 = param_1[4];
        if (lVar26 == 0) goto LAB_024e6fa4;
        if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_024e6fa0;
        lVar26 = lVar26 + lVar24 * 0x10;
        uVar25 = uVar25 + 1;
        uVar28 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x10);
        *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x18);
        *(undefined8 *)(lVar26 + 0x20) = uVar28;
        lVar19 = lVar19 + 0x100000000;
      } while (uVar25 < uVar22);
      lVar19 = param_1[8];
      if (lVar19 == 0) goto LAB_024e6fa4;
      uVar6 = *(uint *)(lVar19 + 0x18);
      if (uVar6 <= uVar21) {
LAB_024e6fa0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(uint *)(lVar19 + (long)(int)uVar21 * 4 + 0x20) = uVar20;
      if (uVar6 <= (uint)((long)(int)uVar21 | 1U)) goto LAB_024e6fa0;
      uVar8 = uVar20 | 1;
      *(uint *)(lVar19 + ((long)(int)uVar21 | 1U) * 4 + 0x20) = uVar8;
      if (uVar6 <= uVar21 + 2) goto LAB_024e6fa0;
      uVar9 = uVar20 | 2;
      *(uint *)(lVar19 + (long)(int)(uVar21 + 2) * 4 + 0x20) = uVar9;
      if (uVar6 <= uVar21 + 3) goto LAB_024e6fa0;
      *(uint *)(lVar19 + (long)(int)(uVar21 + 3) * 4 + 0x20) = uVar9;
      if (uVar6 <= uVar21 + 4) goto LAB_024e6fa0;
      uVar10 = uVar20 | 3;
      *(uint *)(lVar19 + (long)(int)(uVar21 + 4) * 4 + 0x20) = uVar10;
      if (uVar6 <= uVar21 + 5) goto LAB_024e6fa0;
      *(uint *)(lVar19 + (long)(int)(uVar21 + 5) * 4 + 0x20) = uVar20;
      if ((param_4 & 1) != 0) {
        if (uVar6 <= uVar21 + 6) goto LAB_024e6fa0;
        iVar7 = uVar20 + 4;
        *(int *)(lVar19 + (long)(int)(uVar21 + 6) * 4 + 0x20) = iVar7;
        if (uVar6 <= uVar21 + 7) goto LAB_024e6fa0;
        iVar1 = uVar20 + 5;
        *(int *)(lVar19 + (long)(int)(uVar21 + 7) * 4 + 0x20) = iVar1;
        if (uVar6 <= uVar21 + 8) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 8) * 4 + 0x20) = uVar8;
        if (uVar6 <= uVar21 + 9) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 9) * 4 + 0x20) = uVar8;
        if (uVar6 <= uVar21 + 10) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 10) * 4 + 0x20) = uVar20;
        if (uVar6 <= uVar21 + 0xb) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0xb) * 4 + 0x20) = iVar7;
        if (uVar6 <= uVar21 + 0xc) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0xc) * 4 + 0x20) = uVar10;
        if (uVar6 <= uVar21 + 0xd) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0xd) * 4 + 0x20) = uVar9;
        if (uVar6 <= uVar21 + 0xe) goto LAB_024e6fa0;
        iVar2 = uVar20 + 6;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0xe) * 4 + 0x20) = iVar2;
        if (uVar6 <= uVar21 + 0xf) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0xf) * 4 + 0x20) = iVar2;
        if (uVar6 <= uVar21 + 0x10) goto LAB_024e6fa0;
        iVar3 = uVar20 + 7;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x10) * 4 + 0x20) = iVar3;
        if (uVar6 <= uVar21 + 0x11) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0x11) * 4 + 0x20) = uVar10;
        if (uVar6 <= uVar21 + 0x12) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0x12) * 4 + 0x20) = uVar8;
        if (uVar6 <= uVar21 + 0x13) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x13) * 4 + 0x20) = iVar1;
        if (uVar6 <= uVar21 + 0x14) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x14) * 4 + 0x20) = iVar2;
        if (uVar6 <= uVar21 + 0x15) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x15) * 4 + 0x20) = iVar2;
        if (uVar6 <= uVar21 + 0x16) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0x16) * 4 + 0x20) = uVar9;
        if (uVar6 <= uVar21 + 0x17) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0x17) * 4 + 0x20) = uVar8;
        if (uVar6 <= uVar21 + 0x18) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x18) * 4 + 0x20) = iVar7;
        if (uVar6 <= uVar21 + 0x19) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0x19) * 4 + 0x20) = uVar20;
        if (uVar6 <= uVar21 + 0x1a) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0x1a) * 4 + 0x20) = uVar10;
        if (uVar6 <= uVar21 + 0x1b) goto LAB_024e6fa0;
        *(uint *)(lVar19 + (long)(int)(uVar21 + 0x1b) * 4 + 0x20) = uVar10;
        if (uVar6 <= uVar21 + 0x1c) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x1c) * 4 + 0x20) = iVar3;
        if (uVar6 <= uVar21 + 0x1d) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x1d) * 4 + 0x20) = iVar7;
        if (uVar6 <= uVar21 + 0x1e) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x1e) * 4 + 0x20) = iVar3;
        if (uVar6 <= uVar21 + 0x1f) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x1f) * 4 + 0x20) = iVar2;
        if (uVar6 <= uVar21 + 0x20) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x20) * 4 + 0x20) = iVar1;
        if (uVar6 <= uVar21 + 0x21) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x21) * 4 + 0x20) = iVar1;
        if (uVar6 <= uVar21 + 0x22) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x22) * 4 + 0x20) = iVar7;
        if (uVar6 <= uVar21 + 0x23) goto LAB_024e6fa0;
        *(int *)(lVar19 + (long)(int)(uVar21 + 0x23) * 4 + 0x20) = iVar3;
      }
      uVar18 = (ulong)(uVar20 + uVar22);
      iVar7 = 0;
      if (uVar22 != 0) {
        iVar7 = (int)(uVar20 + uVar22) / (int)uVar22;
      }
      uVar21 = uVar21 + iVar23;
    } while (iVar7 < (int)param_3);
  }
  if (*param_1 != 0) {
    FUN_0266b9c4(*param_1,param_1[2],0);
    if (*param_1 != 0) {
      FUN_0266ba70(*param_1,param_1[3],0);
      if (*param_1 != 0) {
        FUN_0266bb1c(*param_1,param_1[4],0);
        if (*param_1 != 0) {
          FUN_0266db2c(*param_1,param_1[8],0);
          lVar19 = *(long *)puVar11;
          lVar26 = *param_1;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar19 = *(long *)puVar11;
          }
          lVar19 = *(long *)(lVar19 + 0xb8);
          local_90 = *(undefined8 *)(lVar19 + 0x30);
          uStack_98 = *(undefined8 *)(lVar19 + 0x28);
          local_a0 = *(undefined8 *)(lVar19 + 0x20);
          local_80 = local_a0;
          uStack_78 = uStack_98;
          local_70 = local_90;
          if (lVar26 != 0) {
            FUN_0266afe0(lVar26,&local_a0,0);
            param_1[9] = 0;
            return;
          }
        }
      }
    }
  }
LAB_024e6fa4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


