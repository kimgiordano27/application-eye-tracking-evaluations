/*
FUNCTION_NAME: FUN_06281b18
ENTRY_POINT: 06281b18
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_18
*/


void FUN_06281b18(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_06b8b9d6 & 1) == 0) {
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
    FUN_02d6084c(Method_System_Reflection_SignatureHasElementType_GetGenericTypeDefinition__);
    FUN_02d6084c(PTR_DAT_0676a9b0);
    FUN_02d6084c(PTR_DAT_0676c3b8);
    FUN_02d6084c(PTR_DAT_0676a9b8);
    FUN_02d6084c(PTR_DAT_0676a860);
    FUN_02d6084c(PTR_DAT_0676a868);
    FUN_02d6084c(
                Method_System_Reflection_SignatureConstructedGenericType_get_GenericParameterPosition__
                );
    FUN_02d6084c(PTR_DAT_0676a878);
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<string>__
                );
    DAT_06b8b9d6 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x68) == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x520);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
      FUN_0621b49c(uVar4,*(undefined8 *)(param_1 + 0x538),0);
      puVar2 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<int>__;
      puVar1 = PTR_DAT_0676a860;
      plVar3 = *(long **)(param_1 + 0x520);
      if (plVar3 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
        FUN_04cb597c(uVar4,param_1,*(undefined8 *)puVar2,0);
        if (lVar5 != 0) {
          FUN_03351690(lVar5,uVar4,0,*(undefined8 *)PTR_DAT_0676c3b8);
          puVar2 = 
          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<InputActionType>__
          ;
          puVar1 = PTR_DAT_0676a868;
          plVar3 = *(long **)(param_1 + 0x520);
          if (plVar3 != (long *)0x0) {
            lVar5 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
            uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
            FUN_04cb597c(uVar4,param_1,*(undefined8 *)puVar2,0);
            if (lVar5 != 0) {
              FUN_03351690(lVar5,uVar4,0,*(undefined8 *)PTR_DAT_0676a9b0);
              puVar2 = 
              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<ImagePosition>__
              ;
              puVar1 = 
              Method_System_Reflection_SignatureConstructedGenericType_get_GenericParameterPosition__
              ;
              plVar3 = *(long **)(param_1 + 0x520);
              if (plVar3 != (long *)0x0) {
                lVar5 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
                uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                FUN_04cb597c(uVar4,param_1,*(undefined8 *)puVar2,0);
                if (lVar5 != 0) {
                  FUN_03351690(lVar5,uVar4,0,
                               *(undefined8 *)
                                Method_System_Reflection_SignatureHasElementType_GetGenericTypeDefinition__
                              );
                  puVar2 = 
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__
                  ;
                  puVar1 = PTR_DAT_0676a878;
                  plVar3 = *(long **)(param_1 + 0x520);
                  if (plVar3 != (long *)0x0) {
                    lVar5 = (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0));
                    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                    FUN_04cb597c(uVar4,param_1,*(undefined8 *)puVar2,0);
                    if (lVar5 != 0) {
                      FUN_03351690(lVar5,uVar4,0,*(undefined8 *)PTR_DAT_0676a9b8);
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


