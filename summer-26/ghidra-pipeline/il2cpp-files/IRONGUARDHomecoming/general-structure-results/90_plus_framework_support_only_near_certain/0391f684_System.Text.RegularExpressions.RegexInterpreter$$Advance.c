/*
FUNCTION_NAME: System.Text.RegularExpressions.RegexInterpreter$$Advance
ENTRY_POINT: 0391f684
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0391f88c) */
/* WARNING: Removing unreachable block (ram,0x0391f898) */

void System_Text_RegularExpressions_RegexInterpreter__Advance(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined4 unaff_w22;
  long unaff_x23;
  long *in_stack_00000008;
  
  thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  *(undefined1 *)(unaff_x23 + 0x27e) = 1;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  in_stack_00000008 = (long *)0x0;
  plVar3 = (long *)FUN_0391ed34(&stack0x00000008,unaff_w22);
  puVar2 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (unaff_x19 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Configuration_ConfigurationElement_ResetModified__)
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_029dad5c(plVar4,*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_get_Properties__);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_0391f78c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,6
                         );
LAB_0391f78c:
    (*(code *)*puVar6)(plVar3,uVar5,puVar6[1]);
    FUN_0391f164();
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto System_Text_RegularExpressions_RegexInterpreter__Textpos;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
System_Text_RegularExpressions_RegexInterpreter__Textpos:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
  }
  else {
    FUN_0391f164();
  }
  plVar3 = in_stack_00000008;
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *in_stack_00000008;
  lVar7 = *(long *)puVar1;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0391f864;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(in_stack_00000008,lVar7,0);
LAB_0391f864:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  return;
}


