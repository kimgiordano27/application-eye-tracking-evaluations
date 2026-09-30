/*
FUNCTION_NAME: DG.Tweening.DOTweenModuleUI.<>c__DisplayClass7_0$$<DOFlexibleSize>b__1
ENTRY_POINT: 00e66a18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0__<DOFlexibleSize>b__1(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 uVar6;
  undefined8 *unaff_x25;
  undefined8 uVar7;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000048;
  
  do {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar1 = FUN_0268b4e0(uVar4,uVar5,0);
    if ((uVar1 & 1) == 0) {
      FUN_00f49518(*(undefined8 *)(unaff_x19 + 0xb0),0);
      FUN_00f49518(0,*(undefined8 *)(unaff_x19 + 0xa8),0);
      if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_02659c34(*(undefined4 *)(unaff_x20 + 0x20),*(long *)(unaff_x19 + 0xb0),0);
    }
    else {
      FUN_00f49518(*(undefined8 *)(unaff_x19 + 0xa8),0);
      FUN_00f49518(0,*(undefined8 *)(unaff_x19 + 0xb0),0);
      if (*(long *)(unaff_x19 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_02659c34(*(undefined4 *)(unaff_x20 + 0x20),*(long *)(unaff_x19 + 0xa8),0);
    }
    do {
      uVar1 = FUN_012b894c(&stack0x00000020,*unaff_x27);
      if ((uVar1 & 1) == 0) {
        FUN_012b8948(&stack0x00000020,*unaff_x29);
        lVar2 = thunk_FUN_00d62348(*unaff_x25);
        if (lVar2 != 0) {
          FUN_01320e50(lVar2,*(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                      );
          fVar8 = unaff_s9 - unaff_s8;
          fVar9 = fVar8;
          if (unaff_s9 < fVar8) {
            fVar9 = unaff_s9;
          }
          fVar9 = fVar9 * 5.0 + 0.0;
          if (fVar8 < 0.0) {
            fVar9 = 0.0;
          }
          if (*(long *)(unaff_x19 + 0xd0) != 0) {
            fVar8 = (float)(int)fVar9;
            fVar9 = (float)(*(int *)(*(long *)(unaff_x19 + 0xd0) + 0x18) + -1);
            if (fVar8 <= fVar9) {
              fVar9 = fVar8;
            }
            if (fVar8 < 0.0) {
              fVar9 = 0.0;
            }
            in_stack_00000048._4_4_ = 0x80000000;
            if (fVar9 != INFINITY) {
              in_stack_00000048._4_4_ = (int)fVar9;
            }
            uVar4 = FUN_0176eb1c((long)&stack0x00000048 + 4,0);
            uVar4 = FUN_015f5b28(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                                 ,uVar4,0);
            lVar3 = *(long *)(unaff_x19 + 0xd0);
            if (lVar3 != 0) {
              if (*(uint *)(lVar3 + 0x18) <= in_stack_00000048._4_4_) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar7 = *(undefined8 *)(lVar3 + (long)(int)in_stack_00000048._4_4_ * 8 + 0x20);
              uVar5 = *(undefined8 *)(unaff_x19 + 200);
              uVar6 = *(undefined8 *)(unaff_x19 + 0x58);
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ed570);
              if (lVar3 != 0) {
                FUN_00ec9774(lVar3,uVar4,uVar7,uVar5,uVar6,0);
                FUN_00ac4270(lVar2,lVar3,*(undefined8 *)PTR_DAT_033eba08);
                if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (DAT_03774e19 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                    );
                  DAT_03774e19 = '\x01';
                }
                lVar3 = *unaff_x26;
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar3 = *unaff_x26;
                }
                if ((**(long **)(lVar3 + 0xb8) != 0) &&
                   (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x128), lVar3 != 0)) {
                  FUN_00e9fc50(lVar3,lVar2,*(undefined8 *)(unaff_x19 + 0x58),0,0);
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      unaff_x20 = FUN_00ac4168(&stack0x00000020,*unaff_x28);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    } while (unaff_s8 < *(float *)(unaff_x20 + 0x10));
    uVar4 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0106a9e4(uVar4,0,0);
    FUN_0106a9e4(*(undefined8 *)(unaff_x19 + 0xb0),0,0);
  } while( true );
}


