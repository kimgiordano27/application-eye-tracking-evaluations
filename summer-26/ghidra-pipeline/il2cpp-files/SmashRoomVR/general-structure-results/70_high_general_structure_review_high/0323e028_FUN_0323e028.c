/*
FUNCTION_NAME: FUN_0323e028
ENTRY_POINT: 0323e028
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_0323e028(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
                    /* catch() { ... } // from try @ 0323e00c with catch @ 0323e038 */
                    /* try { // try from 0323e048 to 0333e04f has its CatchHandler @ 0323e064 */
                    /* try { // try from 0323e050 to 0333e05b has its CatchHandler @ 0323de94 */
  if ((DAT_03ff4784 & 1) == 0) {
                    /* try { // try from 0323e05c to 0333e063 has its CatchHandler @ 0323e064 */
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0323e048 with catch @ 0323e064
                       catch(type#2 @ 00000000) { ... } // from try @ 0323e05c with catch @ 0323e064
                        */
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d832d8);
    thunk_FUN_01ad9084(PTR_DAT_03d83350);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84398);
    thunk_FUN_01ad9084(PTR_DAT_03d843a0);
    thunk_FUN_01ad9084(StringLiteral_2932);
    thunk_FUN_01ad9084(PTR_DAT_03d843a8);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d843b0);
    DAT_03ff4784 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar4 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x1b0) == '\0') {
    return;
  }
  uVar5 = FUN_03265574(0);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_03265f74(0);
  }
  puVar2 = PTR_DAT_03d832d8;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar4 = *param_1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d832d8) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0323e1a0;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ae9f78(param_1,*(long *)PTR_DAT_03d832d8,1);
LAB_0323e1a0:
  (*(code *)*puVar6)(param_1,uVar3 & 1,puVar6[1]);
  lVar8 = *param_1;
  lVar4 = *(long *)puVar2;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_0323e200;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ae9f78(param_1,lVar4,9);
LAB_0323e200:
  (*(code *)*puVar6)(param_1,0,puVar6[1]);
  uVar5 = FUN_03265574(0);
  if ((uVar5 & 1) != 0) {
    FUN_032656c0(0);
  }
  lVar8 = *param_1;
  lVar4 = *(long *)puVar2;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0323e270;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ae9f78(param_1,lVar4,0);
LAB_0323e270:
  uVar5 = (*(code *)*puVar6)(param_1,puVar6[1]);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  if ((uVar5 & 1) == 0) {
    lVar4 = *(long *)puVar1;
    if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x1b1) != '\0') {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d843a8,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1b1) = 0;
      if (*(int *)(*(long *)PTR_DAT_03d83350 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_0323f1c4();
      lVar4 = *(long *)puVar1;
    }
  }
  else {
    uVar7 = FUN_03237f4c();
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar5 = FUN_0391f968(uVar7,0,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar4);
      lVar4 = *(long *)puVar1;
    }
    if ((uVar5 & 1) == 0) {
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x1c0) == '\0') {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(*(undefined8 *)PTR_DAT_03d843a0,0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar4);
          lVar4 = *(long *)puVar1;
        }
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1c0) = 1;
      }
    }
    else {
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x1b1) == '\0') {
        if (*(int *)(*(long *)
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03257618(*(undefined8 *)PTR_DAT_03d84398,*(undefined8 *)StringLiteral_2932,
                     *(undefined8 *)
                      Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__,0)
        ;
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(*(undefined8 *)PTR_DAT_03d843b0,0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar1;
        }
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1b1) = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_03d83350 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_0323ecd0(param_2,uVar7,param_1,param_3);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar4);
        lVar4 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1c0) = 0;
    }
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar4);
    lVar4 = *(long *)puVar1;
  }
  FUN_032aadec(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x1b8),param_1,0);
  return;
}


