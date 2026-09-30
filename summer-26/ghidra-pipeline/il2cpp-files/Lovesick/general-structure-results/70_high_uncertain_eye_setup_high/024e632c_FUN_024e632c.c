/*
FUNCTION_NAME: FUN_024e632c
ENTRY_POINT: 024e632c
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


void FUN_024e632c(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_037827b1 & 1) == 0) {
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
    DAT_037827b1 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_0268b4e0(param_2,0,0);
  if ((uVar11 & 1) == 0) {
    if (param_2 == 0) goto LAB_024e6820;
    FUN_0266ed50(param_2,0);
  }
  else {
    param_2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
    if (param_2 == 0) goto LAB_024e6820;
    FUN_02669c18(param_2,0);
  }
  puVar10 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar7 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  puVar6 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  puVar5 = PTR_DAT_033ed410;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar13 = param_3;
  if (0x3ffe < param_3) {
    iVar13 = 0x3fff;
  }
  iVar3 = iVar13 << 2;
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar10,iVar3);
  param_1[2] = lVar12;
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar9,iVar3);
  param_1[5] = lVar12;
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar9,iVar3);
  param_1[6] = lVar12;
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar6,iVar3);
  param_1[7] = lVar12;
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar10,iVar3);
  param_1[3] = lVar12;
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar7,iVar3);
  param_1[4] = lVar12;
  lVar12 = FUN_00da4fb8(*(undefined8 *)puVar8,iVar13 * 6);
  param_1[8] = lVar12;
  puVar6 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
  if (0 < param_3) {
    uVar15 = 0;
    uVar18 = 0;
    do {
      lVar14 = (long)(int)uVar18;
      lVar21 = 0;
      lVar12 = lVar14 * 8 + 0x20;
      lVar19 = (lVar14 * 2 + (long)(int)uVar18) * 4;
      do {
        lVar16 = param_1[2];
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar16 == 0) goto LAB_024e6820;
        uVar20 = uVar18 + (int)lVar21;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_024e681c;
        uVar2 = *(undefined4 *)
                 (*(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8) + 1);
        *(undefined8 *)(lVar16 + lVar19 + 0x20) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar16 + lVar19 + 0x28) = uVar2;
        lVar16 = param_1[5];
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(puVar6);
          DAT_03774d77 = '\x01';
        }
        if (lVar16 == 0) goto LAB_024e6820;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_024e681c;
        *(undefined8 *)(lVar16 + lVar12 + lVar21 * 8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        lVar16 = param_1[6];
        if (lVar16 == 0) goto LAB_024e6820;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_024e681c;
        *(undefined8 *)(lVar16 + lVar12 + lVar21 * 8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        lVar16 = *(long *)puVar5;
        lVar17 = param_1[7];
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar16 = *(long *)puVar5;
        }
        if (lVar17 == 0) goto LAB_024e6820;
        if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_024e681c;
        *(undefined4 *)(lVar17 + lVar14 * 4 + 0x20 + lVar21 * 4) = **(undefined4 **)(lVar16 + 0xb8);
        lVar16 = param_1[3];
        if (lVar16 == 0) goto LAB_024e6820;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_024e681c;
        uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc);
        *(undefined8 *)(lVar16 + lVar19 + 0x20) =
             *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4);
        *(undefined4 *)(lVar16 + lVar19 + 0x28) = uVar2;
        lVar16 = param_1[4];
        if (lVar16 == 0) goto LAB_024e6820;
        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_024e681c;
        lVar19 = lVar19 + 0xc;
        uVar22 = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
        puVar4 = (undefined8 *)(lVar16 + lVar14 * 0x10 + 0x20 + lVar21 * 0x10);
        puVar4[1] = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
        *puVar4 = uVar22;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 4);
      lVar12 = param_1[8];
      if (lVar12 == 0) goto LAB_024e6820;
      uVar20 = *(uint *)(lVar12 + 0x18);
      if (uVar20 <= uVar15) {
LAB_024e681c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(uint *)(lVar12 + (long)(int)uVar15 * 4 + 0x20) = uVar18;
      if (uVar20 <= (uint)((long)(int)uVar15 | 1U)) goto LAB_024e681c;
      *(uint *)(lVar12 + ((long)(int)uVar15 | 1U) * 4 + 0x20) = uVar18 | 1;
      if (uVar20 <= uVar15 + 2) goto LAB_024e681c;
      *(uint *)(lVar12 + (long)(int)(uVar15 + 2) * 4 + 0x20) = uVar18 | 2;
      if (uVar20 <= uVar15 + 3) goto LAB_024e681c;
      *(uint *)(lVar12 + (long)(int)(uVar15 + 3) * 4 + 0x20) = uVar18 | 2;
      if (uVar20 <= uVar15 + 4) goto LAB_024e681c;
      *(uint *)(lVar12 + (long)(int)(uVar15 + 4) * 4 + 0x20) = uVar18 | 3;
      if (uVar20 <= uVar15 + 5) goto LAB_024e681c;
      *(uint *)(lVar12 + (long)(int)(uVar15 + 5) * 4 + 0x20) = uVar18;
      uVar20 = uVar18 + 4;
      uVar1 = uVar18 + 7;
      if (-1 < (int)uVar20) {
        uVar1 = uVar20;
      }
      uVar15 = uVar15 + 6;
      uVar18 = uVar20;
    } while ((int)uVar1 >> 2 < iVar13);
  }
  if (*param_1 != 0) {
    FUN_0266b9c4(*param_1,param_1[2],0);
    if (*param_1 != 0) {
      FUN_0266ba70(*param_1,param_1[3],0);
      if (*param_1 != 0) {
        FUN_0266bb1c(*param_1,param_1[4],0);
        if (*param_1 != 0) {
          FUN_0266db2c(*param_1,param_1[8],0);
          lVar12 = *(long *)puVar5;
          lVar19 = *param_1;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar12 = *(long *)puVar5;
          }
          lVar12 = *(long *)(lVar12 + 0xb8);
          local_90 = *(undefined8 *)(lVar12 + 0x30);
          uStack_98 = *(undefined8 *)(lVar12 + 0x28);
          local_a0 = *(undefined8 *)(lVar12 + 0x20);
          local_80 = local_a0;
          uStack_78 = uStack_98;
          local_70 = local_90;
          if (lVar19 != 0) {
            FUN_0266afe0(lVar19,&local_a0,0);
            param_1[9] = 0;
            return;
          }
        }
      }
    }
  }
LAB_024e6820:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


