/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteraction$$GetHandGrabPose
ENTRY_POINT: 019047cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void Oculus_Interaction_HandGrab_HandGrabInteraction__GetHandGrabPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  int iVar9;
  long unaff_x22;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  *(undefined1 *)(unaff_x22 + 0xf91) = 1;
  puVar5 = 
  Method_UnityEngine_InputSystem_Utilities_InputActionTrace_ActionEventPtr_ReadValueAsObject__;
  puVar4 = Method_System_Collections_Generic_List<HID_HIDCollectionDescriptor>_Add__;
  puVar3 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  puVar2 = UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo;
  puVar1 = System_Collections_Generic_IEnumerator<PropertyInfo>_TypeInfo;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)(unaff_x21 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01323390(*(long *)(unaff_x21 + 0x108),&stack0x00000008,
               *(undefined8 *)
                System_Collections_Generic_List<HandGrabUtils_HandGrabPoseData>_TypeInfo);
  uStack0000000000000020 = CONCAT44(uStack000000000000000c,iStack0000000000000008);
  uStack0000000000000028 = in_stack_00000010;
  uStack0000000000000030 = in_stack_00000018;
  while( true ) {
    uVar6 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) {
      FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar5);
      return;
    }
    lVar7 = FUN_00bf4190(&stack0x00000020,*(undefined8 *)puVar1);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *(long *)(lVar7 + 0x18);
    if (lVar8 == 0) break;
    iVar9 = 0;
    while (iVar9 < *(int *)(lVar8 + 0x18)) {
      FUN_0132138c(lVar8,iVar9,&stack0x00000008,*(undefined8 *)puVar3);
      lVar8 = *(long *)(lVar7 + 0x18);
      if (iStack0000000000000008 == unaff_w19) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iStack0000000000000008 = unaff_w20;
        FUN_0132149c(lVar8,iVar9,&stack0x00000008,*(undefined8 *)puVar2);
      }
      else {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar8,iVar9,&stack0x00000008,*(undefined8 *)puVar3);
        if (iStack0000000000000008 == unaff_w20) {
          if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          iStack0000000000000008 = unaff_w19;
          FUN_0132149c(*(long *)(lVar7 + 0x18),iVar9,&stack0x00000008,*(undefined8 *)puVar2);
        }
      }
      lVar8 = *(long *)(lVar7 + 0x18);
      iVar9 = iVar9 + 1;
      if (lVar8 == 0) goto LAB_019048f4;
    }
  }
LAB_019048f4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


