/*
FUNCTION_NAME: UnityEngine.Video.VideoPlayer$$SetDirectAudioVolume
ENTRY_POINT: 06281804
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_12
*/


void UnityEngine_Video_VideoPlayer__SetDirectAudioVolume(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x6f0));
  FUN_02d6084c(
              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<InputActionType>__
              );
  FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<int>__);
  FUN_02d6084c(
              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__
              );
  FUN_02d6084c(Method_System_Xml_XmlWhitespace_set_Value__);
  FUN_02d6084c(PTR_DAT_0676a848);
  FUN_02d6084c(PTR_DAT_0676a850);
  FUN_02d6084c(PTR_DAT_0676a858);
  FUN_02d6084c(PTR_DAT_0676a860);
  FUN_02d6084c(PTR_DAT_0676a868);
  FUN_02d6084c(
              Method_System_Reflection_SignatureConstructedGenericType_get_GenericParameterPosition__
              );
  FUN_02d6084c(PTR_DAT_0676a878);
  FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<float>__)
  ;
  FUN_02d6084c(PTR_DAT_0676a390);
  *(undefined1 *)(unaff_x21 + 0x9d5) = 1;
  puVar2 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<float>__;
  puVar1 = 
  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<GUIStyleState>__;
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x70) == 0) {
      return;
    }
    plVar3 = *(long **)(unaff_x19 + 0x520);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
      uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_047d95b0();
      uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_063056ac(uVar6,uVar5,0);
      *(undefined8 *)(unaff_x19 + 0x538) = uVar6;
      thunk_FUN_02dd37b4(unaff_x19 + 0x538,uVar6);
      FUN_0621b3f0(uVar4,uVar6,0);
      puVar1 = PTR_DAT_0676a860;
      plVar3 = *(long **)(unaff_x19 + 0x520);
      if (plVar3 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
        FUN_04cb597c();
        if (lVar7 != 0) {
          FUN_033511f0(lVar7,uVar4,0,*(undefined8 *)PTR_DAT_0676a850);
          puVar1 = PTR_DAT_0676a868;
          plVar3 = *(long **)(unaff_x19 + 0x520);
          if (plVar3 != (long *)0x0) {
            lVar7 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
            uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
            FUN_04cb597c();
            if (lVar7 != 0) {
              FUN_033511f0(lVar7,uVar4,0,*(undefined8 *)PTR_DAT_0676a848);
              puVar1 = 
              Method_System_Reflection_SignatureConstructedGenericType_get_GenericParameterPosition__
              ;
              plVar3 = *(long **)(unaff_x19 + 0x520);
              if (plVar3 != (long *)0x0) {
                lVar7 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
                uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                FUN_04cb597c();
                if (lVar7 != 0) {
                  FUN_033511f0(lVar7,uVar4,0,
                               *(undefined8 *)Method_System_Xml_XmlWhitespace_set_Value__);
                  puVar1 = PTR_DAT_0676a878;
                  plVar3 = *(long **)(unaff_x19 + 0x520);
                  if (plVar3 != (long *)0x0) {
                    lVar7 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
                    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                    FUN_04cb597c();
                    if (lVar7 != 0) {
                      FUN_033511f0(lVar7,uVar4,0,*(undefined8 *)PTR_DAT_0676a858);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


