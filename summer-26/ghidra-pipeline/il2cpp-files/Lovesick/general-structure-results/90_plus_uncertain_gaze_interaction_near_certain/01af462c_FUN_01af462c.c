/*
FUNCTION_NAME: FUN_01af462c
ENTRY_POINT: 01af462c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 158
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af462c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar7 = StringLiteral_5227;
  puVar2 = PTR_DAT_033eca08;
  if ((DAT_0377d11f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlWellFormedWriter_AddAttribute__);
    thunk_FUN_00d48444(Method_System_Char_ToLower__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_Add__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_Queue<fsVersionedType>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<VA_Triangle>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9745);
    thunk_FUN_00d48444(StringLiteral_12031);
    thunk_FUN_00d48444(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_00d48444(PTR_DAT_033edfd0);
    thunk_FUN_00d48444(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    thunk_FUN_00d48444(StringLiteral_5227);
    thunk_FUN_00d48444(Method_OVRObjectPool_Return<List<string>>__);
    thunk_FUN_00d48444(PTR_DAT_033eca08);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_Clickable_OnMouseMove__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Select<IBoundsClipper,_Object>__);
    DAT_0377d11f = 1;
  }
  uVar1 = _UNK_0294c7f8;
  uVar9 = _DAT_0294c7f0;
  puVar10 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
  *puVar10 = DAT_028aa5a0;
  puVar10[3] = uVar1;
  puVar10[2] = uVar9;
  *(undefined2 *)(puVar10 + 4) = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar6 = 
  Field_<PrivateImplementationDetails>_215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49
  ;
  puVar5 = Method_OVRObjectPool_Return<List<string>>__;
  puVar4 = Method_System_Linq_Enumerable_Select<IBoundsClipper,_Object>__;
  puVar3 = Method_UnityEngine_UIElements_Clickable_OnMouseMove__;
  puVar2 = Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_Add__;
  if (lVar8 != 0) {
    FUN_01791214(lVar8,1,9,0,0);
    uVar9 = DAT_0294c7b8;
    lVar11 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar11 + 0x28) = lVar8;
    *(undefined4 *)(lVar11 + 0x30) = 2;
    *(undefined8 *)(lVar11 + 0x40) = uVar9;
    *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)puVar3;
    *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)puVar4;
    *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)puVar6;
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar5,2);
    *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x60) = uVar9;
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = System_Collections_Generic_Queue<fsVersionedType>_TypeInfo;
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)Method_System_Char_ToLower__);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = Method_System_Xml_XmlWellFormedWriter_AddAttribute__;
      puVar2 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
      if (lVar11 != 0) {
        FUN_01afc278(lVar11,0);
        FUN_00c2fc30(lVar8,lVar11,*(undefined8 *)puVar3);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = StringLiteral_12031;
        if (lVar11 != 0) {
          FUN_01afa620();
          *(undefined4 *)(lVar11 + 0x10) = 3;
          FUN_00c2fc30(lVar8,lVar11,*(undefined8 *)puVar3);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_033edfd0;
          if (lVar11 != 0) {
            FUN_01afa620();
            *(undefined4 *)(lVar11 + 0x10) = 1;
            FUN_00c2fc30(lVar8,lVar11,*(undefined8 *)puVar3);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar2 = System_Collections_Generic_List<VA_Triangle>_TypeInfo;
            if (lVar11 != 0) {
              FUN_01afa620();
              *(undefined4 *)(lVar11 + 0x10) = 2;
              FUN_00c2fc30(lVar8,lVar11,*(undefined8 *)puVar3);
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              puVar2 = StringLiteral_9745;
              if (lVar11 != 0) {
                FUN_01afa620();
                *(undefined4 *)(lVar11 + 0x10) = 0x60;
                FUN_00c2fc30(lVar8,lVar11,*(undefined8 *)puVar3);
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                puVar2 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
                if (lVar11 != 0) {
                  FUN_01afa620();
                  *(undefined4 *)(lVar11 + 0x10) = 0x20;
                  FUN_00c2fc30(lVar8,lVar11,*(undefined8 *)puVar3);
                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar11 != 0) {
                    FUN_01afa620();
                    *(undefined4 *)(lVar11 + 0x10) = 0x40;
                    FUN_00c2fc30(lVar8,lVar11,*(undefined8 *)puVar3);
                    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = lVar8;
                    FUN_01af4a3c();
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


