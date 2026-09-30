/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07a08f64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 149
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a08e2c with catch @ 07a08f64
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a08f00 with catch @ 07a08f68
                        */
  uVar2 = FUN_089dda60(param_4,0);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a08ebc with catch @ 07a08f6c
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a08e90 with catch @ 07a08f70
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a08e64 with catch @ 07a08f74
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a08ed4 with catch @ 07a08f78
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a08e30 with catch @ 07a08f7c
                        */
  lVar1 = FUN_089c7534();
  if (lVar1 != 0) {
    fVar4 = *(float *)(unaff_x20 + 0x30);
    fVar5 = *(float *)(unaff_x20 + 0x34);
    FUN_089dd77c(*(undefined4 *)(unaff_x20 + 0x2c),lVar1,0);
    fVar3 = (float)FUN_089dd874();
    *unaff_x19 = uVar2;
    unaff_x19[1] = param_2;
    unaff_x19[2] = param_3;
    unaff_x19[5] = fVar5 * 0.5;
    *(ulong *)(unaff_x19 + 3) = CONCAT44(fVar4 * 0.5,fVar3 * 0.5);
    FUN_089c6dec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


