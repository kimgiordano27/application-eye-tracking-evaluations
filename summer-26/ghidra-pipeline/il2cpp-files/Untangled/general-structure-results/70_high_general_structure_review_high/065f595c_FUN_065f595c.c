/*
FUNCTION_NAME: FUN_065f595c
ENTRY_POINT: 065f595c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16]
FUN_065f595c(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  long *local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0;
  long *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  puVar2 = UnityEngine_Experimental_Rendering_GraphicsFormatUtility_TypeInfo;
  if ((DAT_071cedec & 1) == 0) {
    FUN_02f07e70(UnityEngine_Experimental_Rendering_GraphicsFormatUtility_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_Gyroscope_TypeInfo);
    FUN_02f07e70(GzipDownloadHandler_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_Universal_HDRACESPresetParameter_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_Universal_HDRDebugViewPass_TypeInfo);
    FUN_02f07e70(UnityEngine_HDROutputSettings_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HID_TypeInfo);
    FUN_02f07e70(System_Xml_GuidArrayHelperWithString_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_HID_HIDSupport_TypeInfo);
    FUN_02f07e70(System_Security_Cryptography_HMAC_TypeInfo);
    FUN_02f07e70(System_Security_Cryptography_HMACMD5_TypeInfo);
    FUN_02f07e70(System_Security_Cryptography_HMACRIPEMD160_TypeInfo);
    FUN_02f07e70(System_Security_Cryptography_HMACSHA1_TypeInfo);
    FUN_02f07e70(PlayFab_EventsModels_GetTelemetryKeyResponse_TypeInfo);
    FUN_02f07e70(PlayFab_ClientModels_GetTimeRequest_TypeInfo);
    FUN_02f07e70(Gley_TrafficSystem_Internal_GridEvents_TypeInfo);
    DAT_071cedec = 1;
  }
  lVar8 = *(long *)puVar2;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = (long *)0x0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = 0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar6 = System_Security_Cryptography_HMACSHA1_TypeInfo;
    puVar5 = UnityEngine_Rendering_Universal_HDRDebugViewPass_TypeInfo;
    puVar4 = UnityEngine_Rendering_Universal_HDRACESPresetParameter_TypeInfo;
    puVar3 = System_Xml_GuidArrayHelperWithString_TypeInfo;
    puVar2 = PlayFab_EventsModels_GetTelemetryKeyResponse_TypeInfo;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_03fd16fc(&local_120,*(long *)(param_1 + 0x60),
                   *(undefined8 *)System_Security_Cryptography_HMACMD5_TypeInfo);
      iVar14 = 0;
      uStack_a8 = uStack_118;
      local_b0 = local_120;
      local_a0 = local_110;
      while (uVar9 = FUN_04df6d30(&local_b0,*(undefined8 *)puVar4), plVar7 = local_a0,
            (uVar9 & 1) != 0) {
        local_110 = (long *)param_2[2];
        uStack_118 = param_2[1];
        local_120 = *param_2;
        if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar8 = *local_a0;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        local_100 = local_120;
        uStack_f8 = uStack_118;
        local_f0 = local_110;
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_065f5b84;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_02eea86c(local_a0,*(long *)puVar3,0);
LAB_065f5b84:
        uStack_78 = uStack_f8;
        local_80 = local_100;
        local_70 = local_f0;
        auVar15 = (*(code *)*puVar10)(plVar7,&local_80,param_3,2,puVar10[1]);
        if (auVar15._0_8_ != 0) {
          lVar8 = *(long *)UnityEngine_Experimental_Rendering_GraphicsFormatUtility_TypeInfo;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar8 = *(long *)UnityEngine_Experimental_Rendering_GraphicsFormatUtility_TypeInfo;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)UnityEngine_InputSystem_HID_HIDSupport_TypeInfo;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined1 (*) [16])(lVar11 + (long)(int)uVar1 * 0x10 + 0x20) = auVar15;
          }
          else {
            FUN_03ea909c(lVar8,auVar15._0_8_,auVar15._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          iVar14 = iVar14 + auVar15._8_4_;
        }
      }
      FUN_04df6d2c(&local_b0,*(undefined8 *)GzipDownloadHandler_TypeInfo);
      FUN_04262554(&local_90,iVar14,param_4,1,
                   *(undefined8 *)PlayFab_ClientModels_GetTimeRequest_TypeInfo);
      puVar3 = UnityEngine_Experimental_Rendering_GraphicsFormatUtility_TypeInfo;
      lVar8 = *(long *)UnityEngine_Experimental_Rendering_GraphicsFormatUtility_TypeInfo;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 != 0) {
        FUN_03ea9b1c(&local_120,lVar8,
                     *(undefined8 *)System_Security_Cryptography_HMACRIPEMD160_TypeInfo);
        iVar14 = 0;
        uStack_c8 = uStack_118;
        local_d0 = local_120;
        uStack_b8 = uStack_108;
        local_c0 = local_110;
        while (uVar9 = FUN_04dc74b0(&local_d0,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
          local_e0 = local_c0;
          local_d8 = uStack_b8;
          if (0 < (int)uStack_b8) {
            FUN_04263064(local_c0,uStack_b8,0,local_90,uStack_88,iVar14,uStack_b8 & 0xffffffff,
                         *(undefined8 *)puVar6);
            iVar14 = (int)local_d8 + iVar14;
          }
          if (local_e0 != (long *)0x0) {
            FUN_042628a0(&local_e0,*(undefined8 *)puVar2);
          }
        }
        FUN_04dc74ac(&local_d0,*(undefined8 *)UnityEngine_InputSystem_Gyroscope_TypeInfo);
        auVar15._8_8_ = uStack_88;
        auVar15._0_8_ = local_90;
        return auVar15;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


