/*
FUNCTION_NAME: Unity.AppUI.UI.Tray$$GetFocusableElement
ENTRY_POINT: 05902288
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_AppUI_UI_Tray__GetFocusableElement(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w19;
  long unaff_x20;
  
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedData>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedData>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedHandle>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedHandle>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedHandle>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedMember>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedMember>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<InspectedMember>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstalledApplication>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstalledApplication>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>_Add__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>_Contains__);
  FUN_02f08768(System_Xml_UniqueId___var);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>_GetEnumerator__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>_Remove__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>_RemoveAt__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>_get_Count__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceHandle>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceType>__ctor__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceType>_Add__);
  FUN_02f08768(Method_UnityEngine_InputSystem_Utilities_InlinedArray<int>_get_Item__);
  FUN_02f08768(Method_System_Collections_Generic_List<InstanceType>_GetEnumerator__);
  *(undefined1 *)(unaff_x20 + 0x587) = 1;
  if ((int)unaff_w19 < 0x79) {
    if ((int)unaff_w19 < 0x22) {
      switch(unaff_w19) {
      case 0:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputActionMap>_get_Count__;
        break;
      default:
        goto switchD_059023e4_caseD_2715;
      case 2:
      case 3:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>_Add__;
        break;
      case 4:
switchD_059023e4_caseD_2728:
        puVar2 = (undefined8 *)System_Xml_UniqueId___var;
        break;
      case 5:
switchD_059023e4_caseD_271d:
        puVar2 = (undefined8 *)
                 Method_System_Collections_Generic_List<InputActionAsset>_GetEnumerator__;
        break;
      case 6:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputActionDefinition>__ctor__
        ;
        break;
      case 0xd:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstalledApplication>_Add__;
        break;
      case 0xe:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_get_Count__;
        break;
      case 0x11:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDeviceDescription>_Add__;
        break;
      case 0x12:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>_Contains__;
        break;
      case 0x18:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>__ctor__;
        break;
      case 0x1f:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Image>_GetEnumerator__;
        break;
      case 0x20:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceType>_GetEnumerator__;
        break;
      case 0x21:
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceType>__ctor__;
      }
      goto LAB_0590258c;
    }
    if (0x37 < unaff_w19) {
      puVar2 = (undefined8 *)object___var;
      if ((unaff_w19 != 0x57) &&
         (puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_Remove__,
         unaff_w19 != 0x78)) goto switchD_059023e4_caseD_2715;
      goto LAB_0590258c;
    }
    if (unaff_w19 != 0x32) {
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>__ctor__;
      if (unaff_w19 != 0x37) goto switchD_059023e4_caseD_2715;
      goto LAB_0590258c;
    }
switchD_059023e4_caseD_273d:
    puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputEventPtr>__ctor__;
  }
  else {
    if (unaff_w19 < 0x10c) {
      if (unaff_w19 < 0x80) {
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedData>__ctor__;
        if ((unaff_w19 != 0x7b) &&
           (puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputActionSet>__ctor__,
           unaff_w19 != 0x7f)) goto switchD_059023e4_caseD_2715;
      }
      else {
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>_get_Item__;
        if ((unaff_w19 != 0xb7) &&
           (puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputEventPtr>_get_Item__,
           unaff_w19 != 0x10b)) goto switchD_059023e4_caseD_2715;
      }
      goto LAB_0590258c;
    }
    if (unaff_w19 < 0x1771) {
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputActionMap>_ToArray__;
      if ((unaff_w19 != 0x3e3) && (puVar2 = (undefined8 *)short___var, unaff_w19 != 6000))
      goto switchD_059023e4_caseD_2715;
      goto LAB_0590258c;
    }
    switch(unaff_w19) {
    case 0x2714:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedMember>_Add__;
      break;
    case 0x2715:
    case 0x2716:
    case 0x2717:
    case 0x2718:
    case 0x271a:
    case 0x271b:
    case 0x271c:
    case 0x271f:
    case 0x2720:
    case 0x2721:
    case 0x2722:
    case 0x2723:
    case 0x2724:
    case 0x2725:
    case 0x2727:
    case 0x2729:
    case 0x272a:
    case 0x272b:
    case 0x272c:
    case 0x272d:
    case 0x272e:
    case 0x272f:
    case 0x2730:
    case 0x2731:
    case 0x2732:
    case 0x2758:
    case 0x2759:
    case 0x275a:
    case 0x275b:
    case 0x275c:
    case 0x275d:
    case 0x275e:
    case 0x275f:
    case 0x2760:
    case 0x2761:
    case 0x2762:
    case 0x2763:
    case 0x2764:
    case 0x2765:
    case 0x2766:
    case 0x2767:
    case 0x2768:
    case 0x2769:
    case 0x276a:
    case 0x276e:
    case 0x276f:
    case 0x2770:
    case 0x2771:
    case 0x2772:
    case 0x2773:
    case 0x2774:
    case 0x277e:
    case 0x277f:
switchD_059023e4_caseD_2715:
      uVar1 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x0000000c);
      uVar1 = FUN_04f65e2c(*(undefined8 *)
                            Method_System_Collections_Generic_List<InputDevice>_get_Item__,uVar1,0);
      return uVar1;
    case 0x2719:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>_RemoveAt__;
      break;
    case 0x271d:
      goto switchD_059023e4_caseD_271d;
    case 0x271e:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedMember>__ctor__;
      break;
    case 0x2726:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>_Clear__;
      break;
    case 0x2728:
      goto switchD_059023e4_caseD_2728;
    case 0x2733:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedData>_get_Count__;
      break;
    case 0x2734:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedHandle>_Add__;
      break;
    case 0x2735:
      puVar2 = (undefined8 *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<int>_get_Item__;
      break;
    case 0x2736:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputEventPtr>_Sort__;
      break;
    case 0x2737:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Image>_RemoveAt__;
      break;
    case 0x2738:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_Add__;
      break;
    case 0x2739:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputAction>_ToArray__;
      break;
    case 0x273a:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>_Remove__;
      break;
    case 0x273b:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>_get_Count__;
      break;
    case 0x273c:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__;
      break;
    case 0x273d:
      goto switchD_059023e4_caseD_273d;
    case 0x273e:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_get_Item__;
      break;
    case 0x273f:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_Contains__;
      break;
    case 0x2740:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputEventPtr>_get_Count__;
      break;
    case 0x2741:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstalledApplication>__ctor__;
      break;
    case 0x2742:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputAction>__ctor__;
      break;
    case 0x2743:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Image>_get_Count__;
      break;
    case 0x2744:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputBinding>_Add__;
      break;
    case 0x2745:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputAction>_AddRange__;
      break;
    case 0x2746:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputBinding>__ctor__;
      break;
    case 0x2747:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>_get_Count__;
      break;
    case 0x2748:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>__ctor__;
      break;
    case 0x2749:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputActionMap>_Add__;
      break;
    case 0x274a:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>__ctor__;
      break;
    case 0x274b:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_get_Count__;
      break;
    case 0x274c:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>_Add__;
      break;
    case 0x274d:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_RemoveAt__;
      break;
    case 0x274e:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputAction>_Add__;
      break;
    case 0x274f:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedData>_get_Item__;
      break;
    case 0x2750:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputEventPtr>_Add__;
      break;
    case 0x2751:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedHandle>__ctor__;
      break;
    case 0x2752:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Image>_Add__;
      break;
    case 0x2753:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>_Remove__;
      break;
    case 0x2754:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Image>_Remove__;
      break;
    case 0x2755:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_GetEnumerator__;
      break;
    case 0x2756:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_get_Item__;
      break;
    case 0x2757:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_Reverse__;
      break;
    case 0x276b:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputActionMap>_get_Item__;
      break;
    case 0x276c:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>__ctor__;
      break;
    case 0x276d:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Image>__ctor__;
      break;
    case 0x2775:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>_get_Item__;
      break;
    case 0x2776:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Index>_GetEnumerator__;
      break;
    case 0x2777:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<Image>_get_Item__;
      break;
    case 0x2778:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDeviceDescription>__ctor__;
      break;
    case 0x2779:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceHandle>_GetEnumerator__;
      break;
    case 0x277a:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputBinding>_ToArray__;
      break;
    case 0x277b:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_get_Count__;
      break;
    case 0x277c:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InspectedHandle>_GetEnumerator__
      ;
      break;
    case 0x277d:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_Add__;
      break;
    case 0x2780:
      puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputDevice>_Clear__;
      break;
    default:
      if ((int)unaff_w19 < 0x2afb) {
        puVar2 = (undefined8 *)
                 Method_System_Collections_Generic_List<InspectedMember>_GetEnumerator__;
        if ((unaff_w19 != 0x2af9) &&
           (puVar2 = (undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_Insert__,
           unaff_w19 != 0x2afa)) goto switchD_059023e4_caseD_2715;
      }
      else {
        puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InstanceType>_Add__;
        if ((unaff_w19 != 0x2afb) &&
           (puVar2 = (undefined8 *)Method_System_Collections_Generic_List<InputActionMap>__ctor__,
           unaff_w19 != 0x2afc)) goto switchD_059023e4_caseD_2715;
      }
    }
  }
LAB_0590258c:
  return *puVar2;
}


