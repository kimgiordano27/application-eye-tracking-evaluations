/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable$$UpdateTeleportRequestRotation
ENTRY_POINT: 0612da90
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable__UpdateTeleportRequestRotation
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x21;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
                    /* try { // try from 0612da98 to 0622daaf has its CatchHandler @ 0612def4 */
  plVar2 = *(long **)(unaff_x21 + 0x4f0);
  if ((*(byte *)(unaff_x22 + 0x70a) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a144f0);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromPreviousFrame__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromState__);
                    /* try { // try from 0612dad0 to 0622dad3 has its CatchHandler @ 0612de9c */
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__);
                    /* try { // try from 0612dad4 to 0622db07 has its CatchHandler @ 0612df04 */
    FUN_02d965b8(PTR_DAT_069fc820);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendarHelper_GetYear__);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendarHelper_GetYearOffset__);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendarHelper_TimeToTicks__);
    FUN_02d965b8(Method_System_Globalization_GregorianCalendarHelper_ToFourDigitYear__);
                    /* try { // try from 0612db14 to 0622db37 has its CatchHandler @ 0612def0 */
    FUN_02d965b8(Method_System_Text_RegularExpressions_Group__ctor__);
    FUN_02d965b8(Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__);
    *(undefined1 *)(unaff_x22 + 0x70a) = 1;
  }
                    /* try { // try from 0612db44 to 0622db67 has its CatchHandler @ 0612deec */
  FUN_0552aca4(param_1,0);
  lVar3 = *plVar2;
  lVar1 = *(long *)(lVar3 + 0x38);
  if (lVar1 == 0) {
    FUN_02dcfd74(lVar3);
    lVar1 = *(long *)(lVar3 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
                    /* try { // try from 0612db6c to 0622db8f has its CatchHandler @ 0612dee8 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 0612db94 to 0622dbb7 has its CatchHandler @ 0612dee4 */
    lVar1 = FUN_02dcfd18();
  }
  uVar4 = **(undefined8 **)(lVar1 + 0xb8);
  lVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__
                            );
                    /* try { // try from 0612dbbc to 0622dbdf has its CatchHandler @ 0612dee0 */
  FUN_05d1d1a8(lVar1,param_2,uVar4,0);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Globalization_GregorianCalendarHelper_GetYear__);
  FUN_03b7e41c(uVar4,param_1,
               *(undefined8 *)Method_System_Globalization_GregorianCalendarHelper_GetYearOffset__,0)
  ;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined8 *)(lVar1 + 0x130) = uVar4;
  LeanTween__value(lVar1 + 0x130,uVar4);
  plVar2 = (long *)(param_1 + 0x38);
  *plVar2 = lVar1;
  LeanTween__value(plVar2,lVar1);
  lVar1 = *plVar2;
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc820);
  FUN_054d04f8(uVar4,param_1,
               *(undefined8 *)Method_System_Globalization_GregorianCalendarHelper_TimeToTicks__,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05d1de80(lVar1,uVar4,0);
  lVar1 = *plVar2;
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromState__
                            );
  FUN_03b33300(uVar4,param_1,
               *(undefined8 *)Method_System_Globalization_GregorianCalendarHelper_ToFourDigitYear__,
               0);
  if (lVar1 != 0) {
    FUN_05d1dd20(lVar1,uVar4,0);
    lVar1 = *plVar2;
    uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<float>_ReadValueFromPreviousFrame__
                              );
    FUN_03b33300(uVar4,param_1,*(undefined8 *)Method_System_Text_RegularExpressions_Group__ctor__,0)
    ;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05d1dbc0(lVar1,uVar4,0);
    lVar1 = *plVar2;
    uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__);
    FUN_03b33300(uVar4,param_1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__,0);
    if (lVar1 != 0) {
      FUN_05d1da60(lVar1,uVar4,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


