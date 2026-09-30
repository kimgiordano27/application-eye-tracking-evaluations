/*
FUNCTION_NAME: FUN_038a5cf4
ENTRY_POINT: 038a5cf4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_038a5cf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = StringLiteral_2679;
  if ((DAT_03ff8ae1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da9148);
    thunk_FUN_01ad9084(PTR_DAT_03da9150);
    thunk_FUN_01ad9084(PTR_DAT_03da9158);
    thunk_FUN_01ad9084(PTR_DAT_03da9088);
    thunk_FUN_01ad9084(PTR_DAT_03da9160);
    thunk_FUN_01ad9084(PTR_DAT_03da9090);
    thunk_FUN_01ad9084(PTR_DAT_03da9098);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_619);
    thunk_FUN_01ad9084(PTR_DAT_03da9168);
    thunk_FUN_01ad9084(StringLiteral_2679);
    thunk_FUN_01ad9084(PTR_DAT_03da9170);
    thunk_FUN_01ad9084(PTR_DAT_03da9178);
    thunk_FUN_01ad9084(PTR_DAT_03da9180);
    thunk_FUN_01ad9084(PTR_DAT_03da9188);
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    thunk_FUN_01ad9084(PTR_DAT_03da9190);
    DAT_03ff8ae1 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ff8d1a == '\0') {
    thunk_FUN_01ad9084(StringLiteral_2679);
    DAT_03ff8d1a = '\x01';
  }
  puVar1 = StringLiteral_619;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar3 = *(long *)puVar2;
  }
  plVar4 = (long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  *plVar4 = param_1;
  thunk_FUN_01b4f09c(plVar4,param_1);
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_038a624c(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038a62c8();
  FUN_038a64cc();
  uVar5 = FUN_038a65ec();
  puVar1 = PTR_DAT_03da9190;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)puVar1,0);
    return 0;
  }
  lVar3 = FUN_038a348c(0);
  lVar6 = FUN_038a348c(0);
  puVar1 = PTR_DAT_03da9188;
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    lVar6 = *(long *)PTR_DAT_03da9188;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar1;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar1;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03da9090);
      FUN_028b6724(lVar8,uVar9,*(undefined8 *)PTR_DAT_03da9170,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar4 = lVar8;
      thunk_FUN_01b4f09c(plVar4,lVar8);
    }
    uVar7 = FUN_01ec7bf0(uVar7,lVar8,*(undefined8 *)PTR_DAT_03da9088);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03da9160);
      FUN_028b6cb0(lVar8,uVar9,*(undefined8 *)PTR_DAT_03da9178,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar4 = lVar8;
      thunk_FUN_01b4f09c(plVar4,lVar8);
    }
    uVar7 = System_Array__InternalArray__ICollection_Contains<Dictionary_Entry<al,_dq>>
                      (uVar7,lVar8,*(undefined8 *)PTR_DAT_03da9148);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03da9098);
      FUN_028b7004(lVar8,uVar9,*(undefined8 *)PTR_DAT_03da9180,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar4 = lVar8;
      thunk_FUN_01b4f09c(plVar4,lVar8);
    }
    uVar7 = FUN_01ec407c(uVar7,lVar8,*(undefined8 *)PTR_DAT_03da9150);
    uVar7 = FUN_01ec4698(uVar7,*(undefined8 *)PTR_DAT_03da9158);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = uVar7;
      thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x18),uVar7);
      FUN_038a6654();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_038a676c();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      FUN_038a67dc();
      FUN_038a692c();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038a7004();
      uVar7 = FUN_038a348c(0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_0391f968(0,uVar7,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = FUN_038a348c(0);
        if (lVar3 == 0) goto LAB_038a6248;
        FUN_038a30d8(*(undefined4 *)(lVar3 + 0x20));
        FUN_038a3380(*(undefined4 *)(lVar3 + 0x24));
      }
      uVar5 = FUN_038a709c(param_1);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (DAT_03ff8d1b == '\0') {
        thunk_FUN_01ad9084(PTR_DAT_03da9198);
        DAT_03ff8d1b = '\x01';
      }
      if (**(char **)(*(long *)PTR_DAT_03da9198 + 0xb8) != '\0') {
        return 0;
      }
      uVar7 = FUN_038a3678(1);
      FUN_038a71b8(uVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038a7388();
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
      FUN_0392e4c8(uVar7,param_1,*(undefined8 *)PTR_DAT_03da9168,0);
      if (*(int *)(*(long *)
                    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038ef044(uVar7,0);
      *(undefined4 *)(param_1 + 0x20) = 2;
      return 1;
    }
  }
LAB_038a6248:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


