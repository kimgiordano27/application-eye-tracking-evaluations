/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_participant_updated_t$$get_encoded_uri_with_tag
ENTRY_POINT: 0791f8c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_participant_updated_t__get_encoded_uri_with_tag(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_05f9f7c4(param_1,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
              );
                    /* try { // try from 0791f8f0 to 07a1f8f7 has its CatchHandler @ 0791f968 */
  uVar12 = *(undefined8 *)Cinemachine_CinemachineVirtualCamera___TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 0791f900 to 07a1f90b has its CatchHandler @ 0791f964 */
  uVar12 = FUN_0675ff58(uVar12,0);
  puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 0791f910 to 07a1f91f has its CatchHandler @ 0791f960 */
                    /* try { // try from 0791f920 to 07a1f983 has its CatchHandler @ 0791f828 */
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar12,
               *(undefined8 *)
                Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
  puVar2 = char___TypeInfo;
  uVar12 = FUN_0675ff58(*(undefined8 *)char___TypeInfo,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar12,
               *(undefined8 *)puVar1);
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar12,
               *(undefined8 *)puVar1);
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar12,
               *(undefined8 *)puVar1);
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<ValidateCommandEvent>_TypeInfo,uVar12,
               *(undefined8 *)puVar1);
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<uint>_TypeInfo,uVar12,*(undefined8 *)puVar1);
  uVar12 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar12,
               *(undefined8 *)puVar1);
  *(long *)(unaff_x19 + 0xe) = param_1;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,param_1);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  uVar12 = FUN_0791a308();
  lVar3 = FUN_078f5604(uVar10,uVar12,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar11 = *(long **)(unaff_x20 + 0x10);
  uVar12 = FUN_065c0764(*(undefined8 *)(lVar3 + 0x10),
                        *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x30),0);
  lVar4 = *(long *)(unaff_x19 + 0xc);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar4 + 0x28) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_07910fa0();
    lVar4 = *(long *)(unaff_x19 + 0xc);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  uVar5 = FUN_07916084(lVar4,*(undefined8 *)(unaff_x20 + 0x18),lVar3);
  uVar7 = 10;
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar7 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar3 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar13 = *(undefined8 *)PTR_DAT_084c82e0;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0791fb4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_03ac43c4(plVar11,*(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo,0);
LAB_0791fb4c:
  lVar3 = (*(code *)*puVar6)(plVar11,uVar13,uVar12,uVar10,uVar5,uVar7,puVar6[1]);
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo
                     );
    uVar8 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                        );
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe5f28(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar12 = FUN_0587c704(&stack0x00000018,
                            *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
      uVar10 = FUN_0471a034(uVar12,*(undefined8 *)(unaff_x19 + 0xe),
                            *(undefined8 *)Cinemachine_CinemachineVirtualCameraBase___TypeInfo);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Color___TypeInfo);
      FUN_05750b0c(uVar5,uVar12,uVar10,*(undefined8 *)UnityEngine_Collider___TypeInfo);
      puVar1 = Gley_UrbanSystem_Internal_CellData___TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


