/*
FUNCTION_NAME: FUN_01c32488
ENTRY_POINT: 01c32488
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
FUN_01c32488(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined4 param_4,
            long param_5)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if ((DAT_03fed521 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed521 = 1;
  }
  lVar4 = *(long *)(param_5 + 0x28);
  if (*(int *)(param_5 + 0x10) == 1) {
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_5 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if ((*(long *)(param_5 + 0x20) == 0) ||
       (lVar2 = FUN_0391c27c(*(long *)(param_5 + 0x20),0), lVar2 == 0)) goto LAB_01c32704;
    uVar5 = FUN_03928d34(lVar2,0);
    *(undefined4 *)(param_5 + 0x30) = uVar5;
    *(undefined4 *)(param_5 + 0x34) = param_2;
    *(float *)(param_5 + 0x38) = param_3;
    if ((*(long *)(param_5 + 0x20) == 0) ||
       (lVar2 = FUN_0391c27c(*(long *)(param_5 + 0x20),0), lVar2 == 0)) goto LAB_01c32704;
    uVar5 = FUN_039274a0(lVar2,0);
    *(undefined4 *)(param_5 + 0x3c) = uVar5;
    *(undefined4 *)(param_5 + 0x40) = param_2;
    *(float *)(param_5 + 0x44) = param_3;
    *(undefined4 *)(param_5 + 0x48) = param_4;
    *(undefined4 *)(param_5 + 0x4c) = 0;
  }
  if (lVar4 != 0) {
    fVar8 = *(float *)(lVar4 + 0x30);
    if (*(float *)(param_5 + 0x4c) < fVar8) {
      if (*(long *)(param_5 + 0x20) != 0) {
        lVar2 = FUN_0391c27c(*(long *)(param_5 + 0x20),0);
        if (*(long *)(lVar4 + 0x28) != 0) {
          fVar13 = *(float *)(param_5 + 0x30);
          fVar14 = *(float *)(param_5 + 0x34);
          fVar16 = *(float *)(param_5 + 0x38);
          lVar3 = FUN_0391c27c(*(long *)(lVar4 + 0x28),0);
          if (lVar3 != 0) {
            fVar6 = (float)FUN_03928d34(lVar3,0);
            fVar11 = *(float *)(param_5 + 0x4c) / *(float *)(lVar4 + 0x30);
            fVar1 = fVar11;
            if (1.0 < fVar11) {
              fVar1 = 1.0;
            }
            if (fVar11 < 0.0) {
              fVar1 = 0.0;
            }
            uVar12 = (ulong)(uint)fVar1;
            if (lVar2 != 0) {
              uVar10 = (ulong)(uint)(fVar16 + (param_3 - fVar16) * fVar1);
              uVar9 = (ulong)(uint)(fVar14 + (fVar8 - fVar14) * fVar1);
              FUN_03928dd4(fVar13 + (fVar6 - fVar13) * fVar1,uVar9,uVar10,lVar2,0);
              if (*(long *)(param_5 + 0x20) != 0) {
                lVar2 = FUN_0391c27c(*(long *)(param_5 + 0x20),0);
                if (*(long *)(lVar4 + 0x28) != 0) {
                  uVar5 = *(undefined4 *)(param_5 + 0x3c);
                  uVar15 = *(undefined4 *)(param_5 + 0x40);
                  uVar17 = *(undefined4 *)(param_5 + 0x44);
                  uVar18 = *(undefined4 *)(param_5 + 0x48);
                  lVar4 = FUN_0391c27c(*(long *)(lVar4 + 0x28),0);
                  if (lVar4 != 0) {
                    uVar7 = FUN_039274a0(lVar4,0);
                    FUN_03914490(uVar5,uVar15,uVar17,uVar18,uVar7,uVar9,uVar10,uVar12,0);
                    if (lVar2 != 0) {
                      FUN_03928f54(lVar2,0);
                      fVar13 = *(float *)(param_5 + 0x4c);
                      fVar8 = (float)FUN_03925cf4(0);
                      *(float *)(param_5 + 0x4c) = fVar13 + fVar8;
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
      }
    }
    else if ((*(long *)(lVar4 + 0x28) != 0) &&
            (lVar4 = FUN_0391c2b8(*(long *)(lVar4 + 0x28),0), lVar4 != 0)) {
      FUN_0391fb70(lVar4,1,0);
      if (*(long *)(param_5 + 0x20) != 0) {
        uVar7 = FUN_0391c2b8(*(long *)(param_5 + 0x20),0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        FUN_03923a90(uVar7,0);
        return 0;
      }
    }
  }
LAB_01c32704:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


