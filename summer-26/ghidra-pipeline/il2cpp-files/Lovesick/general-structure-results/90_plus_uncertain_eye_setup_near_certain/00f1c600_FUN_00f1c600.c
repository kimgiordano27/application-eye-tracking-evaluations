/*
FUNCTION_NAME: FUN_00f1c600
ENTRY_POINT: 00f1c600
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00f1c600(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_38;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377552d & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
    thunk_FUN_00d48444(Method_TuneTargetBasic_<Complete>b__23_0__);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_Utilities_CreatePolygonMesh__);
    DAT_0377552d = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x50);
  }
  else {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
    if (lVar5 == 0) goto LAB_00f1c980;
    FUN_0268afbc(lVar5,*(undefined8 *)Method_Meta_XR_MRUtilityKit_Utilities_CreatePolygonMesh__,0);
    *(long *)(param_1 + 0x50) = lVar5;
  }
  if (lVar5 != 0) {
    lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (lVar5,0);
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
      DAT_03774f00 = '\x01';
    }
    if (lVar5 != 0) {
      puVar6 = *(undefined4 **)
                (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                + 0xb8);
      FUN_0269f894(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (*(long *)(param_1 + 0x50),0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        if (lVar5 != 0) {
          puVar6 = *(undefined4 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          FUN_0269f618(*puVar6,puVar6[1],puVar6[2],lVar5,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                              (*(long *)(param_1 + 0x50),0);
            if (DAT_03774e1c == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774e1c = '\x01';
            }
            if (lVar5 != 0) {
              lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
              FUN_0269fd98(*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                           *(undefined4 *)(lVar7 + 0x14),lVar5,0);
              if ((*(long *)(param_1 + 0x50) != 0) &&
                 (lVar5 = FUN_0268b334(*(long *)(param_1 + 0x50),0),
                 puVar2 = 
                 Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__,
                 lVar5 != 0)) {
                FUN_010e58e8(lVar5,&local_38,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__
                            );
                uVar8 = local_38;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar4 = FUN_0268b5e4(uVar8,0);
                if ((uVar4 & 1) == 0) {
                  if ((*(long *)(param_1 + 0x50) == 0) ||
                     (lVar5 = FUN_0268b334(*(long *)(param_1 + 0x50),0), lVar5 == 0))
                  goto LAB_00f1c980;
                  FUN_010e5800(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
                }
                puVar3 = Method_TuneTargetBasic_<Complete>b__23_0__;
                if (*(long *)(param_1 + 0x50) != 0) {
                  FUN_010e58e8(*(long *)(param_1 + 0x50),&local_38,
                               *(undefined8 *)Method_TuneTargetBasic_<Complete>b__23_0__);
                  uVar8 = local_38;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar4 = FUN_0268b5e4(uVar8,0);
                  if ((uVar4 & 1) == 0) {
                    if ((*(long *)(param_1 + 0x50) == 0) ||
                       (lVar5 = FUN_0268b334(*(long *)(param_1 + 0x50),0), lVar5 == 0))
                    goto LAB_00f1c980;
                    FUN_010e5800(lVar5,*(undefined8 *)UnityEngine_Pose___TypeInfo);
                  }
                  if (*(long *)(param_1 + 0x50) != 0) {
                    FUN_010e58e8(*(long *)(param_1 + 0x50),&local_38,*(undefined8 *)puVar3);
                    *(undefined8 *)(param_1 + 0x60) = local_38;
                    if (*(long *)(param_1 + 0x50) != 0) {
                      FUN_010e58e8(*(long *)(param_1 + 0x50),&local_38,*(undefined8 *)puVar2);
                      uVar8 = *(undefined8 *)(param_1 + 0x68);
                      *(undefined8 *)(param_1 + 0x58) = local_38;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar4 = FUN_0268b4e0(uVar8,0,0);
                      if ((uVar4 & 1) != 0) {
                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
                        if (lVar5 == 0) goto LAB_00f1c980;
                        FUN_02669c18(lVar5,0);
                        *(long *)(param_1 + 0x68) = lVar5;
                      }
                      if (*(long *)(param_1 + 0x58) != 0) {
                        FUN_02666150(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68),0);
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
  }
LAB_00f1c980:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


