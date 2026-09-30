/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorTimeout_get
ENTRY_POINT: 07882468
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorTimeout_get(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int in_w8;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x25;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (in_w8 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 10);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar3,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionEndEvent>_TypeInfo,0,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    puVar2 = System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo;
    uVar11 = *(undefined8 *)
              System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar11 = FUN_0675ff58(uVar11,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar11,
                 *(undefined8 *)puVar1);
    uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar11,
                 *(undefined8 *)puVar1);
    uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar11,
                 *(undefined8 *)puVar1);
    uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar11,
                 *(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0xe) = lVar3;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar3);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 8);
    uVar11 = FUN_0788173c(lVar8);
    lVar3 = FUN_0786febc(uVar9,uVar11);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar10 = *(long **)(lVar8 + 0x10);
    uVar11 = FUN_065c0764(*(undefined8 *)(lVar3 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar9 = FUN_0787bb78(uVar11,*(undefined8 *)(lVar8 + 0x18),lVar3);
    uVar5 = 10;
    if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
      uVar5 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar3 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_084c82d0;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
           ) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto FUN_07882684;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)
                                   System_Collections_Generic_IEnumerator<RoomServerOptionsInvalid_ValidationError>_TypeInfo
                          ,0);
FUN_07882684:
    lVar3 = (*(code *)*puVar4)(plVar10,uVar12,uVar11,0,uVar9,uVar5,puVar4[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_Collections_Generic_IEnumerator<CultureInfo>_TypeInfo);
    uVar6 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_IEnumerator<Claim>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fef638(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar11 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)System_Collections_Generic_IEnumerator<char>_TypeInfo);
  FUN_07878c34(uVar11,*(undefined8 *)(unaff_x19 + 0xe));
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_IInterpolator<Vector3>_TypeInfo);
  FUN_07870b84(uVar9,uVar11);
  puVar1 = Normal_Realtime_IInterpolator<float>_TypeInfo;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar9,*(undefined8 *)puVar1);
  return;
}


