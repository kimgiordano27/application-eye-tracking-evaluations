/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses.<GetEnumerator>d__2$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 035d3bac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2__System_Collections_IEnumerator_Reset
               (void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x19;
  uint unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  int iStack000000000000000c;
  
  *(undefined1 *)(unaff_x24 + 0x6e3) = 1;
  iStack000000000000000c = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 035d3bcc to 036d3bcf has its CatchHandler @ 035d3bec */
  FUN_035da128();
                    /* try { // try from 035d3be0 to 036d3be3 has its CatchHandler @ 035d3bf8 */
  if ((unaff_x19 != 0) && (0x104 < *(int *)(unaff_x19 + 0x10))) {
    uVar1 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar1 = FUN_01f08890(uVar1,1);
    FUN_01bc50c0();
    FUN_01bc56ec(uVar1);
    FUN_01bc5408(uVar1,0);
    puVar5 = 
    Method_UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas_<>c__DisplayClass3_0_<Toggle>b__0__
    ;
LAB_035d3dc0:
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    uVar4 = FUN_035ae81c(uVar4,uVar1,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar1 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar1,uVar4,0);
LAB_035d3df4:
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas_<>c__DisplayClass5_0_<Toggle>b__0__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar1,uVar4);
  }
  if (unaff_w22 == 0) {
    uVar1 = 0;
  }
  else {
    if (unaff_w22 != 1) {
      uVar1 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar1 = FUN_01f08890(uVar1,1);
      FUN_01bc50c0();
      FUN_01bc56ec(uVar1);
      FUN_01bc5408(uVar1,0);
      puVar5 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<string>__
      ;
      goto LAB_035d3dc0;
    }
    uVar1 = 1;
  }
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
    if (((unaff_x19 != 0) && (*(int *)(unaff_x19 + 0x10) != 0)) && (iStack000000000000000c == 6)) {
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
      goto LAB_035d3df4;
    }
    FUN_034db0a0(iStack000000000000000c);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035da424();
  return;
}


