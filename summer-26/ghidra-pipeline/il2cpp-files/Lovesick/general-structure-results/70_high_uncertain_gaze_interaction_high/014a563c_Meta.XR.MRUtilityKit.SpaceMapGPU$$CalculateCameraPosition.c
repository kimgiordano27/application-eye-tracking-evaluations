/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$CalculateCameraPosition
ENTRY_POINT: 014a563c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_gaze_interaction_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__CalculateCameraPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x25;
  
  puVar2 = 
  Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__;
  uVar4 = *(undefined8 *)(unaff_x25 + 0x68);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_get_Count__
                            );
  puVar1 = UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_TypeInfo;
  if ((lVar3 != 0) && (unaff_x21 != 0)) {
    FUN_013df2bc();
    FUN_01152dac(uVar4,lVar3,unaff_w20 & 1,*(undefined8 *)puVar1);
    uVar4 = *(undefined8 *)(unaff_x25 + 0x78);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      FUN_013df2bc();
      FUN_01152dac(uVar4,lVar3,unaff_w20 & 1,*(undefined8 *)puVar1);
      uVar4 = *(undefined8 *)(unaff_x25 + 0x20);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar3 != 0) {
        FUN_013df2bc();
        FUN_01152dac(uVar4,lVar3,unaff_w20 & 1,*(undefined8 *)puVar1);
        uVar4 = *(undefined8 *)(unaff_x25 + 0x38);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar3 != 0) {
          FUN_013df2bc();
          FUN_01152dac(uVar4,lVar3,unaff_w20 & 1,*(undefined8 *)puVar1);
          uVar4 = *(undefined8 *)(unaff_x25 + 0x30);
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar3 != 0) {
            FUN_013df2bc();
            FUN_01152dac(uVar4,lVar3,unaff_w20 & 1,*(undefined8 *)puVar1);
            uVar4 = *(undefined8 *)(unaff_x25 + 0x28);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar3 != 0) {
              FUN_013df2bc();
              FUN_01152dac(uVar4,lVar3,unaff_w20 & 1,*(undefined8 *)puVar1);
              uVar4 = *(undefined8 *)(unaff_x25 + 0x40);
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              puVar2 = Method_UnityEngine_ProBuilder_SimpleTuple<Face,_Face>__ctor__;
              if (lVar3 != 0) {
                FUN_013df2bc();
                FUN_01152dac(uVar4,lVar3,unaff_w20 & 1,*(undefined8 *)puVar1);
                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if (lVar3 != 0) {
                  FUN_013df3d0();
                  FUN_010bd810();
                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar3 != 0) {
                    FUN_013df3d0();
                    FUN_010bd810();
                    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    puVar1 = StringLiteral_3781;
                    if (lVar3 != 0) {
                      FUN_013df3d0();
                      FUN_010bd810();
                      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      if (lVar3 != 0) {
                        FUN_013df3d0();
                        FUN_010bd810();
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


