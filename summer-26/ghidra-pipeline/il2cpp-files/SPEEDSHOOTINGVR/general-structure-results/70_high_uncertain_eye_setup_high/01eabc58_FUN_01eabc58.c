/*
FUNCTION_NAME: FUN_01eabc58
ENTRY_POINT: 01eabc58
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_01eabc58(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,int param_5,
                 undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_80;
  undefined8 local_78;
  
  puVar2 = PTR_DAT_0234c2e8;
  if ((DAT_0247e3f8 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234ba20);
    FUN_00fdc2e4(PTR_DAT_02360180);
    FUN_00fdc2e4(PTR_DAT_0235f2e0);
    FUN_00fdc2e4(PTR_DAT_0235f540);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_0234b9f0);
    FUN_00fdc2e4(PTR_DAT_0234d6f0);
    FUN_00fdc2e4(PTR_DAT_02360170);
    FUN_00fdc2e4(PTR_DAT_02360188);
    DAT_0247e3f8 = 1;
  }
  puVar3 = PTR_DAT_0235f2e0;
  local_80 = 0;
  local_78 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar9 = FUN_01e79184(0);
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar14);
    lVar14 = *(long *)puVar3;
  }
  uVar10 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                     (uVar9,**(undefined8 **)(lVar14 + 0xb8),0);
  puVar1 = PTR_DAT_0234b9f0;
  if ((uVar10 & 1) == 0) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_0234b9f0 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar10 = FUN_01ff70e4(param_3,0,0);
  if ((uVar10 & 1) != 0) {
    puVar15 = (undefined8 *)PTR_DAT_02360188;
    if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      puVar15 = (undefined8 *)PTR_DAT_02360188;
    }
LAB_01eabdec:
    FUN_01fd09b0(*puVar15,0);
    return false;
  }
  iVar5 = FUN_01eaae90();
  puVar4 = PTR_DAT_02360180;
  if (iVar5 != 0) {
    puVar15 = (undefined8 *)PTR_DAT_02360170;
    if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      puVar15 = (undefined8 *)PTR_DAT_02360170;
    }
    goto LAB_01eabdec;
  }
  local_78 = 0;
  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_02360180 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar10 = FUN_01ff70e4(uVar9,0,0);
  if ((uVar10 & 1) == 0) {
    plVar11 = (long *)**(long **)(*(long *)puVar4 + 0xb8);
    if ((plVar11 == (long *)0x0) ||
       (iVar5 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180)),
       param_3 == (long *)0x0)) goto LAB_01eac124;
    iVar8 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
    if (iVar5 != iVar8) goto LAB_01eabed8;
    plVar11 = (long *)**(long **)(*(long *)puVar4 + 0xb8);
    if (plVar11 == (long *)0x0) goto LAB_01eac124;
    iVar5 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
    iVar8 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
    if (iVar5 != iVar8) goto LAB_01eabed8;
  }
  else {
    if (param_3 == (long *)0x0) goto LAB_01eac124;
LAB_01eabed8:
    uVar6 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
    uVar7 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
    uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234d6f0);
    FUN_01fe1edc(uVar9,uVar6,uVar7,5,0,0);
    **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
    thunk_FUN_0106e12c(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar9);
  }
  uVar9 = FUN_01fe54bc(0);
  FUN_01fe54e4(param_3,0);
  lVar14 = **(long **)(*(long *)puVar4 + 0xb8);
  iVar5 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
  iVar8 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
  if (lVar14 != 0) {
    FUN_01fe277c(0,0,(float)iVar5,(float)iVar8,lVar14,0,0,0);
    FUN_01fe54e4(uVar9,0);
    if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
      uVar9 = FUN_01fe1be8(**(long **)(*(long *)puVar4 + 0xb8),0,0);
      local_78 = FUN_01cbacec(uVar9,3,0);
      uVar9 = FUN_01cbabfc(&local_78,0);
      local_80 = 0;
      if (param_4 == 0) {
        param_5 = 0;
        uVar12 = 0;
      }
      else {
        local_80 = FUN_01cbacec(param_4,3,0);
        uVar12 = FUN_01cbabfc(&local_80,0);
        param_5 = param_5 << 2;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar13 = FUN_01e79184(0);
      puVar2 = PTR_DAT_0235f540;
      lVar14 = *(long *)PTR_DAT_0235f540;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar14);
        lVar14 = *(long *)puVar2;
      }
      uVar10 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                         (uVar13,**(undefined8 **)(lVar14 + 0xb8),0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        iVar5 = FUN_01eabad8(param_1,uVar9,uVar12,param_5,param_6,param_7);
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        iVar5 = FUN_01eb6d44(param_1,param_2,uVar9,uVar12,param_5,param_6,param_7,0);
      }
      FUN_01cbad00(&local_78,0);
      if (param_4 != 0) {
        FUN_01cbad00(&local_80,0);
      }
      return iVar5 == 0;
    }
  }
LAB_01eac124:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


