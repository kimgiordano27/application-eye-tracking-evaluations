/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleUI.<>c__DisplayClass5_0$$<DOFillAmount>b__0
ENTRY_POINT: 00e66980
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0__<DOFillAmount>b__0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 uVar9;
  undefined8 *unaff_x25;
  undefined8 uVar10;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  float fVar11;
  float fVar12;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  puVar3 = Method_System_Collections_Generic_List<DebugUI_Panel>_AsReadOnly__;
  puVar2 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
                    /* try { // try from 00e66980 to 00f66987 has its CatchHandler @ 00e669ac */
                    /* try { // try from 00e66988 to 00f669c7 has its CatchHandler @ 00e6695c */
  FUN_01323390(param_1,&stack0x00000008);
  uVar1 = DAT_028aa160;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while (uVar4 = FUN_012b894c(&stack0x00000020,*unaff_x27), (uVar4 & 1) != 0) {
    lVar5 = FUN_00ac4168(&stack0x00000020,*unaff_x28);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(float *)(lVar5 + 0x10) <= unaff_s8) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0106a9e4(uVar7,0,0);
      FUN_0106a9e4(*(undefined8 *)(unaff_x19 + 0xb0),0,0);
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0268b4e0(uVar7,uVar8,0);
      if ((uVar4 & 1) == 0) {
        FUN_00f49518(0x3f800000,uVar1,*(undefined8 *)(unaff_x19 + 0xb0),0);
        FUN_00f49518(0,uVar1,*(undefined8 *)(unaff_x19 + 0xa8),0);
        if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02659c34(*(undefined4 *)(lVar5 + 0x20),*(long *)(unaff_x19 + 0xb0),0);
      }
      else {
        FUN_00f49518(0x3f800000,uVar1,*(undefined8 *)(unaff_x19 + 0xa8),0);
        FUN_00f49518(0,uVar1,*(undefined8 *)(unaff_x19 + 0xb0),0);
        if (*(long *)(unaff_x19 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02659c34(*(undefined4 *)(lVar5 + 0x20),*(long *)(unaff_x19 + 0xa8),0);
      }
    }
  }
  FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_00d62348(*unaff_x25);
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    fVar11 = 1.0 - unaff_s8;
    fVar12 = fVar11;
    if (1.0 < fVar11) {
      fVar12 = 1.0;
    }
    fVar12 = fVar12 * 5.0 + 0.0;
    if (fVar11 < 0.0) {
      fVar12 = 0.0;
    }
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      fVar11 = (float)(int)fVar12;
      fVar12 = (float)(*(int *)(*(long *)(unaff_x19 + 0xd0) + 0x18) + -1);
      if (fVar11 <= fVar12) {
        fVar12 = fVar11;
      }
      if (fVar11 < 0.0) {
        fVar12 = 0.0;
      }
      in_stack_00000048._4_4_ = 0x80000000;
      if (fVar12 != INFINITY) {
        in_stack_00000048._4_4_ = (int)fVar12;
      }
      uVar7 = FUN_0176eb1c((long)&stack0x00000048 + 4,0);
      uVar7 = FUN_015f5b28(*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                           ,uVar7,0);
      lVar6 = *(long *)(unaff_x19 + 0xd0);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= in_stack_00000048._4_4_) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar10 = *(undefined8 *)(lVar6 + (long)(int)in_stack_00000048._4_4_ * 8 + 0x20);
        uVar8 = *(undefined8 *)(unaff_x19 + 200);
        uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ed570);
        if (lVar6 != 0) {
          FUN_00ec9774(lVar6,uVar7,uVar10,uVar8,uVar9,0);
          FUN_00ac4270(lVar5,lVar6,*(undefined8 *)PTR_DAT_033eba08);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_03774e19 == '\0') {
            thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
            DAT_03774e19 = '\x01';
          }
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar2;
          }
          if ((**(long **)(lVar6 + 0xb8) != 0) &&
             (lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x128), lVar6 != 0)) {
            FUN_00e9fc50(lVar6,lVar5,*(undefined8 *)(unaff_x19 + 0x58),0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


