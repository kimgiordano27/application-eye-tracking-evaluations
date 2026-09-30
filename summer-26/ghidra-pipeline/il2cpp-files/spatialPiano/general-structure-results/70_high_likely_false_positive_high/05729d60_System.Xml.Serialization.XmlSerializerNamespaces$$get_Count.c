/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$get_Count
ENTRY_POINT: 05729d60
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__get_Count(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x23;
  
  if ((*(byte *)(unaff_x23 + 0x7e8) & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Clear__
                );
    FUN_02f08768(PTR_DAT_067d7c28);
    *(undefined1 *)(unaff_x23 + 0x7e8) = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_0572a060:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar6 = FUN_05079c6c(param_2,0);
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Clear__
  ;
  puVar4 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__;
  puVar3 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
  puVar2 = PTR_DAT_067d7c28;
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      lVar8 = (**(code **)(*param_2 + 0x308))(param_2,iVar6,*(undefined8 *)(*param_2 + 0x310));
      if (lVar8 == 0) goto LAB_0572a060;
      *(undefined8 *)(lVar8 + 0x28) = unaff_x21;
      plVar9 = (long *)(**(code **)(*param_2 + 0x308))
                                 (param_2,iVar6,*(undefined8 *)(*param_2 + 0x310));
      if (plVar9 == (long *)0x0) {
LAB_05729e50:
        plVar9 = (long *)(**(code **)(*param_2 + 0x308))
                                   (param_2,iVar6,*(undefined8 *)(*param_2 + 0x310));
        if (plVar9 == (long *)0x0) goto LAB_0572a060;
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar9);
        }
        if (plVar9[10] == 0) goto LAB_0572a060;
        uVar10 = FUN_05825608(plVar9[10],0);
        if ((uVar10 & 1) == 0) {
          FUN_05729b28(param_1,plVar9,*(undefined8 *)puVar2,plVar9[10]);
        }
        else {
          FUN_05857240(param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar2,plVar9,0);
        }
        uVar11 = (**(code **)(*param_2 + 0x308))(param_2,iVar6,*(undefined8 *)(*param_2 + 0x310));
        FUN_05725cd4(param_1,uVar11);
        uVar11 = (**(code **)(*param_2 + 0x308))(param_2,iVar6,*(undefined8 *)(*param_2 + 0x310));
        FUN_05725d60(param_1,uVar11);
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
        goto LAB_05729e50;
        FUN_05729980(param_1,plVar9);
      }
      iVar6 = iVar6 + 1;
      iVar7 = FUN_05079c6c(param_2,0);
    } while (iVar6 < iVar7);
  }
  if (unaff_x19 == 0) {
    return;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  FUN_05725cd4(param_1);
  FUN_0576bcb4();
  FUN_05725d60(param_1);
  return;
}


