/*
FUNCTION_NAME: FUN_02728950
ENTRY_POINT: 02728950
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02728950(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  puVar7 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar4 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  if ((DAT_037882bc & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    DAT_037882bc = 1;
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  iVar9 = param_2;
  if (0x3ffe < param_2) {
    iVar9 = 0x3fff;
  }
  iVar3 = iVar9 << 2;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar7,iVar3);
  *(undefined8 *)(param_1 + 2) = uVar8;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,iVar3);
  *(undefined8 *)(param_1 + 4) = uVar8;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar6,iVar3);
  *(undefined8 *)(param_1 + 6) = uVar8;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,iVar3);
  *(undefined8 *)(param_1 + 8) = uVar8;
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar5,iVar9 * 6);
  *(undefined8 *)(param_1 + 10) = uVar8;
  puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  puVar4 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
  if (0 < param_2) {
    uVar13 = 0;
    plVar14 = (long *)
              Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__;
    uVar15 = 0;
    do {
      lVar10 = (long)(int)uVar15;
      lVar20 = 0;
      lVar12 = lVar10 * 8 + 0x20;
      lVar19 = (lVar10 * 2 + (long)(int)uVar15) * 4;
      do {
        lVar17 = *(long *)(param_1 + 2);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar5);
          DAT_03774d76 = '\x01';
          plVar14 = (long *)
                    Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__
          ;
        }
        if (lVar17 == 0) goto LAB_02728c9c;
        uVar16 = uVar15 + (int)lVar20;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_02728ca0;
        puVar11 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        uVar2 = *(undefined4 *)(puVar11 + 1);
        *(undefined8 *)(lVar17 + lVar19 + 0x20) = *puVar11;
        *(undefined4 *)(lVar17 + lVar19 + 0x28) = uVar2;
        lVar17 = *(long *)(param_1 + 4);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(puVar4);
          DAT_03774d77 = '\x01';
          plVar14 = (long *)
                    Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__
          ;
        }
        if (lVar17 == 0) goto LAB_02728c9c;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_02728ca0;
        *(undefined8 *)(lVar17 + lVar12 + lVar20 * 8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        lVar17 = *(long *)(param_1 + 6);
        if (lVar17 == 0) goto LAB_02728c9c;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_02728ca0;
        *(undefined8 *)(lVar17 + lVar12 + lVar20 * 8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        lVar17 = *plVar14;
        lVar18 = *(long *)(param_1 + 8);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar17 = *(long *)
                    Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__
          ;
          plVar14 = (long *)
                    Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_Add__
          ;
        }
        if (lVar18 == 0) goto LAB_02728c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_02728ca0;
        lVar19 = lVar19 + 0xc;
        *(undefined4 *)(lVar18 + lVar10 * 4 + 0x20 + lVar20 * 4) = **(undefined4 **)(lVar17 + 0xb8);
        lVar20 = lVar20 + 1;
      } while (lVar20 != 4);
      lVar12 = *(long *)(param_1 + 10);
      if (lVar12 == 0) {
LAB_02728c9c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar16 = *(uint *)(lVar12 + 0x18);
      if (uVar16 <= uVar13) {
LAB_02728ca0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(uint *)(lVar12 + (long)(int)uVar13 * 4 + 0x20) = uVar15;
      if (uVar16 <= (uint)((long)(int)uVar13 | 1U)) goto LAB_02728ca0;
      *(uint *)(lVar12 + ((long)(int)uVar13 | 1U) * 4 + 0x20) = uVar15 | 1;
      if (uVar16 <= uVar13 + 2) goto LAB_02728ca0;
      *(uint *)(lVar12 + (long)(int)(uVar13 + 2) * 4 + 0x20) = uVar15 | 2;
      if (uVar16 <= uVar13 + 3) goto LAB_02728ca0;
      *(uint *)(lVar12 + (long)(int)(uVar13 + 3) * 4 + 0x20) = uVar15 | 2;
      if (uVar16 <= uVar13 + 4) goto LAB_02728ca0;
      *(uint *)(lVar12 + (long)(int)(uVar13 + 4) * 4 + 0x20) = uVar15 | 3;
      if (uVar16 <= uVar13 + 5) goto LAB_02728ca0;
      *(uint *)(lVar12 + (long)(int)(uVar13 + 5) * 4 + 0x20) = uVar15;
      uVar16 = uVar15 + 4;
      uVar1 = uVar15 + 7;
      if (-1 < (int)uVar16) {
        uVar1 = uVar16;
      }
      uVar13 = uVar13 + 6;
      uVar15 = uVar16;
    } while ((int)uVar1 >> 2 < iVar9);
  }
  return;
}


