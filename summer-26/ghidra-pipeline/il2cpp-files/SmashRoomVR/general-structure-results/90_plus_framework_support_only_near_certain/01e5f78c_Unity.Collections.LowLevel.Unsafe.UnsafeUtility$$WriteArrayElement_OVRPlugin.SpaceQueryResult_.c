/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01e5f78c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>
               (long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  long *unaff_x25;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x118));
  thunk_FUN_01ad9084(StringLiteral_2249);
  thunk_FUN_01ad9084(StringLiteral_2250);
  thunk_FUN_01ad9084(StringLiteral_2251);
  thunk_FUN_01ad9084(
                    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01ad9084(StringLiteral_2252);
  thunk_FUN_01ad9084(StringLiteral_2241);
  thunk_FUN_01ad9084(StringLiteral_2253);
  thunk_FUN_01ad9084(StringLiteral_2311);
  thunk_FUN_01ad9084(StringLiteral_2254);
  thunk_FUN_01ad9084(StringLiteral_2255);
  thunk_FUN_01ad9084(StringLiteral_616);
  thunk_FUN_01ad9084(
                    Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01ad9084(StringLiteral_2257);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
  thunk_FUN_01ad9084(
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                    );
  thunk_FUN_01ad9084(StringLiteral_2312);
  puVar11 = *(undefined8 **)(unaff_x22 + 0x38);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_01ae9ed0();
    puVar11 = *(undefined8 **)(unaff_x22 + 0x38);
  }
  puVar3 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
  uVar12 = *puVar11;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_0304eec0(uVar12,0);
  puVar4 = StringLiteral_2245;
  if (*(int *)(*(long *)StringLiteral_2245 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)StringLiteral_2245);
  }
  uVar5 = FUN_038e374c(uVar12,0);
  uVar12 = *(undefined8 *)*unaff_x25;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar3);
  }
  uVar12 = FUN_0304eec0(uVar12,0);
  if ((uVar5 & 1) != 0) {
    uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2251,0);
    uVar5 = FUN_03057a60(uVar12,uVar6,0);
    if ((uVar5 & 1) == 0) {
      uVar12 = *(undefined8 *)*unaff_x25;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_0304eec0(uVar12,0);
      uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_613,0);
      uVar5 = FUN_03057a60(uVar12,uVar6,0);
      if ((uVar5 & 1) != 0) {
        uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
        plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
        if (plVar7 == (long *)0x0) goto LAB_01e60270;
        if (*(long *)(*plVar7 + 0x40) ==
            *(long *)(*(long *)Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__ +
                     0x40)) {
          thunk_FUN_01afac30();
          FUN_038ddc20(uVar12);
          return;
        }
        goto LAB_01e6026c;
      }
      uVar12 = *(undefined8 *)*unaff_x25;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_0304eec0(uVar12,0);
      uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2246,0);
      uVar5 = FUN_03057a60(uVar12,uVar6,0);
      if ((uVar5 & 1) == 0) {
        uVar12 = *(undefined8 *)*unaff_x25;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = FUN_0304eec0(uVar12,0);
        uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2254,0);
        uVar5 = FUN_03057a60(uVar12,uVar6,0);
        if ((uVar5 & 1) == 0) {
          uVar12 = *(undefined8 *)*unaff_x25;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_0304eec0(uVar12,0);
          uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2249,0);
          uVar5 = FUN_03057a60(uVar12,uVar6,0);
          if ((uVar5 & 1) != 0) {
            uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
            plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
            if (plVar7 == (long *)0x0) goto LAB_01e60270;
            if (*(long *)(*plVar7 + 0x40) == *(long *)(*(long *)StringLiteral_2250 + 0x40)) {
              thunk_FUN_01afac30();
              FUN_038ddaa8(uVar12);
              return;
            }
            goto LAB_01e6026c;
          }
          uVar12 = *(undefined8 *)*unaff_x25;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_0304eec0(uVar12,0);
          uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2252,0);
          uVar5 = FUN_03057a60(uVar12,uVar6,0);
          if ((uVar5 & 1) != 0) {
            uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
            plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
            if (plVar7 == (long *)0x0) goto LAB_01e60270;
            if (*(long *)(*plVar7 + 0x40) == *(long *)(*(long *)StringLiteral_2241 + 0x40)) {
              thunk_FUN_01afac30();
              FUN_038dd9ec(uVar12);
              return;
            }
            goto LAB_01e6026c;
          }
          uVar12 = *(undefined8 *)*unaff_x25;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_0304eec0(uVar12,0);
          uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_616,0);
          uVar5 = FUN_03057a60(uVar12,uVar6,0);
          if ((uVar5 & 1) != 0) {
            uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
            plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
            if (plVar7 == (long *)0x0) goto LAB_01e60270;
            if (*(long *)(*plVar7 + 0x40) ==
                *(long *)(*(long *)
                           Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                         + 0x40)) {
              puVar9 = (undefined4 *)thunk_FUN_01afac30();
              FUN_038dd930(*puVar9,uVar12);
              return;
            }
            goto LAB_01e6026c;
          }
          uVar12 = *(undefined8 *)*unaff_x25;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar12 = FUN_0304eec0(uVar12,0);
          uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2248,0);
          uVar5 = FUN_03057a60(uVar12,uVar6,0);
          if ((uVar5 & 1) == 0) {
            uVar12 = *(undefined8 *)*unaff_x25;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar12 = FUN_0304eec0(uVar12,0);
            uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2247,0);
            uVar5 = FUN_03057a60(uVar12,uVar6,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
            plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
            if (plVar7 == (long *)0x0) goto LAB_01e60270;
            if (*(long *)(*plVar7 + 0x40) ==
                *(long *)(*(long *)
                           Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                         + 0x40)) {
              thunk_FUN_01afac30();
              FUN_038dd7b8(uVar12);
              return;
            }
            goto LAB_01e6026c;
          }
          uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
          plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
          if (plVar7 != (long *)0x0) {
            if (*(long *)(*plVar7 + 0x40) == *(long *)(*(long *)StringLiteral_725 + 0x40)) {
              puVar11 = (undefined8 *)thunk_FUN_01afac30();
              FUN_038dd874(*puVar11,uVar12);
              return;
            }
            goto LAB_01e6026c;
          }
          goto LAB_01e60270;
        }
        uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
        plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
        plVar2 = (long *)StringLiteral_2255;
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(*(undefined8 *)StringLiteral_2312,0);
        uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
        plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
        plVar2 = (long *)
                 Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__;
      }
      if (plVar7 == (long *)0x0) {
LAB_01e60270:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(long *)(*plVar7 + 0x40) == *(long *)(*plVar2 + 0x40)) {
        thunk_FUN_01afac30();
        FUN_038ddb64(uVar12);
        return;
      }
    }
    else {
      uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
      plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
      if (plVar7 == (long *)0x0) goto LAB_01e60270;
      if (*(long *)(*plVar7 + 0x40) ==
          *(long *)(*(long *)
                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                   + 0x40)) {
        thunk_FUN_01afac30();
        FUN_038ddcdc(uVar12);
        return;
      }
    }
LAB_01e6026c:
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c();
  }
  uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2257,0);
  uVar5 = FUN_03057a60(uVar12,uVar6,0);
  if ((uVar5 & 1) != 0) {
    uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
    plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
    if ((plVar7 != (long *)0x0) &&
       (*plVar7 != *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(plVar7);
    }
    FUN_038dd6fc(uVar12);
    return;
  }
  uVar12 = *(undefined8 *)*unaff_x25;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_0304eec0(uVar12,0);
  uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2243,0);
  uVar5 = FUN_03057a60(uVar12,uVar6,0);
  if ((uVar5 & 1) == 0) {
    uVar12 = *(undefined8 *)*unaff_x25;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar12 = FUN_0304eec0(uVar12,0);
    uVar6 = FUN_0304eec0(*(undefined8 *)StringLiteral_2244,0);
    uVar5 = FUN_03057a60(uVar12,uVar6,0);
    if ((uVar5 & 1) == 0) {
      uVar12 = *(undefined8 *)StringLiteral_2253;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_0304eec0(uVar12,0);
      uVar6 = FUN_0304eec0(*(undefined8 *)*unaff_x25,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar4);
      }
      uVar5 = FUN_038e3760(uVar12,uVar6,0);
      if ((uVar5 & 1) == 0) {
        uVar12 = *(undefined8 *)*unaff_x25;
        lVar8 = thunk_FUN_01ad9084(
                                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                                  );
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        plVar7 = (long *)FUN_0304eec0(uVar12,0);
        uVar12 = thunk_FUN_01ad9084(StringLiteral_2262);
        uVar6 = 0;
        if (plVar7 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar10 = thunk_FUN_01ad9084(StringLiteral_2260);
        uVar12 = FUN_02ee6c30(uVar12,uVar6,uVar10,0);
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_4__);
        uVar6 = thunk_FUN_01afaadc();
        FUN_03076790(uVar6,uVar12,0);
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar6);
      }
      plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_2311 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_2311)) goto LAB_01e6026c;
      }
      thunk_FUN_038d3c10(plVar7,0);
      uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x18),0);
      goto LAB_01e5fe9c;
    }
    uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
    plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
    if (plVar7 == (long *)0x0) goto LAB_01e60270;
    bVar1 = *(byte *)(*(long *)StringLiteral_2310 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_2310))
    goto LAB_01e6026c;
    lVar8 = plVar7[2];
  }
  else {
    uVar12 = FUN_038df410(*(undefined8 *)(unaff_x21 + 0x10),0);
    plVar7 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x25 + 8),&stack0x0000000c);
    if (plVar7 == (long *)0x0) goto LAB_01e60270;
    bVar1 = *(byte *)(*(long *)StringLiteral_533 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_533))
    goto LAB_01e6026c;
    lVar8 = plVar7[3];
  }
  FUN_038df410(lVar8,0);
LAB_01e5fe9c:
  FUN_038dd640(uVar12);
  return;
}


