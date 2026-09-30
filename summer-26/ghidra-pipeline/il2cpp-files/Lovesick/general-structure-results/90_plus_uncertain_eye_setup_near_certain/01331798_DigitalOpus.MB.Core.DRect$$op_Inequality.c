/*
FUNCTION_NAME: DigitalOpus.MB.Core.DRect$$op_Inequality
ENTRY_POINT: 01331798
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


void DigitalOpus_MB_Core_DRect__op_Inequality(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar12;
  long *in_stack_00000020;
  
  uVar1 = thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
  uVar2 = thunk_FUN_00d43524(uVar1,*(undefined8 *)*unaff_x21);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar4 = *unaff_x21;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&PTR_PTR_03274860,0);
  }
  plVar12 = (long *)*unaff_x21;
  __cxa_end_catch();
  lVar3 = thunk_FUN_00d48444(StringLiteral_9688);
  lVar9 = *unaff_x20;
  uVar2 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar2 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
        goto code_r0x01331818;
      }
      uVar2 = uVar2 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
code_r0x01331818:
  lVar3 = (*(code *)*puVar4)();
  if ((lVar3 != 0) && (lVar3 = FUN_01c25128(lVar3,0), lVar3 != 0)) {
    lVar3 = FUN_01c254c8(lVar3,0);
    uVar1 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    plVar5 = (long *)FUN_00da4fb8(uVar1,10);
    if (plVar5 != (long *)0x0) {
      lVar9 = thunk_FUN_00d48444(
                                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider,_XRPointCloud,_ARPointCloud>_OnEnable__
                                );
      if ((lVar9 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
LAB_013320c0:
        uVar1 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar1,0);
      }
      lVar9 = thunk_FUN_00d48444(
                                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider,_XRPointCloud,_ARPointCloud>_OnEnable__
                                );
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar9;
        lVar9 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar9 = FUN_01c4b4e0();
        if ((lVar9 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_013320c0;
        if (1 < *(uint *)(plVar5 + 3)) {
          plVar5[5] = lVar9;
          lVar9 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    );
          if ((lVar9 != 0) &&
             (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
          goto LAB_013320c0;
          lVar9 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                    );
          if (2 < *(uint *)(plVar5 + 3)) {
            plVar5[6] = lVar9;
            lVar9 = FUN_01c5f128();
            if ((lVar9 != 0) &&
               (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_013320c0;
            if (3 < *(uint *)(plVar5 + 3)) {
              plVar5[7] = lVar9;
              lVar9 = thunk_FUN_00d48444(StringLiteral_8201);
              if ((lVar9 != 0) &&
                 (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
              goto LAB_013320c0;
              lVar9 = thunk_FUN_00d48444(StringLiteral_8201);
              if (4 < *(uint *)(plVar5 + 3)) {
                plVar5[8] = lVar9;
                lVar9 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                  lVar9 = FUN_00d5941c();
                }
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar9 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                  lVar9 = FUN_00d5941c();
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
                uVar1 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
                if (lVar9 == 0) {
                  lVar9 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                    lVar9 = FUN_00d5941c();
                  }
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar9 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
                  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                    lVar9 = FUN_00d5941c();
                  }
                  uVar7 = **(undefined8 **)(lVar9 + 0xb8);
                  thunk_FUN_00d48444(
                                    Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__
                                    );
                  lVar9 = thunk_FUN_00d62348();
                  if (lVar9 == 0) goto LAB_013320b8;
                  FUN_012d239c(lVar9,uVar7,
                               *(undefined8 *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x48),0);
                  lVar10 = *(long *)(*in_stack_00000020 + 0xc0);
                  lVar6 = *(long *)(lVar10 + 0x38);
                  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
                    lVar6 = FUN_00d5941c();
                    lVar10 = *(long *)(*in_stack_00000020 + 0xc0);
                  }
                  *(long *)(*(long *)(lVar6 + 0xb8) + 0x10) = lVar9;
                  if ((*(byte *)(*(long *)(lVar10 + 0x38) + 0x132) & 1) == 0) {
                    FUN_00d5941c();
                  }
                }
                else {
                  uVar1 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
                }
                thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
                uVar7 = FUN_010dcdb8();
                uVar8 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
                uVar7 = FUN_010df6b8(uVar7,uVar8);
                lVar9 = FUN_01600f98(uVar1,uVar7,0);
                if ((lVar9 != 0) &&
                   (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                goto LAB_013320c0;
                if (5 < *(uint *)(plVar5 + 3)) {
                  plVar5[9] = lVar9;
                  lVar9 = thunk_FUN_00d48444(
                                            Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                            );
                  if ((lVar9 != 0) &&
                     (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)
                     ) goto LAB_013320c0;
                  lVar9 = thunk_FUN_00d48444(
                                            Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                                            );
                  if (6 < *(uint *)(plVar5 + 3)) {
                    plVar5[10] = lVar9;
                    if (plVar12 == (long *)0x0) goto LAB_013320b8;
                    uVar1 = FUN_017a9c58(plVar12,0);
                    lVar9 = thunk_FUN_00d48444(
                                              Method_System_Collections_Generic_List<Collider>_Clear__
                                              );
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar9 = FUN_01c4b4e0(uVar1,0);
                    if ((lVar9 != 0) &&
                       (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar6 == 0)) goto LAB_013320c0;
                    if (7 < *(uint *)(plVar5 + 3)) {
                      plVar5[0xb] = lVar9;
                      lVar9 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
                      if ((lVar9 != 0) &&
                         (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar9 == 0)) goto LAB_013320c0;
                      lVar9 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
                      if (8 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xc] = lVar9;
                        lVar9 = (**(code **)(*plVar12 + 0x188))
                                          (plVar12,*(undefined8 *)(*plVar12 + 400));
                        if ((lVar9 != 0) &&
                           (lVar6 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar6 == 0)) goto LAB_013320c0;
                        if (9 < *(uint *)(plVar5 + 3)) {
                          plVar5[0xd] = lVar9;
                          uVar1 = FUN_01600844(plVar5,0);
                          if (lVar3 != 0) {
                            FUN_01c25764(lVar3,uVar1,0);
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


