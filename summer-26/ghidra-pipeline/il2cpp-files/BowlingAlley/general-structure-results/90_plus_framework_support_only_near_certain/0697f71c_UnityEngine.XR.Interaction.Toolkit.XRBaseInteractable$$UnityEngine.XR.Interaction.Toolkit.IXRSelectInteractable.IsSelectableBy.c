/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable$$UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.IsSelectableBy
ENTRY_POINT: 0697f71c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 120
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_IsSelectableBy
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
          undefined8 *param_6)

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
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
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
  
  puVar3 = 
  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
  ;
  if ((DAT_076e1cbc & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072820c0);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                      );
    DAT_076e1cbc = 1;
  }
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000098 = 0;
  _cStack0000000000000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_0697fb74(param_3);
  if ((uVar6 & 1) == 0) goto LAB_0697f964;
  if (param_3 != 0) {
    lVar7 = FUN_06969174(param_3,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar3);
    }
    if (lVar7 != 0) {
      lVar7 = FUN_050f8a90(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                          );
      if (lVar7 != 0) {
        uVar8 = FUN_069683b0(lVar7,0);
        puVar3 = 
        Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)
                              Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                            );
        }
        FUN_0697e688(&stack0x00000040,param_4);
        puVar4 = 
        Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__;
        in_stack_00000098 = in_stack_00000048;
        _cStack0000000000000090 = in_stack_00000040;
        uVar11 = _cStack0000000000000090;
        in_stack_000000a8 = in_stack_00000058;
        in_stack_000000a0 = in_stack_00000050;
        cStack0000000000000090 = (char)in_stack_00000040;
        bVar1 = cStack0000000000000090 != '\0';
        _cStack0000000000000090 = uVar11;
        if (bVar1) {
          FUN_04e5c8e4(&stack0x00000040,&stack0x00000090,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__
                      );
          uVar6 = FUN_057aa92c(in_stack_00000048,uVar8,0);
          puVar2 = PTR_DAT_072820c0;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)PTR_DAT_072820c0;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar7 = *(long *)puVar2;
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
            uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            in_stack_00000080 = uVar11;
            in_stack_00000088 = uVar12;
            FUN_04e5c8e4(&stack0x00000028,&stack0x00000090,*(undefined8 *)puVar4);
            in_stack_00000048 = in_stack_00000030;
            in_stack_00000040 = in_stack_00000028;
            in_stack_00000050 = in_stack_00000038;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            in_stack_00000018 = in_stack_00000048;
            in_stack_00000010 = in_stack_00000040;
            in_stack_00000020 = in_stack_00000050;
            auVar13 = FUN_0697fc2c(uVar8,&stack0x00000010,&stack0x00000078);
            _in_stack_00000080 = FUN_069675bc(uVar11,uVar12,auVar13._0_8_,auVar13._8_8_,0);
            uVar6 = FUN_069670a4(&stack0x00000080,0);
            puVar3 = 
            Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
            ;
            uVar11 = in_stack_00000088;
            uVar8 = in_stack_00000080;
            if ((uVar6 & 1) != 0) {
LAB_0697fb54:
              uVar8 = FUN_0697cb3c(param_1,param_4);
              *param_6 = uVar8;
              thunk_FUN_0333a630(param_6,uVar8);
              return in_stack_00000080;
            }
            if (in_stack_00000078 != 0) {
              FUN_042bab18(&stack0x00000040,in_stack_00000078,0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                          );
              auVar13 = FUN_0697ff48(param_1,param_2,param_3,in_stack_00000050,param_5,param_6);
              if (*(int *)(*(long *)PTR_DAT_072820c0 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              auVar13 = FUN_069675bc(uVar8,uVar11,auVar13._0_8_,auVar13._8_8_,0);
              _in_stack_00000080 = auVar13;
              uVar6 = FUN_069670a4(&stack0x00000080,0);
              if ((uVar6 & 1) != 0) {
                return in_stack_00000080;
              }
              if (in_stack_00000078 != 0) {
                iVar10 = 1;
                do {
                  puVar4 = 
                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                  ;
                  if (*(int *)(in_stack_00000078 + 0x18) <= iVar10) {
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                                + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    uVar6 = FUN_06980394(param_3);
                    puVar2 = 
                    Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__;
                    puVar3 = PTR_DAT_072820c0;
                    if ((uVar6 & 1) != 0) {
                      lVar7 = FUN_06969174(param_3,0);
                      lVar9 = *(long *)puVar4;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0(lVar9);
                      }
                      if (lVar7 == 0) break;
                      lVar7 = FUN_050f8a90(lVar7,*(undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                                           *(undefined8 *)puVar2);
                      if (lVar7 == 0) break;
                      uVar8 = FUN_069683b0(lVar7,0);
                      uVar5 = FUN_059212b0(uVar8,0);
                      if (*(long *)(param_1 + 0x28) == 0) break;
                      FUN_0698044c(*(long *)(param_1 + 0x28),uVar5,*param_5);
                    }
                    _in_stack_00000040 = _in_stack_00000080;
                    uVar8 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,&stack0x00000040);
                    param_4 = thunk_FUN_032f70fc(uVar8,0);
                    goto LAB_0697fb54;
                  }
                  FUN_042bab18(&stack0x00000040,in_stack_00000078,iVar10,*(undefined8 *)puVar3);
                  in_stack_00000068 = in_stack_00000048;
                  in_stack_00000060 = in_stack_00000040;
                  in_stack_00000070 = in_stack_00000050;
                  uVar8 = FUN_069802e0(&stack0x00000060,*param_5);
                  *param_5 = uVar8;
                  thunk_FUN_0333a630(param_5,uVar8);
                  iVar10 = iVar10 + 1;
                } while (in_stack_00000078 != 0);
              }
            }
            goto LAB_0697fb70;
          }
        }
LAB_0697f964:
        uVar8 = FUN_0697ff48(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar8;
      }
    }
  }
LAB_0697fb70:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


