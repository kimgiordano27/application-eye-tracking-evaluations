/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable$$OnRegistered
ENTRY_POINT: 0697f86c
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


undefined8 UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable__OnRegistered(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar10;
  long *unaff_x29;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  char cStack0000000000000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  FUN_0697e688();
  puVar3 = 
  Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__;
  in_stack_00000098 = in_stack_00000048;
  _cStack0000000000000090 = in_stack_00000040;
  uVar8 = _cStack0000000000000090;
  in_stack_000000a8 = in_stack_00000058;
  in_stack_000000a0 = in_stack_00000050;
  cStack0000000000000090 = (char)in_stack_00000040;
  bVar1 = cStack0000000000000090 != '\0';
  _cStack0000000000000090 = uVar8;
  if (bVar1) {
    FUN_04e5c8e4(&stack0x00000040,&stack0x00000090,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__
                );
    uVar6 = FUN_057aa92c(in_stack_00000048);
    puVar2 = PTR_DAT_072820c0;
    if ((uVar6 & 1) != 0) {
      lVar7 = *(long *)PTR_DAT_072820c0;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar7 = *(long *)puVar2;
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      in_stack_00000080 = uVar8;
      in_stack_00000088 = uVar11;
      FUN_04e5c8e4(&stack0x00000028,&stack0x00000090,*(undefined8 *)puVar3);
      in_stack_00000048 = in_stack_00000030;
      in_stack_00000040 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000038;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      auVar12 = FUN_0697fc2c();
      _in_stack_00000080 = FUN_069675bc(uVar8,uVar11,auVar12._0_8_,auVar12._8_8_,0);
      uVar6 = FUN_069670a4(&stack0x00000080,0);
      puVar3 = 
      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
      ;
      uVar11 = in_stack_00000088;
      uVar8 = in_stack_00000080;
      if ((uVar6 & 1) != 0) {
LAB_0697fb54:
        uVar8 = FUN_0697cb3c();
        *unaff_x19 = uVar8;
        thunk_FUN_0333a630();
        return in_stack_00000080;
      }
      if (in_stack_00000078 != 0) {
        FUN_042bab18(&stack0x00000040,in_stack_00000078,0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                    );
        auVar12 = FUN_0697ff48();
        if (*(int *)(*(long *)PTR_DAT_072820c0 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        auVar12 = FUN_069675bc(uVar8,uVar11,auVar12._0_8_,auVar12._8_8_,0);
        _in_stack_00000080 = auVar12;
        uVar6 = FUN_069670a4(&stack0x00000080,0);
        if ((uVar6 & 1) != 0) {
          return in_stack_00000080;
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
              puVar4 = 
              Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__;
              puVar3 = PTR_DAT_072820c0;
              if ((uVar6 & 1) != 0) {
                lVar7 = FUN_06969174();
                lVar9 = *(long *)puVar2;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(lVar9);
                }
                if (lVar7 == 0) break;
                lVar7 = FUN_050f8a90(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10)
                                     ,*(undefined8 *)puVar4);
                if (lVar7 == 0) break;
                uVar8 = FUN_069683b0(lVar7,0);
                uVar5 = FUN_059212b0(uVar8,0);
                if (*(long *)(unaff_x20 + 0x28) == 0) break;
                FUN_0698044c(*(long *)(unaff_x20 + 0x28),uVar5,*unaff_x21);
              }
              _in_stack_00000040 = _in_stack_00000080;
              uVar8 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,&stack0x00000040);
              thunk_FUN_032f70fc(uVar8,0);
              goto LAB_0697fb54;
            }
            FUN_042bab18(&stack0x00000040,in_stack_00000078,iVar10,*(undefined8 *)puVar3);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            uVar8 = FUN_069802e0(&stack0x00000060,*unaff_x21);
            *unaff_x21 = uVar8;
            thunk_FUN_0333a630();
            iVar10 = iVar10 + 1;
          } while (in_stack_00000078 != 0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  uVar8 = FUN_0697ff48();
  return uVar8;
}


