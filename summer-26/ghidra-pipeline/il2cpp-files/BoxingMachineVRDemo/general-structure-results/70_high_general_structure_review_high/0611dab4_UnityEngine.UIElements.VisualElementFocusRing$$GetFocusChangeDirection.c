/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElementFocusRing$$GetFocusChangeDirection
ENTRY_POINT: 0611dab4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_UIElements_VisualElementFocusRing__GetFocusChangeDirection(void)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  puVar1 = 
  Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRSessionSubsystem>__;
  if (in_CY && !in_ZR) {
    unaff_x19[0x14] = unaff_x20;
    thunk_FUN_02dd37b4();
    lVar2 = thunk_FUN_02d9d534(*unaff_x22);
    uVar4 = *(undefined8 *)puVar1;
    FUN_0504920c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 0x11;
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
    puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRDisplaySubsystem>__;
    if (lVar3 == 0) {
LAB_0611e074:
      uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,0);
    }
    if (0x11 < *unaff_x23) {
      unaff_x19[0x15] = lVar2;
      thunk_FUN_02dd37b4(unaff_x19 + 0x15,lVar2);
      lVar2 = thunk_FUN_02d9d534(*unaff_x22);
      uVar4 = *(undefined8 *)puVar1;
      FUN_0504920c(lVar2,0);
      *(undefined4 *)(lVar2 + 0x10) = 0x12;
      *(undefined8 *)(lVar2 + 0x18) = uVar4;
      thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
      puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__;
      if (lVar3 == 0) goto LAB_0611e074;
      if (0x12 < *unaff_x23) {
        unaff_x19[0x16] = lVar2;
        thunk_FUN_02dd37b4(unaff_x19 + 0x16,lVar2);
        lVar2 = thunk_FUN_02d9d534(*unaff_x22);
        uVar4 = *(undefined8 *)puVar1;
        FUN_0504920c(lVar2,0);
        *(undefined4 *)(lVar2 + 0x10) = 0x13;
        *(undefined8 *)(lVar2 + 0x18) = uVar4;
        thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
        puVar1 = PTR_DAT_06763370;
        if (lVar3 == 0) goto LAB_0611e074;
        if (0x13 < *unaff_x23) {
          unaff_x19[0x17] = lVar2;
          thunk_FUN_02dd37b4(unaff_x19 + 0x17,lVar2);
          lVar2 = thunk_FUN_02d9d534(*unaff_x22);
          uVar4 = *(undefined8 *)puVar1;
          FUN_0504920c(lVar2,0);
          *(undefined4 *)(lVar2 + 0x10) = 0x14;
          *(undefined8 *)(lVar2 + 0x18) = uVar4;
          thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
          *(undefined8 *)(lVar2 + 0x20) = 0;
          lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
          puVar1 = PTR_DAT_067697b0;
          if (lVar3 == 0) goto LAB_0611e074;
          if (0x14 < *unaff_x23) {
            unaff_x19[0x18] = lVar2;
            thunk_FUN_02dd37b4(unaff_x19 + 0x18,lVar2);
            lVar2 = thunk_FUN_02d9d534(*unaff_x22);
            uVar4 = *(undefined8 *)puVar1;
            FUN_0504920c(lVar2,0);
            *(undefined4 *)(lVar2 + 0x10) = 0x15;
            *(undefined8 *)(lVar2 + 0x18) = uVar4;
            thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
            *(undefined8 *)(lVar2 + 0x20) = 0;
            lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
            puVar1 = 
            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_CreateSubsystem<XRDisplaySubsystemDescriptor,_XRDisplaySubsystem>__
            ;
            if (lVar3 == 0) goto LAB_0611e074;
            if (0x15 < *unaff_x23) {
              unaff_x19[0x19] = lVar2;
              thunk_FUN_02dd37b4(unaff_x19 + 0x19,lVar2);
              lVar2 = thunk_FUN_02d9d534(*unaff_x22);
              uVar4 = *(undefined8 *)puVar1;
              FUN_0504920c(lVar2,0);
              *(undefined4 *)(lVar2 + 0x10) = 0x16;
              *(undefined8 *)(lVar2 + 0x18) = uVar4;
              thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
              *(undefined8 *)(lVar2 + 0x20) = 0;
              lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
              puVar1 = PTR_DAT_06788270;
              if (lVar3 == 0) goto LAB_0611e074;
              if (0x16 < *unaff_x23) {
                unaff_x19[0x1a] = lVar2;
                thunk_FUN_02dd37b4(unaff_x19 + 0x1a,lVar2);
                lVar2 = thunk_FUN_02d9d534(*unaff_x22);
                uVar4 = *(undefined8 *)puVar1;
                FUN_0504920c(lVar2,0);
                *(undefined4 *)(lVar2 + 0x10) = 0x17;
                *(undefined8 *)(lVar2 + 0x18) = uVar4;
                thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
                *(undefined8 *)(lVar2 + 0x20) = 0;
                lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                puVar1 = Method_Newtonsoft_Json_JsonValidatingReader_OnValidationEvent__;
                if (lVar3 == 0) goto LAB_0611e074;
                if (0x17 < *unaff_x23) {
                  unaff_x19[0x1b] = lVar2;
                  thunk_FUN_02dd37b4(unaff_x19 + 0x1b,lVar2);
                  lVar2 = thunk_FUN_02d9d534(*unaff_x22);
                  uVar4 = *(undefined8 *)puVar1;
                  FUN_0504920c(lVar2,0);
                  *(undefined4 *)(lVar2 + 0x10) = 0x18;
                  *(undefined8 *)(lVar2 + 0x18) = uVar4;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
                  *(undefined8 *)(lVar2 + 0x20) = 0;
                  lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                  puVar1 = PTR_DAT_06776950;
                  if (lVar3 == 0) goto LAB_0611e074;
                  if (0x18 < *unaff_x23) {
                    unaff_x19[0x1c] = lVar2;
                    thunk_FUN_02dd37b4(unaff_x19 + 0x1c,lVar2);
                    lVar2 = thunk_FUN_02d9d534(*unaff_x22);
                    uVar4 = *(undefined8 *)puVar1;
                    FUN_0504920c(lVar2,0);
                    *(undefined4 *)(lVar2 + 0x10) = 0x19;
                    *(undefined8 *)(lVar2 + 0x18) = uVar4;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
                    *(undefined8 *)(lVar2 + 0x20) = 0;
                    lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                    puVar1 = 
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StartSubsystem<XRInputSubsystem>__
                    ;
                    if (lVar3 == 0) goto LAB_0611e074;
                    if (0x19 < *unaff_x23) {
                      unaff_x19[0x1d] = lVar2;
                      thunk_FUN_02dd37b4(unaff_x19 + 0x1d,lVar2);
                      lVar2 = thunk_FUN_02d9d534(*unaff_x22);
                      uVar4 = *(undefined8 *)puVar1;
                      FUN_0504920c(lVar2,0);
                      *(undefined4 *)(lVar2 + 0x10) = 0x1a;
                      *(undefined8 *)(lVar2 + 0x18) = uVar4;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
                      *(undefined8 *)(lVar2 + 0x20) = 0;
                      lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                      puVar1 = 
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_DestroySubsystem<XRDisplaySubsystem>__
                      ;
                      if (lVar3 == 0) goto LAB_0611e074;
                      if (0x1a < *unaff_x23) {
                        unaff_x19[0x1e] = lVar2;
                        thunk_FUN_02dd37b4(unaff_x19 + 0x1e,lVar2);
                        lVar2 = thunk_FUN_02d9d534(*unaff_x22);
                        uVar4 = *(undefined8 *)puVar1;
                        FUN_0504920c(lVar2,0);
                        *(undefined4 *)(lVar2 + 0x10) = 0x1b;
                        *(undefined8 *)(lVar2 + 0x18) = uVar4;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
                        *(undefined8 *)(lVar2 + 0x20) = 0;
                        lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                        puVar1 = PTR_DAT_06782288;
                        if (lVar3 == 0) goto LAB_0611e074;
                        if (0x1b < *unaff_x23) {
                          unaff_x19[0x1f] = lVar2;
                          thunk_FUN_02dd37b4(unaff_x19 + 0x1f,lVar2);
                          lVar2 = thunk_FUN_02d9d534(*unaff_x22);
                          uVar4 = *(undefined8 *)puVar1;
                          FUN_0504920c(lVar2,0);
                          *(undefined4 *)(lVar2 + 0x10) = 0x1c;
                          *(undefined8 *)(lVar2 + 0x18) = uVar4;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
                          *(undefined8 *)(lVar2 + 0x20) = 0;
                          lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                          puVar1 = 
                          Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRCameraSubsystem>__
                          ;
                          if (lVar3 == 0) goto LAB_0611e074;
                          if (0x1c < *unaff_x23) {
                            unaff_x19[0x20] = lVar2;
                            thunk_FUN_02dd37b4(unaff_x19 + 0x20,lVar2);
                            lVar2 = thunk_FUN_02d9d534(*unaff_x22);
                            uVar4 = *(undefined8 *)puVar1;
                            FUN_0504920c(lVar2,0);
                            *(undefined4 *)(lVar2 + 0x10) = 0x1d;
                            *(undefined8 *)(lVar2 + 0x18) = uVar4;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x18),uVar4);
                            *(undefined8 *)(lVar2 + 0x20) = 0;
                            lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
                            puVar1 = 
                            Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseError__
                            ;
                            if (lVar3 == 0) goto LAB_0611e074;
                            if (0x1d < *unaff_x23) {
                              unaff_x19[0x21] = lVar2;
                              thunk_FUN_02dd37b4(unaff_x19 + 0x21,lVar2);
                              **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                              thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar1 + 0xb8));
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


