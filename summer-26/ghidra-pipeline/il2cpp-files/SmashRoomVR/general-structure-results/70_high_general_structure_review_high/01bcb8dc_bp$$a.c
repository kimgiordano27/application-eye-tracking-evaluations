/*
FUNCTION_NAME: bp$$a
ENTRY_POINT: 01bcb8dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long bp__a(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 *unaff_x25;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(Method_Oculus_Interaction_ProgressCurve_<>c_<_ctor>b__14_0__);
  thunk_FUN_01ad9084(Method_Oculus_Interaction_ProgressCurve_<>c_<_ctor>b__15_0__);
  thunk_FUN_01ad9084(
                    Method_BNG_Projectile_<CheckForRaycast>d__22_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_Projection_<>c_<Sort>b__6_0__);
  thunk_FUN_01ad9084(
                    Method_UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_<_cctor>b__0_0__
                    );
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_Projection_<>c_<Sort>b__6_1__);
  thunk_FUN_01ad9084(Method_Oculus_Interaction_ProgressCurve_<>c_<_ctor>b__13_0__);
  thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__);
  thunk_FUN_01ad9084(Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__)
  ;
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_PropagationPaths_<>c_<_cctor>b__12_0__);
  *(undefined1 *)(unaff_x20 + 0x1da) = 1;
  lVar4 = thunk_FUN_01afaadc(*unaff_x25);
  FUN_03081994(lVar4,0);
  puVar2 = Method_UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_<_cctor>b__0_0__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x21;
    thunk_FUN_01b4f09c();
    uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar5 = FUN_01f25754(uVar9,*(undefined8 *)puVar2);
    FUN_01bcab48();
    if ((lVar5 != 0) &&
       (plVar6 = (long *)FUN_01e8ac5c(lVar5,*(undefined8 *)
                                             Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<CopyFrom>b__171_0__
                                     ),
       puVar1 = Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<SetUVs>b__118_0__,
       plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x5e8))();
      lVar7 = FUN_01e8ac5c(lVar5,*(undefined8 *)puVar1);
      plVar6 = (long *)(lVar4 + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_01b4f09c(plVar6);
      if (*(long *)(unaff_x19 + 0xc0) != 0) {
        lVar7 = *(long *)Method_UnityEngine_UIElements_PropagationPaths_<>c_<_cctor>b__12_0__;
        if (unaff_x22 != 0) {
          lVar7 = unaff_x22;
        }
        uVar3 = FUN_025bc7b8(*(long *)(unaff_x19 + 0xc0),lVar7,
                             *(undefined8 *)
                              Method_Oculus_Interaction_ProgressCurve_<>c_<_ctor>b__14_0__);
        if ((uVar3 & 1) == 0) {
          if ((*plVar6 == 0) || (lVar8 = FUN_0391c2b8(*plVar6,0), lVar8 == 0)) goto LAB_01bcbb74;
          uVar9 = FUN_01ed7044(lVar8,*(undefined8 *)
                                      Method_UnityEngine_ProBuilder_Projection_<>c_<Sort>b__6_0__);
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01bcbb74;
          FUN_025bc5b0(*(long *)(unaff_x19 + 0xc0),lVar7,uVar9,
                       *(undefined8 *)
                        Method_BNG_Projectile_<CheckForRaycast>d__22_System_Collections_IEnumerator_Reset__
                      );
        }
        else {
          if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01bcbb74;
          uVar9 = FUN_025bc544(*(long *)(unaff_x19 + 0xc0),lVar7,
                               *(undefined8 *)
                                Method_Oculus_Interaction_ProgressCurve_<>c_<_ctor>b__15_0__);
        }
        if (*plVar6 != 0) {
          FUN_03b1d13c(*plVar6,uVar9,0);
          if (*plVar6 != 0) {
            FUN_03b1de40(*plVar6,(uVar3 ^ 1) & 1,0);
            puVar1 = Method_UnityEngine_ProBuilder_Projection_<>c_<Sort>b__6_1__;
            if (*plVar6 != 0) {
              lVar7 = *(long *)(*plVar6 + 0x118);
              uVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                          Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_indexCount>b__126_0__
                                        );
              FUN_021ffadc(uVar9,lVar4,*(undefined8 *)puVar1,0);
              if (lVar7 != 0) {
                FUN_022017b8(lVar7,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c_<get_triangleCount>b__128_0__
                            );
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
LAB_01bcbb74:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


