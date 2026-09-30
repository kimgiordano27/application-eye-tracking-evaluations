/*
FUNCTION_NAME: FUN_01c2ed64
ENTRY_POINT: 01c2ed64
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


undefined8
FUN_01c2ed64(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined4 param_4,
            long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if ((DAT_03fed4ff & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed4ff = 1;
  }
  lVar6 = *(long *)(param_5 + 0x28);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if ((*(long *)(param_5 + 0x20) == 0) ||
       (lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x20),0), lVar3 == 0)) goto LAB_01c2f09c;
    uVar7 = FUN_03928d34(lVar3,0);
    *(undefined4 *)(param_5 + 0x30) = uVar7;
    *(undefined4 *)(param_5 + 0x34) = param_2;
    *(float *)(param_5 + 0x38) = param_3;
    if ((*(long *)(param_5 + 0x20) == 0) ||
       (lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x20),0), lVar3 == 0)) goto LAB_01c2f09c;
    uVar7 = FUN_039274a0(lVar3,0);
    *(undefined4 *)(param_5 + 0x3c) = uVar7;
    *(undefined4 *)(param_5 + 0x40) = param_2;
    *(float *)(param_5 + 0x44) = param_3;
    *(undefined4 *)(param_5 + 0x48) = param_4;
    *(undefined4 *)(param_5 + 0x4c) = 0;
  }
  if (lVar6 != 0) {
    fVar10 = *(float *)(lVar6 + 0x40);
    if (*(float *)(param_5 + 0x4c) < fVar10) {
      if (*(long *)(param_5 + 0x20) != 0) {
        lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x20),0);
        if (*(long *)(lVar6 + 0x38) != 0) {
          fVar14 = *(float *)(param_5 + 0x30);
          fVar16 = *(float *)(param_5 + 0x34);
          fVar18 = *(float *)(param_5 + 0x38);
          fVar8 = (float)FUN_03928d34(*(long *)(lVar6 + 0x38),0);
          fVar13 = *(float *)(param_5 + 0x4c) / *(float *)(lVar6 + 0x40);
          fVar15 = fVar13;
          if (1.0 < fVar13) {
            fVar15 = 1.0;
          }
          if (fVar13 < 0.0) {
            fVar15 = 0.0;
          }
          uVar4 = (ulong)(uint)fVar15;
          if (lVar3 != 0) {
            uVar12 = (ulong)(uint)(fVar18 + (param_3 - fVar18) * fVar15);
            uVar11 = (ulong)(uint)(fVar16 + (fVar10 - fVar16) * fVar15);
            FUN_03928dd4(fVar14 + (fVar8 - fVar14) * fVar15,uVar11,uVar12,lVar3,0);
            if (*(long *)(param_5 + 0x20) != 0) {
              lVar3 = FUN_0391c27c(*(long *)(param_5 + 0x20),0);
              if (*(long *)(lVar6 + 0x38) != 0) {
                uVar17 = *(undefined4 *)(param_5 + 0x44);
                uVar7 = *(undefined4 *)(param_5 + 0x48);
                uVar20 = *(undefined4 *)(param_5 + 0x3c);
                uVar19 = *(undefined4 *)(param_5 + 0x40);
                uVar9 = FUN_039274a0(*(long *)(lVar6 + 0x38),0);
                FUN_03914490(uVar20,uVar19,uVar17,uVar7,uVar9,uVar11,uVar12,uVar4,0);
                if (lVar3 != 0) {
                  FUN_03928f54(lVar3,0);
                  fVar15 = *(float *)(param_5 + 0x4c);
                  fVar10 = (float)FUN_03925cf4(0);
                  *(float *)(param_5 + 0x4c) = fVar15 + fVar10;
                  *(undefined8 *)(param_5 + 0x18) = 0;
                  thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x18),0);
                  *(undefined4 *)(param_5 + 0x10) = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (DAT_03fed51b == '\0') {
        thunk_FUN_01ad9084(
                          Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                          );
        DAT_03fed51b = '\x01';
      }
      puVar2 = 
      Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
      ;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar9 = **(undefined8 **)
                (*(long *)
                  Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                + 0xb8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(uVar9,0);
      if ((uVar4 & 1) != 0) {
        if (DAT_03fed51b == '\0') {
          thunk_FUN_01ad9084(
                            Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                            );
          DAT_03fed51b = '\x01';
        }
        if (*(long *)(lVar6 + 0x28) == 0) goto LAB_01c2f09c;
        uVar9 = *(undefined8 *)(lVar6 + 0x50);
        lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
        lVar3 = FUN_0391c27c(*(long *)(lVar6 + 0x28),0);
        if ((lVar3 == 0) || (FUN_03928d34(lVar3,0), lVar5 == 0)) goto LAB_01c2f09c;
        FUN_02df26c0(lVar5,uVar9,0);
      }
      if ((*(long *)(lVar6 + 0x28) != 0) &&
         (lVar3 = FUN_0391c2b8(*(long *)(lVar6 + 0x28),0), lVar3 != 0)) {
        FUN_0391fb70(lVar3,1,0);
        if (*(long *)(lVar6 + 0x30) != 0) {
          FUN_0391fb70(*(long *)(lVar6 + 0x30),0,0);
          if (*(long *)(param_5 + 0x20) != 0) {
            uVar9 = FUN_0391c2b8(*(long *)(param_5 + 0x20),0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar1);
            }
            FUN_03923a90(uVar9,0);
            return 0;
          }
        }
      }
    }
  }
LAB_01c2f09c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


