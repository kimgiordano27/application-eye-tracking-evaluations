/*
FUNCTION_NAME: FUN_02e03364
ENTRY_POINT: 02e03364
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_02e03364(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_03ff00b6 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff00b6 = 1;
  }
  lVar2 = FUN_0391c27c(param_4,0);
  if (lVar2 == 0) goto LAB_02e03760;
  fVar7 = (float)FUN_03928d34(lVar2,0);
  fVar9 = *(float *)(param_4 + 0x148);
  fVar10 = *(float *)(param_4 + 0x14c);
  fVar11 = *(float *)(param_4 + 0x150);
  fVar8 = (float)FUN_03925cf4(0);
  fVar12 = *(float *)(param_4 + 0x19c);
  fVar13 = *(float *)(param_4 + 0x1a0);
  fVar14 = *(float *)(param_4 + 0x1a4);
  fVar15 = (fVar7 - fVar9) / fVar8;
  fVar9 = (param_2 - fVar10) / fVar8;
  fVar8 = (param_3 - fVar11) / fVar8;
  fVar7 = (float)FUN_03925cf4(0);
  *(float *)(param_4 + 0x19c) = fVar15;
  *(float *)(param_4 + 0x1a0) = fVar9;
  *(float *)(param_4 + 0x1a4) = fVar8;
  if ((*(long *)(param_4 + 0xd0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_4 + 0xd0) + 0x90), lVar2 == 0)) goto LAB_02e03760;
  fVar10 = (fVar15 - fVar12) / fVar7;
  fVar9 = (fVar9 - fVar13) / fVar7;
  fVar7 = (fVar8 - fVar14) / fVar7;
  fVar8 = (float)FUN_0395a1d0(lVar2,0);
  FUN_0395ae9c(fVar10 * fVar8,fVar9 * fVar8,fVar7 * fVar8,lVar2,0,0);
  if ((*(long *)(param_4 + 0xd8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_4 + 0xd8) + 0x90), lVar2 == 0)) goto LAB_02e03760;
  fVar8 = (float)FUN_0395a1d0(lVar2,0);
  FUN_0395ae9c(fVar10 * fVar8,fVar9 * fVar8,fVar7 * fVar8,lVar2,0,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_4 + 0xc0) == 0) goto LAB_02e03760;
  uVar4 = *(undefined8 *)(*(long *)(param_4 + 0xc0) + 0x98);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar4,0);
  lVar2 = 0;
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_4 + 0xc0) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_4 + 0xc0) + 0x98), lVar2 == 0)) goto LAB_02e03760;
    uVar4 = *(undefined8 *)(lVar2 + 0xa8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar4,0);
    lVar2 = 0;
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_4 + 0xc0) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_4 + 0xc0) + 0x98), lVar2 == 0)) goto LAB_02e03760;
      lVar2 = *(long *)(lVar2 + 0xa8);
    }
  }
  if (*(long *)(param_4 + 200) == 0) goto LAB_02e03760;
  uVar4 = *(undefined8 *)(*(long *)(param_4 + 200) + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar4,0);
  lVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_4 + 200) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_4 + 200) + 0x98), lVar5 == 0)) goto LAB_02e03760;
    uVar4 = *(undefined8 *)(lVar5 + 0xa8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar4,0);
    lVar5 = 0;
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_4 + 200) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_4 + 200) + 0x98), lVar5 == 0)) goto LAB_02e03760;
      lVar5 = *(long *)(lVar5 + 0xa8);
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(lVar5,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(lVar2,lVar5,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_4 + 0xd0) == 0) || (lVar2 == 0)) goto LAB_02e03760;
        lVar6 = *(long *)(*(long *)(param_4 + 0xd0) + 0x90);
        fVar8 = (float)FUN_0395a1d0(lVar2,0);
        if (lVar6 == 0) goto LAB_02e03760;
        fVar8 = fVar8 * 0.5;
        FUN_0395ae9c(fVar10 * fVar8,fVar9 * fVar8,fVar7 * fVar8,lVar6,0,0);
        if ((*(long *)(param_4 + 0xd8) == 0) || (lVar5 == 0)) goto LAB_02e03760;
        lVar2 = *(long *)(*(long *)(param_4 + 0xd8) + 0x90);
        fVar8 = (float)FUN_0395a1d0(lVar5,0);
        if (lVar2 == 0) goto LAB_02e03760;
        fVar8 = fVar8 * 0.5;
        goto FUN_02e03708;
      }
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_4 + 0xd0) == 0) || (lVar2 == 0)) goto LAB_02e03760;
    lVar6 = *(long *)(*(long *)(param_4 + 0xd0) + 0x90);
    fVar8 = (float)FUN_0395a1d0(lVar2,0);
    if (lVar6 == 0) goto LAB_02e03760;
    FUN_0395ae9c(fVar10 * fVar8,fVar9 * fVar8,fVar7 * fVar8,lVar6,0,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar5,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_4 + 0xd8) != 0) && (lVar5 != 0)) {
    lVar2 = *(long *)(*(long *)(param_4 + 0xd8) + 0x90);
    fVar8 = (float)FUN_0395a1d0(lVar5,0);
    if (lVar2 != 0) {
FUN_02e03708:
      FUN_0395ae9c(fVar10 * fVar8,fVar9 * fVar8,fVar7 * fVar8,lVar2,0,0);
      return;
    }
  }
LAB_02e03760:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


