/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses.<GetEnumerator>d__2$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 035d3be4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035d3b3c with catch @ 035d3be4
                       try { // try from 035d3be4 to 036d3c13 has its CatchHandler @ 035d3ae4 */
  if (unaff_w22 == 0) {
    uVar1 = 0;
  }
  else {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035d3b84 with catch @ 035d3be8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035d3bcc with catch @ 035d3bec
                        */
    if (unaff_w22 != 1) {
      uVar1 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar1 = FUN_01f08890(uVar1,1);
      FUN_01bc50c0();
      FUN_01bc56ec(uVar1);
      FUN_01bc5408(uVar1,0);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<string>__
                                );
      uVar4 = FUN_035ae81c(uVar4,uVar1,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar1 = thunk_FUN_01f117cc();
      FUN_034f6754(uVar1,uVar4,0);
      goto LAB_035d3df4;
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035d3ba8 with catch @ 035d3bf4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035d3be0 with catch @ 035d3bf8
                        */
    uVar1 = 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035d3b40 with catch @ 035d3bfc
                        */
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035d3b5c with catch @ 035d3bf0
                        */
                    /* try { // try from 035d3c14 to 036d3c63 has its CatchHandler @ 035d3c90 */
  uVar1 = FUN_035db748(uVar1,unaff_w21 & 1);
  plVar2 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_Rendering_UI_DebugUIHandlerCanvas_<>c__DisplayClass14_0_<GetWidgetFromPath>b__0__
                                     );
  FUN_0340c5ac(plVar2,uVar1,1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
  if ((uVar3 & 1) != 0) {
    FUN_034a3d40(plVar2,0);
    if (((unaff_x19 != 0) && (*(int *)(unaff_x19 + 0x10) != 0)) && (in_stack_00000008._4_4_ == 6)) {
      uVar1 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar1 = FUN_01f08890(uVar1,1);
      FUN_01bc50c0();
      FUN_01bc56ec(uVar1);
      FUN_01bc5408(uVar1,0);
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Rendering_UI_DebugUIHandlerContainer_<>c__DisplayClass3_0_<IsDirectChild>b__0__
                                );
      uVar4 = FUN_035ae81c(uVar4,uVar1,0);
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_Rendering_UI_DebugUIHandlerEnumHistory_<RefreshAfterSanitization>d__4_System_Collections_IEnumerator_Reset__
                        );
      uVar1 = thunk_FUN_01f117cc();
      FUN_035cce98(uVar1,uVar4);
LAB_035d3df4:
      uVar4 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas_<>c__DisplayClass5_0_<Toggle>b__0__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar1,uVar4);
    }
    FUN_034db0a0(in_stack_00000008._4_4_);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035da424();
  return;
}


