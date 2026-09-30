/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleUI.<>c__DisplayClass4_0$$<DOFade>b__0
ENTRY_POINT: 00e66930
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0__<DOFade>b__0(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000048;
  
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
                    /* try { // try from 00e66934 to 00f66937 has its CatchHandler @ 00e66948 */
  uStack0000000000000020 = 0;
                    /* try { // try from 00e66938 to 00f6695b has its CatchHandler @ 00e6690c */
  *(float *)(unaff_x19 + 0x88) = unaff_s8;
  puVar8 = Method_SceneLoader02112025_SceneLoaded__;
  puVar7 = Method_Sirenix_Utilities_EmitUtilities_CreateInstanceFieldGetter<Object,_IntPtr>__;
  puVar6 = Method_System_Collections_Generic_List<DebugUI_Panel>_AsReadOnly__;
  puVar5 = Method_System_Collections_Generic_List<IMarker>_Clear__;
  puVar4 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
  puVar3 = Method_System_Collections_Generic_Dictionary<Type,_List<string>>_ContainsKey__;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(unaff_x19 + 0xc0) == '\0') {
    return;
  }
                    /* catch() { ... } // from try @ 00e66934 with catch @ 00e66948 */
  if (*(long *)(unaff_x19 + 0xb8) != 0) {
    FUN_01323390(*(long *)(unaff_x19 + 0xb8),&stack0x00000008,*(undefined8 *)PTR_DAT_033f29d8);
    uVar1 = DAT_028aa160;
    uStack0000000000000028 = in_stack_00000010;
    uStack0000000000000020 = in_stack_00000008;
    uStack0000000000000030 = in_stack_00000018;
    while (uVar9 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
      lVar10 = FUN_00ac4168(&stack0x00000020,*(undefined8 *)puVar7);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(float *)(lVar10 + 0x10) <= unaff_s8) {
        uVar12 = *(undefined8 *)(unaff_x19 + 0xa8);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0106a9e4(uVar12,0,0);
        FUN_0106a9e4(*(undefined8 *)(unaff_x19 + 0xb0),0,0);
        uVar12 = *(undefined8 *)(lVar10 + 0x18);
        uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0268b4e0(uVar12,uVar13,0);
        if ((uVar9 & 1) == 0) {
          FUN_00f49518(0x3f800000,uVar1,*(undefined8 *)(unaff_x19 + 0xb0),0);
          FUN_00f49518(0,uVar1,*(undefined8 *)(unaff_x19 + 0xa8),0);
          if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_02659c34(*(undefined4 *)(lVar10 + 0x20),*(long *)(unaff_x19 + 0xb0),0);
        }
        else {
          FUN_00f49518(0x3f800000,uVar1,*(undefined8 *)(unaff_x19 + 0xa8),0);
          FUN_00f49518(0,uVar1,*(undefined8 *)(unaff_x19 + 0xb0),0);
          if (*(long *)(unaff_x19 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_02659c34(*(undefined4 *)(lVar10 + 0x20),*(long *)(unaff_x19 + 0xa8),0);
        }
      }
    }
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar6);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)
                           Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                  );
      fVar16 = 1.0 - unaff_s8;
      fVar17 = fVar16;
      if (1.0 < fVar16) {
        fVar17 = 1.0;
      }
      fVar17 = fVar17 * 5.0 + 0.0;
      if (fVar16 < 0.0) {
        fVar17 = 0.0;
      }
      if (*(long *)(unaff_x19 + 0xd0) != 0) {
        fVar16 = (float)(int)fVar17;
        fVar17 = (float)(*(int *)(*(long *)(unaff_x19 + 0xd0) + 0x18) + -1);
        if (fVar16 <= fVar17) {
          fVar17 = fVar16;
        }
        if (fVar16 < 0.0) {
          fVar17 = 0.0;
        }
        in_stack_00000048._4_4_ = 0x80000000;
        if (fVar17 != INFINITY) {
          in_stack_00000048._4_4_ = (int)fVar17;
        }
        uVar12 = FUN_0176eb1c((long)&stack0x00000048 + 4,0);
        uVar12 = FUN_015f5b28(*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                              ,uVar12,0);
        lVar11 = *(long *)(unaff_x19 + 0xd0);
        if (lVar11 != 0) {
          if (*(uint *)(lVar11 + 0x18) <= in_stack_00000048._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar15 = *(undefined8 *)(lVar11 + (long)(int)in_stack_00000048._4_4_ * 8 + 0x20);
          uVar13 = *(undefined8 *)(unaff_x19 + 200);
          uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ed570);
          if (lVar11 != 0) {
            FUN_00ec9774(lVar11,uVar12,uVar15,uVar13,uVar14,0);
            FUN_00ac4270(lVar10,lVar11,*(undefined8 *)PTR_DAT_033eba08);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03774e19 == '\0') {
              thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                );
              DAT_03774e19 = '\x01';
            }
            lVar11 = *(long *)puVar4;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = *(long *)puVar4;
            }
            if ((**(long **)(lVar11 + 0xb8) != 0) &&
               (lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0x128), lVar11 != 0)) {
              FUN_00e9fc50(lVar11,lVar10,*(undefined8 *)(unaff_x19 + 0x58),0,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


