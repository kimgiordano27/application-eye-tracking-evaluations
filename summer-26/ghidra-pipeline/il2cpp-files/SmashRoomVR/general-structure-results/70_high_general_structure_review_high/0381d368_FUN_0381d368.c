/*
FUNCTION_NAME: FUN_0381d368
ENTRY_POINT: 0381d368
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_20;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
FUN_0381d368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  float local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  local_70 = param_4;
  uStack_6c = param_5;
  local_68 = param_6;
  if ((DAT_03ff8412 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8412 = 1;
  }
  local_78 = 0.0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  if (*(char *)(param_7 + 0x3c) != '\0') {
    fVar12 = *(float *)(param_7 + 0x40);
    FUN_0381d07c(param_7);
    if (*(long *)(param_7 + 0x20) == 0) goto LAB_0381d70c;
    uVar5 = param_2;
    uVar11 = param_3;
    fVar9 = (float)FUN_038f13a8(param_1,*(long *)(param_7 + 0x20),0);
    if ((float)uVar5 < fVar12) {
      return 0;
    }
    if (1.0 - fVar12 < (float)uVar5) {
      return 0;
    }
    if (fVar9 < fVar12) {
      return 0;
    }
    if ((float)uVar11 < 0.0) {
      return 0;
    }
    if (1.0 - fVar12 < fVar9) {
      return 0;
    }
  }
  uVar4 = FUN_0381d13c(param_7);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined4 *)(param_7 + 0x38);
  }
  else {
    if (*(long *)(param_7 + 0x28) == 0) goto LAB_0381d70c;
    uVar3 = FUN_0391a128(0,*(undefined4 *)(*(long *)(param_7 + 0x28) + 0x18),0);
  }
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_7 + 0x28) == 0) goto LAB_0381d70c;
  uVar5 = FUN_02b59714(*(long *)(param_7 + 0x28),uVar3,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  lVar6 = FUN_01f25754(uVar5,*(undefined8 *)puVar2);
  if (*(char *)(param_7 + 0x4c) == '\0') {
    if (lVar6 == 0) goto LAB_0381d70c;
  }
  else {
    if (lVar6 == 0) goto LAB_0381d70c;
    lVar7 = FUN_0391fab4(lVar6,0);
    uVar5 = FUN_0391c27c(param_7,0);
    if (lVar7 == 0) goto LAB_0381d70c;
    FUN_039294c8(lVar7,uVar5,0);
  }
  lVar7 = FUN_0391fab4(lVar6,0);
  if (lVar7 != 0) {
    uVar5 = param_2;
    uVar11 = param_3;
    FUN_03928dd4(param_1,lVar7,0);
    fVar9 = (float)uVar11;
    fVar12 = (float)uVar5;
    FUN_0381d07c(param_7);
    if ((*(long *)(param_7 + 0x20) != 0) &&
       (lVar7 = FUN_0391c27c(*(long *)(param_7 + 0x20),0), lVar7 != 0)) {
      fVar10 = (float)FUN_03928d34(lVar7,0);
      local_78 = fVar9 - (float)param_3;
      local_80 = CONCAT44(fVar12 - (float)param_2,fVar10 - (float)param_1);
      FUN_038580cc(&local_80,&local_70,&local_90,0);
      lVar7 = FUN_0391fab4(lVar6,0);
      FUN_03914800(local_90 & 0xffffffff,local_90._4_4_,local_88,local_70,uStack_6c,local_68,0);
      if (lVar7 != 0) {
        FUN_03928f54(lVar7,0);
        if (*(char *)(param_7 + 0x44) != '\0') {
          uVar5 = FUN_0391a0e8(-*(float *)(param_7 + 0x48),0);
          lVar7 = FUN_0391fab4(lVar6,0);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          if (lVar7 == 0) goto LAB_0381d70c;
          lVar8 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_03929e90(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
                       *(undefined4 *)(lVar8 + 0x20),uVar5,lVar7,0);
        }
        uVar5 = *(undefined8 *)(param_7 + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_0391f968(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
LAB_0381d6cc:
          lVar7 = *(long *)(param_7 + 0x50);
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),lVar6,*(undefined8 *)(lVar7 + 0x28));
          }
          return 1;
        }
        uVar5 = *(undefined8 *)(param_7 + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar7 = FUN_01f25754(uVar5,*(undefined8 *)puVar2);
        if ((lVar7 != 0) && (lVar7 = FUN_0391fab4(lVar7,0), lVar7 != 0)) {
          FUN_03928dd4(param_1,param_2,param_3,lVar7,0);
          lVar8 = FUN_0391fab4(lVar6,0);
          if (lVar8 != 0) {
            FUN_039274a0(lVar8,0);
            FUN_03928f54(lVar7,0);
            goto LAB_0381d6cc;
          }
        }
      }
    }
  }
LAB_0381d70c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


