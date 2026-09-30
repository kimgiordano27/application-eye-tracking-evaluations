/*
FUNCTION_NAME: System.ReadOnlySpan<__Il2CppFullySharedGenericType>$$Slice
ENTRY_POINT: 0128895c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<__Il2CppFullySharedGenericType>__Slice(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x21;
  long *unaff_x26;
  undefined8 in_stack_00000020;
  
  lVar1 = FUN_01c25128();
  if (lVar1 != 0) {
    lVar1 = FUN_01c254c8(lVar1,0);
    uVar2 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    plVar3 = (long *)FUN_00da4fb8(uVar2,10);
    if (plVar3 != (long *)0x0) {
      lVar4 = thunk_FUN_00d48444(
                                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider,_XRPointCloud,_ARPointCloud>_OnEnable__
                                );
                    /* try { // try from 0128899c to 01388a13 has its CatchHandler @ 01288f14 */
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_012892f0:
        uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar2,0);
      }
      lVar4 = thunk_FUN_00d48444(
                                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider,_XRPointCloud,_ARPointCloud>_OnEnable__
                                );
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar4;
        lVar4 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar4 = FUN_01c4b4e0();
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_012892f0;
        if (1 < *(uint *)(plVar3 + 3)) {
          plVar3[5] = lVar4;
          lVar4 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    );
                    /* try { // try from 01288a30 to 01388a77 has its CatchHandler @ 01288f18 */
          if ((lVar4 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_012892f0;
          lVar4 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    );
          if (2 < *(uint *)(plVar3 + 3)) {
            plVar3[6] = lVar4;
            lVar4 = FUN_01c5f128();
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_012892f0;
            if (3 < *(uint *)(plVar3 + 3)) {
              plVar3[7] = lVar4;
              lVar4 = thunk_FUN_00d48444(
                                        Method_System_Collections_Generic_List<IEventBinding>_Remove__
                                        );
              if ((lVar4 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_012892f0;
              lVar4 = thunk_FUN_00d48444(
                                        Method_System_Collections_Generic_List<IEventBinding>_Remove__
                                        );
              if (4 < *(uint *)(plVar3 + 3)) {
                plVar3[8] = lVar4;
                lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_00d5941c();
                }
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_00d5941c();
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
                uVar2 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
                if (lVar4 == 0) {
                  lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
                  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    lVar4 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xc0) + 0x48);
                  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    lVar4 = FUN_00d5941c();
                  }
                  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                  thunk_FUN_00d48444(
                                    Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__
                                    );
                  lVar4 = thunk_FUN_00d62348();
                  if (lVar4 == 0) goto LAB_012892e8;
                  FUN_012d239c(lVar4,uVar6,*(undefined8 *)(*(long *)(*unaff_x21 + 0xc0) + 0x58),0);
                  lVar8 = *(long *)(*unaff_x21 + 0xc0);
                  lVar5 = *(long *)(lVar8 + 0x48);
                  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                    lVar5 = FUN_00d5941c();
                    lVar8 = *(long *)(*unaff_x21 + 0xc0);
                  }
                  *(long *)(*(long *)(lVar5 + 0xb8) + 0x10) = lVar4;
                  if ((*(byte *)(*(long *)(lVar8 + 0x48) + 0x132) & 1) == 0) {
                    FUN_00d5941c();
                  }
                }
                else {
                  uVar2 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
                }
                uVar6 = thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
                uVar6 = FUN_010dcdb8(in_stack_00000020,lVar4,uVar6);
                uVar7 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
                uVar6 = FUN_010df6b8(uVar6,uVar7);
                lVar4 = FUN_01600f98(uVar2,uVar6,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_012892f0;
                if (5 < *(uint *)(plVar3 + 3)) {
                  plVar3[9] = lVar4;
                  lVar4 = thunk_FUN_00d48444(
                                            Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                            );
                  if ((lVar4 != 0) &&
                     (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)
                     ) goto LAB_012892f0;
                  lVar4 = thunk_FUN_00d48444(
                                            Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                            );
                  if (6 < *(uint *)(plVar3 + 3)) {
                    plVar3[10] = lVar4;
                    if (unaff_x26 == (long *)0x0) goto LAB_012892e8;
                    uVar2 = FUN_017a9c58();
                    lVar4 = thunk_FUN_00d48444(
                                              Method_System_Collections_Generic_List<Collider>_Clear__
                                              );
                    if (*(int *)(lVar4 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar4 = FUN_01c4b4e0(uVar2,0);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                       lVar5 == 0)) goto LAB_012892f0;
                    if (7 < *(uint *)(plVar3 + 3)) {
                      plVar3[0xb] = lVar4;
                      lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
                      if ((lVar4 != 0) &&
                         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar4 == 0)) goto LAB_012892f0;
                      lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
                      if (8 < *(uint *)(plVar3 + 3)) {
                        plVar3[0xc] = lVar4;
                        lVar4 = (**(code **)(*unaff_x26 + 0x188))();
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_012892f0;
                        if (9 < *(uint *)(plVar3 + 3)) {
                          plVar3[0xd] = lVar4;
                          uVar2 = FUN_01600844(plVar3,0);
                          if (lVar1 != 0) {
                            FUN_01c25764(lVar1,uVar2,0);
                            return;
                          }
                          goto LAB_012892e8;
                        }
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
  }
LAB_012892e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


