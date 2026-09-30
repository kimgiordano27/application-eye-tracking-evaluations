/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable$$set_customReticle
ENTRY_POINT: 067d8ae4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_13;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__set_customReticle
               (undefined **param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined4 unaff_w23;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    FUN_052f1f30(param_2,unaff_w23,unaff_x25,*(undefined8 *)param_1[0x1e0]);
UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__set_overrideGazeTimeToSelect:
    uVar2 = in_stack_00000000;
    if ((*(long *)(unaff_x20 + 0x178) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x178) + 0x18), lVar5 == 0))
    goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = *(long *)System_Xml_Serialization_XmlAnyElementAttributes_TypeInfo;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0)
    goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + 0x20) = unaff_x21;
      *(ulong *)(lVar6 + 0x28) = unaff_x22;
    }
    else {
      FUN_042a12b8(lVar5,unaff_x21,unaff_x22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x26 = unaff_x26 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x26) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) {
LAB_067d8c10:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar5 = unaff_x19 + unaff_x26 * 0x10;
    lVar6 = unaff_x27 + unaff_x26 * 0x10;
    in_stack_00000058 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x20);
    lVar5 = FUN_06a87084(lVar6,0);
    if (lVar5 == 0) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x26) goto LAB_067d8c10;
    iVar3 = FUN_06a87094(lVar6,0);
    if (iVar3 == 0) {
      return;
    }
    lVar5 = FUN_06a87084(&stack0x00000050,0);
    if (lVar5 == 0)
    goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_067d8c10;
    unaff_w23 = *(undefined4 *)(lVar5 + 0x20);
    unaff_x21 = FUN_06a87084(&stack0x00000050,0);
    uVar4 = FUN_06a87094(&stack0x00000050,0);
    if ((*(long *)(unaff_x20 + 0x178) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x178) + 0x38), lVar5 == 0))
    goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
    unaff_x22 = uVar4 & 0xffffffff;
    uVar4 = FUN_052f3970(lVar5,unaff_w23,&stack0x00000048,*unaff_x29);
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000048 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
      FUN_042a1d90(in_stack_00000048,*(undefined8 *)System_Data_XmlIgnoreNamespaceReader_TypeInfo);
      in_stack_00000000 = 0;
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = uVar2;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      while (uVar4 = FUN_05446ff4(&stack0x00000020,*unaff_x28), (uVar4 & 1) != 0) {
        uVar4 = FUN_067b5b4c(unaff_x21,unaff_x22,in_stack_00000030,in_stack_00000038,0);
        if ((uVar4 & 1) != 0) {
          FUN_05446ff0(&stack0x00000020,
                       *(undefined8 *)System_Runtime_Serialization_XmlFormatWriterGenerator_TypeInfo
                      );
          return;
        }
      }
      FUN_05446ff0(&stack0x00000020,
                   *(undefined8 *)System_Runtime_Serialization_XmlFormatWriterGenerator_TypeInfo);
      if (((*(long *)(unaff_x20 + 0x178) == 0) ||
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x178) + 0x38), lVar5 == 0)) ||
         (lVar5 = FUN_052f1e90(lVar5,unaff_w23,
                               *(undefined8 *)System_Xml_Schema_XmlAnyConverter_TypeInfo),
         lVar5 == 0))
      goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *(long *)System_Xml_Serialization_XmlAnyElementAttributes_TypeInfo;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
      uVar1 = *(uint *)(lVar5 + 0x18);
      in_stack_00000008 = &stack0x00000020;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x20) = unaff_x21;
        *(ulong *)(lVar6 + 0x28) = unaff_x22;
      }
      else {
        FUN_042a12b8(lVar5,unaff_x21,unaff_x22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__set_overrideGazeTimeToSelect
      ;
    }
    if (*(long *)(unaff_x20 + 0x178) == 0) {
UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_2 = *(long *)(*(long *)(unaff_x20 + 0x178) + 0x38);
    unaff_x25 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_042a0a7c(unaff_x25,*(undefined8 *)System_Xml_Schema_XmlAnyListConverter_TypeInfo);
    if (unaff_x25 == 0)
    goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
    lVar5 = *(long *)(unaff_x25 + 0x10);
    lVar6 = *(long *)System_Xml_Serialization_XmlAnyElementAttributes_TypeInfo;
    *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    if (lVar5 == 0)
    goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
    uVar1 = *(uint *)(unaff_x25 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x25 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + 0x20) = unaff_x21;
      *(ulong *)(lVar5 + 0x28) = unaff_x22;
    }
    else {
      FUN_042a12b8(unaff_x25,unaff_x21,unaff_x22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (param_2 == 0)
    goto UnityEngine_XR_Interaction_Toolkit_Interactables_XRBaseInteractable__get_focusExited;
    param_1 = &UnityEngine_Networking_UnityWebRequest_TypeInfo;
  } while( true );
}


