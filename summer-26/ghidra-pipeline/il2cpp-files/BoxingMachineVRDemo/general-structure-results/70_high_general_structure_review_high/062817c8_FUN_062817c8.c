/*
FUNCTION_NAME: FUN_062817c8
ENTRY_POINT: 062817c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_062817c8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_06b8b9d5 & 1) == 0) {
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<GUIStyleState>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<GradientMode>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<ImagePosition>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<InputActionType>__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<int>__)
    ;
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
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<float>__
                );
    FUN_02d6084c(PTR_DAT_0676a390);
    DAT_06b8b9d5 = 1;
  }
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<float>__;
  puVar2 = 
  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<GradientMode>__;
  puVar1 = 
  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<GUIStyleState>__;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x70) == 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0x520);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x9a8))(plVar4,*(undefined8 *)(*plVar4 + 0x9b0));
      uVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_047d95b0(uVar6,param_1,*(undefined8 *)puVar2,0);
      uVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      FUN_063056ac(uVar7,uVar6,0);
      *(undefined8 *)(param_1 + 0x538) = uVar7;
      thunk_FUN_02dd37b4(param_1 + 0x538,uVar7);
      FUN_0621b3f0(uVar5,uVar7,0);
      puVar2 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<int>__;
      puVar1 = PTR_DAT_0676a860;
      plVar4 = *(long **)(param_1 + 0x520);
      if (plVar4 != (long *)0x0) {
        lVar8 = (**(code **)(*plVar4 + 0x9a8))(plVar4,*(undefined8 *)(*plVar4 + 0x9b0));
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
        FUN_04cb597c(uVar5,param_1,*(undefined8 *)puVar2,0);
        if (lVar8 != 0) {
          FUN_033511f0(lVar8,uVar5,0,*(undefined8 *)PTR_DAT_0676a850);
          puVar2 = 
          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<InputActionType>__
          ;
          puVar1 = PTR_DAT_0676a868;
          plVar4 = *(long **)(param_1 + 0x520);
          if (plVar4 != (long *)0x0) {
            lVar8 = (**(code **)(*plVar4 + 0x9a8))(plVar4,*(undefined8 *)(*plVar4 + 0x9b0));
            uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
            FUN_04cb597c(uVar5,param_1,*(undefined8 *)puVar2,0);
            if (lVar8 != 0) {
              FUN_033511f0(lVar8,uVar5,0,*(undefined8 *)PTR_DAT_0676a848);
              puVar2 = 
              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<ImagePosition>__
              ;
              puVar1 = 
              Method_System_Reflection_SignatureConstructedGenericType_get_GenericParameterPosition__
              ;
              plVar4 = *(long **)(param_1 + 0x520);
              if (plVar4 != (long *)0x0) {
                lVar8 = (**(code **)(*plVar4 + 0x9a8))(plVar4,*(undefined8 *)(*plVar4 + 0x9b0));
                uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                FUN_04cb597c(uVar5,param_1,*(undefined8 *)puVar2,0);
                if (lVar8 != 0) {
                  FUN_033511f0(lVar8,uVar5,0,
                               *(undefined8 *)Method_System_Xml_XmlWhitespace_set_Value__);
                  puVar2 = 
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__
                  ;
                  puVar1 = PTR_DAT_0676a878;
                  plVar4 = *(long **)(param_1 + 0x520);
                  if (plVar4 != (long *)0x0) {
                    lVar8 = (**(code **)(*plVar4 + 0x9a8))(plVar4,*(undefined8 *)(*plVar4 + 0x9b0));
                    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                    FUN_04cb597c(uVar5,param_1,*(undefined8 *)puVar2,0);
                    if (lVar8 != 0) {
                      FUN_033511f0(lVar8,uVar5,0,*(undefined8 *)PTR_DAT_0676a858);
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


