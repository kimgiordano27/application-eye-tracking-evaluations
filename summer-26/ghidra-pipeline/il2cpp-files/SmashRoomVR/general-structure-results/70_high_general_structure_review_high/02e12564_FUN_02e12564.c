/*
FUNCTION_NAME: FUN_02e12564
ENTRY_POINT: 02e12564
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_02e12564(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0129 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_4578);
    thunk_FUN_01ad9084(StringLiteral_4571);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4591);
    thunk_FUN_01ad9084(StringLiteral_4592);
    thunk_FUN_01ad9084(StringLiteral_4593);
    thunk_FUN_01ad9084(StringLiteral_4594);
    thunk_FUN_01ad9084(StringLiteral_4595);
    DAT_03ff0129 = 1;
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar10,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_02e12b10;
      lVar5 = 0x28;
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x20) != '\0') {
        lVar5 = 0x20;
      }
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar5);
      thunk_FUN_01b4f09c();
    }
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar10,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_02e12b10;
      lVar5 = 0x28;
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x20) != '\0') {
        lVar5 = 0x20;
      }
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar5);
      thunk_FUN_01b4f09c();
    }
    if ((*(long *)(param_1 + 0xb0) == 0) || (*(long *)(param_1 + 0xb8) == 0)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = *(undefined8 *)StringLiteral_4593;
    }
    else {
      lVar5 = FUN_02e18edc(*(long *)(param_1 + 0xb8),0);
      if ((lVar5 == 0) || (lVar11 = *(long *)(param_1 + 0x30), lVar11 == 0)) goto LAB_02e12b10;
      lVar8 = *(long *)(lVar11 + 0x80);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
        FUN_02e151c8(lVar11);
        lVar8 = *(long *)(lVar11 + 0x80);
        if (lVar8 == 0) goto LAB_02e12b10;
      }
      if (*(int *)(lVar5 + 0x18) < *(int *)(lVar8 + 0x18)) {
        if ((*(long *)(param_1 + 0xb8) == 0) ||
           (lVar5 = FUN_02e18edc(*(long *)(param_1 + 0xb8),0),
           puVar3 = 
           Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
           , lVar5 == 0)) {
LAB_02e12b10:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        local_34 = (int)*(undefined8 *)(lVar5 + 0x18);
        uVar10 = thunk_FUN_01afa70c(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                    ,&local_34);
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) goto LAB_02e12b10;
        lVar11 = *(long *)(lVar5 + 0x80);
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
          FUN_02e151c8(lVar5);
          lVar11 = *(long *)(lVar5 + 0x80);
          if (lVar11 == 0) goto LAB_02e12b10;
        }
        local_38 = (undefined4)*(undefined8 *)(lVar11 + 0x18);
        uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_38);
        puVar9 = (undefined8 *)StringLiteral_4592;
      }
      else {
        if (((*(long *)(param_1 + 0xb0) == 0) ||
            (lVar5 = FUN_02e18edc(*(long *)(param_1 + 0xb0),0), lVar5 == 0)) ||
           (lVar11 = *(long *)(param_1 + 0x30), lVar11 == 0)) goto LAB_02e12b10;
        lVar8 = *(long *)(lVar11 + 0x80);
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
          FUN_02e151c8(lVar11);
          lVar8 = *(long *)(lVar11 + 0x80);
          if (lVar8 == 0) goto LAB_02e12b10;
        }
        if (*(int *)(lVar8 + 0x18) <= *(int *)(lVar5 + 0x18)) {
          lVar5 = *(long *)(param_1 + 0x30);
          if (lVar5 != 0) {
            lVar11 = 4;
            do {
              lVar8 = *(long *)(lVar5 + 0x80);
              if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
                FUN_02e151c8(lVar5);
                lVar8 = *(long *)(lVar5 + 0x80);
                if (lVar8 == 0) break;
              }
              iVar2 = (int)lVar11;
              uVar12 = iVar2 - 4;
              if (*(int *)(lVar8 + 0x18) <= (int)uVar12) {
                *(undefined1 *)(param_1 + 0x78) = 1;
                return 1;
              }
              lVar5 = *(long *)(param_1 + 0x30);
              if (lVar5 == 0) break;
              lVar8 = *(long *)(lVar5 + 0x80);
              if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
                FUN_02e151c8(lVar5);
                lVar8 = *(long *)(lVar5 + 0x80);
                if (lVar8 == 0) break;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar12) {
System_Security_Cryptography_SHA512Managed___ctor:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              if (*(long *)(param_1 + 0xb8) == 0) break;
              lVar8 = *(long *)(lVar8 + lVar11 * 8);
              lVar5 = FUN_02e18edc(*(long *)(param_1 + 0xb8),0);
              if (lVar5 == 0) break;
              if (*(uint *)(lVar5 + 0x18) <= uVar12)
              goto System_Security_Cryptography_SHA512Managed___ctor;
              if (*(long *)(param_1 + 0xb0) == 0) break;
              lVar13 = *(long *)(lVar5 + lVar11 * 8);
              lVar5 = FUN_02e18edc(*(long *)(param_1 + 0xb0),0);
              puVar3 = 
              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
              ;
              if (lVar5 == 0) break;
              if (*(uint *)(lVar5 + 0x18) <= uVar12)
              goto System_Security_Cryptography_SHA512Managed___ctor;
              if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) ||
                  (lVar5 = *(long *)(lVar5 + lVar11 * 8), lVar5 == 0)) ||
                 (*(long *)(lVar5 + 0x10) == 0)) break;
              iVar1 = *(int *)(*(long *)(lVar8 + 0x20) + 0x18);
              if (iVar1 != *(int *)(*(long *)(lVar5 + 0x10) + 0x18)) {
                local_34 = iVar2 + -4;
                uVar10 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&local_34);
                if (*(long *)(lVar5 + 0x10) != 0) {
                  local_38 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x18);
                  uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_38);
                  if (*(long *)(lVar8 + 0x20) != 0) {
                    local_3c = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x18);
                    uVar7 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_3c);
                    puVar9 = (undefined8 *)StringLiteral_4591;
LAB_02e12af0:
                    uVar10 = FUN_02ee7164(*puVar9,uVar10,uVar6,uVar7,0);
                    goto LAB_02e128c4;
                  }
                }
                break;
              }
              if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x10), lVar13 == 0)) break;
              if (iVar1 != *(int *)(lVar13 + 0x18)) {
                local_34 = iVar2 + -4;
                uVar10 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&local_34);
                if (*(long *)(lVar5 + 0x10) != 0) {
                  local_38 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x18);
                  uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_38);
                  if (*(long *)(lVar8 + 0x20) != 0) {
                    local_3c = *(undefined4 *)(*(long *)(lVar8 + 0x20) + 0x18);
                    uVar7 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_3c);
                    puVar9 = (undefined8 *)StringLiteral_4595;
                    goto LAB_02e12af0;
                  }
                }
                break;
              }
              lVar5 = *(long *)(param_1 + 0x30);
              lVar11 = lVar11 + 1;
            } while (lVar5 != 0);
          }
          goto LAB_02e12b10;
        }
        if ((*(long *)(param_1 + 0xb8) == 0) ||
           (lVar5 = FUN_02e18edc(*(long *)(param_1 + 0xb8),0),
           puVar3 = 
           Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
           , lVar5 == 0)) goto LAB_02e12b10;
        local_34 = (int)*(undefined8 *)(lVar5 + 0x18);
        uVar10 = thunk_FUN_01afa70c(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                    ,&local_34);
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) goto LAB_02e12b10;
        lVar11 = *(long *)(lVar5 + 0x80);
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
          FUN_02e151c8(lVar5);
          lVar11 = *(long *)(lVar5 + 0x80);
          if (lVar11 == 0) goto LAB_02e12b10;
        }
        local_38 = (undefined4)*(undefined8 *)(lVar11 + 0x18);
        uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_38);
        puVar9 = (undefined8 *)StringLiteral_4594;
      }
      uVar10 = FUN_02ee7120(*puVar9,uVar10,uVar6,0);
LAB_02e128c4:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
    }
    FUN_038f336c(uVar10,0);
  }
  return 0;
}


