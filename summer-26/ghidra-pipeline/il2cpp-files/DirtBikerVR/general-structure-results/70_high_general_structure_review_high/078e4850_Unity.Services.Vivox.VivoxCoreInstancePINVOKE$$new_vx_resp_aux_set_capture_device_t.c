/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_aux_set_capture_device_t
ENTRY_POINT: 078e4850
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_aux_set_capture_device_t(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 *puVar14;
  undefined8 *unaff_x22;
  
  puVar12 = *(undefined8 **)(unaff_x19 + 0x818);
  puVar14 = *(undefined8 **)(unaff_x21 + 0x580);
  if ((*(byte *)(unaff_x20 + 0xacb) & 1) == 0) {
    FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08492700);
    FUN_03a8a718(PTR_DAT_0849b808);
    FUN_03a8a718(PTR_DAT_0849b800);
    FUN_03a8a718(System_Collections_Generic_List<PlayableDirector>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<Player>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Justify>,_Justify>_TypeInfo)
    ;
    FUN_03a8a718(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<EasingMode>,_EasingMode>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<EditorTextRenderingMode>,_EditorTextRenderingMode>_TypeInfo
                );
    *(undefined1 *)(unaff_x20 + 0xacb) = 1;
  }
  lVar8 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_05f9f7c4(lVar8,*puVar12);
  uVar13 = *puVar14;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar13 = FUN_0675ff58(uVar13,0);
  puVar7 = UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Justify>,_Justify>_TypeInfo;
  puVar6 = 
  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<EditorTextRenderingMode>,_EditorTextRenderingMode>_TypeInfo
  ;
  puVar5 = System_Collections_Generic_List<Player>_TypeInfo;
  puVar4 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
  puVar3 = PTR_DAT_0849b808;
  puVar2 = PTR_DAT_0849b800;
  if (lVar8 != 0) {
    FUN_05fa0540(lVar8,*(undefined8 *)
                        UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<EasingMode>,_EasingMode>_TypeInfo
                 ,uVar13,*(undefined8 *)
                          Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo
                );
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar5,0);
    FUN_05fa0540(lVar8,*(undefined8 *)puVar6,uVar13,*(undefined8 *)puVar4);
    **(long **)(*(long *)puVar7 + 0xb8) = lVar8;
    thunk_FUN_03afed3c(*(undefined8 *)(*(long *)puVar7 + 0xb8),lVar8);
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_04de7d48(lVar8,*(undefined8 *)puVar3);
    uVar13 = FUN_0675ff58(*puVar14,0);
    puVar2 = PTR_DAT_08492700;
    if (lVar8 != 0) {
      lVar10 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)PTR_DAT_08492700;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0(lVar8,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar13 = FUN_0675ff58(*(undefined8 *)puVar5,0);
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar8,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          plVar9 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
          *plVar9 = lVar8;
          thunk_FUN_03afed3c(plVar9,lVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


