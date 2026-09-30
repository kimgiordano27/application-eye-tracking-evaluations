/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable$$UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable.OnSelectEntered
ENTRY_POINT: 0697f7fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractable__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractable_OnSelectEntered
          (void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar10;
  long *unaff_x26;
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
  
  lVar6 = FUN_06969174();
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x26);
  }
  if (lVar6 != 0) {
    lVar6 = FUN_050f8a90(lVar6,*(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x20),
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                        );
    if (lVar6 != 0) {
      uVar7 = FUN_069683b0(lVar6,0);
      puVar3 = 
      Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)
                            Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_Add__
                          );
      }
      FUN_0697e688(&stack0x00000040);
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
        uVar8 = FUN_057aa92c(in_stack_00000048,uVar7,0);
        puVar2 = PTR_DAT_072820c0;
        if ((uVar8 & 1) != 0) {
          lVar6 = *(long *)PTR_DAT_072820c0;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar6 = *(long *)puVar2;
          }
          uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
          uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
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
          auVar13 = FUN_0697fc2c(uVar7,&stack0x00000010,&stack0x00000078);
          _in_stack_00000080 = FUN_069675bc(uVar11,uVar12,auVar13._0_8_,auVar13._8_8_,0);
          uVar8 = FUN_069670a4(&stack0x00000080,0);
          puVar3 = 
          Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
          ;
          uVar11 = in_stack_00000088;
          uVar7 = in_stack_00000080;
          if ((uVar8 & 1) != 0) {
LAB_0697fb54:
            uVar7 = FUN_0697cb3c();
            *unaff_x19 = uVar7;
            thunk_FUN_0333a630();
            return in_stack_00000080;
          }
          if (in_stack_00000078 != 0) {
            FUN_042bab18(&stack0x00000040,in_stack_00000078,0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                        );
            auVar13 = FUN_0697ff48();
            if (*(int *)(*(long *)PTR_DAT_072820c0 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            auVar13 = FUN_069675bc(uVar7,uVar11,auVar13._0_8_,auVar13._8_8_,0);
            _in_stack_00000080 = auVar13;
            uVar8 = FUN_069670a4(&stack0x00000080,0);
            if ((uVar8 & 1) != 0) {
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
                  uVar8 = FUN_06980394();
                  puVar2 = 
                  Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__;
                  puVar3 = PTR_DAT_072820c0;
                  if ((uVar8 & 1) != 0) {
                    lVar6 = FUN_06969174();
                    lVar9 = *(long *)puVar4;
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0(lVar9);
                    }
                    if (lVar6 == 0) break;
                    lVar6 = FUN_050f8a90(lVar6,*(undefined8 *)
                                                (*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                                         *(undefined8 *)puVar2);
                    if (lVar6 == 0) break;
                    uVar7 = FUN_069683b0(lVar6,0);
                    uVar5 = FUN_059212b0(uVar7,0);
                    if (*(long *)(unaff_x20 + 0x28) == 0) break;
                    FUN_0698044c(*(long *)(unaff_x20 + 0x28),uVar5,*unaff_x21);
                  }
                  _in_stack_00000040 = _in_stack_00000080;
                  uVar7 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,&stack0x00000040);
                  thunk_FUN_032f70fc(uVar7,0);
                  goto LAB_0697fb54;
                }
                FUN_042bab18(&stack0x00000040,in_stack_00000078,iVar10,*(undefined8 *)puVar3);
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
          goto LAB_0697fb70;
        }
      }
      uVar7 = FUN_0697ff48();
      return uVar7;
    }
  }
LAB_0697fb70:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


