/*
FUNCTION_NAME: FUN_0327cebc
ENTRY_POINT: 0327cebc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


long FUN_0327cebc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_98;
  
  puVar1 = StringLiteral_2273;
  if ((DAT_03ff5692 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5471);
    thunk_FUN_01ad9084(PTR_DAT_03d851f0);
    thunk_FUN_01ad9084(PTR_DAT_03d851f8);
    thunk_FUN_01ad9084(PTR_DAT_03d85200);
    thunk_FUN_01ad9084(PTR_DAT_03d85208);
    thunk_FUN_01ad9084(PTR_DAT_03d85210);
    thunk_FUN_01ad9084(PTR_DAT_03d850a8);
    thunk_FUN_01ad9084(PTR_DAT_03d850b0);
    thunk_FUN_01ad9084(StringLiteral_2273);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d85218);
    thunk_FUN_01ad9084(PTR_DAT_03d85220);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84fd8);
    thunk_FUN_01ad9084(PTR_DAT_03d85228);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d85230);
    DAT_03ff5692 = 1;
  }
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = *param_2;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03261ae4(uVar11,&local_98,0);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)StringLiteral_5471;
    lVar6 = *(long *)(lVar8 + 0x38);
    if (lVar6 == 0) {
      FUN_01ae9ed0(lVar8);
      lVar6 = *(long *)(lVar8 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ae9e74();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ae9e74();
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
  }
  else {
    if (local_98 == 0) goto LAB_0327d3c8;
    lVar6 = FUN_02ee8bf4(local_98,0x2c,0,0);
  }
  puVar3 = PTR_DAT_03d85208;
  puVar2 = PTR_DAT_03d851f8;
  puVar1 = PTR_DAT_03d851f0;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_0327d3c8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (0 < *(int *)(*(long *)(param_1 + 0x30) + 0x18)) {
    if (lVar6 == 0) goto LAB_0327d3c8;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar5 = 0;
      uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar5) goto LAB_0327d3c4;
        uVar12 = *(undefined8 *)(lVar6 + uVar5 * 8 + 0x20);
        uVar9 = FUN_02ee6cf0(uVar12,0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_0327d3c8;
          FUN_02b5a400(&local_d8,*(long *)(param_1 + 0x30),*(undefined8 *)puVar3);
          uStack_b8 = uStack_d0;
          local_c0 = local_d8;
          local_b0 = local_c8;
          do {
            uVar9 = FUN_02739b98(&local_c0,*(undefined8 *)puVar2);
            lVar8 = local_b0;
            if ((uVar9 & 1) == 0) goto LAB_0327d158;
            if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar9 = thunk_FUN_02ee6388(*(undefined8 *)(local_b0 + 0x18),uVar12,0);
          } while ((uVar9 & 1) == 0);
          param_3 = *(undefined8 *)(lVar8 + 0x10);
LAB_0327d158:
          FUN_02739b94(&local_c0,*(undefined8 *)puVar1);
        }
        uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(param_3,0,0);
  if ((uVar5 & 1) == 0) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar10 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    uVar15 = *puVar10;
    uVar14 = puVar10[1];
    uVar13 = puVar10[2];
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    puVar10 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar19 = *puVar10;
    uVar18 = puVar10[1];
    uVar17 = puVar10[2];
    uVar16 = puVar10[3];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar6 = FUN_01f25ab0(uVar15,uVar14,uVar13,uVar19,uVar18,uVar17,uVar16,param_3,uVar11,
                         *(undefined8 *)PTR_DAT_03d85220);
    if ((lVar6 == 0) || (lVar8 = FUN_0391c2b8(lVar6,0), lVar8 == 0)) goto LAB_0327d3c8;
    FUN_0391fb70(lVar8,1,0);
    local_e0 = param_2[2];
    uStack_e8 = param_2[1];
    local_f0 = *param_2;
    FUN_03277630(lVar6,&local_f0);
  }
  else {
    cVar4 = FUN_03279ca0(param_1);
    if (cVar4 != '\0') {
      local_d8 = uVar11;
      uVar11 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d85218,&local_d8);
      uVar11 = FUN_02ede300(*(undefined8 *)PTR_DAT_03d85230,uVar11,0);
      if (lVar6 == 0) goto LAB_0327d3c8;
      uVar12 = *(undefined8 *)PTR_DAT_03d84fd8;
      if (*(long *)(lVar6 + 0x18) == 0) {
        uVar7 = *(undefined8 *)
                 Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
      }
      else {
        if ((int)*(long *)(lVar6 + 0x18) == 0) {
LAB_0327d3c4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar7 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d85228,*(undefined8 *)(lVar6 + 0x20),0);
      }
      uVar11 = FUN_02edd6e8(uVar11,uVar7,0);
      FUN_0327abc0(uVar11,uVar12,uVar11,0);
    }
    lVar6 = 0;
  }
  return lVar6;
}


