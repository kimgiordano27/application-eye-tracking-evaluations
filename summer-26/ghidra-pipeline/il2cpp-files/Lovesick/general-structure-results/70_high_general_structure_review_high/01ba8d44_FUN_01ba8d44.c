/*
FUNCTION_NAME: FUN_01ba8d44
ENTRY_POINT: 01ba8d44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01ba8d44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  long local_a8;
  
  if ((DAT_0377e6d7 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eabe0);
    thunk_FUN_00d48444(OVR_OpenVR_IVRRenderModels__LoadTextureD3D11_Async_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_<Render>b__26_0__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_MeshId_TypeInfo);
    thunk_FUN_00d48444(System_Action<TwistGesture>_TypeInfo);
    thunk_FUN_00d48444(OVRInput_HapticInfo___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_LinkedList<WeakReference>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARSession_<Install>d__37_MoveNext__);
    thunk_FUN_00d48444(PTR_DAT_033f47e0);
    thunk_FUN_00d48444(Method_GetAvailableProfilerStats_<>c_<EnumerateProfilerStats>b__1_0__);
    thunk_FUN_00d48444(Oculus_Interaction_Grabbable_<>c_TypeInfo);
    thunk_FUN_00d48444(System_DateTimeParse_<>c_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(OVRAnchor_TrackerConfiguration_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_ManagedWebSocket_<HandleReceivedCloseAsync>d__62>__
                      );
    thunk_FUN_00d48444(Method_Autohand_Demo_OpenXRHandPlayerControllerLink_MoveAction__);
    DAT_0377e6d7 = 1;
  }
  uVar4 = FUN_01b95f0c(*(undefined4 *)(param_1 + 0x18),0);
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(param_1 + 0x2a) == '\0') {
    return;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b5e4(uVar12,0);
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
    if (lVar6 == 0) goto LAB_01ba968c;
    FUN_0268afbc(lVar6,*(undefined8 *)OVRAnchor_TrackerConfiguration_TypeInfo,0);
    *(long *)(param_1 + 0x40) = lVar6;
    lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (lVar6,0);
    uVar12 = FUN_0268fd10(param_1,0);
    if (lVar6 == 0) goto LAB_01ba968c;
    FUN_026a0040(lVar6,uVar12,0,0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01ba968c;
    lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_1 + 0x40),0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    if (lVar6 == 0) goto LAB_01ba968c;
    puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    FUN_0269f750(*puVar10,puVar10[1],puVar10[2],lVar6,0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01ba968c;
    lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_1 + 0x40),0);
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
      DAT_03774f00 = '\x01';
    }
    if (lVar6 == 0) goto LAB_01ba968c;
    puVar10 = *(undefined4 **)
               (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
               0xb8);
    FUN_0269f994(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar6,0);
  }
  puVar2 = UnityEngine_XR_MeshId_TypeInfo;
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) {
LAB_01ba9070:
    puVar2 = Method_GetAvailableProfilerStats_<>c_<EnumerateProfilerStats>b__1_0__;
    uVar12 = FUN_00da4fb8(*(undefined8 *)Oculus_Interaction_Grabbable_<>c_TypeInfo,
                          *(undefined4 *)(param_1 + 0x68));
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_UnityEngine_Rendering_Universal_Render2DLightingPass_<>c_<Render>b__26_0__;
    if (lVar6 != 0) {
      FUN_01320f6c(lVar6,uVar12,*(undefined8 *)System_Action<TwistGesture>_TypeInfo);
      *(long *)(param_1 + 0x58) = lVar6;
      uVar12 = FUN_0132209c(lVar6,*(undefined8 *)puVar2);
      lVar6 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0xa8) = uVar12;
      if (lVar6 != 0) {
LAB_01ba90dc:
        uVar5 = 0;
        lVar11 = 0x20;
        while( true ) {
          if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar5) {
            return;
          }
          lVar6 = *(long *)(param_1 + 0x78);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_01ba96c0:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(long *)(param_1 + 0x48) == 0) break;
          FUN_0132138c(*(long *)(param_1 + 0x48),(long)*(short *)(lVar6 + lVar11),&local_a8,
                       *(undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_ARSession_<Install>d__37_MoveNext__);
          lVar6 = local_a8;
          if (*(long *)(param_1 + 0x58) == 0) break;
          FUN_0132138c(*(long *)(param_1 + 0x58),uVar5 & 0xffffffff,&local_a8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LinkedList<WeakReference>__ctor__);
          lVar7 = local_a8;
          if (local_a8 == 0) {
            lVar14 = *(long *)(param_1 + 0x58);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)System_DateTimeParse_<>c_TypeInfo);
            if ((lVar7 == 0) || (FUN_017b46ec(lVar7,0), lVar14 == 0)) break;
            FUN_0132149c(lVar14,uVar5 & 0xffffffff,lVar7,*(undefined8 *)PTR_DAT_033f47e0);
          }
          lVar14 = *(long *)(param_1 + 0x78);
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar5) goto LAB_01ba96c0;
          if (lVar7 == 0) break;
          uVar12 = *(undefined8 *)(lVar7 + 0x18);
          *(undefined2 *)(lVar7 + 0x10) = *(undefined2 *)(lVar14 + lVar11);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(uVar12,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar6 == 0) break;
            uVar12 = FUN_01ba9ec4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(lVar6 + 0x10));
            uVar12 = FUN_015f5b28(uVar12,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_ManagedWebSocket_<HandleReceivedCloseAsync>d__62>__
                                  ,0);
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
            if (lVar14 == 0) break;
            FUN_0268afbc(lVar14,uVar12,0);
            lVar14 = FUN_010e5800(lVar14,*(undefined8 *)
                                          OVR_OpenVR_IVRRenderModels__LoadTextureD3D11_Async_TypeInfo
                                 );
            *(long *)(lVar7 + 0x18) = lVar14;
            if (lVar14 == 0) break;
            FUN_026f1684(0x3f800000,lVar14,0);
            if (*(long *)(lVar7 + 0x18) == 0) break;
            FUN_026f17d8(*(long *)(lVar7 + 0x18),1,0);
            if (*(long *)(lVar7 + 0x18) == 0) break;
            FUN_026f170c(*(long *)(lVar7 + 0x18),0,0);
            if (*(long *)(lVar7 + 0x18) == 0) break;
            FUN_026f191c(*(long *)(lVar7 + 0x18),3,0);
          }
          if ((*(long *)(lVar7 + 0x18) == 0) ||
             (lVar14 = FUN_0268fd4c(*(long *)(lVar7 + 0x18),0), lVar14 == 0)) break;
          lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar14,0);
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (uVar12 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (*(long *)(param_1 + 0x40),0), lVar9 == 0)) break;
          FUN_026a0040(lVar9,uVar12,0,0);
          lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar14,0);
          if (((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) ||
             (FUN_0269f578(*(long *)(lVar6 + 0x18),0), lVar9 == 0)) break;
          FUN_0269f618(lVar9,0);
          lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar14,0);
          if ((*(long *)(lVar6 + 0x18) == 0) ||
             (FUN_0269f810(*(long *)(lVar6 + 0x18),0), lVar9 == 0)) break;
          FUN_0269f894(lVar9,0);
          uVar12 = *(undefined8 *)(lVar7 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(uVar12,0,0);
          if ((uVar8 & 1) != 0) {
            uVar12 = FUN_01ba9ec4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(lVar6 + 0x10));
            uVar12 = FUN_015f5b28(uVar12,*(undefined8 *)
                                          Method_Autohand_Demo_OpenXRHandPlayerControllerLink_MoveAction__
                                  ,0);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
            if (lVar6 == 0) break;
            FUN_0268afbc(lVar6,uVar12,0);
            lVar6 = FUN_010e5800(lVar6,*(undefined8 *)PTR_DAT_033eabe0);
            *(long *)(lVar7 + 0x20) = lVar6;
            if (lVar6 == 0) break;
            FUN_026f2cf0(lVar6,0,0);
          }
          lVar6 = *(long *)(param_1 + 0x78);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01ba96c0;
          lVar6 = lVar6 + lVar11;
          fVar18 = *(float *)(lVar6 + 8);
          uVar8 = (ulong)*(uint *)(lVar6 + 0xc);
          if ((uVar4 & 1) == 0) {
            fVar15 = (float)FUN_01a9eefc(*(undefined4 *)(lVar6 + 4),0);
          }
          else {
            fVar15 = (float)FUN_01aa3ee4();
          }
          lVar6 = *(long *)(param_1 + 0x78);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01ba96c0;
          lVar6 = lVar6 + lVar11;
          fVar19 = *(float *)(lVar6 + 0x14);
          fVar22 = *(float *)(lVar6 + 0x18);
          if ((uVar4 & 1) == 0) {
            fVar16 = (float)FUN_01a9eefc(*(undefined4 *)(lVar6 + 0x10),0);
          }
          else {
            fVar16 = (float)FUN_01aa3ee4();
          }
          if (DAT_03774e1b == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_03774e1b = '\x01';
          }
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar16 = fVar16 - fVar15;
          uVar24 = (ulong)(uint)fVar16;
          fVar19 = fVar19 - fVar18;
          fVar22 = fVar22 - (float)uVar8;
          if (DAT_03775438 == '\0') {
            thunk_FUN_00d48444(puVar3);
            DAT_03775438 = '\x01';
          }
          lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
          uVar21 = (ulong)*(uint *)(lVar6 + 0x40);
          uVar23 = (ulong)*(uint *)(lVar6 + 0x44);
          uVar12 = FUN_026987a4(*(undefined4 *)(lVar6 + 0x3c),uVar21,uVar23,uVar24,fVar19,fVar22,0);
          lVar6 = *(long *)(param_1 + 0x78);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01ba96c0;
          if (*(long *)(lVar7 + 0x20) == 0) break;
          FUN_026f3770(*(undefined4 *)(lVar6 + lVar11 + 0x1c),*(long *)(lVar7 + 0x20),0);
          lVar6 = *(long *)(param_1 + 0x78);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01ba96c0;
          if (*(long *)(lVar7 + 0x20) == 0) break;
          fVar20 = *(float *)(lVar6 + lVar11 + 0x1c);
          fVar19 = SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar16 * fVar16);
          FUN_026f37f8(fVar19 + fVar20 + fVar20,*(long *)(lVar7 + 0x20),0);
          if (*(long *)(lVar7 + 0x20) == 0) break;
          FUN_026f3880(*(long *)(lVar7 + 0x20),0,0);
          lVar6 = *(long *)(lVar7 + 0x20);
          if (DAT_03775438 == '\0') {
            thunk_FUN_00d48444(puVar3);
            DAT_03775438 = '\x01';
          }
          if (lVar6 == 0) break;
          uVar17 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c);
          fVar22 = (float)((ulong)uVar17 >> 0x20) * fVar19 * 0.5;
          FUN_026f369c(CONCAT44(fVar22,(float)uVar17 * fVar19 * 0.5),fVar22,
                       fVar19 * *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44) * 0.5,lVar6,0);
          if ((*(long *)(lVar7 + 0x20) == 0) ||
             (lVar6 = FUN_0268fd4c(*(long *)(lVar7 + 0x20),0), lVar6 == 0)) break;
          lVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar6,0);
          uVar17 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar14,0);
          if (lVar7 == 0) break;
          FUN_026a0040(lVar7,uVar17,0,0);
          lVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar6,0);
          if (lVar7 == 0) break;
          FUN_0269f750(fVar15,fVar18,uVar8,lVar7,0);
          lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar6,0);
          if (lVar6 == 0) break;
          FUN_0269f994(uVar12,uVar21,uVar23,uVar24,lVar6,0);
          lVar6 = *(long *)(param_1 + 0x58);
          uVar5 = uVar5 + 1;
          lVar11 = lVar11 + 0x20;
          if (lVar6 == 0) break;
        }
      }
    }
  }
  else {
    iVar13 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar13) {
        lVar11 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        uVar5 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
        if ((uVar5 & 1) == 0) {
          *(undefined4 *)(lVar6 + 0x18) = 0;
        }
        else {
          iVar13 = *(int *)(lVar6 + 0x18);
          *(undefined4 *)(lVar6 + 0x18) = 0;
          if (0 < iVar13) {
            FUN_0179519c(*(undefined8 *)(lVar6 + 0x10),0,iVar13,0);
          }
        }
        lVar6 = *(long *)(param_1 + 0x58);
        if ((lVar6 == 0) || ((long)*(int *)(lVar6 + 0x18) != (ulong)*(uint *)(param_1 + 0x68)))
        goto LAB_01ba9070;
        goto LAB_01ba90dc;
      }
      FUN_0132138c(lVar6,iVar13,&local_a8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_LinkedList<WeakReference>__ctor__);
      if (local_a8 == 0) break;
      FUN_01bab0d8();
      lVar6 = *(long *)(param_1 + 0x58);
      iVar13 = iVar13 + 1;
    } while (lVar6 != 0);
  }
LAB_01ba968c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


