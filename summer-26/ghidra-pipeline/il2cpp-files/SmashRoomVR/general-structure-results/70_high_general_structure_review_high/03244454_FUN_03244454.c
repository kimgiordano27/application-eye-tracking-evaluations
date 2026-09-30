/*
FUNCTION_NAME: FUN_03244454
ENTRY_POINT: 03244454
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_03244454(undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff47b4 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d83998);
    DAT_03ff47b4 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_038f032c(0);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_5 + 0xd8) == '\0') {
      FUN_03244258(param_5);
    }
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar6 = *(undefined8 *)(param_5 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar6,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_5 + 0x40) != 0) {
        iVar1 = *(int *)(*(long *)(param_5 + 0x40) + 0xec);
        uVar6 = *(undefined8 *)(param_5 + 0x60);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03923030(uVar6,0);
        if (*(long *)(param_5 + 0x68) != 0) {
          uVar12 = FUN_03928d34(*(long *)(param_5 + 0x68),0);
          uVar15 = param_2;
          uVar19 = param_3;
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_5 + 0x60) == 0) goto LAB_03244a48;
            fVar8 = (float)FUN_03928d34(*(long *)(param_5 + 0x60),0);
            uVar12 = (ulong)(uint)((float)uVar12 - fVar8);
            param_2 = (ulong)(uint)((float)param_2 - (float)uVar15);
            param_3 = (ulong)(uint)((float)param_3 - (float)uVar19);
          }
          fVar8 = (float)uVar15;
          fVar16 = (float)uVar19;
          if (*(long *)(param_5 + 0x68) != 0) {
            fVar9 = (float)FUN_039274a0(*(long *)(param_5 + 0x68),0);
            if (*(long *)(param_5 + 0x68) != 0) {
              fVar17 = fVar16;
              fVar13 = fVar8;
              fVar10 = (float)FUN_0392a7f0(*(long *)(param_5 + 0x68),0);
              lVar5 = *(long *)(param_5 + 0x40);
              if (lVar5 != 0) {
                if (*(char *)(lVar5 + 0xac) == '\0') {
                  local_7c = 0.0;
                  local_84 = 0.0;
                  local_80 = 1.0;
                  local_78 = 1.0;
                  local_74 = 1.0;
                  local_9c = 0.0;
                  local_a0 = 0.0;
                  fVar21 = 1.0;
                  fVar22 = 0.0;
                  fVar23 = 0.0;
                  local_a4 = 1.0;
                  fVar11 = 1.0;
                }
                else {
                  local_78 = *(float *)(lVar5 + 0x50);
                  local_74 = *(float *)(lVar5 + 0x54);
                  fVar23 = *(float *)(lVar5 + 0x48);
                  fVar22 = *(float *)(lVar5 + 0x4c);
                  local_84 = *(float *)(lVar5 + 0x5c);
                  fVar21 = *(float *)(lVar5 + 0x60);
                  local_7c = *(float *)(lVar5 + 0x58);
                  local_80 = *(float *)(lVar5 + 100);
                  local_9c = *(float *)(lVar5 + 0x28);
                  local_a0 = *(float *)(lVar5 + 0x2c);
                  local_a4 = *(float *)(lVar5 + 0x30);
                  fVar11 = *(float *)(lVar5 + 0x34);
                }
                lVar5 = *(long *)(lVar5 + 0xf8);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48180();
                  }
                  uVar6 = *(undefined8 *)(lVar5 + 0x20);
                  uVar7 = *(undefined8 *)(param_5 + 0x20);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar3 = FUN_03922f24(uVar7,0,0);
                  if (((((((uVar3 & 1) != 0) || (*(int *)(param_5 + 0x70) != iVar1)) ||
                        (fVar14 = *(float *)(param_5 + 0x74) - (float)uVar12,
                        fVar18 = *(float *)(param_5 + 0x78) - (float)param_2,
                        fVar20 = *(float *)(param_5 + 0x7c) - (float)param_3,
                        DAT_00b55084 <= fVar20 * fVar20 + fVar14 * fVar14 + fVar18 * fVar18)) ||
                       (((param_4 * *(float *)(param_5 + 0x8c) +
                          fVar16 * *(float *)(param_5 + 0x88) +
                          fVar9 * *(float *)(param_5 + 0x80) + fVar8 * *(float *)(param_5 + 0x84) <=
                          DAT_00b553b8 ||
                         (fVar14 = *(float *)(param_5 + 0x90) - fVar10,
                         fVar18 = *(float *)(param_5 + 0x94) - fVar13,
                         fVar20 = *(float *)(param_5 + 0x98) - fVar17,
                         DAT_00b55084 <= fVar20 * fVar20 + fVar14 * fVar14 + fVar18 * fVar18)) ||
                        ((*(float *)(param_5 + 0x9c) != fVar23 ||
                         ((*(float *)(param_5 + 0xa8) != local_74 ||
                          (*(float *)(param_5 + 0xa4) != local_78)))))))) ||
                      (*(float *)(param_5 + 0xa0) != fVar22)) ||
                     ((((*(float *)(param_5 + 0xac) != local_7c ||
                        (*(float *)(param_5 + 0xb8) != local_80)) ||
                       (*(float *)(param_5 + 0xb4) != fVar21)) ||
                      (*(float *)(param_5 + 0xb0) != local_84)))) {
                    FUN_03244410(fVar23);
                    FUN_03244a50(uVar12,param_2,param_3,fVar9,fVar8,fVar16,param_4,param_5,iVar1);
                    *(int *)(param_5 + 0x70) = iVar1;
                    *(float *)(param_5 + 0x74) = (float)uVar12;
                    *(float *)(param_5 + 0x78) = (float)param_2;
                    *(float *)(param_5 + 0x7c) = (float)param_3;
                    *(float *)(param_5 + 0x80) = fVar9;
                    *(float *)(param_5 + 0x8c) = param_4;
                    *(float *)(param_5 + 0x90) = fVar10;
                    *(float *)(param_5 + 0x84) = fVar8;
                    *(float *)(param_5 + 0x88) = fVar16;
                    *(float *)(param_5 + 0x94) = fVar13;
                    *(float *)(param_5 + 0x98) = fVar17;
                    *(float *)(param_5 + 0x9c) = fVar23;
                    *(float *)(param_5 + 0xa0) = fVar22;
                    *(float *)(param_5 + 0xa4) = local_78;
                    *(float *)(param_5 + 0xa8) = local_74;
                    *(float *)(param_5 + 0xac) = local_7c;
                    *(float *)(param_5 + 0xb0) = local_84;
                    *(float *)(param_5 + 0xb4) = fVar21;
                    *(float *)(param_5 + 0xb8) = local_80;
                  }
                  if (*(long *)(param_5 + 0x58) != 0) {
                    uVar7 = FUN_038fe880(*(long *)(param_5 + 0x58),0);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar2);
                    }
                    uVar3 = FUN_03922f24(uVar7,0,0);
                    if ((uVar3 & 1) != 0) {
                      uVar7 = FUN_038feca0(*(undefined8 *)PTR_DAT_03d83998,0);
                      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                                );
                      FUN_038ff018(uVar4,uVar7,0);
                      if (*(long *)(param_5 + 0x58) == 0) goto LAB_03244a48;
                      FUN_038fe8bc(*(long *)(param_5 + 0x58),uVar4,0);
                    }
                    if ((*(long *)(param_5 + 0x58) != 0) &&
                       (lVar5 = FUN_038fe880(*(long *)(param_5 + 0x58),0), lVar5 != 0)) {
                      uVar7 = FUN_038ff4d4(lVar5,0);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)puVar2);
                      }
                      uVar3 = FUN_0391f968(uVar7,uVar6,0);
                      if ((uVar3 & 1) != 0) {
                        if (*(long *)(param_5 + 0x40) == 0) goto LAB_03244a48;
                        if (*(char *)(*(long *)(param_5 + 0x40) + 0xd3) == '\0') {
                          if ((*(long *)(param_5 + 0x58) == 0) ||
                             (lVar5 = FUN_038fe880(*(long *)(param_5 + 0x58),0), lVar5 == 0))
                          goto LAB_03244a48;
                          FUN_038ff638(lVar5,uVar6,0);
                        }
                      }
                      if ((((*(float *)(param_5 + 0xbc) == local_9c) &&
                           (*(float *)(param_5 + 200) == fVar11)) &&
                          (*(float *)(param_5 + 0xc4) == local_a4)) &&
                         (*(float *)(param_5 + 0xc0) == local_a0)) {
                        return;
                      }
                      if ((*(long *)(param_5 + 0x58) != 0) &&
                         (lVar5 = FUN_038fe880(*(long *)(param_5 + 0x58),0), lVar5 != 0)) {
                        FUN_038ff7d4(local_9c,local_a0,lVar5,0);
                        if ((*(long *)(param_5 + 0x58) != 0) &&
                           (lVar5 = FUN_038fe880(*(long *)(param_5 + 0x58),0), lVar5 != 0)) {
                          FUN_038ff8ec(local_a4,fVar11,lVar5,0);
                          *(float *)(param_5 + 0xbc) = local_9c;
                          *(float *)(param_5 + 0xc0) = local_a0;
                          *(float *)(param_5 + 0xc4) = local_a4;
                          *(float *)(param_5 + 200) = fVar11;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_03244a48:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


