/*
FUNCTION_NAME: FUN_01e6f290
ENTRY_POINT: 01e6f290
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_9;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_7
*/


void FUN_01e6f290(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  if ((DAT_0377fdb6 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ee168);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
                    /* try { // try from 01e6f2dc to 01f6f2df has its CatchHandler @ 01e742c4 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__);
                    /* try { // try from 01e6f2e0 to 01f6f2eb has its CatchHandler @ 01e74370 */
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
                    /* try { // try from 01e6f2f0 to 01f6f2fb has its CatchHandler @ 01e7431c */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
                    /* try { // try from 01e6f304 to 01f6f30f has its CatchHandler @ 01e74318 */
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_Processors_CompensateDirectionProcessor_var);
                    /* try { // try from 01e6f324 to 01f6f327 has its CatchHandler @ 01e74218 */
    thunk_FUN_00d48444(PTR_DAT_033ef038);
                    /* try { // try from 01e6f328 to 01f6f33f has its CatchHandler @ 01e74310 */
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_LoadAssembliesAsync__);
    thunk_FUN_00d48444(Method_System_Tuple_Create<TaskCompletionSource<int>,_Memory<byte>,_byte[]>__
                      );
    thunk_FUN_00d48444(StringLiteral_11739);
    thunk_FUN_00d48444(StringLiteral_5138);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateISerializable__
                      );
                    /* try { // try from 01e6f368 to 01f6f36b has its CatchHandler @ 01e7438c */
                    /* try { // try from 01e6f36c to 01f6f377 has its CatchHandler @ 01e7418c */
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster_RaycastHitComparer_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_set_Item__);
                    /* try { // try from 01e6f380 to 01f6f38b has its CatchHandler @ 01e74180 */
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_SetException__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass33_0_<DOValue>b__0__);
    thunk_FUN_00d48444(PTR_DAT_033f0ce8);
    DAT_0377fdb6 = 1;
  }
  if ((param_2 != 0) && (lVar13 = *(long *)(param_2 + 0x10), lVar13 != 0)) {
    lVar14 = *(long *)(lVar13 + 0x48);
                    /* try { // try from 01e6f3bc to 01f6f3e7 has its CatchHandler @ 01e740a0 */
    uVar5 = FUN_01e7379c(lVar13);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    FUN_01e70cac(param_1,uVar5);
    puVar2 = PTR_DAT_033ee168;
    if (lVar14 != 0) {
      if (*(char *)(lVar14 + 0x7b) != '\0') {
                    /* try { // try from 01e6f3e8 to 01f6f3f7 has its CatchHandler @ 01e73ce4 */
                    /* try { // try from 01e6f400 to 01f6f40b has its CatchHandler @ 01e73ca0 */
                    /* try { // try from 01e6f40c to 01f6f417 has its CatchHandler @ 01e73c50 */
        FUN_01fad540(param_1,*(undefined8 *)
                              UnityEngine_InputSystem_Processors_CompensateDirectionProcessor_var,
                     lVar13,1,0);
        return;
      }
      *(undefined1 *)(lVar14 + 0x7b) = 1;
      lVar15 = *(long *)(param_2 + 0x18);
                    /* try { // try from 01e6f428 to 01f6f433 has its CatchHandler @ 01e73c14 */
      plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (plVar6 != (long *)0x0) {
        FUN_01743c34(plVar6,0);
        FUN_01e73830(param_1,lVar14,plVar6);
        if (lVar15 != 0) {
          lVar17 = *(long *)(lVar15 + 0x48);
          if (lVar17 == 0) {
            lVar17 = **(long **)(*(long *)
                                  System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                + 0xb8);
          }
          plVar16 = *(long **)(lVar13 + 0x68);
          if (plVar16 != (long *)0x0) {
            iVar3 = FUN_0173d2f4(plVar16,0);
            puVar2 = Method_System_Collections_Generic_Dictionary<string,_CIELabColor>__ctor__;
            if (0 < iVar3) {
              iVar3 = 0;
              do {
                lVar7 = (**(code **)(*plVar16 + 0x308))
                                  (plVar16,iVar3,*(undefined8 *)(*plVar16 + 0x310));
                if (lVar7 == 0) goto LAB_01e6fd38;
                *(long *)(lVar7 + 0x28) = lVar13;
                plVar8 = (long *)(**(code **)(*plVar16 + 0x308))
                                           (plVar16,iVar3,*(undefined8 *)(*plVar16 + 0x310));
                if (plVar8 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)
                                     Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                                   + 300);
                  if ((*(byte *)(*plVar8 + 300) < bVar1) ||
                     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)
                       Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                     )) goto LAB_01e6f50c;
                  FUN_01e732f0(param_1,plVar8);
                  lVar7 = plVar8[0xd];
                  if (lVar7 != 0) {
                    *(long *)(lVar7 + 0x18) = lVar17;
                    if (*(long *)(lVar13 + 0x80) != 0) {
                      lVar7 = FUN_01ec1550(*(long *)(lVar13 + 0x80),lVar7,0);
                      puVar12 = (undefined8 *)StringLiteral_5138;
                      if (lVar7 != 0) goto LAB_01e6f7d0;
                      FUN_01fac898(param_1,*(undefined8 *)(lVar13 + 0x80),plVar8[0xd],plVar8,0);
                      if (*(long *)(lVar15 + 0xa0) != 0) {
                        plVar9 = (long *)FUN_01ec1550(*(long *)(lVar15 + 0xa0),plVar8[0xd],0);
                        if (plVar9 == (long *)0x0) {
                          FUN_01e7379c();
LAB_01e6faf8:
                          plVar9 = (long *)plVar8[0xd];
                          if (plVar9 != (long *)0x0) {
                            uVar5 = (**(code **)(*plVar9 + 0x168))
                                              (plVar9,*(undefined8 *)(*plVar9 + 0x170));
                            uVar11 = *(undefined8 *)
                                      Method_System_Tuple_Create<TaskCompletionSource<int>,_Memory<byte>,_byte[]>__
                            ;
                            puVar12 = (undefined8 *)PTR_DAT_033ef038;
LAB_01e6fb20:
                            FUN_01fad238(param_1,uVar11,*puVar12,uVar5,plVar8,0);
                            goto LAB_01e6fb38;
                          }
                        }
                        else {
                          bVar1 = *(byte *)(*(long *)
                                             Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                                           + 300);
                          if ((*(byte *)(*plVar9 + 300) < bVar1) ||
                             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                              *(long *)
                               Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>__ctor__
                             )) goto LAB_01e6fd54;
                          lVar7 = FUN_01e7379c(plVar9);
                          if ((lVar7 != lVar14) &&
                             (uVar10 = (**(code **)(*plVar6 + 0x348))
                                                 (plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x350)),
                             (uVar10 & 1) == 0)) goto LAB_01e6faf8;
                          plVar8[0xe] = (long)plVar9;
                          if (*(long *)(lVar15 + 0xa0) != 0) {
                            FUN_01ec1088(*(long *)(lVar15 + 0xa0),plVar8[0xd],plVar8,0);
                            FUN_01e7395c(param_1,plVar8);
                            goto LAB_01e6fb38;
                          }
                        }
                      }
                    }
                  }
                  goto LAB_01e6fd38;
                }
LAB_01e6f50c:
                plVar9 = (long *)(**(code **)(*plVar16 + 0x308))
                                           (plVar16,iVar3,*(undefined8 *)(*plVar16 + 0x310));
                if (plVar9 == (long *)0x0) {
LAB_01e6f540:
                  plVar9 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*(long *)puVar2 + 300);
                  if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_01e6f540;
                  if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2
                     ) {
                    plVar9 = (long *)0x0;
                  }
                }
                plVar8 = (long *)(**(code **)(*plVar16 + 0x308))
                                           (plVar16,iVar3,*(undefined8 *)(*plVar16 + 0x310));
                if (plVar9 == (long *)0x0) {
                  if (plVar8 == (long *)0x0) {
LAB_01e6f608:
                    plVar9 = (long *)0x0;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__
                                     + 300);
                    if (*(byte *)(*plVar8 + 300) < bVar1) goto LAB_01e6f608;
                    plVar9 = plVar8;
                    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__) {
                      plVar9 = (long *)0x0;
                    }
                  }
                  plVar8 = (long *)(**(code **)(*plVar16 + 0x308))
                                             (plVar16,iVar3,*(undefined8 *)(*plVar16 + 0x310));
                  if (plVar9 != (long *)0x0) {
                    if (plVar8 == (long *)0x0) {
                      FUN_01e722e0(param_1,0,0);
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__
                                     + 300);
                    if ((*(byte *)(*plVar8 + 300) < bVar1) ||
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
LAB_01e6fd3c:
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(plVar8);
                    }
                    FUN_01e722e0(param_1,plVar8,0);
                    lVar7 = FUN_01eca598(plVar8,0);
                    if (lVar7 != 0) {
                      *(long *)(lVar7 + 0x18) = lVar17;
                      lVar7 = *(long *)(lVar13 + 0x78);
                      uVar5 = FUN_01eca598(plVar8,0);
                      if (lVar7 != 0) {
                        lVar7 = FUN_01ec1550(lVar7,uVar5,0);
                        puVar12 = (undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<GCHandle>_set_Item__
                        ;
                        if (lVar7 != 0) goto LAB_01e6f7d0;
                        uVar11 = *(undefined8 *)(lVar13 + 0x78);
                        uVar5 = FUN_01eca598(plVar8,0);
                        FUN_01fac898(param_1,uVar11,uVar5,plVar8,0);
                        lVar7 = FUN_01eb80b0(lVar15,0);
                        uVar5 = FUN_01eca598(plVar8,0);
                        if (lVar7 != 0) {
                          plVar9 = (long *)FUN_01ec1550(lVar7,uVar5,0);
                          if (plVar9 == (long *)0x0) {
                            FUN_01e7379c();
                          }
                          else {
                            bVar1 = *(byte *)(*(long *)
                                               Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                                             + 300);
                            if ((*(byte *)(*plVar9 + 300) < bVar1) ||
                               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                                *(long *)
                                 Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                               )) {
LAB_01e6fd54:
                    /* WARNING: Subroutine does not return */
                              FUN_00da544c(plVar9);
                            }
                            lVar7 = FUN_01e7379c(plVar9);
                            if ((lVar7 == lVar14) ||
                               (uVar10 = (**(code **)(*plVar6 + 0x348))
                                                   (plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x350)),
                               (uVar10 & 1) != 0)) {
                              bVar1 = *(byte *)(*(long *)
                                                 Method_OVRPassthroughLayer_SetColorMapMonochromatic__
                                               + 300);
                              puVar12 = (undefined8 *)
                                        Method_Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_LoadAssembliesAsync__
                              ;
                              if ((*(byte *)(*plVar9 + 300) < bVar1) ||
                                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                                  *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__))
                              goto LAB_01e6f7d0;
                              plVar8[0x11] = (long)plVar9;
                              lVar7 = FUN_01eb80b0(lVar15,0);
                              uVar5 = FUN_01eca598(plVar8,0);
                              if (lVar7 != 0) {
                                FUN_01ec1088(lVar7,uVar5,plVar8,0);
                                FUN_01e73b54(param_1,plVar8);
                                goto LAB_01e6fb38;
                              }
                              goto LAB_01e6fd38;
                            }
                          }
                          plVar9 = (long *)FUN_01eca598(plVar8,0);
                          if (plVar9 != (long *)0x0) {
                            uVar5 = (**(code **)(*plVar9 + 0x168))
                                              (plVar9,*(undefined8 *)(*plVar9 + 0x170));
                            uVar11 = *(undefined8 *)
                                      Method_System_Tuple_Create<TaskCompletionSource<int>,_Memory<byte>,_byte[]>__
                            ;
                            puVar12 = (undefined8 *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass33_0_<DOValue>b__0__
                            ;
                            goto LAB_01e6fb20;
                          }
                        }
                      }
                    }
                    goto LAB_01e6fd38;
                  }
                  if (plVar8 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
                    if ((bVar1 <= *(byte *)(*plVar8 + 300)) &&
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
                        *(long *)PTR_DAT_033f19d8)) {
                      plVar8 = (long *)(**(code **)(*plVar16 + 0x308))
                                                 (plVar16,iVar3,*(undefined8 *)(*plVar16 + 0x310));
                      if (plVar8 == (long *)0x0) {
                        FUN_01e72b18(param_1,0,0);
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      bVar1 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
                      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)PTR_DAT_033f19d8)) goto LAB_01e6fd3c;
                      FUN_01e72b18(param_1,plVar8,0);
                      lVar7 = FUN_01eca598(plVar8,0);
                      if (lVar7 != 0) {
                        *(long *)(lVar7 + 0x18) = lVar17;
                        lVar7 = *(long *)(lVar13 + 0x78);
                        uVar5 = FUN_01eca598(plVar8,0);
                        if (lVar7 != 0) {
                          lVar7 = FUN_01ec1550(lVar7,uVar5,0);
                          puVar12 = (undefined8 *)
                                    Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateISerializable__
                          ;
                          if (lVar7 != 0) goto LAB_01e6f7d0;
                          uVar11 = *(undefined8 *)(lVar13 + 0x78);
                          uVar5 = FUN_01eca598(plVar8,0);
                          FUN_01fac898(param_1,uVar11,uVar5,plVar8,0);
                          lVar7 = FUN_01eb80b0(lVar15,0);
                          uVar5 = FUN_01eca598(plVar8,0);
                          if (lVar7 != 0) {
                            plVar9 = (long *)FUN_01ec1550(lVar7,uVar5,0);
                            if (plVar9 == (long *)0x0) {
                              FUN_01e7379c();
                            }
                            else {
                              bVar1 = *(byte *)(*(long *)
                                                 Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                                               + 300);
                              if ((*(byte *)(*plVar9 + 300) < bVar1) ||
                                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                                  *(long *)
                                   Method_Oculus_Interaction_Locomotion_TeleportProceduralArcVisual_HandleInteractorPostProcessed__
                                 )) goto LAB_01e6fd54;
                              lVar7 = FUN_01e7379c(plVar9);
                              if ((lVar7 == lVar14) ||
                                 (uVar10 = (**(code **)(*plVar6 + 0x348))
                                                     (plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x350))
                                 , (uVar10 & 1) != 0)) {
                                bVar1 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
                                puVar12 = (undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster_RaycastHitComparer_TypeInfo
                                ;
                                if ((*(byte *)(*plVar9 + 300) < bVar1) ||
                                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                                    *(long *)PTR_DAT_033f19d8)) goto LAB_01e6f7d0;
                                plVar8[0x11] = (long)plVar9;
                                lVar7 = FUN_01eb80b0(lVar15,0);
                                uVar5 = FUN_01eca598(plVar8,0);
                                if (lVar7 != 0) {
                                  FUN_01ec1088(lVar7,uVar5,plVar8,0);
                                  FUN_01e73e68(param_1,plVar8);
                                  goto LAB_01e6fb38;
                                }
                                goto LAB_01e6fd38;
                              }
                            }
                            plVar9 = (long *)FUN_01eca598(plVar8,0);
                            if (plVar9 != (long *)0x0) {
                              uVar5 = (**(code **)(*plVar9 + 0x168))
                                                (plVar9,*(undefined8 *)(*plVar9 + 0x170));
                              uVar11 = *(undefined8 *)
                                        Method_System_Tuple_Create<TaskCompletionSource<int>,_Memory<byte>,_byte[]>__
                              ;
                              puVar12 = (undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_SetException__
                              ;
                              goto LAB_01e6fb20;
                            }
                          }
                        }
                      }
                      goto LAB_01e6fd38;
                    }
                  }
                }
                else {
                  if (plVar8 == (long *)0x0) {
                    FUN_01e721e4(param_1,0);
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  bVar1 = *(byte *)(*(long *)puVar2 + 300);
                  if ((*(byte *)(*plVar8 + 300) < bVar1) ||
                     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2
                     )) goto LAB_01e6fd3c;
                  FUN_01e721e4(param_1,plVar8);
                  lVar7 = plVar8[0xd];
                  if (lVar7 == 0) goto LAB_01e6fd38;
                  *(long *)(lVar7 + 0x18) = lVar17;
                  if (*(long *)(lVar13 + 0x70) == 0) goto LAB_01e6fd38;
                  lVar7 = FUN_01ec1550(*(long *)(lVar13 + 0x70),lVar7,0);
                  puVar12 = (undefined8 *)PTR_DAT_033f0ce8;
                  if (lVar7 == 0) {
                    FUN_01fac898(param_1,*(undefined8 *)(lVar13 + 0x70),plVar8[0xd],plVar8,0);
                    lVar7 = FUN_01eb8044(lVar15,0);
                    if (lVar7 != 0) {
                      plVar9 = (long *)FUN_01ec1550(lVar7,plVar8[0xd],0);
                      if (plVar9 == (long *)0x0) {
                        FUN_01e7379c();
                      }
                      else {
                        bVar1 = *(byte *)(*(long *)puVar2 + 300);
                        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
                           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)puVar2)) goto LAB_01e6fd54;
                        lVar7 = FUN_01e7379c(plVar9);
                        if ((lVar7 == lVar14) ||
                           (uVar10 = (**(code **)(*plVar6 + 0x348))
                                               (plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x350)),
                           (uVar10 & 1) != 0)) {
                          plVar8[0xe] = (long)plVar9;
                          lVar7 = FUN_01eb8044(lVar15,0);
                          if (lVar7 != 0) {
                            FUN_01ec1088(lVar7,plVar8[0xd],plVar8,0);
                            FUN_01e739fc(param_1,plVar8);
                            goto LAB_01e6fb38;
                          }
                          goto LAB_01e6fd38;
                        }
                      }
                      plVar9 = (long *)plVar8[0xd];
                      if (plVar9 != (long *)0x0) {
                        uVar5 = (**(code **)(*plVar9 + 0x168))
                                          (plVar9,*(undefined8 *)(*plVar9 + 0x170));
                        uVar11 = *(undefined8 *)
                                  Method_System_Tuple_Create<TaskCompletionSource<int>,_Memory<byte>,_byte[]>__
                        ;
                        puVar12 = (undefined8 *)StringLiteral_11739;
                        goto LAB_01e6fb20;
                      }
                    }
                    goto LAB_01e6fd38;
                  }
LAB_01e6f7d0:
                  FUN_01fad0ec(param_1,*puVar12,plVar8,0);
                }
LAB_01e6fb38:
                iVar3 = iVar3 + 1;
                iVar4 = FUN_0173d2f4(plVar16,0);
              } while (iVar3 < iVar4);
            }
            return;
          }
        }
      }
    }
  }
LAB_01e6fd38:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


