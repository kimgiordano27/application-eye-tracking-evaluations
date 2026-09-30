/*
FUNCTION_NAME: FUN_06663364
ENTRY_POINT: 06663364
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_06663364(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  puVar2 = UnityEngine_LightRenderMode_TypeInfo;
  if ((DAT_071cf837 & 1) == 0) {
    FUN_02f07e70(UnityEngine_Rendering_LightShadowResolution_TypeInfo);
    FUN_02f07e70(UnityEngine_LightRenderMode_TypeInfo);
    FUN_02f07e70(UnityEngine_LightShadows_TypeInfo);
    FUN_02f07e70(UnityEngine_LightType_TypeInfo);
    FUN_02f07e70(UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo);
    FUN_02f07e70(System_Data_LikeNode_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_LimbIK_TypeInfo);
    FUN_02f07e70(System_Xml_Linq_LineInfoEndElementAnnotation_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_LinearAccelerationSensor_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_UIR_MeshBuilder_TypeInfo);
    FUN_02f07e70(UnityEngine_Mesh_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_MeshChangeState_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo);
    FUN_02f07e70(UnityEngine_MeshCollider_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02130);
    FUN_02f07e70(PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo);
    FUN_02f07e70(ECE_MeshColliderData_TypeInfo);
    DAT_071cf837 = 1;
  }
  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_0663fb48(lVar8,0);
  puVar7 = UnityEngine_UIElements_UIR_MeshBuilder_TypeInfo;
  puVar6 = UnityEngine_Mesh_TypeInfo;
  puVar5 = System_Xml_Linq_LineInfoEndElementAnnotation_TypeInfo;
  puVar4 = RootMotion_FinalIK_LimbIK_TypeInfo;
  puVar3 = UnityEngine_LightShadows_TypeInfo;
  puVar2 = PTR_DAT_06d02130;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)UnityEngine_MeshCollider_TypeInfo;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar6;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar7;
    thunk_FUN_02f411dc();
                    /* try { // try from 066634e8 to 0676357f has its CatchHandler @ 066634e8
                       catch() { ... } // from try @ 066634e8 with catch @ 066634e8
                       catch() { ... } // from try @ 06663598 with catch @ 066634e8
                       catch() { ... } // from try @ 066635e0 with catch @ 066634e8
                       catch() { ... } // from try @ 066636a4 with catch @ 066634e8
                       catch() { ... } // from try @ 06663734 with catch @ 066634e8
                       catch() { ... } // from try @ 06663768 with catch @ 066634e8
                       catch() { ... } // from try @ 06663814 with catch @ 066634e8 */
    *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc();
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc();
    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
    FUN_03fd0468(lVar9,*(undefined8 *)puVar4);
    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
    FUN_0663fb40(lVar10,0);
    puVar2 = PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_TypeInfo;
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x10) = 0x16c;
      *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_02f411dc();
      puVar2 = UnityEngine_LightType_TypeInfo;
      if (lVar9 != 0) {
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)UnityEngine_LightType_TypeInfo;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
                    /* try { // try from 06663580 to 06763597 has its CatchHandler @ 06663738 */
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar10;
                    /* try { // try from 06663598 to 067635c7 has its CatchHandler @ 066634e8 */
            thunk_FUN_02f411dc(plVar11,lVar10);
          }
          else {
            FUN_03fd0c9c(lVar9,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
                    /* try { // try from 066635c8 to 067635df has its CatchHandler @ 06663674 */
          FUN_0663fb40(lVar10,0);
          puVar3 = PlayFab_ClientModels_LinkFacebookInstantGamesIdRequest_TypeInfo;
          if (lVar10 != 0) {
            *(undefined4 *)(lVar10 + 0x10) = 0x26c;
                    /* try { // try from 066635e0 to 0676368b has its CatchHandler @ 066634e8 */
            *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_02f411dc();
            lVar13 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            puVar4 = UnityEngine_InputSystem_LinearAccelerationSensor_TypeInfo;
            puVar3 = System_Data_LikeNode_TypeInfo;
            puVar2 = UnityEngine_Rendering_LightShadowResolution_TypeInfo;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar10;
                thunk_FUN_02f411dc(plVar11,lVar10);
              }
              else {
                FUN_03fd0c9c(lVar9,lVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar8 + 0x20) = lVar9;
              thunk_FUN_02f411dc((long *)(lVar8 + 0x20),lVar9);
              lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
              FUN_03fd0468(lVar9,*(undefined8 *)puVar3);
              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
              FUN_0663fb38(lVar10,0);
              puVar2 = ECE_MeshColliderData_TypeInfo;
              if (lVar10 != 0) {
                *(undefined8 *)(lVar10 + 0x10) =
                     *(undefined8 *)UnityEngine_XR_MeshChangeState_TypeInfo;
                thunk_FUN_02f411dc();
                *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_02f411dc();
                *(undefined4 *)(lVar10 + 0x18) = 3;
                uVar12 = FUN_06663798();
                *(undefined8 *)(lVar10 + 0x28) = uVar12;
                thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x28),uVar12);
                *(undefined1 *)(lVar10 + 0x38) = 1;
                if (lVar9 != 0) {
                  lVar13 = *(long *)(lVar9 + 0x10);
                  lVar14 = *(long *)
                            UnityEngine_Experimental_GlobalIllumination_Lightmapping_TypeInfo;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar1 = *(uint *)(lVar9 + 0x18);
                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar11 = lVar10;
                      thunk_FUN_02f411dc(plVar11,lVar10);
                    }
                    else {
                      FUN_03fd0c9c(lVar9,lVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar8 + 0x28) = lVar9;
                    thunk_FUN_02f411dc((long *)(lVar8 + 0x28),lVar9);
                    FUN_0663f8fc(param_1,lVar8,0);
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
  FUN_02f080c0();
}


