/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARPlaneManager$$GetPrefab
ENTRY_POINT: 024333c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 194
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined8 UnityEngine_XR_ARFoundation_ARPlaneManager__GetPrefab(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 *unaff_x24;
  undefined4 uVar7;
  
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
  uVar3 = FUN_023c34c4(*(undefined8 *)(unaff_x19 + 0x30),0);
  lVar5 = *(long *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_108__;
  if (lVar5 == 0) {
    if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_108__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03782447 == '\0') {
      thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_108__);
      DAT_03782447 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_0243380c;
    lVar5 = FUN_02432748();
    *(long *)(unaff_x19 + 0x70) = lVar5;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Collections_NativeArray<Vector4>__ctor__);
  puVar1 = StringLiteral_1097;
  if (lVar4 != 0) {
    FUN_024190d4(lVar4,lVar5,0);
    *(long *)(unaff_x19 + 0x78) = lVar4;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      FUN_0241a0d0(lVar5,uVar3,0);
      *(long *)(unaff_x19 + 0x88) = lVar5;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
        uVar7 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x14);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_ValueTuple<MeshFilter,_Renderer>__ctor__);
        if (lVar5 != 0) {
          FUN_02412f68(uVar7,lVar5,uVar3,0);
          uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
          *(long *)(unaff_x19 + 0x90) = lVar5;
          if (*(int *)(unaff_x19 + 0x38) == 1) {
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0243380c;
            uVar7 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x14);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRObjectPool_List<IntPtr>__);
            if (lVar5 == 0) goto LAB_0243380c;
            FUN_0241a5a0(uVar7,lVar5,uVar3,0);
            *(long *)(unaff_x19 + 0x80) = lVar5;
          }
          else {
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)OVR_OpenVR_IVRInput_TypeInfo);
            if (lVar5 == 0) goto LAB_0243380c;
            FUN_0241870c(lVar5,uVar3,0);
            *(long *)(unaff_x19 + 0xd8) = lVar5;
          }
          uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
          uVar7 = *(undefined4 *)(unaff_x19 + 0x38);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List<JsonParser_JsonValue>__ctor__
                                    );
          if (lVar5 != 0) {
            FUN_024119cc(lVar5,uVar3,uVar7,0);
            *(long *)(unaff_x19 + 0x98) = lVar5;
            if ((unaff_x20 != (long *)0x0) && (*unaff_x20 != *(long *)StringLiteral_7090)) {
              unaff_x20 = (long *)0x0;
            }
            iVar2 = *(int *)(unaff_x19 + 0x38);
            if (iVar2 == 1) {
              uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
              lVar5 = thunk_FUN_00d62348(*unaff_x24);
              puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvt_s32_f32__;
              if (lVar5 != 0) {
                FUN_0246deac(lVar5,0xc9,uVar3,0);
                *(long *)(unaff_x19 + 0x58) = lVar5;
                uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_033eb990;
                if (lVar5 != 0) {
                  FUN_0240ffb8(lVar5,uVar3,0);
                  *(long *)(unaff_x19 + 0xb0) = lVar5;
                  uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
                  uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  puVar1 = Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_7__;
                  if (lVar4 != 0) {
                    FUN_02410198(lVar4,uVar3,uVar6,lVar5,0);
                    *(long *)(unaff_x19 + 0xa0) = lVar4;
                    uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    puVar1 = StringLiteral_1045;
                    if (lVar5 != 0) {
                      FUN_02411570(lVar5,uVar3,0);
                      *(long *)(unaff_x19 + 0xb8) = lVar5;
                      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                      if (lVar4 != 0) {
                        FUN_024115e0(lVar4,lVar5,0);
                        *(long *)(unaff_x19 + 0xa8) = lVar4;
                        if (unaff_x20 != (long *)0x0) {
                          iVar2 = FUN_02433190(unaff_x20);
                          if (iVar2 != 1) {
LAB_024337ec:
                            *(undefined1 *)(unaff_x19 + 0x50) = 0;
                            return 1;
                          }
                          if (*(long *)(unaff_x19 + 0xa0) != 0) {
                            lVar5 = unaff_x20[0x81];
                            *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x120) = lVar5;
                            if (lVar5 != 0) {
                              FUN_0245b22c(lVar5,0);
                              goto LAB_024337ec;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (iVar2 == 3) {
              if (unaff_x20 != (long *)0x0) {
                uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
                *(long *)(unaff_x19 + 0xf0) = unaff_x20[0x81];
                lVar5 = thunk_FUN_00d62348(*unaff_x24);
                puVar1 = 
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__228_0__
                ;
                if (lVar5 != 0) {
                  FUN_0246deac(lVar5,300,uVar3,0);
                  *(long *)(unaff_x19 + 0x58) = lVar5;
                  uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  puVar1 = System_Action<ARRaycastUpdatedEventArgs>_TypeInfo;
                  if (lVar5 != 0) {
                    FUN_0241a9a4(lVar5,uVar3,0);
                    *(long *)(unaff_x19 + 0xe8) = lVar5;
                    uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
                    iVar2 = *(int *)(unaff_x19 + 0x38);
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar4 != 0) {
                      if (iVar2 != 1) {
                        lVar5 = 0;
                      }
                      FUN_0241aa18(lVar4,uVar3,lVar5,0);
                      *(long *)(unaff_x19 + 0xe0) = lVar4;
                      goto LAB_024337ec;
                    }
                  }
                }
              }
            }
            else {
              if (iVar2 != 2) goto LAB_024337ec;
              uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
              lVar5 = thunk_FUN_00d62348(*unaff_x24);
              puVar1 = StringLiteral_8502;
              if (lVar5 != 0) {
                FUN_0246deac(lVar5,300,uVar3,0);
                *(long *)(unaff_x19 + 0x58) = lVar5;
                uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar1 = Method_System_Collections_Generic_List<AudioSource>_Add__;
                if (lVar5 != 0) {
                  FUN_0241bc84(lVar5,uVar3,0);
                  *(long *)(unaff_x19 + 0xd0) = lVar5;
                  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
                  iVar2 = *(int *)(unaff_x19 + 0x38);
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar4 != 0) {
                    if (iVar2 != 1) {
                      lVar5 = 0;
                    }
                    FUN_0241bcf8(lVar4,uVar3,lVar5,0);
                    *(long *)(unaff_x19 + 200) = lVar4;
                    goto LAB_024337ec;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0243380c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


