/*
FUNCTION_NAME: UnityEngine.RenderSettings$$get_ambientMode
ENTRY_POINT: 03594558
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_RenderSettings__get_ambientMode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long in_stack_00000008;
  
  FUN_01ab69ac();
  FUN_01ab69ac(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cbdf88);
  FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x8d) = 1;
  puVar2 = UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_TypeInfo;
  puVar1 = OVRPlugin_Sizef_TypeInfo;
  if (unaff_x19 != 0) {
    iVar3 = FUN_036d3364();
    iVar7 = 0;
    while( true ) {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      lVar6 = **(long **)(lVar5 + 0xb8);
      if (lVar6 == 0) goto LAB_0359471c;
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        return;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar6 == 0) goto LAB_0359471c;
      }
      FUN_02215a88(lVar6,iVar7,&stack0x00000008,*(undefined8 *)puVar2);
      if ((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x10) == 0)) goto LAB_0359471c;
      iVar4 = FUN_036d3364(*(long *)(in_stack_00000008 + 0x10),0);
      if (iVar4 == iVar3) break;
      iVar7 = iVar7 + 1;
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar1;
    }
    if ((**(long **)(lVar5 + 0xb8) != 0) &&
       (FUN_02215a88(**(long **)(lVar5 + 0xb8),iVar7,&stack0x00000008,*(undefined8 *)puVar2),
       in_stack_00000008 != 0)) {
      lVar5 = *(long *)puVar1;
      iVar3 = *(int *)(in_stack_00000008 + 0x18);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      if ((**(long **)(lVar5 + 0xb8) != 0) &&
         (FUN_02215a88(**(long **)(lVar5 + 0xb8),iVar7,&stack0x00000008,*(undefined8 *)puVar2),
         in_stack_00000008 != 0)) {
        if (iVar3 < 2) {
          uVar8 = *(undefined8 *)(in_stack_00000008 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_036d441c(uVar8,0);
          if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_0359471c;
          FUN_022190f4(**(long **)(*(long *)puVar1 + 0xb8),iVar7,
                       *(undefined8 *)
                        UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_TypeInfo
                      );
        }
        else {
          *(int *)(in_stack_00000008 + 0x18) = *(int *)(in_stack_00000008 + 0x18) + -1;
        }
        return;
      }
    }
  }
LAB_0359471c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


