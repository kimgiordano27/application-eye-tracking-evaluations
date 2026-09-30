/*
FUNCTION_NAME: UnityEngine.UIElements.ComputedStyle$$ApplyPropertyAnimation
ENTRY_POINT: 05e5bf14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


void UnityEngine_UIElements_ComputedStyle__ApplyPropertyAnimation(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x19;
  undefined **unaff_x20;
  undefined8 *puVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  auVar15._8_8_ = unaff_x23;
  auVar15._0_8_ = unaff_x21;
  auVar14._8_8_ = unaff_x24;
  auVar14._0_8_ = unaff_x22;
  while( true ) {
    puVar13 = (undefined8 *)unaff_x20[0x132];
    uVar12 = FUN_0322c2fc(in_stack_00000030,in_stack_00000038,*puVar13);
    FUN_04dc6844(uVar12,0);
    uVar12 = FUN_0322c2fc(auVar14._0_8_,auVar14._8_8_,*puVar13);
    FUN_04dc6844(uVar12,0);
    System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
              (&stack0x00000030,*unaff_x28);
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_146__;
    uVar12 = FUN_0322c2f8(in_stack_00000040,in_stack_00000048,
                          *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_146__);
    FUN_04dc6844(uVar12,0);
    uVar12 = FUN_0322c2f8(auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar3);
    FUN_04dc6844(uVar12,0);
    FUN_03ac7100(unaff_x29 + 0x10,*unaff_x27);
    puVar4 = PTR_DAT_0631eb50;
    puVar3 = PTR_DAT_06312d90;
    if (*(long *)(unaff_x19 + 0x18) == 0) break;
    if (*(long *)(*(long *)(unaff_x19 + 0x18) + 0x140) == 0) break;
    FUN_05e5f1c0();
    iVar8 = *(int *)(unaff_x19 + 0xf0);
    iVar7 = FUN_03ac7100(unaff_x29 + 0x10,*unaff_x27);
    uVar12 = *unaff_x28;
    iVar5 = *(int *)(unaff_x19 + 0xec);
    *(int *)(unaff_x19 + 0xf0) = iVar7 + iVar8;
    iVar8 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                      (&stack0x00000030,uVar12);
    *(int *)(unaff_x19 + 0xec) = iVar8 + iVar5;
    do {
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05e5c034;
      uVar9 = FUN_03f0d08c(*(long *)(unaff_x19 + 0x60),&stack0x00000030,*unaff_x26);
      if ((uVar9 & 1) == 0) {
        return;
      }
      iVar8 = FUN_03ac7100(unaff_x29 + 0x10,*unaff_x27);
      iVar5 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                        (&stack0x00000030,*unaff_x28);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar3);
      }
      FUN_05c45700(0 < iVar8 != iVar5 < 1,0);
      iVar8 = FUN_03ac7100(unaff_x29 + 0x10,*unaff_x27);
    } while ((iVar8 < 1) ||
            (iVar8 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                               (&stack0x00000030,*unaff_x28), iVar8 < 1));
    FUN_03ac7100(unaff_x29 + 0x10,*unaff_x27);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar4);
    }
    lVar10 = FUN_05e5c1b4();
    if (*(long *)(unaff_x19 + 0x118) == 0) {
      *(long *)(unaff_x19 + 0x118) = lVar10;
      plVar11 = (long *)(unaff_x19 + 0x118);
    }
    else {
      if (lVar10 == 0) break;
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(unaff_x19 + 0x120);
      thunk_FUN_02bb0e9c();
      if (*(long *)(unaff_x19 + 0x120) == 0) break;
      plVar11 = (long *)(*(long *)(unaff_x19 + 0x120) + 0x28);
      *plVar11 = lVar10;
    }
    thunk_FUN_02bb0e9c(plVar11,lVar10);
    *(long *)(unaff_x19 + 0x120) = lVar10;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x120,lVar10);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x19 + 200);
    uVar2 = *(undefined4 *)(unaff_x19 + 0xec);
    uVar6 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                      (&stack0x00000030,*unaff_x28);
    auVar14 = FUN_0322bc30(uVar12,uVar1,uVar2,uVar6,
                           *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_145__);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xd8);
    uVar2 = *(undefined4 *)(unaff_x19 + 0xf0);
    uVar6 = FUN_03ac7100(unaff_x29 + 0x10,*unaff_x27);
    auVar15 = FUN_0322bb50(uVar12,uVar1,uVar2,uVar6,
                           *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_144__);
    unaff_x20 = &
                Method_LoginAuthentication_<NotifyDataUpdaterAfterDelay>d__37_System_Collections_IEnumerator_Reset__
    ;
  }
LAB_05e5c034:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


