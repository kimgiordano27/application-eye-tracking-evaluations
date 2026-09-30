/*
FUNCTION_NAME: DigitalOpus.MB.Core.DRect$$ToString
ENTRY_POINT: 0133182c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void DigitalOpus_MB_Core_DRect__ToString(void)

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
  long *in_stack_00000020;
  
  lVar1 = FUN_01c25128();
  if (lVar1 != 0) {
    lVar1 = FUN_01c254c8(lVar1,0);
    uVar2 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    plVar3 = (long *)FUN_00da4fb8(uVar2,10);
    if (plVar3 != (long *)0x0) {
      lVar4 = thunk_FUN_00d48444(
                                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider,_XRPointCloud,_ARPointCloud>_OnEnable__
                                );
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_013320c0:
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
        goto LAB_013320c0;
        if (1 < *(uint *)(plVar3 + 3)) {
          plVar3[5] = lVar4;
          lVar4 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    );
          if ((lVar4 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_013320c0;
          lVar4 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    );
          if (2 < *(uint *)(plVar3 + 3)) {
            plVar3[6] = lVar4;
            lVar4 = FUN_01c5f128();
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_013320c0;
            if (3 < *(uint *)(plVar3 + 3)) {
              plVar3[7] = lVar4;
              lVar4 = thunk_FUN_00d48444(StringLiteral_8201);
              if ((lVar4 != 0) &&
                 (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_013320c0;
              lVar4 = thunk_FUN_00d48444(StringLiteral_8201);
              if (4 < *(uint *)(plVar3 + 3)) {
                plVar3[8] = lVar4;
                lVar4 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_00d5941c();
                }
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar4 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_00d5941c();
                }
                lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
                uVar2 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
                if (lVar4 == 0) {
                  lVar4 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    lVar4 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar4 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                    lVar4 = FUN_00d5941c();
                  }
                  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                  thunk_FUN_00d48444(
                                    Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__
                                    );
                  lVar4 = thunk_FUN_00d62348();
                  if (lVar4 == 0) goto LAB_013320b8;
                  FUN_012d239c(lVar4,uVar6,
                               *(undefined8 *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x48),0);
                  lVar8 = *(long *)(*in_stack_00000020 + 0xc0);
                  lVar5 = *(long *)(lVar8 + 0x38);
                  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                    lVar5 = FUN_00d5941c();
                    lVar8 = *(long *)(*in_stack_00000020 + 0xc0);
                  }
                  *(long *)(*(long *)(lVar5 + 0xb8) + 0x10) = lVar4;
                  if ((*(byte *)(*(long *)(lVar8 + 0x38) + 0x132) & 1) == 0) {
                    FUN_00d5941c();
                  }
                }
                else {
                  uVar2 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
                }
                thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
                uVar6 = FUN_010dcdb8();
                uVar7 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
                uVar6 = FUN_010df6b8(uVar6,uVar7);
                lVar4 = FUN_01600f98(uVar2,uVar6,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_013320c0;
                if (5 < *(uint *)(plVar3 + 3)) {
                  plVar3[9] = lVar4;
                  lVar4 = thunk_FUN_00d48444(
                                            Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                            );
                  if ((lVar4 != 0) &&
                     (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)
                     ) goto LAB_013320c0;
                  lVar4 = thunk_FUN_00d48444(
                                            Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                            );
                  if (6 < *(uint *)(plVar3 + 3)) {
                    plVar3[10] = lVar4;
                    if (unaff_x21 == (long *)0x0) goto LAB_013320b8;
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
                       lVar5 == 0)) goto LAB_013320c0;
                    if (7 < *(uint *)(plVar3 + 3)) {
                      plVar3[0xb] = lVar4;
                      lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
                      if ((lVar4 != 0) &&
                         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                         lVar4 == 0)) goto LAB_013320c0;
                      lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
                      if (8 < *(uint *)(plVar3 + 3)) {
                        plVar3[0xc] = lVar4;
                        lVar4 = (**(code **)(*unaff_x21 + 0x188))();
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)),
                           lVar5 == 0)) goto LAB_013320c0;
                        if (9 < *(uint *)(plVar3 + 3)) {
                          plVar3[0xd] = lVar4;
                          uVar2 = FUN_01600844(plVar3,0);
                          if (lVar1 != 0) {
                            FUN_01c25764(lVar1,uVar2,0);
                            return;
                          }
                          goto LAB_013320b8;
                        }
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
LAB_013320b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


