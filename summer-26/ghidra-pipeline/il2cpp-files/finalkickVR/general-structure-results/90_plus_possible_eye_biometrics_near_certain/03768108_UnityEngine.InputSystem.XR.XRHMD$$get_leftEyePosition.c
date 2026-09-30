/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition
ENTRY_POINT: 03768108
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 224
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_2
*/


byte UnityEngine_InputSystem_XR_XRHMD__get_leftEyePosition
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  void *pvVar6;
  long unaff_x29;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong *in_stack_00000010;
  ulong *puStack0000000000000018;
  int iStack000000000000002c;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  puStack0000000000000018 = (ulong *)StringLiteral_15291;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  *(undefined8 *)(unaff_x29 + -0x18) = param_1;
  *(undefined8 *)(unaff_x29 + -0x20) = param_3;
  if ((InputDeviceMatcher_Equals_mA7F59F3D0FD7E119B67578E538679A85481A2026::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    InputDeviceMatcher_Equals_mA7F59F3D0FD7E119B67578E538679A85481A2026::s_Il2CppMethodInitialized =
         1;
  }
  *(undefined4 *)(unaff_x29 + -0x24) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined1 *)(unaff_x29 + -0x41) = 0;
  *(undefined4 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = **(undefined8 **)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x10);
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x70);
  if (*(long *)(unaff_x29 + -0x68) == *(long *)(unaff_x29 + -0x78)) {
    *(undefined1 *)(unaff_x29 + -1) = 1;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x80) = **(undefined8 **)(unaff_x29 + -0x18);
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x10);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x88);
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        *(undefined8 *)(unaff_x29 + -0x98) = **(undefined8 **)(unaff_x29 + -0x18);
        NullCheck(*(void **)(unaff_x29 + -0x98));
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x10);
        *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xa0);
        NullCheck(*(void **)(unaff_x29 + -0xa8));
        if ((int)*(undefined8 *)(*(long *)(unaff_x29 + -0x98) + 0x18) ==
            (int)*(undefined8 *)(*(long *)(unaff_x29 + -0xa8) + 0x18)) {
          *(undefined4 *)(unaff_x29 + -0x24) = 0;
          while( true ) {
            iStack000000000000002c = *(int *)(unaff_x29 + -0x24);
            pvVar6 = (void *)**(undefined8 **)(unaff_x29 + -0x18);
            NullCheck(pvVar6);
            if ((int)*(undefined8 *)((long)pvVar6 + 0x18) <= iStack000000000000002c) break;
            *(undefined8 *)(unaff_x29 + -0xb0) = **(undefined8 **)(unaff_x29 + -0x18);
            *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x29 + -0x24);
            NullCheck(*(void **)(unaff_x29 + -0xb0));
            *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0xb4);
            KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC::GetAt
                      (*(ulong *)(unaff_x29 + -0xb0));
            *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -200);
            *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0xd0);
            *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xc0);
            *(undefined1 *)(unaff_x29 + -0x41) = 0;
            *(undefined4 *)(unaff_x29 + -0x48) = 0;
            while (iVar1 = *(int *)(unaff_x29 + -0x48),
                  pvVar6 = (void *)**(undefined8 **)(unaff_x29 + -0x18), NullCheck(pvVar6),
                  iVar1 < (int)*(undefined8 *)((long)pvVar6 + 0x18)) {
              *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x10);
              *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xd8);
              *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0x48);
              NullCheck(*(void **)(unaff_x29 + -0xe0));
              KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC::GetAt
                        (*(ulong *)(unaff_x29 + -0xe0));
              *(undefined8 *)(unaff_x29 + -0x58) = in_stack_000000d8;
              *(undefined8 *)(unaff_x29 + -0x60) = in_stack_000000d0;
              *(undefined8 *)(unaff_x29 + -0x50) = in_stack_000000e0;
              auVar7 = KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_inline
                                 ((KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC *)
                                  (unaff_x29 + -0x40),(MethodInfo *)*in_stack_00000010);
              auVar8 = KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_inline
                                 ((KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC *)
                                  (unaff_x29 + -0x60),(MethodInfo *)*in_stack_00000010);
              bVar2 = InternedString_op_Inequality_m18965E6A5E58BD2BBFA4480022D24D1BF4A4221B
                                (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,0);
              if ((bVar2 & 1) == 0) {
                pIVar4 = (Il2CppObject *)
                         KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_inline
                                   ((KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC *)
                                    (unaff_x29 + -0x40),(MethodInfo *)*puStack0000000000000018);
                pIVar5 = (Il2CppObject *)
                         KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_inline
                                   ((KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC *)
                                    (unaff_x29 + -0x60),(MethodInfo *)*puStack0000000000000018);
                NullCheck(pIVar4);
                bVar2 = VirtualFuncInvoker1<bool,Il2CppObject*>::Invoke(0,pIVar4,pIVar5);
                if ((bVar2 & 1) == 0) {
                  *(undefined1 *)(unaff_x29 + -1) = 0;
                  goto LAB_037684b8;
                }
                *(undefined1 *)(unaff_x29 + -0x41) = 1;
                break;
              }
              uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x48),1);
              *(undefined4 *)(unaff_x29 + -0x48) = uVar3;
            }
            if ((*(byte *)(unaff_x29 + -0x41) & 1) == 0) {
              *(undefined1 *)(unaff_x29 + -1) = 0;
              goto LAB_037684b8;
            }
            uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x24),1);
            *(undefined4 *)(unaff_x29 + -0x24) = uVar3;
          }
          *(undefined1 *)(unaff_x29 + -1) = 1;
        }
        else {
          *(undefined1 *)(unaff_x29 + -1) = 0;
        }
        goto LAB_037684b8;
      }
    }
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
LAB_037684b8:
  return *(byte *)(unaff_x29 + -1) & 1;
}


