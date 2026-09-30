/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable$$OnUnregistered
ENTRY_POINT: 0697f9a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable__OnUnregistered(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar4 = in_stack_00000088;
  uVar7 = in_stack_00000080;
  puVar1 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__;
  if (param_1 != 0) {
    FUN_042bab18(&stack0x00000040,param_1,0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                );
    auVar11 = FUN_0697ff48();
    if (*(int *)(*(long *)PTR_DAT_072820c0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    _in_stack_00000080 = FUN_069675bc(uVar7,uVar4,auVar11._0_8_,auVar11._8_8_,0);
    uVar6 = FUN_069670a4(&stack0x00000080,0);
    if ((uVar6 & 1) != 0) {
      return _in_stack_00000080;
    }
    if (in_stack_00000078 != 0) {
      iVar10 = 1;
      do {
        puVar2 = 
        Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
        ;
        if (*(int *)(in_stack_00000078 + 0x18) <= iVar10) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar6 = FUN_06980394();
          puVar3 = Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__;
          puVar1 = PTR_DAT_072820c0;
          if ((uVar6 & 1) != 0) {
            lVar8 = FUN_06969174();
            lVar9 = *(long *)puVar2;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(lVar9);
            }
            if (lVar8 == 0) break;
            lVar8 = FUN_050f8a90(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
                                 *(undefined8 *)puVar3);
            if (lVar8 == 0) break;
            uVar7 = FUN_069683b0(lVar8,0);
            uVar5 = FUN_059212b0(uVar7,0);
            if (*(long *)(unaff_x20 + 0x28) == 0) break;
            FUN_0698044c(*(long *)(unaff_x20 + 0x28),uVar5,*unaff_x21);
          }
          _in_stack_00000040 = _in_stack_00000080;
          uVar7 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x00000040);
          thunk_FUN_032f70fc(uVar7,0);
          uVar7 = FUN_0697cb3c();
          *unaff_x19 = uVar7;
          thunk_FUN_0333a630();
          return _in_stack_00000080;
        }
        FUN_042bab18(&stack0x00000040,in_stack_00000078,iVar10,*(undefined8 *)puVar1);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
        uVar7 = FUN_069802e0(&stack0x00000060,*unaff_x21);
        *unaff_x21 = uVar7;
        thunk_FUN_0333a630();
        iVar10 = iVar10 + 1;
      } while (in_stack_00000078 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


