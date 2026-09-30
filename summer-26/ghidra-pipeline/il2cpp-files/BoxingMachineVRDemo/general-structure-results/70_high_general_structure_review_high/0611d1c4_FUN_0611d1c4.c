/*
FUNCTION_NAME: FUN_0611d1c4
ENTRY_POINT: 0611d1c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0611d1c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  
  puVar3 = Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRAnchorSubsystem>__
  ;
  puVar2 = 
  Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_CreateSubsystem<XRSessionSubsystemDescriptor,_XRSessionSubsystem>__
  ;
  puVar1 = PTR_DAT_06763330;
  if ((DAT_06b8a9c1 & 1) == 0) {
    FUN_02d6084c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseError__);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_CreateSubsystem<XRSessionSubsystemDescriptor,_XRSessionSubsystem>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRAnchorSubsystem>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRBoundingBoxSubsystem>__
                );
    FUN_02d6084c(PTR_DAT_06763330);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRCameraSubsystem>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRMeshSubsystem>__
                );
    FUN_02d6084c(Method_System_Nullable<RaycastHit>_get_HasValue__);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XROcclusionSubsystem>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRPlaneSubsystem>__
                );
    FUN_02d6084c(PTR_DAT_0676bc68);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRRaycastSubsystem>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRSessionSubsystem>__
                );
    FUN_02d6084c(PTR_DAT_067697b0);
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_ReceiveLoaderEvent__);
    FUN_02d6084c(PTR_DAT_06769ab8);
    FUN_02d6084c(PTR_DAT_06778450);
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_AddActionMap__);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_CreateSubsystem<XRDisplaySubsystemDescriptor,_XRDisplaySubsystem>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_DestroySubsystem<XRDisplaySubsystem>__
                );
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_DestroySubsystem<XRInputSubsystem>__)
    ;
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StartSubsystem<XRDisplaySubsystem>__)
    ;
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StartSubsystem<XRInputSubsystem>__);
    FUN_02d6084c(PTR_DAT_06782288);
    FUN_02d6084c(Method_Newtonsoft_Json_JsonValidatingReader_OnValidationEvent__);
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRDisplaySubsystem>__);
    FUN_02d6084c(PTR_DAT_06763370);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__);
    FUN_02d6084c(PTR_DAT_06788270);
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__);
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__);
    FUN_02d6084c(PTR_DAT_06776950);
    DAT_06b8a9c1 = 1;
  }
  plVar4 = (long *)FUN_02d60934(*(undefined8 *)puVar2,0x1e);
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  uVar7 = *(undefined8 *)puVar1;
  FUN_0504920c(lVar5,0);
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = uVar7;
  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
  puVar1 = Method_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_AddActionMap__;
  if (lVar6 != 0) {
    puVar8 = (uint *)(plVar4 + 3);
    if (*puVar8 != 0) {
      plVar4[4] = lVar5;
      thunk_FUN_02dd37b4(plVar4 + 4,lVar5);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      uVar7 = *(undefined8 *)puVar1;
      FUN_0504920c(lVar5,0);
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined8 *)(lVar5 + 0x18) = uVar7;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      puVar1 = 
      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_CreateSubsystem<XRInputSubsystemDescriptor,_XRInputSubsystem>__
      ;
      if (lVar6 == 0) goto LAB_0611e074;
      if (1 < *puVar8) {
        plVar4[5] = lVar5;
        thunk_FUN_02dd37b4(plVar4 + 5,lVar5);
        lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
        uVar7 = *(undefined8 *)puVar1;
        FUN_0504920c(lVar5,0);
        *(undefined4 *)(lVar5 + 0x10) = 2;
        *(undefined8 *)(lVar5 + 0x18) = uVar7;
        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
        *(undefined8 *)(lVar5 + 0x20) = 0;
        lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
        puVar1 = 
        Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRBoundingBoxSubsystem>__
        ;
        if (lVar6 == 0) goto LAB_0611e074;
        if (2 < *puVar8) {
          plVar4[6] = lVar5;
          thunk_FUN_02dd37b4(plVar4 + 6,lVar5);
          lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
          uVar7 = *(undefined8 *)puVar1;
          FUN_0504920c(lVar5,0);
          *(undefined4 *)(lVar5 + 0x10) = 3;
          *(undefined8 *)(lVar5 + 0x18) = uVar7;
          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
          *(undefined8 *)(lVar5 + 0x20) = 0;
          lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
          puVar1 = PTR_DAT_06769ab8;
          if (lVar6 == 0) goto LAB_0611e074;
          if (3 < *puVar8) {
            plVar4[7] = lVar5;
            thunk_FUN_02dd37b4(plVar4 + 7,lVar5);
            lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
            uVar7 = *(undefined8 *)puVar1;
            FUN_0504920c(lVar5,0);
            *(undefined4 *)(lVar5 + 0x10) = 4;
            *(undefined8 *)(lVar5 + 0x18) = uVar7;
            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
            *(undefined8 *)(lVar5 + 0x20) = 0;
            lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
            puVar1 = PTR_DAT_06778450;
            if (lVar6 == 0) goto LAB_0611e074;
            if (4 < *puVar8) {
              plVar4[8] = lVar5;
              thunk_FUN_02dd37b4(plVar4 + 8,lVar5);
              lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
              uVar7 = *(undefined8 *)puVar1;
              FUN_0504920c(lVar5,0);
              *(undefined4 *)(lVar5 + 0x10) = 5;
              *(undefined8 *)(lVar5 + 0x18) = uVar7;
              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
              *(undefined8 *)(lVar5 + 0x20) = 0;
              lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
              puVar1 = Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__;
              if (lVar6 == 0) goto LAB_0611e074;
              if (5 < *puVar8) {
                plVar4[9] = lVar5;
                thunk_FUN_02dd37b4(plVar4 + 9,lVar5);
                lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                uVar7 = *(undefined8 *)puVar1;
                FUN_0504920c(lVar5,0);
                *(undefined4 *)(lVar5 + 0x10) = 6;
                *(undefined8 *)(lVar5 + 0x18) = uVar7;
                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                *(undefined8 *)(lVar5 + 0x20) = DAT_01206b58;
                lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                puVar1 = 
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StartSubsystem<XRDisplaySubsystem>__;
                if (lVar6 == 0) goto LAB_0611e074;
                if (6 < *puVar8) {
                  plVar4[10] = lVar5;
                  thunk_FUN_02dd37b4(plVar4 + 10,lVar5);
                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                  uVar7 = *(undefined8 *)puVar1;
                  FUN_0504920c(lVar5,0);
                  *(undefined4 *)(lVar5 + 0x10) = 7;
                  *(undefined8 *)(lVar5 + 0x18) = uVar7;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                  *(undefined8 *)(lVar5 + 0x20) = 0;
                  lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                  puVar1 = Method_System_Nullable<RaycastHit>_get_HasValue__;
                  if (lVar6 == 0) goto LAB_0611e074;
                  if (7 < *puVar8) {
                    plVar4[0xb] = lVar5;
                    thunk_FUN_02dd37b4(plVar4 + 0xb,lVar5);
                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                    uVar7 = *(undefined8 *)puVar1;
                    FUN_0504920c(lVar5,0);
                    *(undefined4 *)(lVar5 + 0x10) = 8;
                    *(undefined8 *)(lVar5 + 0x18) = uVar7;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                    *(undefined8 *)(lVar5 + 0x20) = 0;
                    lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                    puVar1 = 
                    Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRMeshSubsystem>__
                    ;
                    if (lVar6 == 0) goto LAB_0611e074;
                    if (8 < *puVar8) {
                      plVar4[0xc] = lVar5;
                      thunk_FUN_02dd37b4(plVar4 + 0xc,lVar5);
                      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                      uVar7 = *(undefined8 *)puVar1;
                      FUN_0504920c(lVar5,0);
                      *(undefined4 *)(lVar5 + 0x10) = 9;
                      *(undefined8 *)(lVar5 + 0x18) = uVar7;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                      *(undefined8 *)(lVar5 + 0x20) = 0;
                      lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                      puVar1 = PTR_DAT_0676bc68;
                      if (lVar6 == 0) goto LAB_0611e074;
                      if (9 < *puVar8) {
                        plVar4[0xd] = lVar5;
                        thunk_FUN_02dd37b4(plVar4 + 0xd,lVar5);
                        lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                        uVar7 = *(undefined8 *)puVar1;
                        FUN_0504920c(lVar5,0);
                        *(undefined4 *)(lVar5 + 0x10) = 10;
                        *(undefined8 *)(lVar5 + 0x18) = uVar7;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                        *(undefined8 *)(lVar5 + 0x20) = 0;
                        lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                        puVar1 = 
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_DestroySubsystem<XRInputSubsystem>__
                        ;
                        if (lVar6 == 0) goto LAB_0611e074;
                        if (10 < *puVar8) {
                          plVar4[0xe] = lVar5;
                          thunk_FUN_02dd37b4(plVar4 + 0xe,lVar5);
                          lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                          uVar7 = *(undefined8 *)puVar1;
                          FUN_0504920c(lVar5,0);
                          *(undefined4 *)(lVar5 + 0x10) = 0xb;
                          *(undefined8 *)(lVar5 + 0x18) = uVar7;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                          *(undefined8 *)(lVar5 + 0x20) = 0;
                          lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                          puVar1 = 
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__;
                          if (lVar6 == 0) goto LAB_0611e074;
                          if (0xb < *puVar8) {
                            plVar4[0xf] = lVar5;
                            thunk_FUN_02dd37b4(plVar4 + 0xf,lVar5);
                            lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                            uVar7 = *(undefined8 *)puVar1;
                            FUN_0504920c(lVar5,0);
                            *(undefined4 *)(lVar5 + 0x10) = 0xc;
                            *(undefined8 *)(lVar5 + 0x18) = uVar7;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                            *(undefined8 *)(lVar5 + 0x20) = 0;
                            lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                            puVar1 = 
                            Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRRaycastSubsystem>__
                            ;
                            if (lVar6 == 0) goto LAB_0611e074;
                            if (0xc < *puVar8) {
                              plVar4[0x10] = lVar5;
                              thunk_FUN_02dd37b4(plVar4 + 0x10,lVar5);
                              lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                              uVar7 = *(undefined8 *)puVar1;
                              FUN_0504920c(lVar5,0);
                              *(undefined4 *)(lVar5 + 0x10) = 0xd;
                              *(undefined8 *)(lVar5 + 0x18) = uVar7;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                              *(undefined8 *)(lVar5 + 0x20) = 0;
                              lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                              puVar1 = 
                              Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRPlaneSubsystem>__
                              ;
                              if (lVar6 == 0) goto LAB_0611e074;
                              if (0xd < *puVar8) {
                                plVar4[0x11] = lVar5;
                                thunk_FUN_02dd37b4(plVar4 + 0x11,lVar5);
                                lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                uVar7 = *(undefined8 *)puVar1;
                                FUN_0504920c(lVar5,0);
                                *(undefined4 *)(lVar5 + 0x10) = 0xe;
                                *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                                *(undefined8 *)(lVar5 + 0x20) = 0;
                                lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                                puVar1 = 
                                Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XROcclusionSubsystem>__
                                ;
                                if (lVar6 == 0) goto LAB_0611e074;
                                if (0xe < *puVar8) {
                                  plVar4[0x12] = lVar5;
                                  thunk_FUN_02dd37b4(plVar4 + 0x12,lVar5);
                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                  uVar7 = *(undefined8 *)puVar1;
                                  FUN_0504920c(lVar5,0);
                                  *(undefined4 *)(lVar5 + 0x10) = 0xf;
                                  *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                                  *(undefined8 *)(lVar5 + 0x20) = 0;
                                  lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                                  puVar1 = 
                                  Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_ReceiveLoaderEvent__
                                  ;
                                  if (lVar6 == 0) goto LAB_0611e074;
                                  if (0xf < *puVar8) {
                                    plVar4[0x13] = lVar5;
                                    thunk_FUN_02dd37b4(plVar4 + 0x13,lVar5);
                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                    uVar7 = *(undefined8 *)puVar1;
                                    FUN_0504920c(lVar5,0);
                                    *(undefined4 *)(lVar5 + 0x10) = 0x10;
                                    *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                                    *(undefined8 *)(lVar5 + 0x20) = 0;
                                    lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              );
                                    puVar1 = 
                                    Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRSessionSubsystem>__
                                    ;
                                    if (lVar6 == 0) goto LAB_0611e074;
                                    if (0x10 < *puVar8) {
                                      plVar4[0x14] = lVar5;
                                      thunk_FUN_02dd37b4(plVar4 + 0x14,lVar5);
                                      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                      uVar7 = *(undefined8 *)puVar1;
                                      FUN_0504920c(lVar5,0);
                                      *(undefined4 *)(lVar5 + 0x10) = 0x11;
                                      *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                                      *(undefined8 *)(lVar5 + 0x20) = 0;
                                      lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                        (*plVar4 + 0x40));
                                      puVar1 = 
                                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRDisplaySubsystem>__
                                      ;
                                      if (lVar6 == 0) goto LAB_0611e074;
                                      if (0x11 < *puVar8) {
                                        plVar4[0x15] = lVar5;
                                        thunk_FUN_02dd37b4(plVar4 + 0x15,lVar5);
                                        lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                        uVar7 = *(undefined8 *)puVar1;
                                        FUN_0504920c(lVar5,0);
                                        *(undefined4 *)(lVar5 + 0x10) = 0x12;
                                        *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                                        *(undefined8 *)(lVar5 + 0x20) = 0;
                                        lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40));
                                        puVar1 = 
                                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__
                                        ;
                                        if (lVar6 == 0) goto LAB_0611e074;
                                        if (0x12 < *puVar8) {
                                          plVar4[0x16] = lVar5;
                                          thunk_FUN_02dd37b4(plVar4 + 0x16,lVar5);
                                          lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                          uVar7 = *(undefined8 *)puVar1;
                                          FUN_0504920c(lVar5,0);
                                          *(undefined4 *)(lVar5 + 0x10) = 0x13;
                                          *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                                          *(undefined8 *)(lVar5 + 0x20) = 0;
                                          lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40));
                                          puVar1 = PTR_DAT_06763370;
                                          if (lVar6 == 0) goto LAB_0611e074;
                                          if (0x13 < *puVar8) {
                                            plVar4[0x17] = lVar5;
                                            thunk_FUN_02dd37b4(plVar4 + 0x17,lVar5);
                                            lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                            uVar7 = *(undefined8 *)puVar1;
                                            FUN_0504920c(lVar5,0);
                                            *(undefined4 *)(lVar5 + 0x10) = 0x14;
                                            *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7);
                                            *(undefined8 *)(lVar5 + 0x20) = 0;
                                            lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40));
                                            puVar1 = PTR_DAT_067697b0;
                                            if (lVar6 == 0) goto LAB_0611e074;
                                            if (0x14 < *puVar8) {
                                              plVar4[0x18] = lVar5;
                                              thunk_FUN_02dd37b4(plVar4 + 0x18,lVar5);
                                              lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                              uVar7 = *(undefined8 *)puVar1;
                                              FUN_0504920c(lVar5,0);
                                              *(undefined4 *)(lVar5 + 0x10) = 0x15;
                                              *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),uVar7)
                                              ;
                                              *(undefined8 *)(lVar5 + 0x20) = 0;
                                              lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                                (*plVar4 + 0x40));
                                              puVar1 = 
                                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_CreateSubsystem<XRDisplaySubsystemDescriptor,_XRDisplaySubsystem>__
                                              ;
                                              if (lVar6 == 0) goto LAB_0611e074;
                                              if (0x15 < *puVar8) {
                                                plVar4[0x19] = lVar5;
                                                thunk_FUN_02dd37b4(plVar4 + 0x19,lVar5);
                                                lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                                uVar7 = *(undefined8 *)puVar1;
                                                FUN_0504920c(lVar5,0);
                                                *(undefined4 *)(lVar5 + 0x10) = 0x16;
                                                *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),
                                                                   uVar7);
                                                *(undefined8 *)(lVar5 + 0x20) = 0;
                                                lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                                  (*plVar4 + 0x40));
                                                puVar1 = PTR_DAT_06788270;
                                                if (lVar6 == 0) goto LAB_0611e074;
                                                if (0x16 < *puVar8) {
                                                  plVar4[0x1a] = lVar5;
                                                  thunk_FUN_02dd37b4(plVar4 + 0x1a,lVar5);
                                                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                                  uVar7 = *(undefined8 *)puVar1;
                                                  FUN_0504920c(lVar5,0);
                                                  *(undefined4 *)(lVar5 + 0x10) = 0x17;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),
                                                                     uVar7);
                                                  *(undefined8 *)(lVar5 + 0x20) = 0;
                                                  lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                                    (*plVar4 + 0x40)
                                                                            );
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_JsonValidatingReader_OnValidationEvent__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_0611e074;
                                                  if (0x17 < *puVar8) {
                                                    plVar4[0x1b] = lVar5;
                                                    thunk_FUN_02dd37b4(plVar4 + 0x1b,lVar5);
                                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3
                                                                              );
                                                    uVar7 = *(undefined8 *)puVar1;
                                                    FUN_0504920c(lVar5,0);
                                                    *(undefined4 *)(lVar5 + 0x10) = 0x18;
                                                    *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),
                                                                       uVar7);
                                                    *(undefined8 *)(lVar5 + 0x20) = 0;
                                                    lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40));
                                                    puVar1 = PTR_DAT_06776950;
                                                    if (lVar6 == 0) goto LAB_0611e074;
                                                    if (0x18 < *puVar8) {
                                                      plVar4[0x1c] = lVar5;
                                                      thunk_FUN_02dd37b4(plVar4 + 0x1c,lVar5);
                                                      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                  puVar3);
                                                      uVar7 = *(undefined8 *)puVar1;
                                                      FUN_0504920c(lVar5,0);
                                                      *(undefined4 *)(lVar5 + 0x10) = 0x19;
                                                      *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                      thunk_FUN_02dd37b4((undefined8 *)
                                                                         (lVar5 + 0x18),uVar7);
                                                      *(undefined8 *)(lVar5 + 0x20) = 0;
                                                      lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  puVar1 = 
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StartSubsystem<XRInputSubsystem>__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_0611e074;
                                                  if (0x19 < *puVar8) {
                                                    plVar4[0x1d] = lVar5;
                                                    thunk_FUN_02dd37b4(plVar4 + 0x1d,lVar5);
                                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3
                                                                              );
                                                    uVar7 = *(undefined8 *)puVar1;
                                                    FUN_0504920c(lVar5,0);
                                                    *(undefined4 *)(lVar5 + 0x10) = 0x1a;
                                                    *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),
                                                                       uVar7);
                                                    *(undefined8 *)(lVar5 + 0x20) = 0;
                                                    lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40));
                                                    puVar1 = 
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_DestroySubsystem<XRDisplaySubsystem>__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_0611e074;
                                                  if (0x1a < *puVar8) {
                                                    plVar4[0x1e] = lVar5;
                                                    thunk_FUN_02dd37b4(plVar4 + 0x1e,lVar5);
                                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3
                                                                              );
                                                    uVar7 = *(undefined8 *)puVar1;
                                                    FUN_0504920c(lVar5,0);
                                                    *(undefined4 *)(lVar5 + 0x10) = 0x1b;
                                                    *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),
                                                                       uVar7);
                                                    *(undefined8 *)(lVar5 + 0x20) = 0;
                                                    lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40));
                                                    puVar1 = PTR_DAT_06782288;
                                                    if (lVar6 == 0) goto LAB_0611e074;
                                                    if (0x1b < *puVar8) {
                                                      plVar4[0x1f] = lVar5;
                                                      thunk_FUN_02dd37b4(plVar4 + 0x1f,lVar5);
                                                      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                  puVar3);
                                                      uVar7 = *(undefined8 *)puVar1;
                                                      FUN_0504920c(lVar5,0);
                                                      *(undefined4 *)(lVar5 + 0x10) = 0x1c;
                                                      *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                      thunk_FUN_02dd37b4((undefined8 *)
                                                                         (lVar5 + 0x18),uVar7);
                                                      *(undefined8 *)(lVar5 + 0x20) = 0;
                                                      lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40));
                                                  puVar1 = 
                                                  Method_UnityEngine_XR_OpenXR_Features_OpenXRFeature_DestroySubsystem<XRCameraSubsystem>__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_0611e074;
                                                  if (0x1c < *puVar8) {
                                                    plVar4[0x20] = lVar5;
                                                    thunk_FUN_02dd37b4(plVar4 + 0x20,lVar5);
                                                    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3
                                                                              );
                                                    uVar7 = *(undefined8 *)puVar1;
                                                    FUN_0504920c(lVar5,0);
                                                    *(undefined4 *)(lVar5 + 0x10) = 0x1d;
                                                    *(undefined8 *)(lVar5 + 0x18) = uVar7;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x18),
                                                                       uVar7);
                                                    *(undefined8 *)(lVar5 + 0x20) = 0;
                                                    lVar6 = thunk_FUN_02d9d438(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40));
                                                    puVar1 = 
                                                  Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseError__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_0611e074;
                                                  if (0x1d < *puVar8) {
                                                    plVar4[0x21] = lVar5;
                                                    thunk_FUN_02dd37b4(plVar4 + 0x21,lVar5);
                                                    **(long **)(*(long *)puVar1 + 0xb8) =
                                                         (long)plVar4;
                                                    thunk_FUN_02dd37b4(*(undefined8 *)
                                                                        (*(long *)puVar1 + 0xb8),
                                                                       plVar4);
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
LAB_0611e074:
  uVar7 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar7,0);
}


