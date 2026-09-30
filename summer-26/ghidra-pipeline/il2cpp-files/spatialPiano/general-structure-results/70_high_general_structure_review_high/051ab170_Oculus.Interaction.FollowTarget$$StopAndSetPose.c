/*
FUNCTION_NAME: Oculus.Interaction.FollowTarget$$StopAndSetPose
ENTRY_POINT: 051ab170
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_FollowTarget__StopAndSetPose(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  lVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>
                    (param_1);
  lVar5 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>
                    (*unaff_x23,1,*unaff_x19,*unaff_x21);
  plVar6 = (long *)FUN_050e4454(*unaff_x22,0);
  lVar7 = FUN_02f0880c(*unaff_x25,1);
  if (lVar7 == 0) goto LAB_051ab4dc;
  if ((unaff_x20 != 0) && (lVar8 = thunk_FUN_02f45174(), lVar8 == 0)) goto LAB_051ab4e0;
  if (*(int *)(lVar7 + 0x18) == 0) goto LAB_051ab4d8;
  *(long *)(lVar7 + 0x20) = unaff_x20;
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x938))(plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x940));
    plVar6 = (long *)FUN_02f0880c(*unaff_x25,4);
    if (plVar6 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_051ab4e0:
        uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar10,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar4;
        lVar8 = FUN_050e4454(*(long *)(unaff_x24 + 0x90) + 0x20,0);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
        goto LAB_051ab4e0;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
          plVar6[5] = lVar8;
          lVar8 = FUN_050e4454(*(long *)(unaff_x24 + 0xe0) + 0x20,0);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
          goto LAB_051ab4e0;
          uVar11 = plVar6[3];
          if (2 < (uint)uVar11) {
            plVar6[6] = lVar8;
            if (lVar7 != 0) {
              lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40));
              if (lVar8 == 0) goto LAB_051ab4e0;
              uVar11 = plVar6[3];
            }
            if ((uVar11 & 0xfffffffc) != 0) {
              plVar6[7] = lVar7;
              puVar1 = PTR_DAT_067ca198;
              if (lVar5 != 0) {
                uVar10 = FUN_050ef718(lVar5,*(undefined8 *)System_Func<DropEventArgs>_TypeInfo,
                                      plVar6,0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)puVar1);
                }
                plVar6 = (long *)FUN_051ddd38(0);
                puVar2 = System_Func<BlurEvent>_TypeInfo;
                puVar1 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IDragHandler>_TypeInfo
                ;
                if (plVar6 != (long *)0x0) {
                  lVar8 = thunk_FUN_02f2742c(*(undefined8 *)
                                              (*plVar6 + (ulong)*(ushort *)
                                                                 (*(long *)
                                                  UnityEngine_EventSystems_ExecuteEvents_EventFunction<IDragHandler>_TypeInfo
                                                  + 0x50) * 0x10 + 0x140));
                  uVar10 = (**(code **)(lVar8 + 8))(plVar6,uVar10,lVar8);
                  uVar12 = *unaff_x25;
                  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar10;
                  plVar6 = (long *)FUN_02f0880c(uVar12,4);
                  if (plVar6 != (long *)0x0) {
                    if ((lVar4 != 0) &&
                       (lVar8 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar8 == 0)) goto LAB_051ab4e0;
                    if ((int)plVar6[3] != 0) {
                      plVar6[4] = lVar4;
                      lVar4 = FUN_050e4454(*(long *)(unaff_x24 + 0x90) + 0x20,0);
                      if ((lVar4 != 0) &&
                         (lVar8 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_051ab4e0;
                      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                        plVar6[5] = lVar4;
                        lVar4 = FUN_050e4454(*(long *)(unaff_x24 + 0xe0) + 0x20,0);
                        if ((lVar4 != 0) &&
                           (lVar8 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_051ab4e0;
                        uVar11 = plVar6[3];
                        if (2 < (uint)uVar11) {
                          plVar6[6] = lVar4;
                          if (lVar7 != 0) {
                            lVar4 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40));
                            if (lVar4 == 0) goto LAB_051ab4e0;
                            uVar11 = plVar6[3];
                          }
                          puVar3 = System_Func<DebugManager>_TypeInfo;
                          if ((uVar11 & 0xfffffffc) != 0) {
                            plVar6[7] = lVar7;
                            uVar10 = FUN_050ef718(lVar5,*(undefined8 *)puVar3,plVar6,0);
                            plVar6 = (long *)FUN_051ddd38(0);
                            if (plVar6 != (long *)0x0) {
                              lVar4 = thunk_FUN_02f2742c(*(undefined8 *)
                                                          (*plVar6 + (ulong)*(ushort *)
                                                                             (*(long *)puVar1 + 0x50
                                                                             ) * 0x10 + 0x140));
                              uVar10 = (**(code **)(lVar4 + 8))(plVar6,uVar10,lVar4);
                              *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar10;
                              return;
                            }
                            goto LAB_051ab4dc;
                          }
                        }
                      }
                    }
                    goto LAB_051ab4d8;
                  }
                }
              }
              goto LAB_051ab4dc;
            }
          }
        }
      }
LAB_051ab4d8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
LAB_051ab4dc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


