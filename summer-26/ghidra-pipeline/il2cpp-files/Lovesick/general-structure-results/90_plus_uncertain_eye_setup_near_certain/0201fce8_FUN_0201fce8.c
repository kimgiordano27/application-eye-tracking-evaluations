/*
FUNCTION_NAME: FUN_0201fce8
ENTRY_POINT: 0201fce8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_0201fce8(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  long lStack_58;
  
  if ((DAT_037809b6 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    DAT_037809b6 = 1;
  }
  FUN_017b46ec(param_1,0);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  puVar2 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(StringLiteral_11864);
    FUN_016ec5b8(uVar5,uVar8,0);
LAB_02020048:
    uVar8 = thunk_FUN_00d48444(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_11__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar8);
  }
  if ((0x3ff < param_3) || (((param_3 >> 8 & 1) != 0 && ((param_3 & 0xfffffcf4) != 0)))) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__)
    ;
    FUN_016f44f8(uVar5,uVar8,0);
    goto LAB_02020048;
  }
  if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02021694(param_4);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(long *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x20) = param_3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if ((param_3 >> 9 & 1) == 0) {
    plVar4 = (long *)FUN_017319b4();
  }
  else {
    plVar4 = (long *)FUN_01731954(0);
  }
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (DAT_037809db == '\0') {
      thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
      DAT_037809db = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar3;
    }
    lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar9 != 0) {
      local_70 = *(undefined8 *)(lVar9 + 0x30);
      uStack_78 = *(undefined8 *)(lVar9 + 0x28);
      local_80 = *(undefined8 *)(lVar9 + 0x20);
      uStack_64 = 0;
      local_68 = param_3;
      local_60 = uVar5;
      lStack_58 = param_2;
      uVar7 = FUN_02021b88(&local_80,&local_68);
      if ((uVar7 & 1) != 0) goto LAB_0201fe88;
      lVar6 = *(long *)puVar3;
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar3;
    }
    if (**(int **)(lVar6 + 0xb8) != 0) {
      uStack_94 = 0;
      local_98 = param_3;
      local_90 = uVar5;
      lStack_88 = param_2;
      lVar9 = FUN_0201f128(param_1,&local_98,0);
      if (lVar9 != 0) {
LAB_0201fe88:
        uVar5 = *(undefined8 *)(lVar9 + 0x40);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar9 + 0x48);
        *(undefined8 *)(param_1 + 0x30) = uVar5;
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar9 + 0x50);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar9 + 0x58);
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 0x38);
        uVar8 = *(undefined8 *)(lVar9 + 0x68);
        uVar5 = *(undefined8 *)(lVar9 + 0x60);
        *(undefined1 *)(param_1 + 0x68) = 1;
        *(undefined8 *)(param_1 + 0x58) = uVar8;
        *(undefined8 *)(param_1 + 0x50) = uVar5;
        return;
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(*(long *)
                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = FUN_0203073c(param_2,uVar1,0);
    if (lVar6 != 0) {
      uVar8 = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar6 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar8;
      lVar6 = FUN_020374f8(lVar6,0);
      *(long *)(param_1 + 0x60) = lVar6;
      if (lVar6 != 0) {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar6 + 0x28);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar6 + 0x30);
        FUN_02021930(param_1);
        if ((param_5 & 1) != 0) {
          if (DAT_037809db == '\0') {
            thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
            DAT_037809db = '\x01';
          }
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar3;
          }
          lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
          if (lVar9 != 0) {
            local_70 = *(undefined8 *)(lVar9 + 0x30);
            uStack_78 = *(undefined8 *)(lVar9 + 0x28);
            local_80 = *(undefined8 *)(lVar9 + 0x20);
            uStack_64 = 0;
            local_68 = param_3;
            local_60 = uVar5;
            lStack_58 = param_2;
            uVar7 = FUN_02021b88(&local_80,&local_68);
            if ((uVar7 & 1) != 0) {
              return;
            }
            lVar6 = *(long *)puVar3;
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar3;
          }
          if (**(int **)(lVar6 + 0xb8) != 0) {
            uStack_64 = 0;
            local_68 = param_3;
            local_60 = uVar5;
            lStack_58 = param_2;
            FUN_0201f128(param_1,&local_68,1);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


