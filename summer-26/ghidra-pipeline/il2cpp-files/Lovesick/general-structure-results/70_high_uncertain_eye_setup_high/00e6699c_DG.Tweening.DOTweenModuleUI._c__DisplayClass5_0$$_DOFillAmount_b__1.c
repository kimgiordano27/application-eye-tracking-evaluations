/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleUI.<>c__DisplayClass5_0$$<DOFillAmount>b__1
ENTRY_POINT: 00e6699c
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


void DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0__<DOFillAmount>b__1(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  undefined8 uVar8;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar9;
  float fVar10;
  float unaff_s8;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000048;
  
  uVar1 = DAT_028aa160;
                    /* catch() { ... } // from try @ 00e66980 with catch @ 00e669ac */
  uStack0000000000000030 = in_stack_00000018;
  uStack0000000000000020 = param_1;
  while (uVar2 = FUN_012b894c(&stack0x00000020,*unaff_x27), (uVar2 & 1) != 0) {
    lVar3 = FUN_00ac4168(&stack0x00000020,*unaff_x28);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(float *)(lVar3 + 0x10) <= unaff_s8) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0xa8);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0106a9e4(uVar5,0,0);
      FUN_0106a9e4(*(undefined8 *)(unaff_x19 + 0xb0),0,0);
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      uVar6 = *(undefined8 *)(unaff_x19 + 0xa8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_0268b4e0(uVar5,uVar6,0);
      if ((uVar2 & 1) == 0) {
        FUN_00f49518(0x3f800000,uVar1,*(undefined8 *)(unaff_x19 + 0xb0),0);
        FUN_00f49518(0,uVar1,*(undefined8 *)(unaff_x19 + 0xa8),0);
        if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02659c34(*(undefined4 *)(lVar3 + 0x20),*(long *)(unaff_x19 + 0xb0),0);
      }
      else {
        FUN_00f49518(0x3f800000,uVar1,*(undefined8 *)(unaff_x19 + 0xa8),0);
        FUN_00f49518(0,uVar1,*(undefined8 *)(unaff_x19 + 0xb0),0);
        if (*(long *)(unaff_x19 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02659c34(*(undefined4 *)(lVar3 + 0x20),*(long *)(unaff_x19 + 0xa8),0);
      }
    }
  }
  FUN_012b8948(&stack0x00000020,*unaff_x29);
  lVar3 = thunk_FUN_00d62348(*unaff_x25);
  if (lVar3 != 0) {
    FUN_01320e50(lVar3,*(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    fVar9 = 1.0 - unaff_s8;
    fVar10 = fVar9;
    if (1.0 < fVar9) {
      fVar10 = 1.0;
    }
    fVar10 = fVar10 * 5.0 + 0.0;
    if (fVar9 < 0.0) {
      fVar10 = 0.0;
    }
    if (*(long *)(unaff_x19 + 0xd0) != 0) {
      fVar9 = (float)(int)fVar10;
      fVar10 = (float)(*(int *)(*(long *)(unaff_x19 + 0xd0) + 0x18) + -1);
      if (fVar9 <= fVar10) {
        fVar10 = fVar9;
      }
      if (fVar9 < 0.0) {
        fVar10 = 0.0;
      }
      in_stack_00000048._4_4_ = 0x80000000;
      if (fVar10 != INFINITY) {
        in_stack_00000048._4_4_ = (int)fVar10;
      }
      uVar5 = FUN_0176eb1c((long)&stack0x00000048 + 4,0);
      uVar5 = FUN_015f5b28(*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                           ,uVar5,0);
      lVar4 = *(long *)(unaff_x19 + 0xd0);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= in_stack_00000048._4_4_) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar8 = *(undefined8 *)(lVar4 + (long)(int)in_stack_00000048._4_4_ * 8 + 0x20);
        uVar6 = *(undefined8 *)(unaff_x19 + 200);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ed570);
        if (lVar4 != 0) {
          FUN_00ec9774(lVar4,uVar5,uVar8,uVar6,uVar7,0);
          FUN_00ac4270(lVar3,lVar4,*(undefined8 *)PTR_DAT_033eba08);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_03774e19 == '\0') {
            thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
            DAT_03774e19 = '\x01';
          }
          lVar4 = *unaff_x26;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar4 = *unaff_x26;
          }
          if ((**(long **)(lVar4 + 0xb8) != 0) &&
             (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x128), lVar4 != 0)) {
            FUN_00e9fc50(lVar4,lVar3,*(undefined8 *)(unaff_x19 + 0x58),0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


