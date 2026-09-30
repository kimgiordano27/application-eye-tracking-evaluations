/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionProperty$$Equals
ENTRY_POINT: 020273fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 214
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_8;functionality_data_collection_or_telemetry_hits_6
*/


void UnityEngine_InputSystem_InputActionProperty__Equals(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  uint in_w8;
  uint uVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  if (param_1 != 0) {
    lVar4 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x20 + 0x40));
    if (lVar4 == 0) goto LAB_0202ba58;
    in_w8 = *(uint *)(unaff_x20 + 3);
  }
  if (1 < in_w8) {
    unaff_x20[5] = *unaff_x21;
    lVar4 = thunk_FUN_00d6225c();
    if (lVar4 == 0) {
LAB_0202ba58:
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
    if (0x24 < *unaff_x23) {
      unaff_x19[0x28] = (long)unaff_x20;
      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
      puVar2 = Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__;
      if (plVar5 == (long *)0x0) {
LAB_0202ba64:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*(long *)Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__ != 0) &&
         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                      Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__,
                                     *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
      goto LAB_0202ba58;
      puVar1 = PTR_DAT_033ec410;
      uVar7 = *(uint *)(plVar5 + 3);
      if (uVar7 != 0) {
        plVar5[4] = *(long *)puVar2;
        lVar4 = *(long *)puVar1;
        if (lVar4 != 0) {
          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar4 == 0) goto LAB_0202ba58;
          uVar7 = *(uint *)(plVar5 + 3);
        }
        if (1 < uVar7) {
          plVar5[5] = *(long *)puVar1;
          lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar4 == 0) goto LAB_0202ba58;
          if (0x25 < *unaff_x23) {
            unaff_x19[0x29] = (long)plVar5;
            plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
            puVar2 = StringLiteral_14159;
            if (plVar5 == (long *)0x0) goto LAB_0202ba64;
            if ((*(long *)StringLiteral_14159 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(*(long *)StringLiteral_14159,
                                           *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
            goto LAB_0202ba58;
            puVar1 = StringLiteral_12820;
            uVar7 = *(uint *)(plVar5 + 3);
            if (uVar7 != 0) {
              plVar5[4] = *(long *)puVar2;
              if (*(long *)puVar1 != 0) {
                lVar4 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar4 == 0) goto LAB_0202ba58;
                uVar7 = *(uint *)(plVar5 + 3);
              }
              if (1 < uVar7) {
                plVar5[5] = *(long *)puVar1;
                lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar4 == 0) goto LAB_0202ba58;
                if (0x26 < *unaff_x23) {
                  unaff_x19[0x2a] = (long)plVar5;
                  plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                  puVar2 = 
                  Method_Unity_XR_CoreUtils_XROrigin_OnInputSubsystemTrackingOriginUpdated__;
                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                  if ((*(long *)
                        Method_Unity_XR_CoreUtils_XROrigin_OnInputSubsystemTrackingOriginUpdated__
                       != 0) &&
                     (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_XR_CoreUtils_XROrigin_OnInputSubsystemTrackingOriginUpdated__
                                                 ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                  goto LAB_0202ba58;
                  puVar3 = Method_System_Xml_Schema_XsdBuilder_BuildSchema_TargetNamespace__;
                  uVar7 = *(uint *)(plVar5 + 3);
                  if (uVar7 != 0) {
                    plVar5[4] = *(long *)puVar2;
                    lVar4 = *(long *)puVar3;
                    if (lVar4 != 0) {
                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                      if (lVar4 == 0) goto LAB_0202ba58;
                      uVar7 = *(uint *)(plVar5 + 3);
                    }
                    if (1 < uVar7) {
                      plVar5[5] = *(long *)puVar3;
                      lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar4 == 0) goto LAB_0202ba58;
                      if (0x27 < *unaff_x23) {
                        unaff_x19[0x2b] = (long)plVar5;
                        plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                        puVar2 = 
                        Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_IList_set_Item__
                        ;
                        if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                        if ((*(long *)
                              Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_IList_set_Item__
                             != 0) &&
                           (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Sirenix_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_IList_set_Item__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                        goto LAB_0202ba58;
                        uVar7 = *(uint *)(plVar5 + 3);
                        if (uVar7 != 0) {
                          plVar5[4] = *(long *)puVar2;
                          if (*(long *)puVar1 != 0) {
                            lVar4 = thunk_FUN_00d6225c(*(long *)puVar1,
                                                       *(undefined8 *)(*plVar5 + 0x40));
                            if (lVar4 == 0) goto LAB_0202ba58;
                            uVar7 = *(uint *)(plVar5 + 3);
                          }
                          if (1 < uVar7) {
                            plVar5[5] = *(long *)puVar1;
                            lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar4 == 0) goto LAB_0202ba58;
                            if (0x28 < *unaff_x23) {
                              unaff_x19[0x2c] = (long)plVar5;
                              plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                              puVar2 = Method_System_MarshalByRefObject_CreateObjRef__;
                              if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                              if ((*(long *)Method_System_MarshalByRefObject_CreateObjRef__ != 0) &&
                                 (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_MarshalByRefObject_CreateObjRef__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                              goto LAB_0202ba58;
                              puVar1 = 
                              Method_Obi_ObiResourceHandle<ObiCollisionMaterial>_Invalidate__;
                              uVar7 = *(uint *)(plVar5 + 3);
                              if (uVar7 != 0) {
                                plVar5[4] = *(long *)puVar2;
                                lVar4 = *(long *)puVar1;
                                if (lVar4 != 0) {
                                  lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                                  if (lVar4 == 0) goto LAB_0202ba58;
                                  uVar7 = *(uint *)(plVar5 + 3);
                                }
                                if (1 < uVar7) {
                                  plVar5[5] = *(long *)puVar1;
                                  lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *)
                                                                     (*unaff_x19 + 0x40));
                                  if (lVar4 == 0) goto LAB_0202ba58;
                                  if (0x29 < *unaff_x23) {
                                    unaff_x19[0x2d] = (long)plVar5;
                                    plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                    puVar2 = Method_System_Numerics_BigInteger__ctor__;
                                    if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                    if ((*(long *)Method_System_Numerics_BigInteger__ctor__ != 0) &&
                                       (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Numerics_BigInteger__ctor__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                    goto LAB_0202ba58;
                                    puVar1 = 
                                    Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo
                                    ;
                                    uVar7 = *(uint *)(plVar5 + 3);
                                    if (uVar7 != 0) {
                                      plVar5[4] = *(long *)puVar2;
                                      lVar4 = *(long *)puVar1;
                                      if (lVar4 != 0) {
                                        lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                          (*plVar5 + 0x40));
                                        if (lVar4 == 0) goto LAB_0202ba58;
                                        uVar7 = *(uint *)(plVar5 + 3);
                                      }
                                      if (1 < uVar7) {
                                        plVar5[5] = *(long *)puVar1;
                                        lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *)
                                                                           (*unaff_x19 + 0x40));
                                        if (lVar4 == 0) goto LAB_0202ba58;
                                        if (0x2a < *unaff_x23) {
                                          unaff_x19[0x2e] = (long)plVar5;
                                          plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                          puVar2 = MetaXRAcousticGeometry_ITransformVisitor_TypeInfo
                                          ;
                                          if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                          if ((*(long *)
                                                MetaXRAcousticGeometry_ITransformVisitor_TypeInfo !=
                                               0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  MetaXRAcousticGeometry_ITransformVisitor_TypeInfo,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                          goto LAB_0202ba58;
                                          puVar1 = StringLiteral_5582;
                                          uVar7 = *(uint *)(plVar5 + 3);
                                          if (uVar7 != 0) {
                                            plVar5[4] = *(long *)puVar2;
                                            lVar4 = *(long *)puVar1;
                                            if (lVar4 != 0) {
                                              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                (*plVar5 + 0x40));
                                              if (lVar4 == 0) goto LAB_0202ba58;
                                              uVar7 = *(uint *)(plVar5 + 3);
                                            }
                                            if (1 < uVar7) {
                                              plVar5[5] = *(long *)puVar1;
                                              lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *)
                                                                                 (*unaff_x19 + 0x40)
                                                                        );
                                              if (lVar4 == 0) goto LAB_0202ba58;
                                              if (0x2b < *unaff_x23) {
                                                unaff_x19[0x2f] = (long)plVar5;
                                                plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                puVar2 = 
                                                Method_System_Collections_Generic_List<WitDynamicEntity>_GetEnumerator__
                                                ;
                                                if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                if ((*(long *)
                                                  Method_System_Collections_Generic_List<WitDynamicEntity>_GetEnumerator__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<WitDynamicEntity>_GetEnumerator__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                goto LAB_0202ba58;
                                                puVar1 = 
                                                UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_EaseAttachBurst_00000294_PostfixBurstDelegate_var
                                                ;
                                                uVar7 = *(uint *)(plVar5 + 3);
                                                if (uVar7 != 0) {
                                                  plVar5[4] = *(long *)puVar2;
                                                  lVar4 = *(long *)puVar1;
                                                  if (lVar4 != 0) {
                                                    lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                      (*plVar5 +
                                                                                      0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x2c < *unaff_x23) {
                                                      unaff_x19[0x30] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = PTR_DAT_033f5600;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033f5600 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033f5600,*(undefined8 *)(*plVar5 + 0x40)),
                                                  lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<PlayerInputActions_IPlayerActions>_MoveNext__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x2d < *unaff_x23) {
                                                      unaff_x19[0x31] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_BitArray__ctor__;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_BitArray__ctor__ != 0)
                                                  && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_BitArray__ctor__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = PTR_DAT_033f5798;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x2e < *unaff_x23) {
                                                      unaff_x19[0x32] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Newtonsoft_Json_Linq_JObject_<>c_TypeInfo;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Newtonsoft_Json_Linq_JObject_<>c_TypeInfo != 0) &&
                                                  (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Newtonsoft_Json_Linq_JObject_<>c_TypeInfo,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = System_Func<SoundEffect,_bool>_TypeInfo;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x2f < *unaff_x23) {
                                                      unaff_x19[0x33] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = PTR_DAT_033ee0a0;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033ee0a0 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033ee0a0,*(undefined8 *)(*plVar5 + 0x40)),
                                                  lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_EqualityComparer<Vector2>_get_Default__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x30 < *unaff_x23) {
                                                      unaff_x19[0x34] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_OnCameraCleanup__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_OnCameraCleanup__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_OnCameraCleanup__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = PTR_DAT_033eae80;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x31 < *unaff_x23) {
                                                      unaff_x19[0x35] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_1828;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_1828 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_1828,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x32 < *unaff_x23) {
                                                      unaff_x19[0x36] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_Dictionary<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_get_Count__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_Linq_JArray_<LoadAsync>d__2_MoveNext__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x33 < *unaff_x23) {
                                                      unaff_x19[0x37] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<__Il2CppFullySharedGenericStructType>_CopyFrom__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x34 < *unaff_x23) {
                                                      unaff_x19[0x38] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List<MeshRenderer>_Clear__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_List<MeshRenderer>_Clear__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<MeshRenderer>_Clear__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = Method_Obi_ObiNativeList<Vector2>_Add__;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x35 < *unaff_x23) {
                                                      unaff_x19[0x39] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_8538;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_8538 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_8538,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_14066;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x36 < *unaff_x23) {
                                                      unaff_x19[0x3a] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = Method_System_Type_GetProperty__;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)Method_System_Type_GetProperty__
                                                           != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Type_GetProperty__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_s16__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x37 < *unaff_x23) {
                                                      unaff_x19[0x3b] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = System_CompatibilitySwitches_TypeInfo
                                                      ;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)
                                                  System_CompatibilitySwitches_TypeInfo != 0) &&
                                                  (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_CompatibilitySwitches_TypeInfo,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  System_Threading_Tasks_Task<WebSocketReceiveResult>_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x38 < *unaff_x23) {
                                                      unaff_x19[0x3c] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d>__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Data_DataRow_GetCurrentRecordNo__;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x39 < *unaff_x23) {
                                                      unaff_x19[0x3d] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<DirectoryInfo>__ctor__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x3a < *unaff_x23) {
                                                      unaff_x19[0x3e] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Linq_Enumerable_<SkipIterator>d__31<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Linq_Enumerable_<SkipIterator>d__31<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Linq_Enumerable_<SkipIterator>d__31<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<SimpleDissolve>__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x3b < *unaff_x23) {
                                                      unaff_x19[0x3f] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Reflection_MethodInfo_GetGenericArguments__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Reflection_MethodInfo_GetGenericArguments__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Reflection_MethodInfo_GetGenericArguments__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass43_0_<DOLocalRotateQuaternion>b__1__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x3c < *unaff_x23) {
                                                      unaff_x19[0x40] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = PTR_DAT_033ecb08;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033ecb08 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033ecb08,*(undefined8 *)(*plVar5 + 0x40)),
                                                  lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = PTR_DAT_033ee298;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x3d < *unaff_x23) {
                                                      unaff_x19[0x41] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  System_Net_Cache_RequestCachePolicy_TypeInfo;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x3e < *unaff_x23) {
                                                      unaff_x19[0x42] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_UnityEngine_ProBuilder_ArrayUtility_Add<int>__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_ProBuilder_ArrayUtility_Add<int>__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_ProBuilder_ArrayUtility_Add<int>__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  UnityEngine_InputSystem_DefaultInputActions_IPlayerActions_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x3f < *unaff_x23) {
                                                      unaff_x19[0x43] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = Meta_WitAi_MatchIntent_TypeInfo;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)Meta_WitAi_MatchIntent_TypeInfo
                                                           != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Meta_WitAi_MatchIntent_TypeInfo,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_6101;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x40 < *unaff_x23) {
                                                      unaff_x19[0x44] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_Extensions_<>c_<Properties>b__4_0__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Newtonsoft_Json_Linq_Extensions_<>c_<Properties>b__4_0__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Newtonsoft_Json_Linq_Extensions_<>c_<Properties>b__4_0__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = PTR_DAT_033f1cb0;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x41 < *unaff_x23) {
                                                      unaff_x19[0x45] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_8343;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_8343 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_8343,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  UnityEngine_Timeline_ITimeControl_TypeInfo;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x42 < *unaff_x23) {
                                                      unaff_x19[0x46] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_8235;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_8235 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_8235,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension__ctor__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x43 < *unaff_x23) {
                                                      unaff_x19[0x47] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_15__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_15__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_15__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  System_Collections_Generic_Dictionary<ICanvasElement,_int>_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x44 < *unaff_x23) {
                                                      unaff_x19[0x48] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_12680;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x45 < *unaff_x23) {
                                                      unaff_x19[0x49] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<int>>_Dispose__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<int>>_Dispose__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<int>>_Dispose__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationProcessId_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x46 < *unaff_x23) {
                                                      unaff_x19[0x4a] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaResolver_<>c__DisplayClass5_0_<GetSchema>b__0__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x47 < *unaff_x23) {
                                                      unaff_x19[0x4b] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_MedleyBossMemoryGame_<WrongNotePlayedCoroutine>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_MedleyBossMemoryGame_<WrongNotePlayedCoroutine>d__48_System_Collections_IEnumerator_Reset__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_MedleyBossMemoryGame_<WrongNotePlayedCoroutine>d__48_System_Collections_IEnumerator_Reset__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_FullSerializer_fsBaseConverter_DeserializeMember<Keyframe[]>__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x48 < *unaff_x23) {
                                                      unaff_x19[0x4c] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = Method_System_Convert_ToInt64__;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)Method_System_Convert_ToInt64__
                                                           != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Convert_ToInt64__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<long,_FontAsset>_Remove__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x49 < *unaff_x23) {
                                                      unaff_x19[0x4d] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Reflection_Emit_EnumBuilder_get_Assembly__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Reflection_Emit_EnumBuilder_get_Assembly__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Reflection_Emit_EnumBuilder_get_Assembly__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_Universal_Internal_GBufferPass_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x4a < *unaff_x23) {
                                                      unaff_x19[0x4e] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  MetaXRAcousticControlZone_State_TypeInfo;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  MetaXRAcousticControlZone_State_TypeInfo != 0) &&
                                                  (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  MetaXRAcousticControlZone_State_TypeInfo,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_6065;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x4b < *unaff_x23) {
                                                      unaff_x19[0x4f] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_get_Item__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_get_Item__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<RenderChain_RenderNodeData>_get_Item__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_3455;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x4c < *unaff_x23) {
                                                      unaff_x19[0x50] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt32LiftedToNull_TypeInfo
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<EventEntry>_get_Current__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x4d < *unaff_x23) {
                                                      unaff_x19[0x51] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_7670;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_7670 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_7670,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x4e < *unaff_x23) {
                                                      unaff_x19[0x52] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = PTR_DAT_033f5f60;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033f5f60 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033f5f60,*(undefined8 *)(*plVar5 + 0x40)),
                                                  lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  UnityEngine_ProBuilder_Shapes_Torus_TypeInfo;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x4f < *unaff_x23) {
                                                      unaff_x19[0x53] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_7338;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_7338 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_7338,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x50 < *unaff_x23) {
                                                      unaff_x19[0x54] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_5384;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_5384 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_5384,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnFocusLost__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x51 < *unaff_x23) {
                                                      unaff_x19[0x55] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<IXRHoverInteractable>_Dispose__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<IXRHoverInteractable>_Dispose__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<IXRHoverInteractable>_Dispose__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Oculus_Interaction_Locomotion_AnimatedSnapTurnVisuals_<AnimationRoutine>d__25_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x52 < *unaff_x23) {
                                                      unaff_x19[0x56] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = Method_System_Convert_ToUInt64__;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)Method_System_Convert_ToUInt64__
                                                           != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Convert_ToUInt64__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_LinkedList<__Il2CppFullySharedGenericType>_ValidateNewNode__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    if (*(long *)puVar1 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(*(long *)puVar1,
                                                                                 *(undefined8 *)
                                                                                  (*plVar5 + 0x40));
                                                      if (lVar4 == 0) goto LAB_0202ba58;
                                                      uVar7 = *(uint *)(plVar5 + 3);
                                                    }
                                                    if (1 < uVar7) {
                                                      plVar5[5] = *(long *)puVar1;
                                                      lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8
                                                                                          *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  if (0x53 < *unaff_x23) {
                                                    unaff_x19[0x57] = (long)plVar5;
                                                    plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                    puVar2 = 
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    if (*(long *)puVar1 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(*(long *)puVar1,
                                                                                 *(undefined8 *)
                                                                                  (*plVar5 + 0x40));
                                                      if (lVar4 == 0) goto LAB_0202ba58;
                                                      uVar7 = *(uint *)(plVar5 + 3);
                                                    }
                                                    if (1 < uVar7) {
                                                      plVar5[5] = *(long *)puVar1;
                                                      lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8
                                                                                          *)(*
                                                  unaff_x19 + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  if (0x54 < *unaff_x23) {
                                                    unaff_x19[0x58] = (long)plVar5;
                                                    plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_AddComponent<Scrollbar>__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<Scrollbar>__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<Scrollbar>__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyParameterOverride<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType>__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x55 < *unaff_x23) {
                                                      unaff_x19[0x59] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_TypeInfo
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_TypeInfo
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtension_TypeInfo
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_1158;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x56 < *unaff_x23) {
                                                      unaff_x19[0x5a] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_TypeInfo
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_TypeInfo
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_TypeInfo
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_6176;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x57 < *unaff_x23) {
                                                      unaff_x19[0x5b] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_1483;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_1483 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_1483,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<int,_ProbeReferenceVolume_Cell>_Remove__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x58 < *unaff_x23) {
                                                      unaff_x19[0x5c] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_SpaceShipLightAndGlowController_<>c_<DebugLightsOn>b__19_1__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_SpaceShipLightAndGlowController_<>c_<DebugLightsOn>b__19_1__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_SpaceShipLightAndGlowController_<>c_<DebugLightsOn>b__19_1__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = PTR_DAT_033f6540;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x59 < *unaff_x23) {
                                                      unaff_x19[0x5d] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Security_Cryptography_RijndaelManagedTransform_TransformFinalBlock__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Security_Cryptography_RijndaelManagedTransform_TransformFinalBlock__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Security_Cryptography_RijndaelManagedTransform_TransformFinalBlock__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = Method_UnityEngine_Color32_get_Item__;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x5a < *unaff_x23) {
                                                      unaff_x19[0x5e] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>_GetEnumerator__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>_GetEnumerator__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>_GetEnumerator__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x5b < *unaff_x23) {
                                                      unaff_x19[0x5f] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_8211;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_8211 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_8211,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_Remove__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x5c < *unaff_x23) {
                                                      unaff_x19[0x60] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_Unity_Collections_NativeArray<byte>__ctor__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Unity_Collections_NativeArray<byte>__ctor__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Collections_NativeArray<byte>__ctor__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Ritual_<IncorrectSolutionCoroutine>d__21_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x5d < *unaff_x23) {
                                                      unaff_x19[0x61] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Net_Sockets_Socket_Accept__;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Net_Sockets_Socket_Accept__ != 0) &&
                                                  (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Net_Sockets_Socket_Accept__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = PTR_DAT_033f2418;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x5e < *unaff_x23) {
                                                      unaff_x19[0x62] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtsq_f32__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtsq_f32__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrtsq_f32__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__4__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x5f < *unaff_x23) {
                                                      unaff_x19[99] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_7628;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_7628 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_7628,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Meta_Voice_Net_WebSockets_Requests_WitWebSocketMessageRequest_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x60 < *unaff_x23) {
                                                      unaff_x19[100] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = PTR_DAT_033f3830;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)PTR_DAT_033f3830 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033f3830,*(undefined8 *)(*plVar5 + 0x40)),
                                                  lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = System_Data_Common_StringStorage_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x61 < *unaff_x23) {
                                                      unaff_x19[0x65] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_11454;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_11454 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_11454,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_UnityEngine_Component_GetComponentsInChildren<ParticleSystem>__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x62 < *unaff_x23) {
                                                      unaff_x19[0x66] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_3496;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_3496 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_3496,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary<int,_TMP_Style>_TryGetValue__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (99 < *unaff_x23) {
                                                      unaff_x19[0x67] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = System_Nullable<Color>_TypeInfo;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)System_Nullable<Color>_TypeInfo
                                                           != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Nullable<Color>_TypeInfo,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s16__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (100 < *unaff_x23) {
                                                      unaff_x19[0x68] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  System_Reflection_SignatureType_TypeInfo;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Reflection_SignatureType_TypeInfo != 0) &&
                                                  (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Reflection_SignatureType_TypeInfo,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = PTR_DAT_033eb6c8;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x65 < *unaff_x23) {
                                                      unaff_x19[0x69] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  System_Collections_Generic_List<TMP_FontAsset>_TypeInfo
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x66 < *unaff_x23) {
                                                      unaff_x19[0x6a] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_MemoryExtensions_AsSpan<Vector2>__;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_MemoryExtensions_AsSpan<Vector2>__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_MemoryExtensions_AsSpan<Vector2>__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<SimpleTuple<FaceRebuildData,_List<int>>>_MoveNext__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x67 < *unaff_x23) {
                                                      unaff_x19[0x6b] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Field_<PrivateImplementationDetails>_44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Field_<PrivateImplementationDetails>_44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Field_<PrivateImplementationDetails>_44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_14317;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x68 < *unaff_x23) {
                                                      unaff_x19[0x6c] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  System_Resources_ManifestBasedResourceGroveler_TypeInfo
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  System_Resources_ManifestBasedResourceGroveler_TypeInfo
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  System_Resources_ManifestBasedResourceGroveler_TypeInfo
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_5940;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x69 < *unaff_x23) {
                                                      unaff_x19[0x6d] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_4008;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_4008 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_4008,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_Dictionary_Enumerator<Face,_List<SimpleTuple<WingedEdge,_int>>>_Dispose__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x6a < *unaff_x23) {
                                                      unaff_x19[0x6e] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_4678;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_4678 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_4678,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Oculus_Interaction_Surfaces_IBounds_TypeInfo;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x6b < *unaff_x23) {
                                                      unaff_x19[0x6f] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = StringLiteral_2645;
                                                      if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                      if ((*(long *)StringLiteral_2645 != 0) &&
                                                         (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_2645,*(undefined8 *)(*plVar5 + 0x40)
                                                  ), lVar4 == 0)) goto LAB_0202ba58;
                                                  puVar1 = Method_OVRAnchor_FetchAnchorsAsync__;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x6c < *unaff_x23) {
                                                      unaff_x19[0x70] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_UnityEngine_Timeline_TimeUtility_<>c_<ParseTimeCode>b__15_1__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_UnityEngine_Timeline_TimeUtility_<>c_<ParseTimeCode>b__15_1__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Timeline_TimeUtility_<>c_<ParseTimeCode>b__15_1__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_Obi_ObiContactEventDispatcher_Solver_OnCollision__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x6d < *unaff_x23) {
                                                      unaff_x19[0x71] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_Nullable<int>_get_HasValue__;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_Nullable<int>_get_HasValue__ != 0)
                                                  && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Nullable<int>_get_HasValue__,
                                                  *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = StringLiteral_1854;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x6e < *unaff_x23) {
                                                      unaff_x19[0x72] = (long)plVar5;
                                                      plVar5 = (long *)FUN_00da4fb8(*unaff_x25,2);
                                                      puVar2 = 
                                                  Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion__
                                                  ;
                                                  if (plVar5 == (long *)0x0) goto LAB_0202ba64;
                                                  if ((*(long *)
                                                  Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion__
                                                  != 0) && (lVar4 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion__
                                                  ,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                                                  goto LAB_0202ba58;
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<ServicePointScheduler_<RunScheduler>d__32>__
                                                  ;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  if (uVar7 != 0) {
                                                    plVar5[4] = *(long *)puVar2;
                                                    lVar4 = *(long *)puVar1;
                                                    if (lVar4 != 0) {
                                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8
                                                                                         *)(*plVar5 
                                                  + 0x40));
                                                  if (lVar4 == 0) goto LAB_0202ba58;
                                                  uVar7 = *(uint *)(plVar5 + 3);
                                                  }
                                                  if (1 < uVar7) {
                                                    plVar5[5] = *(long *)puVar1;
                                                    lVar4 = thunk_FUN_00d6225c(plVar5,*(undefined8 *
                                                                                       )(*unaff_x19
                                                                                        + 0x40));
                                                    if (lVar4 == 0) goto LAB_0202ba58;
                                                    if (0x6f < *unaff_x23) {
                                                      unaff_x19[0x73] = (long)plVar5;
                                                      puVar2 = 
                                                  Method_UnityEngine_Audio_AudioMixer_TransitionToSnapshot__
                                                  ;
                                                  *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x60) =
                                                       unaff_x19;
                                                  lVar4 = FUN_00da4fb8(*(undefined8 *)puVar2,0x5e);
                                                  FUN_0202ba68(&stack0x000005e0,0x41,0x5a,1,0x20,0);
                                                  if (lVar4 == 0) goto LAB_0202ba64;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x20) = 0;
                                                    *(undefined4 *)(lVar4 + 0x28) = 0;
                                                    FUN_0202ba68(&stack0x000005d0,0xc0,0xde,1,0x20,0
                                                                );
                                                    if (1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x2c) = 0;
                                                      *(undefined4 *)(lVar4 + 0x34) = 0;
                                                      FUN_0202ba68(&stack0x000005c0,0x100,0x12e,2,0,
                                                                   0);
                                                      if (2 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x38) = 0;
                                                        *(undefined4 *)(lVar4 + 0x40) = 0;
                                                        FUN_0202ba68(&stack0x000005b0,0x130,0x130,0,
                                                                     0x69,0);
                                                        if (3 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x44) = 0;
                                                          *(undefined4 *)(lVar4 + 0x4c) = 0;
                                                          FUN_0202ba68(&stack0x000005a0,0x132,0x136,
                                                                       2,0,0);
                                                          if (4 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x50) = 0;
                                                            *(undefined4 *)(lVar4 + 0x58) = 0;
                                                            FUN_0202ba68(&stack0x00000590,0x139,
                                                                         0x147,3,0,0);
                                                            if (5 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x5c) = 0;
                                                              *(undefined4 *)(lVar4 + 100) = 0;
                                                              FUN_0202ba68(&stack0x00000580,0x14a,
                                                                           0x176,2,0,0);
                                                              if (6 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x68) = 0;
                                                                *(undefined4 *)(lVar4 + 0x70) = 0;
                                                                FUN_0202ba68(&stack0x00000570,0x178,
                                                                             0x178,0,0xff,0);
                                                                if (7 < *(uint *)(lVar4 + 0x18)) {
                                                                  *(undefined8 *)(lVar4 + 0x74) = 0;
                                                                  *(undefined4 *)(lVar4 + 0x7c) = 0;
                                                                  FUN_0202ba68(&stack0x00000560,
                                                                               0x179,0x17d,3,0,0);
                                                                  if (8 < *(uint *)(lVar4 + 0x18)) {
                                                                    *(undefined8 *)(lVar4 + 0x80) =
                                                                         0;
                                                                    *(undefined4 *)(lVar4 + 0x88) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000550,
                                                                                 0x181,0x181,0,0x253
                                                                                 ,0);
                                                                    if (9 < *(uint *)(lVar4 + 0x18))
                                                                    {
                                                                      *(undefined8 *)(lVar4 + 0x8c)
                                                                           = 0;
                                                                      *(undefined4 *)(lVar4 + 0x94)
                                                                           = 0;
                                                                      FUN_0202ba68(&stack0x00000540,
                                                                                   0x182,0x184,2,0,0
                                                                                  );
                                                                      if (10 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x98) = 0;
                                                    *(undefined4 *)(lVar4 + 0xa0) = 0;
                                                    FUN_0202ba68(&stack0x00000530,0x186,0x186,0,
                                                                 0x254,0);
                                                    if (0xb < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0xa4) = 0;
                                                      *(undefined4 *)(lVar4 + 0xac) = 0;
                                                      FUN_0202ba68(&stack0x00000520,0x187,0x187,0,
                                                                   0x188,0);
                                                      if (0xc < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0xb0) = 0;
                                                        *(undefined4 *)(lVar4 + 0xb8) = 0;
                                                        FUN_0202ba68(&stack0x00000510,0x189,0x18a,1,
                                                                     0xcd,0);
                                                        if (0xd < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0xbc) = 0;
                                                          *(undefined4 *)(lVar4 + 0xc4) = 0;
                                                          FUN_0202ba68(&stack0x00000500,0x18b,0x18b,
                                                                       0,0x18c,0);
                                                          if (0xe < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 200) = 0;
                                                            *(undefined4 *)(lVar4 + 0xd0) = 0;
                                                            FUN_0202ba68(&stack0x000004f0,0x18e,
                                                                         0x18e,0,0x1dd,0);
                                                            if (0xf < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0xd4) = 0;
                                                              *(undefined4 *)(lVar4 + 0xdc) = 0;
                                                              FUN_0202ba68(&stack0x000004e0,399,399,
                                                                           0,0x259,0);
                                                              if (0x10 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0xe0) = 0;
                                                                *(undefined4 *)(lVar4 + 0xe8) = 0;
                                                                FUN_0202ba68(&stack0x000004d0,400,
                                                                             400,0,0x25b,0);
                                                                if (0x11 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0xec) = 0;
                                                                  *(undefined4 *)(lVar4 + 0xf4) = 0;
                                                                  FUN_0202ba68(&stack0x000004c0,
                                                                               0x191,0x191,0,0x192,0
                                                                              );
                                                                  if (0x12 < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0xf8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar4 + 0x100) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x000004b0,
                                                                                 0x193,0x193,0,0x260
                                                                                 ,0);
                                                                    if (0x13 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x104) = 0;
                                                    *(undefined4 *)(lVar4 + 0x10c) = 0;
                                                    FUN_0202ba68(&stack0x000004a0,0x194,0x194,0,
                                                                 0x263,0);
                                                    if (0x14 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x110) = 0;
                                                      *(undefined4 *)(lVar4 + 0x118) = 0;
                                                      FUN_0202ba68(&stack0x00000490,0x196,0x196,0,
                                                                   0x269,0);
                                                      if (0x15 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x11c) = 0;
                                                        *(undefined4 *)(lVar4 + 0x124) = 0;
                                                        FUN_0202ba68(&stack0x00000480,0x197,0x197,0,
                                                                     0x268,0);
                                                        if (0x16 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x128) = 0;
                                                          *(undefined4 *)(lVar4 + 0x130) = 0;
                                                          FUN_0202ba68(&stack0x00000470,0x198,0x198,
                                                                       0,0x199,0);
                                                          if (0x17 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x134) = 0;
                                                            *(undefined4 *)(lVar4 + 0x13c) = 0;
                                                            FUN_0202ba68(&stack0x00000460,0x19c,
                                                                         0x19c,0,0x26f,0);
                                                            if (0x18 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x140) = 0;
                                                              *(undefined4 *)(lVar4 + 0x148) = 0;
                                                              FUN_0202ba68(&stack0x00000450,0x19d,
                                                                           0x19d,0,0x272,0);
                                                              if (0x19 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x14c) = 0;
                                                                *(undefined4 *)(lVar4 + 0x154) = 0;
                                                                FUN_0202ba68(&stack0x00000440,0x19f,
                                                                             0x19f,0,0x275,0);
                                                                if (0x1a < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x158) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar4 + 0x160) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x00000430,
                                                                               0x1a0,0x1a4,2,0,0);
                                                                  if (0x1b < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x164) =
                                                                         0;
                                                                    *(undefined4 *)(lVar4 + 0x16c) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000420,
                                                                                 0x1a7,0x1a7,0,0x1a8
                                                                                 ,0);
                                                                    if (0x1c < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x170) = 0;
                                                    *(undefined4 *)(lVar4 + 0x178) = 0;
                                                    FUN_0202ba68(&stack0x00000410,0x1a9,0x1a9,0,
                                                                 0x283,0);
                                                    if (0x1d < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x17c) = 0;
                                                      *(undefined4 *)(lVar4 + 0x184) = 0;
                                                      FUN_0202ba68(&stack0x00000400,0x1ac,0x1ac,0,
                                                                   0x1ad,0);
                                                      if (0x1e < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x188) = 0;
                                                        *(undefined4 *)(lVar4 + 400) = 0;
                                                        FUN_0202ba68(&stack0x000003f0,0x1ae,0x1ae,0,
                                                                     0x288,0);
                                                        if (0x1f < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x194) = 0;
                                                          *(undefined4 *)(lVar4 + 0x19c) = 0;
                                                          FUN_0202ba68(&stack0x000003e0,0x1af,0x1af,
                                                                       0,0x1b0,0);
                                                          if (0x20 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x1a0) = 0;
                                                            *(undefined4 *)(lVar4 + 0x1a8) = 0;
                                                            FUN_0202ba68(&stack0x000003d0,0x1b1,
                                                                         0x1b2,1,0xd9,0);
                                                            if (0x21 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x1ac) = 0;
                                                              *(undefined4 *)(lVar4 + 0x1b4) = 0;
                                                              FUN_0202ba68(&stack0x000003c0,0x1b3,
                                                                           0x1b5,3,0,0);
                                                              if (0x22 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x1b8) = 0;
                                                                *(undefined4 *)(lVar4 + 0x1c0) = 0;
                                                                FUN_0202ba68(&stack0x000003b0,0x1b7,
                                                                             0x1b7,0,0x292,0);
                                                                if (0x23 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x1c4) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar4 + 0x1cc) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x000003a0,
                                                                               0x1b8,0x1b8,0,0x1b9,0
                                                                              );
                                                                  if (0x24 < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x1d0) =
                                                                         0;
                                                                    *(undefined4 *)(lVar4 + 0x1d8) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000390,
                                                                                 0x1bc,0x1bc,0,0x1bd
                                                                                 ,0);
                                                                    if (0x25 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x1dc) = 0;
                                                    *(undefined4 *)(lVar4 + 0x1e4) = 0;
                                                    FUN_0202ba68(&stack0x00000380,0x1c4,0x1c5,0,
                                                                 0x1c6,0);
                                                    if (0x26 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x1e8) = 0;
                                                      *(undefined4 *)(lVar4 + 0x1f0) = 0;
                                                      FUN_0202ba68(&stack0x00000370,0x1c7,0x1c8,0,
                                                                   0x1c9,0);
                                                      if (0x27 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 500) = 0;
                                                        *(undefined4 *)(lVar4 + 0x1fc) = 0;
                                                        FUN_0202ba68(&stack0x00000360,0x1ca,0x1cb,0,
                                                                     0x1cc,0);
                                                        if (0x28 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x200) = 0;
                                                          *(undefined4 *)(lVar4 + 0x208) = 0;
                                                          FUN_0202ba68(&stack0x00000350,0x1cd,0x1db,
                                                                       3,0,0);
                                                          if (0x29 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x20c) = 0;
                                                            *(undefined4 *)(lVar4 + 0x214) = 0;
                                                            FUN_0202ba68(&stack0x00000340,0x1de,
                                                                         0x1ee,2,0,0);
                                                            if (0x2a < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x218) = 0;
                                                              *(undefined4 *)(lVar4 + 0x220) = 0;
                                                              FUN_0202ba68(&stack0x00000330,0x1f1,
                                                                           0x1f2,0,499,0);
                                                              if (0x2b < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x224) = 0;
                                                                *(undefined4 *)(lVar4 + 0x22c) = 0;
                                                                FUN_0202ba68(&stack0x00000320,500,
                                                                             500,0,0x1f5,0);
                                                                if (0x2c < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x230) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar4 + 0x238) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x00000310,
                                                                               0x1fa,0x216,2,0,0);
                                                                  if (0x2d < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x23c) =
                                                                         0;
                                                                    *(undefined4 *)(lVar4 + 0x244) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000300,
                                                                                 0x386,0x386,0,0x3ac
                                                                                 ,0);
                                                                    if (0x2e < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x248) = 0;
                                                    *(undefined4 *)(lVar4 + 0x250) = 0;
                                                    FUN_0202ba68(&stack0x000002f0,0x388,0x38a,1,0x25
                                                                 ,0);
                                                    if (0x2f < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x254) = 0;
                                                      *(undefined4 *)(lVar4 + 0x25c) = 0;
                                                      FUN_0202ba68(&stack0x000002e0,0x38c,0x38c,0,
                                                                   0x3cc,0);
                                                      if (0x30 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x260) = 0;
                                                        *(undefined4 *)(lVar4 + 0x268) = 0;
                                                        FUN_0202ba68(&stack0x000002d0,0x38e,0x38f,1,
                                                                     0x3f,0);
                                                        if (0x31 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x26c) = 0;
                                                          *(undefined4 *)(lVar4 + 0x274) = 0;
                                                          FUN_0202ba68(&stack0x000002c0,0x391,0x3ab,
                                                                       1,0x20,0);
                                                          if (0x32 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x278) = 0;
                                                            *(undefined4 *)(lVar4 + 0x280) = 0;
                                                            FUN_0202ba68(&stack0x000002b0,0x3e2,
                                                                         0x3ee,2,0,0);
                                                            if (0x33 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x284) = 0;
                                                              *(undefined4 *)(lVar4 + 0x28c) = 0;
                                                              FUN_0202ba68(&stack0x000002a0,0x401,
                                                                           0x40f,1,0x50,0);
                                                              if (0x34 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x290) = 0;
                                                                *(undefined4 *)(lVar4 + 0x298) = 0;
                                                                FUN_0202ba68(&stack0x00000290,0x410,
                                                                             0x42f,1,0x20,0);
                                                                if (0x35 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x29c) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar4 + 0x2a4) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x00000280,
                                                                               0x460,0x480,2,0,0);
                                                                  if (0x36 < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x2a8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar4 + 0x2b0) =
                                                                         0;
                                                                    FUN_0202ba68(&stack0x00000270,
                                                                                 0x490,0x4be,2,0,0);
                                                                    if (0x37 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x2b4) = 0;
                                                    *(undefined4 *)(lVar4 + 700) = 0;
                                                    FUN_0202ba68(&stack0x00000260,0x4c1,0x4c3,3,0,0)
                                                    ;
                                                    if (0x38 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x2c0) = 0;
                                                      *(undefined4 *)(lVar4 + 0x2c8) = 0;
                                                      FUN_0202ba68(&stack0x00000250,0x4c7,0x4c7,0,
                                                                   0x4c8,0);
                                                      if (0x39 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x2cc) = 0;
                                                        *(undefined4 *)(lVar4 + 0x2d4) = 0;
                                                        FUN_0202ba68(&stack0x00000240,0x4cb,0x4cb,0,
                                                                     0x4cc,0);
                                                        if (0x3a < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x2d8) = 0;
                                                          *(undefined4 *)(lVar4 + 0x2e0) = 0;
                                                          FUN_0202ba68(&stack0x00000230,0x4d0,0x4ea,
                                                                       2,0,0);
                                                          if (0x3b < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x2e4) = 0;
                                                            *(undefined4 *)(lVar4 + 0x2ec) = 0;
                                                            FUN_0202ba68(&stack0x00000220,0x4ee,
                                                                         0x4f4,2,0,0);
                                                            if (0x3c < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x2f0) = 0;
                                                              *(undefined4 *)(lVar4 + 0x2f8) = 0;
                                                              FUN_0202ba68(&stack0x00000210,0x4f8,
                                                                           0x4f8,0,0x4f9,0);
                                                              if (0x3d < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x2fc) = 0;
                                                                *(undefined4 *)(lVar4 + 0x304) = 0;
                                                                FUN_0202ba68(&stack0x00000200,0x531,
                                                                             0x556,1,0x30,0);
                                                                if (0x3e < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x308) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar4 + 0x310) = 0
                                                                  ;
                                                                  FUN_0202ba68(&stack0x000001f0,
                                                                               0x10a0,0x10c5,1,0x30,
                                                                               0);
                                                                  if (0x3f < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x314) =
                                                                         0;
                                                                    *(undefined4 *)(lVar4 + 0x31c) =
                                                                         0;
                                                                    in_stack_000001e8 = 0;
                                                                    in_stack_000001e0 = 0;
                                                                    FUN_0202ba68(&stack0x000001e0,
                                                                                 0x1e00,0x1ef8,2,0,0
                                                                                );
                                                                    if (0x40 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 800) = in_stack_000001e0
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x328) =
                                                         in_stack_000001e8;
                                                    in_stack_000001d8 = 0;
                                                    in_stack_000001d0 = 0;
                                                    FUN_0202ba68(&stack0x000001d0,0x1f08,0x1f0f,1,
                                                                 0xfffffff8,0);
                                                    if (0x41 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x32c) =
                                                           in_stack_000001d0;
                                                      *(undefined4 *)(lVar4 + 0x334) =
                                                           in_stack_000001d8;
                                                      in_stack_000001c8 = 0;
                                                      in_stack_000001c0 = 0;
                                                      FUN_0202ba68(&stack0x000001c0,0x1f18,0x1f1f,1,
                                                                   0xfffffff8,0);
                                                      if (0x42 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x338) =
                                                             in_stack_000001c0;
                                                        *(undefined4 *)(lVar4 + 0x340) =
                                                             in_stack_000001c8;
                                                        in_stack_000001b8 = 0;
                                                        in_stack_000001b0 = 0;
                                                        FUN_0202ba68(&stack0x000001b0,0x1f28,0x1f2f,
                                                                     1,0xfffffff8,0);
                                                        if (0x43 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x344) =
                                                               in_stack_000001b0;
                                                          *(undefined4 *)(lVar4 + 0x34c) =
                                                               in_stack_000001b8;
                                                          in_stack_000001a8 = 0;
                                                          in_stack_000001a0 = 0;
                                                          FUN_0202ba68(&stack0x000001a0,0x1f38,7999,
                                                                       1,0xfffffff8,0);
                                                          if (0x44 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x350) =
                                                                 in_stack_000001a0;
                                                            *(undefined4 *)(lVar4 + 0x358) =
                                                                 in_stack_000001a8;
                                                            in_stack_00000198 = 0;
                                                            in_stack_00000190 = 0;
                                                            FUN_0202ba68(&stack0x00000190,0x1f48,
                                                                         0x1f4d,1,0xfffffff8,0);
                                                            if (0x45 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x35c) =
                                                                   in_stack_00000190;
                                                              *(undefined4 *)(lVar4 + 0x364) =
                                                                   in_stack_00000198;
                                                              in_stack_00000188 = 0;
                                                              in_stack_00000180 = 0;
                                                              FUN_0202ba68(&stack0x00000180,0x1f59,
                                                                           0x1f59,0,0x1f51,0);
                                                              if (0x46 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x368) =
                                                                     in_stack_00000180;
                                                                *(undefined4 *)(lVar4 + 0x370) =
                                                                     in_stack_00000188;
                                                                in_stack_00000178 = 0;
                                                                in_stack_00000170 = 0;
                                                                FUN_0202ba68(&stack0x00000170,0x1f5b
                                                                             ,0x1f5b,0,0x1f53,0);
                                                                if (0x47 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x374) =
                                                                       in_stack_00000170;
                                                                  *(undefined4 *)(lVar4 + 0x37c) =
                                                                       in_stack_00000178;
                                                                  in_stack_00000168 = 0;
                                                                  in_stack_00000160 = 0;
                                                                  FUN_0202ba68(&stack0x00000160,
                                                                               0x1f5d,0x1f5d,0,
                                                                               0x1f55,0);
                                                                  if (0x48 < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x380) =
                                                                         in_stack_00000160;
                                                                    *(undefined4 *)(lVar4 + 0x388) =
                                                                         in_stack_00000168;
                                                                    in_stack_00000158 = 0;
                                                                    in_stack_00000150 = 0;
                                                                    FUN_0202ba68(&stack0x00000150,
                                                                                 0x1f5f,0x1f5f,0,
                                                                                 0x1f57,0);
                                                                    if (0x49 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x38c) =
                                                         in_stack_00000150;
                                                    *(undefined4 *)(lVar4 + 0x394) =
                                                         in_stack_00000158;
                                                    in_stack_00000148 = 0;
                                                    in_stack_00000140 = 0;
                                                    FUN_0202ba68(&stack0x00000140,0x1f68,0x1f6f,1,
                                                                 0xfffffff8,0);
                                                    if (0x4a < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x398) =
                                                           in_stack_00000140;
                                                      *(undefined4 *)(lVar4 + 0x3a0) =
                                                           in_stack_00000148;
                                                      in_stack_00000138 = 0;
                                                      in_stack_00000130 = 0;
                                                      FUN_0202ba68(&stack0x00000130,0x1f88,0x1f8f,1,
                                                                   0xfffffff8,0);
                                                      if (0x4b < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x3a4) =
                                                             in_stack_00000130;
                                                        *(undefined4 *)(lVar4 + 0x3ac) =
                                                             in_stack_00000138;
                                                        in_stack_00000128 = 0;
                                                        in_stack_00000120 = 0;
                                                        FUN_0202ba68(&stack0x00000120,0x1f98,0x1f9f,
                                                                     1,0xfffffff8,0);
                                                        if (0x4c < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x3b0) =
                                                               in_stack_00000120;
                                                          *(undefined4 *)(lVar4 + 0x3b8) =
                                                               in_stack_00000128;
                                                          in_stack_00000118 = 0;
                                                          in_stack_00000110 = 0;
                                                          FUN_0202ba68(&stack0x00000110,0x1fa8,
                                                                       0x1faf,1,0xfffffff8,0);
                                                          if (0x4d < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x3bc) =
                                                                 in_stack_00000110;
                                                            *(undefined4 *)(lVar4 + 0x3c4) =
                                                                 in_stack_00000118;
                                                            in_stack_00000108 = 0;
                                                            in_stack_00000100 = 0;
                                                            FUN_0202ba68(&stack0x00000100,0x1fb8,
                                                                         0x1fb9,1,0xfffffff8,0);
                                                            if (0x4e < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x3c8) =
                                                                   in_stack_00000100;
                                                              *(undefined4 *)(lVar4 + 0x3d0) =
                                                                   in_stack_00000108;
                                                              in_stack_000000f8 = 0;
                                                              in_stack_000000f0 = 0;
                                                              FUN_0202ba68(&stack0x000000f0,0x1fba,
                                                                           0x1fbb,1,0xffffffb6,0);
                                                              if (0x4f < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x3d4) =
                                                                     in_stack_000000f0;
                                                                *(undefined4 *)(lVar4 + 0x3dc) =
                                                                     in_stack_000000f8;
                                                                in_stack_000000e8 = 0;
                                                                in_stack_000000e0 = 0;
                                                                FUN_0202ba68(&stack0x000000e0,0x1fbc
                                                                             ,0x1fbc,0,0x1fb3,0);
                                                                if (0x50 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x3e0) =
                                                                       in_stack_000000e0;
                                                                  *(undefined4 *)(lVar4 + 1000) =
                                                                       in_stack_000000e8;
                                                                  in_stack_000000d8 = 0;
                                                                  in_stack_000000d0 = 0;
                                                                  FUN_0202ba68(&stack0x000000d0,
                                                                               0x1fc8,0x1fcb,1,
                                                                               0xffffffaa,0);
                                                                  if (0x51 < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x3ec) =
                                                                         in_stack_000000d0;
                                                                    *(undefined4 *)(lVar4 + 0x3f4) =
                                                                         in_stack_000000d8;
                                                                    in_stack_000000c8 = 0;
                                                                    in_stack_000000c0 = 0;
                                                                    FUN_0202ba68(&stack0x000000c0,
                                                                                 0x1fcc,0x1fcc,0,
                                                                                 0x1fc3,0);
                                                                    if (0x52 < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x3f8) =
                                                         in_stack_000000c0;
                                                    *(undefined4 *)(lVar4 + 0x400) =
                                                         in_stack_000000c8;
                                                    in_stack_000000b8 = 0;
                                                    in_stack_000000b0 = 0;
                                                    FUN_0202ba68(&stack0x000000b0,0x1fd8,0x1fd9,1,
                                                                 0xfffffff8,0);
                                                    if (0x53 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x404) =
                                                           in_stack_000000b0;
                                                      *(undefined4 *)(lVar4 + 0x40c) =
                                                           in_stack_000000b8;
                                                      in_stack_000000a8 = 0;
                                                      in_stack_000000a0 = 0;
                                                      FUN_0202ba68(&stack0x000000a0,0x1fda,0x1fdb,1,
                                                                   0xffffff9c,0);
                                                      if (0x54 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x410) =
                                                             in_stack_000000a0;
                                                        *(undefined4 *)(lVar4 + 0x418) =
                                                             in_stack_000000a8;
                                                        in_stack_00000098 = 0;
                                                        in_stack_00000090 = 0;
                                                        FUN_0202ba68(&stack0x00000090,0x1fe8,0x1fe9,
                                                                     1,0xfffffff8,0);
                                                        if (0x55 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x41c) =
                                                               in_stack_00000090;
                                                          *(undefined4 *)(lVar4 + 0x424) =
                                                               in_stack_00000098;
                                                          in_stack_00000088 = 0;
                                                          in_stack_00000080 = 0;
                                                          FUN_0202ba68(&stack0x00000080,0x1fea,
                                                                       0x1feb,1,0xffffff90,0);
                                                          if (0x56 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x428) =
                                                                 in_stack_00000080;
                                                            *(undefined4 *)(lVar4 + 0x430) =
                                                                 in_stack_00000088;
                                                            in_stack_00000078 = 0;
                                                            in_stack_00000070 = 0;
                                                            FUN_0202ba68(&stack0x00000070,0x1fec,
                                                                         0x1fec,0,0x1fe5,0);
                                                            if (0x57 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x434) =
                                                                   in_stack_00000070;
                                                              *(undefined4 *)(lVar4 + 0x43c) =
                                                                   in_stack_00000078;
                                                              in_stack_00000068 = 0;
                                                              in_stack_00000060 = 0;
                                                              FUN_0202ba68(&stack0x00000060,0x1ff8,
                                                                           0x1ff9,1,0xffffff80,0);
                                                              if (0x58 < *(uint *)(lVar4 + 0x18)) {
                                                                *(undefined8 *)(lVar4 + 0x440) =
                                                                     in_stack_00000060;
                                                                *(undefined4 *)(lVar4 + 0x448) =
                                                                     in_stack_00000068;
                                                                in_stack_00000058 = 0;
                                                                in_stack_00000050 = 0;
                                                                FUN_0202ba68(&stack0x00000050,0x1ffa
                                                                             ,0x1ffb,1,0xffffff82,0)
                                                                ;
                                                                if (0x59 < *(uint *)(lVar4 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar4 + 0x44c) =
                                                                       in_stack_00000050;
                                                                  *(undefined4 *)(lVar4 + 0x454) =
                                                                       in_stack_00000058;
                                                                  in_stack_00000048 = 0;
                                                                  in_stack_00000040 = 0;
                                                                  FUN_0202ba68(&stack0x00000040,
                                                                               0x1ffc,0x1ffc,0,
                                                                               0x1ff3,0);
                                                                  if (0x5a < *(uint *)(lVar4 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar4 + 0x458) =
                                                                         in_stack_00000040;
                                                                    *(undefined4 *)(lVar4 + 0x460) =
                                                                         in_stack_00000048;
                                                                    in_stack_00000038 = 0;
                                                                    in_stack_00000030 = 0;
                                                                    FUN_0202ba68(&stack0x00000030,
                                                                                 0x2160,0x216f,1,
                                                                                 0x10,0);
                                                                    if (0x5b < *(uint *)(lVar4 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x464) =
                                                         in_stack_00000030;
                                                    *(undefined4 *)(lVar4 + 0x46c) =
                                                         in_stack_00000038;
                                                    in_stack_00000028 = 0;
                                                    in_stack_00000020 = 0;
                                                    FUN_0202ba68(&stack0x00000020,0x24b6,0x24d0,1,
                                                                 0x1a,0);
                                                    if (0x5c < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x470) =
                                                           in_stack_00000020;
                                                      *(undefined4 *)(lVar4 + 0x478) =
                                                           in_stack_00000028;
                                                      in_stack_00000018 = 0;
                                                      in_stack_00000010 = 0;
                                                      FUN_0202ba68(&stack0x00000010,0xff21,0xff3a,1,
                                                                   0x20,0);
                                                      if (0x5d < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x47c) =
                                                             in_stack_00000010;
                                                        *(undefined4 *)(lVar4 + 0x484) =
                                                             in_stack_00000018;
                                                        *(long *)(*(long *)(*unaff_x24 + 0xb8) +
                                                                 0x68) = lVar4;
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
  FUN_00da5194();
}


