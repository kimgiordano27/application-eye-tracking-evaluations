/*
FUNCTION_NAME: FUN_01c5c210
ENTRY_POINT: 01c5c210
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c5c210(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_03fed688 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed688 = 1;
  }
  iVar1 = *(int *)(param_3 + 0x10);
  plVar8 = *(long **)(param_3 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0x19];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(lVar9,0);
      if ((uVar4 & 1) != 0) {
        if (plVar8[0x19] == 0) goto LAB_01c5c5ec;
        FUN_0395b38c(plVar8[0x19],1,0);
      }
      return 0;
    }
    goto LAB_01c5c5ec;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (plVar8 == (long *)0x0) goto LAB_01c5c5ec;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (plVar8 == (long *)0x0) goto LAB_01c5c5ec;
    if (*(char *)((long)plVar8 + 0x104) == '\0') {
      FUN_01c59bb0(plVar8,0);
    }
    fVar12 = *(float *)((long)plVar8 + 0xbc);
    if (0.0 < fVar12) {
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(fVar12,uVar3,0);
      *(undefined8 *)(param_3 + 0x18) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x18),uVar3);
      *(undefined4 *)(param_3 + 0x10) = 1;
      return 1;
    }
  }
  (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar9 = plVar8[0x19];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(lVar9,0);
  if ((uVar4 & 1) == 0) {
    lVar9 = FUN_0391c27c(plVar8,0);
    if (lVar9 == 0) goto LAB_01c5c5ec;
    FUN_03928dd4(*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                 *(undefined4 *)(param_3 + 0x30),lVar9,0);
    if (*(char *)(param_3 + 0x34) != '\0') {
      lVar9 = FUN_0391c27c(plVar8,0);
      if (lVar9 == 0) goto LAB_01c5c5ec;
      FUN_03928f54(*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                   *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),lVar9,0);
      lVar9 = FUN_0391c27c(plVar8,0);
      plVar6 = plVar8;
LAB_01c5c4bc:
      lVar5 = FUN_0391c27c(plVar6,0);
      if ((lVar5 == 0) || (FUN_03928ef4(lVar5,0), lVar9 == 0)) goto LAB_01c5c5ec;
      FUN_03928f24(0,lVar9,0);
    }
  }
  else {
    if (plVar8[0x19] == 0) goto LAB_01c5c5ec;
    FUN_0395b38c(plVar8[0x19],0,0);
    if (plVar8[0x1d] == 0) goto LAB_01c5c5ec;
    FUN_03928280(plVar8[0x1d],0);
    if ((plVar8[0x1a] == 0) || (plVar8[0x19] == 0)) goto LAB_01c5c5ec;
    fVar12 = *(float *)(plVar8[0x1a] + 0x58);
    lVar9 = FUN_0391c27c(plVar8[0x19],0);
    if (lVar9 == 0) goto LAB_01c5c5ec;
    fVar11 = *(float *)(param_3 + 0x2c);
    FUN_03928dd4(*(undefined4 *)(param_3 + 0x28),fVar11,*(undefined4 *)(param_3 + 0x30),lVar9,0);
    if ((plVar8[0x19] == 0) || (lVar9 = FUN_0391c27c(plVar8[0x19],0), lVar9 == 0))
    goto LAB_01c5c5ec;
    uVar3 = FUN_03928280(lVar9,0);
    FUN_039282dc(uVar3,fVar11 - ((param_2 + 1.0) - fVar12),lVar9,0);
    if (*(char *)(param_3 + 0x34) != '\0') {
      if ((plVar8[0x19] == 0) || (lVar9 = FUN_0391c27c(plVar8[0x19],0), lVar9 == 0))
      goto LAB_01c5c5ec;
      FUN_03928f54(*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                   *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),lVar9,0);
      if (plVar8[0x19] == 0) goto LAB_01c5c5ec;
      lVar9 = FUN_0391c27c(plVar8[0x19],0);
      plVar6 = (long *)plVar8[0x19];
      if (plVar6 == (long *)0x0) goto LAB_01c5c5ec;
      goto LAB_01c5c4bc;
    }
  }
  lVar9 = plVar8[0x1b];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(lVar9,0);
  if ((uVar4 & 1) != 0) {
    lVar9 = plVar8[0x1b];
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar9 == 0) goto LAB_01c5c5ec;
    puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_03959ef0(*puVar7,puVar7[1],puVar7[2],lVar9,0);
  }
  lVar9 = plVar8[0x1a];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(lVar9,0);
  if ((uVar4 & 1) != 0) {
    lVar9 = plVar8[0x1a];
    uVar10 = FUN_03925ca4(0);
    if (lVar9 == 0) {
LAB_01c5c5ec:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    *(undefined4 *)(lVar9 + 0x54) = uVar10;
  }
  (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
  FUN_03924d58(uVar3,0);
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x18),uVar3);
  *(undefined4 *)(param_3 + 0x10) = 2;
  return 1;
}


