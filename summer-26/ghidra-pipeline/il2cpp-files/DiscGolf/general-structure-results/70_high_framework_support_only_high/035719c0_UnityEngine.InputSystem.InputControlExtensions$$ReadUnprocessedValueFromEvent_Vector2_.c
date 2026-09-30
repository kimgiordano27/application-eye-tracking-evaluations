/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlExtensions$$ReadUnprocessedValueFromEvent<Vector2>
ENTRY_POINT: 035719c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_InputControlExtensions__ReadUnprocessedValueFromEvent<Vector2>(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  lVar2 = FUN_02dcfd18();
  lVar5 = *(long *)(unaff_x22 + 0x38);
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
    plVar3 = (long *)FUN_034ea284(*(undefined8 *)(lVar5 + 0x38));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = (**(code **)(*plVar3 + 0x1b8))();
    if ((uVar4 & 1) != 0)
    goto 
    UnityEngine_InputSystem_InputControlExtensions__ReadUnprocessedValueFromEvent<__Il2CppFullySharedGenericStructType>
    ;
    lVar5 = *(long *)(unaff_x22 + 0x38);
  }
  uVar4 = FUN_037c50b8(&stack0x00000018,&stack0x00000008,*(undefined8 *)(lVar5 + 0x58));
  uVar1 = in_stack_00000008;
  if ((uVar4 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x68);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    plVar3 = (long *)thunk_FUN_02dd3048(uVar1,lVar2);
    if (plVar3 == (long *)0x0) {
      System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>();
      return;
    }
    lVar2 = *plVar3;
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x70);
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_03571ad8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_02dd004c(plVar3);
LAB_03571ad8:
    lVar2 = thunk_FUN_02db5310(*(undefined8 *)(lVar2 + 8),lVar5);
    (**(code **)(lVar2 + 8))(plVar3);
    return;
  }

  UnityEngine_InputSystem_InputControlExtensions__ReadUnprocessedValueFromEvent<__Il2CppFullySharedGenericStructType>
  :
  FUN_04492c38();
  FUN_0653b650();
  return;
}


