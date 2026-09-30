/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 0338d39c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceComponentStatus(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x23;
  long *unaff_x25;
  uint uVar9;
  
  lVar3 = thunk_FUN_01c5be68(0);
  if ((lVar3 != 0) && (lVar3 = FUN_03315fc8(lVar3,0), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    plVar8 = unaff_x23;
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar8 = *(long **)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_0338d544;
        (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
        uVar4 = thunk_FUN_03152714();
        if ((uVar4 & 1) != 0) break;
        lVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        if (lVar5 == 0) goto LAB_0338d544;
        uVar4 = thunk_FUN_03152714(*(undefined8 *)(lVar5 + 0x10));
        if ((uVar4 & 1) != 0) break;
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar9 = uVar9 + 1;
        plVar8 = unaff_x23;
      } while ((int)uVar9 < (int)uVar1);
    }
    uVar4 = FUN_032188c8(plVar8,0,0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar6 = FUN_03295500(0);
      uVar7 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_EventBase<WheelEvent>_TypeId__);
      uVar6 = FUN_0336f2b8(uVar7,uVar6);
LAB_0338d5e0:
      thunk_FUN_01c273e8(System_Threading_ParameterizedThreadStart_TypeInfo);
      uVar7 = thunk_FUN_01c496e0();
      thunk_FUN_033584bc(uVar7,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(
                                Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_SetCreateFunction__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar6);
    }
    if (plVar8 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar8 + 0x288))(plVar8);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x25);
      }
      uVar4 = FUN_032e935c(uVar6,0,0);
      if ((uVar4 & 1) != 0) {
        iVar2 = FUN_0337e34c();
        if (-1 < iVar2) {
          uVar6 = FUN_0338d710();
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar4 = FUN_032e935c(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar6 = FUN_03295500(0);
          FUN_019b2708(plVar8);
          (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
          uVar7 = thunk_FUN_01c273e8(Method_TMPro_FastAction<bool>__ctor__);
          uVar6 = FUN_033704d4(uVar7,uVar6);
          goto LAB_0338d5e0;
        }
      }
      return uVar6;
    }
  }
LAB_0338d544:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


