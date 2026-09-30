/*
FUNCTION_NAME: FUN_01e7c1f8
ENTRY_POINT: 01e7c1f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool FUN_01e7c1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,uint param_9,
                 ulong param_10,undefined8 param_11,undefined8 param_12,int param_13,
                 undefined4 param_14,undefined8 *param_15,int param_16,undefined4 param_17,
                 byte param_18,undefined8 param_19,byte param_20,undefined8 param_21,
                 undefined8 param_22,byte param_23,byte param_24,byte param_25,byte param_26,
                 byte param_27,byte param_28,byte param_29,byte param_30,byte param_31)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 in_stack_fffffffffffffeb0;
  undefined4 uVar10;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  
  puVar3 = PTR_DAT_0234c2e8;
  uVar10 = (undefined4)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  local_90 = (undefined4)param_1;
  uStack_8c = (undefined4)param_2;
  local_88 = (undefined4)param_3;
  uStack_a8 = param_22;
  local_b0 = param_21;
  local_a0 = param_4;
  uStack_9c = param_5;
  local_98 = param_6;
  uStack_94 = param_7;
  if ((DAT_0247e224 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235f298);
    FUN_00fdc2e4(PTR_DAT_0235f2a0);
    FUN_00fdc2e4(PTR_DAT_0235f2a8);
    FUN_00fdc2e4(PTR_DAT_0235f2b0);
    FUN_00fdc2e4(PTR_DAT_0235f2b8);
    FUN_00fdc2e4(PTR_DAT_0235f230);
    FUN_00fdc2e4(PTR_DAT_0235f240);
    FUN_00fdc2e4(PTR_DAT_0235f238);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    DAT_0247e224 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar6 = FUN_01e79be8();
  if ((uVar6 & 1) == 0) {
    return false;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar7 = FUN_01e79184();
  puVar4 = PTR_DAT_0235f240;
  lVar8 = *(long *)PTR_DAT_0235f240;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar8);
    lVar8 = *(long *)puVar4;
  }
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar7,**(undefined8 **)(lVar8 + 0xb8),0);
  if ((uVar6 & 1) == 0) {
    if (param_16 != 0) {
      return false;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uStack_d0 = *param_15;
    uStack_bc = *(undefined8 *)((long)param_15 + 0x14);
    uStack_c0 = (undefined4)((ulong)*(undefined8 *)((long)param_15 + 0xc) >> 0x20);
    uStack_c8 = (undefined4)param_15[1];
    local_c4 = (undefined4)((ulong)param_15[1] >> 0x20);
    if (*(int *)(*(long *)PTR_DAT_0235f298 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uStack_108 = uStack_c8;
    local_110 = uStack_d0;
    uStack_fc = uStack_bc;
    uStack_104 = local_c4;
    uStack_100 = uStack_c0;
    iVar5 = FUN_01eafe7c(param_1,param_2,param_3,param_8 & 1,param_9 & 1,param_11,0,&local_110,0);
    goto LAB_01e7c724;
  }
  uVar2 = param_8 & 1 | 2;
  if ((param_9 & 1) == 0) {
    uVar2 = param_8 & 1;
  }
  uVar1 = uVar2 | 4;
  if ((param_10 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 8;
  if ((param_23 & 1) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x200;
  if ((param_28 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x10;
  if ((param_25 & 1) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x80;
  if ((param_27 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x20;
  if ((param_26 & 1) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x40;
  if ((param_24 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x100;
  if ((param_29 & 1) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x400;
  if ((param_30 & 1) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x100000;
  if ((param_31 & 1) == 0) {
    uVar2 = uVar1;
  }
  switch(param_17) {
  case 1:
  case 2:
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01e79184();
    plVar9 = (long *)PTR_DAT_0235f238;
    break;
  default:
    goto switchD_01e7c42c_caseD_3;
  case 4:
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01e79184();
    plVar9 = (long *)PTR_DAT_0235f2a0;
    break;
  case 5:
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01e79184();
    plVar9 = (long *)PTR_DAT_0235f2b0;
    break;
  case 9:
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01e79184();
    plVar9 = (long *)PTR_DAT_0235f230;
  }
  lVar8 = *plVar9;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar8);
    lVar8 = *plVar9;
  }
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
                    (uVar7,**(undefined8 **)(lVar8 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    return false;
  }
switchD_01e7c42c_caseD_3:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar7 = FUN_01e79184();
  puVar4 = PTR_DAT_0235f2b8;
  lVar8 = *(long *)PTR_DAT_0235f2b8;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar8);
    lVar8 = *(long *)puVar4;
  }
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar7,**(undefined8 **)(lVar8 + 0xb8),0);
  if ((param_13 == -1) || ((uVar6 & 1) == 0)) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01e79184();
    puVar3 = PTR_DAT_0235f2a8;
    lVar8 = *(long *)PTR_DAT_0235f2a8;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar8);
      lVar8 = *(long *)puVar3;
    }
    uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                      (uVar7,**(undefined8 **)(lVar8 + 0xb8),0);
    if ((param_13 == -1) || ((uVar6 & 1) == 0)) {
      uStack_bc = *(undefined8 *)((long)param_15 + 0x14);
      uStack_d0 = *param_15;
      uStack_c0 = (undefined4)((ulong)*(undefined8 *)((long)param_15 + 0xc) >> 0x20);
      uStack_c8 = (undefined4)param_15[1];
      local_c4 = (undefined4)((ulong)param_15[1] >> 0x20);
      if (*(int *)(*(long *)PTR_DAT_0235f240 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uStack_e8 = uStack_c8;
      local_f0 = uStack_d0;
      uStack_dc = uStack_bc;
      uStack_e4 = local_c4;
      uStack_e0 = uStack_c0;
      iVar5 = Unity_XR_Oculus_NativeMethods_Internal__GetDisplayAvailableFrequencies
                        (param_1,param_2,param_3,uVar2,param_11,param_12,0,&local_f0,param_16,0);
LAB_01e7c724:
      return iVar5 == 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar5 = FUN_01eb3b1c(uVar2,param_11,param_12,param_13,param_14,param_15,&local_90,param_16,0);
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar5 = FUN_01eb56cc(uVar2,param_11,param_12,param_13,param_14,param_15,&local_90,param_16,
                         CONCAT44(uVar10,(uint)param_18) & 0xffffffff00000001,param_19,param_20 & 1,
                         &local_a0,&local_b0,0);
  }
  return iVar5 == 0;
}


