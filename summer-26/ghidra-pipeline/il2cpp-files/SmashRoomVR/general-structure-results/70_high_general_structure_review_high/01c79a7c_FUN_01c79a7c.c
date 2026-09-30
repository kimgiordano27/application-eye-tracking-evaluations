/*
FUNCTION_NAME: FUN_01c79a7c
ENTRY_POINT: 01c79a7c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01c79e00) */
/* WARNING: Removing unreachable block (ram,0x01c79c60) */
/* WARNING: Removing unreachable block (ram,0x01c79edc) */

void FUN_01c79a7c(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_03fed77d & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed77d = 1;
  }
  if (*(int *)(param_4 + 0x40) < 1) {
    if (*(char *)(param_4 + 0x2c) != '\0') {
      lVar1 = FUN_0391c27c(param_4,0);
      if (lVar1 == 0) goto LAB_01c79f34;
      lVar1 = FUN_03928c2c(lVar1,0);
      lVar2 = FUN_0391c27c(param_4,0);
      if ((lVar2 == 0) || (lVar2 = FUN_03928c2c(lVar2,0), lVar2 == 0)) goto LAB_01c79f34;
      fVar5 = (float)FUN_03928280(lVar2,0);
      fVar8 = param_2;
      lVar2 = FUN_0391c27c(param_4,0);
      if ((lVar2 == 0) || (lVar2 = FUN_03928c2c(lVar2,0), lVar2 == 0)) goto LAB_01c79f34;
      fVar6 = (float)FUN_03928280(lVar2,0);
      lVar2 = FUN_0391c27c(param_4,0);
      if ((lVar2 == 0) || (lVar2 = FUN_03928c2c(lVar2,0), lVar2 == 0)) goto LAB_01c79f34;
      FUN_03928280(lVar2,0);
      fVar10 = (float)FUN_03925cf4(0);
      fVar10 = fVar10 * *(float *)(param_4 + 0x34);
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      if (lVar1 == 0) goto LAB_01c79f34;
      param_3 = param_3 + (0.0 - param_3) * fVar10;
      param_2 = param_2 + (fVar8 - param_2) * fVar10;
      FUN_039282dc(fVar5 + (fVar6 - fVar5) * fVar10,param_2,param_3,lVar1,0);
      uVar4 = *(undefined8 *)(param_4 + 0x50);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar4,0);
      if ((uVar3 & 1) != 0) {
        lVar1 = *(long *)(param_4 + 0x50);
        if (lVar1 == 0) goto LAB_01c79f34;
        fVar8 = (float)FUN_0395c14c(lVar1,0);
        if (*(long *)(param_4 + 0x50) == 0) goto LAB_01c79f34;
        fVar5 = param_2;
        fVar6 = (float)FUN_0395c14c(*(long *)(param_4 + 0x50),0);
        if (*(long *)(param_4 + 0x50) == 0) goto LAB_01c79f34;
        FUN_0395c14c(*(long *)(param_4 + 0x50),0);
        fVar7 = *(float *)(param_4 + 0x58);
        fVar10 = (float)FUN_03925cf4(0);
        fVar10 = fVar10 * *(float *)(param_4 + 0x34);
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        FUN_0395c1ec(fVar8 + (fVar6 - fVar8) * fVar10,param_2 + (fVar5 - param_2) * fVar10,
                     param_3 + (fVar7 - param_3) * fVar10,lVar1,0);
      }
    }
    *(undefined4 *)(param_4 + 0x48) = 0;
    *(undefined1 *)(param_4 + 0x44) = 1;
  }
  else {
    if (*(char *)(param_4 + 0x2c) != '\0') {
      lVar1 = FUN_0391c27c(param_4,0);
      if (lVar1 == 0) goto LAB_01c79f34;
      lVar1 = FUN_03928c2c(lVar1,0);
      lVar2 = FUN_0391c27c(param_4,0);
      if ((lVar2 == 0) || (lVar2 = FUN_03928c2c(lVar2,0), lVar2 == 0)) goto LAB_01c79f34;
      fVar5 = (float)FUN_03928280(lVar2,0);
      fVar8 = param_2;
      lVar2 = FUN_0391c27c(param_4,0);
      if ((lVar2 == 0) || (lVar2 = FUN_03928c2c(lVar2,0), lVar2 == 0)) goto LAB_01c79f34;
      fVar6 = (float)FUN_03928280(lVar2,0);
      lVar2 = FUN_0391c27c(param_4,0);
      if ((lVar2 == 0) || (lVar2 = FUN_03928c2c(lVar2,0), lVar2 == 0)) goto LAB_01c79f34;
      FUN_03928280(lVar2,0);
      fVar11 = *(float *)(param_4 + 0x30);
      fVar7 = (float)FUN_03925cf4(0);
      fVar7 = fVar7 * *(float *)(param_4 + 0x34);
      fVar10 = fVar7;
      if (1.0 < fVar7) {
        fVar10 = 1.0;
      }
      if (fVar7 < 0.0) {
        fVar10 = 0.0;
      }
      if (lVar1 == 0) goto LAB_01c79f34;
      param_3 = param_3 + (fVar11 - param_3) * fVar10;
      param_2 = param_2 + (fVar8 - param_2) * fVar10;
      FUN_039282dc(fVar5 + (fVar6 - fVar5) * fVar10,param_2,param_3,lVar1,0);
      uVar4 = *(undefined8 *)(param_4 + 0x50);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03923030(uVar4,0);
      if ((uVar3 & 1) != 0) {
        lVar1 = *(long *)(param_4 + 0x50);
        if (lVar1 == 0) goto LAB_01c79f34;
        fVar8 = (float)FUN_0395c14c(lVar1,0);
        if (*(long *)(param_4 + 0x50) == 0) goto LAB_01c79f34;
        fVar5 = param_2;
        fVar6 = (float)FUN_0395c14c(*(long *)(param_4 + 0x50),0);
        if (*(long *)(param_4 + 0x50) == 0) goto LAB_01c79f34;
        FUN_0395c14c(*(long *)(param_4 + 0x50),0);
        fVar10 = *(float *)(param_4 + 0x58);
        fVar11 = *(float *)(param_4 + 0x30);
        fVar7 = (float)FUN_03925cf4(0);
        fVar7 = fVar7 * *(float *)(param_4 + 0x34);
        if (fVar7 < 0.0) {
          fVar7 = 0.0;
        }
        FUN_0395c1ec(fVar8 + (fVar6 - fVar8) * fVar7,param_2 + (fVar5 - param_2) * fVar7,
                     param_3 + ((fVar10 - fVar11) - param_3) * fVar7,lVar1,0);
      }
    }
    lVar1 = 0x24;
    if (*(int *)(param_4 + 0x48) != 1) {
      lVar1 = 0x28;
    }
    if (((*(char *)(param_4 + 0x20) != '\0') && (*(char *)(param_4 + 0x44) == '\0')) &&
       (fVar5 = *(float *)(param_4 + lVar1), fVar8 = (float)FUN_03925ca4(0),
       fVar5 <= fVar8 - *(float *)(param_4 + 0x4c))) {
      *(undefined1 *)(param_4 + 0x44) = 1;
    }
    if (*(char *)(param_4 + 0x44) != '\0') {
      uVar4 = *(undefined8 *)(param_4 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_4 + 0x38) == 0) {
LAB_01c79f34:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x100);
        if (lVar1 != 0) {
          FUN_0392e738(lVar1,0);
        }
      }
      *(int *)(param_4 + 0x48) = *(int *)(param_4 + 0x48) + 1;
      uVar9 = FUN_03925ca4(0);
      *(undefined4 *)(param_4 + 0x4c) = uVar9;
      *(undefined1 *)(param_4 + 0x44) = 0;
    }
  }
  return;
}


