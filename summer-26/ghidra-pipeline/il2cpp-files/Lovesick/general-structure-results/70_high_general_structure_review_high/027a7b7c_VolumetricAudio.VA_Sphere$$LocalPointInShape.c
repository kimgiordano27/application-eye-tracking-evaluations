/*
FUNCTION_NAME: VolumetricAudio.VA_Sphere$$LocalPointInShape
ENTRY_POINT: 027a7b7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void VolumetricAudio_VA_Sphere__LocalPointInShape(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar1 = StringLiteral_119;
  if ((DAT_03788793 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f3bc8);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1587);
    thunk_FUN_00d48444(PTR_DAT_033f3fc0);
    thunk_FUN_00d48444(Method_System_Resources_ResourceReader_FindType__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Face,_int>__ctor__);
    thunk_FUN_00d48444(StringLiteral_119);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(Method_StartTimerOnObjectPlaced_ObjectPlaced__);
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_SignalReceiver_RemoveAtIndex__);
    DAT_03788793 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  puVar1 = System_Collections_Generic_Dictionary<string,_int>_TypeInfo;
  if (lVar4 != 0) {
    FUN_013b0f04(lVar4,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Face,_int>__ctor__);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_1587;
    if (lVar4 != 0) {
      FUN_01298da0(lVar4,*(undefined8 *)PTR_DAT_033f3bc8);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        FUN_026d5388(lVar4,0);
        lVar5 = *(long *)puVar2;
        auVar8 = NEON_fmov(0x3f800000,4);
        lVar7 = *(long *)(lVar5 + 0xb8);
        *(long *)(lVar7 + 0x10) = lVar4;
        *(long *)(lVar7 + 0x20) = auVar8._8_8_;
        *(long *)(lVar7 + 0x18) = auVar8._0_8_;
        *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x28) = 0x41900000;
        lVar4 = thunk_FUN_00d62348();
        puVar1 = Method_System_Resources_ResourceReader_FindType__;
        if (lVar4 != 0) {
          FUN_027a620c();
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = lVar4;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar3 = Method_StartTimerOnObjectPlaced_ObjectPlaced__;
          puVar1 = Method_UnityEngine_Timeline_SignalReceiver_RemoveAtIndex__;
          if (lVar4 != 0) {
            FUN_01320e50(lVar4,*(undefined8 *)PTR_DAT_033f3fc0);
            uVar6 = *(undefined8 *)puVar1;
            lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
            *(long *)(lVar5 + 0x38) = lVar4;
            *(undefined8 *)(lVar5 + 0x40) = uVar6;
            *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)puVar3;
            uVar6 = FUN_0265d800(uVar6,1,0,0,0);
            lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
            *(undefined8 *)(lVar4 + 0x50) = uVar6;
            uVar6 = FUN_0265d800(*(undefined8 *)(lVar4 + 0x48),1,0,0,0);
            *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58) = uVar6;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


