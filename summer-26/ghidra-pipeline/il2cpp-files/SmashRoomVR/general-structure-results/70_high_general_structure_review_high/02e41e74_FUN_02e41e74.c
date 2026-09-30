/*
FUNCTION_NAME: FUN_02e41e74
ENTRY_POINT: 02e41e74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_02e41e74(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  
  if ((DAT_03ff028b & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4930);
    thunk_FUN_01ad9084(StringLiteral_4037);
    thunk_FUN_01ad9084(StringLiteral_4931);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff028b = 1;
  }
  plVar11 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_5 + 0x41) != '\0') {
    return;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(uVar10,0);
  if ((uVar6 & 1) == 0) goto LAB_02e421f4;
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  lVar7 = FUN_0391c27c(param_5,0);
  if (lVar7 != 0) {
    uVar17 = FUN_03928d34(lVar7,0);
    uVar19 = param_2;
    uVar20 = param_3;
    lVar7 = FUN_0391c27c(param_5,0);
    if (lVar7 != 0) {
      uVar18 = FUN_039274a0(lVar7,0);
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01f259b0(uVar17,param_2,param_3,uVar18,uVar19,uVar20,param_4,uVar10,
                           *(undefined8 *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
      if ((lVar7 != 0) &&
         (lVar8 = FUN_01ed7d50(lVar7,*(undefined8 *)StringLiteral_4931), puVar5 = StringLiteral_4930
         , puVar4 = StringLiteral_4236, puVar3 = StringLiteral_4037, fVar2 = DAT_00b55290,
         lVar8 != 0)) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar13 = 0;
          do {
            if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar12 = *(long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
            fVar14 = (float)FUN_0391a0e8(0xbf800000,0x3f800000,0);
            fVar15 = (float)FUN_0391a0e8(0xbf800000,0x3f800000,0);
            fVar16 = (float)FUN_0391a0e8(0xbf800000,0x3f800000,0);
            if (lVar12 == 0) goto LAB_02e42254;
            fVar21 = *(float *)(param_5 + 0x2c);
            FUN_0395ae9c(fVar14 * fVar21,fVar15 * fVar21,fVar16 * fVar21,lVar12,2,0);
            if (*(char *)(param_5 + 0x34) != '\0') {
              fVar15 = (float)FUN_0391a0e8(*(undefined4 *)(param_5 + 0x3c),
                                           *(undefined4 *)(param_5 + 0x38),0);
              fVar14 = 3.0;
              if (fVar2 <= fVar15) {
                fVar14 = fVar15;
              }
              lVar9 = FUN_0391c2b8(lVar12,0);
              if ((lVar9 == 0) || (lVar9 = FUN_01ed7044(lVar9,*(undefined8 *)puVar5), lVar9 == 0))
              goto LAB_02e42254;
              uVar10 = FUN_02e41c78(fVar14);
              FUN_03920cb0(lVar9,uVar10,0);
            }
            if (*(char *)(param_5 + 0x40) != '\0') {
              lVar9 = FUN_0391c2b8(lVar12,0);
              if (lVar9 == 0) goto LAB_02e42254;
              uVar10 = FUN_01ed7d50(lVar9,*(undefined8 *)puVar3);
              if (DAT_03ff000c == '\0') {
                thunk_FUN_01ad9084(puVar4);
                DAT_03ff000c = '\x01';
              }
              lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
              if (lVar9 != 0) {
                if (lVar9 == 0) goto LAB_02e42254;
                FUN_02de8020(lVar9,uVar10,0);
              }
            }
            lVar12 = FUN_0391c27c(lVar12,0);
            if (lVar12 == 0) goto LAB_02e42254;
            FUN_039294c8(lVar12,0,0);
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar1);
        }
        plVar11 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (*(char *)(param_5 + 0x34) != '\0') {
          lVar7 = FUN_0392013c(lVar7,0);
          if ((lVar7 == 0) ||
             (lVar7 = FUN_01ed7044(lVar7,*(undefined8 *)StringLiteral_4930), lVar7 == 0))
          goto LAB_02e42254;
          fVar2 = *(float *)(param_5 + 0x38);
          if (*(float *)(param_5 + 0x38) <= DAT_00b55290) {
            fVar2 = 3.0;
          }
          uVar10 = FUN_02e41c78(fVar2);
          FUN_03920cb0(lVar7,uVar10,0);
        }
LAB_02e421f4:
        *(undefined1 *)(param_5 + 0x41) = 1;
        uVar10 = FUN_0391c2b8(param_5,0);
        if (*(int *)(*plVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*plVar11);
        }
        FUN_03923a90(uVar10,0);
        return;
      }
    }
  }
LAB_02e42254:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


