/*
FUNCTION_NAME: Unity.Services.Qos.Models.QosServiceServersResponseBody$$.ctor
ENTRY_POINT: 0784b3dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Qos_Models_QosServiceServersResponseBody___ctor(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  lVar3 = thunk_FUN_03ac74bc(*param_1);
  FUN_05f9f7c4(lVar3,*(undefined8 *)
                      UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
              );
  uVar11 = *(undefined8 *)
            System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
  ;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar11 = FUN_0675ff58(uVar11,0);
  puVar2 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar11,
               *(undefined8 *)
                Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
  uVar11 = FUN_0675ff58(*(undefined8 *)
                         UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar11,*(undefined8 *)puVar2)
  ;
  puVar1 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo;
  uVar11 = FUN_0675ff58(*(undefined8 *)
                         UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo
                        ,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionCancelEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar2);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar2);
  uVar11 = FUN_0675ff58(*(undefined8 *)
                         System_Func<ValueTuple<QosServer,_IQosMeasurements>,_float>_TypeInfo,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<ValidateCommandEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar2);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<uint>_TypeInfo,uVar11,*(undefined8 *)puVar2);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar2);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540(lVar3,*(undefined8 *)System_Func<TypePathVisitor>_TypeInfo,uVar11,
               *(undefined8 *)puVar2);
  *(long *)(unaff_x19 + 0xe) = lVar3;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar3);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar11 = FUN_078392b4();
  lVar3 = FUN_077e0ec4(uVar9,uVar11,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar11 = FUN_078338bc(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar9 = FUN_078338d0(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = FUN_078338e4(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar3,0);
  uVar6 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar3 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar12 = *(undefined8 *)PTR_DAT_084c82e0;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)System_Func<TextInfo>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0784b694;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)System_Func<TextInfo>_TypeInfo,0);
LAB_0784b694:
  lVar3 = (*(code *)*puVar5)(plVar10,uVar12,uVar11,uVar9,uVar4,uVar6,puVar5[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                     );
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fdbd10(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar11 = FUN_0587c704(&stack0x00000018,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
      uVar9 = FUN_04718284(uVar11,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)
                            System_Func<ValueTuple<QosServer,_IQosMeasurements>,_string>_TypeInfo);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Func<ValueTuple<Vector2,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                                );
      FUN_0575071c(uVar4,uVar11,uVar9,
                   *(undefined8 *)System_Func<ValueTuple<string,_Type>,_string>_TypeInfo);
      puVar2 = System_Func<ValueTuple<QosServer,_IQosMeasurements>,_int>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


