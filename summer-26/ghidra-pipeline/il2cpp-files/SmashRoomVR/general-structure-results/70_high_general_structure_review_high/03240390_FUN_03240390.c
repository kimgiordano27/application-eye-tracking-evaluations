/*
FUNCTION_NAME: FUN_03240390
ENTRY_POINT: 03240390
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
FUN_03240390(long param_1,int param_2,int param_3,int param_4,int param_5,undefined8 param_6,
            int param_7)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  undefined1 auStack_150 [80];
  undefined4 local_100 [20];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_03ff479e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84458);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84460);
    DAT_03ff479e = 1;
  }
  puVar3 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  lVar1 = param_1 + 0x188;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uVar7 = FUN_02f7c07c(lVar1,0);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = FUN_030821ec(*(undefined8 *)(param_1 + 400),0,0), (uVar7 & 1) != 0)) {
    local_100[0] = *(undefined4 *)(param_1 + 0x124);
    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,local_100);
    uVar8 = FUN_02f7c218(uVar8,3,0);
    *(undefined8 *)(param_1 + 0x188) = uVar8;
    uVar8 = FUN_02f7c128(lVar1,0);
    *(undefined8 *)(param_1 + 400) = uVar8;
  }
  puVar4 = PTR_DAT_03d84458;
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(param_1 + 0x184) == -1) {
    uVar7 = 0;
    lVar13 = -0x20;
    do {
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *(long *)puVar4;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_032407c0;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_032407c4;
      uVar8 = *(undefined8 *)(lVar9 + uVar7 * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_03922f24(uVar8,0,0);
      if ((uVar10 & 1) != 0) {
LAB_0324057c:
        *(uint *)(param_1 + 0x184) = (uint)uVar7;
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *(long *)puVar4;
        }
        plVar11 = (long *)**(undefined8 **)(lVar9 + 0xb8);
        if (plVar11 == (long *)0x0) goto LAB_032407c0;
        lVar9 = thunk_FUN_01afa9e0(param_1,*(undefined8 *)(*plVar11 + 0x40));
        if (lVar9 == 0) {
          uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar8,0);
        }
        if (*(uint *)(plVar11 + 3) <= (uint)uVar7) {
LAB_032407c4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        plVar11[uVar7 + 4] = param_1;
        thunk_FUN_01b4f09c((long)plVar11 - lVar13,param_1);
        break;
      }
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *(long *)puVar4;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_032407c0;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_032407c4;
      uVar8 = *(undefined8 *)(lVar9 + uVar7 * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_03922f24(uVar8,param_1,0);
      if ((uVar10 & 1) != 0) goto LAB_0324057c;
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + -8;
    } while (uVar7 != 0xf);
  }
  if (((((*(char *)(param_1 + 0x120) == '\0') && (*(int *)(param_1 + 0x140) == param_2)) &&
       (*(int *)(param_1 + 0x144) == param_3)) &&
      ((*(int *)(param_1 + 0x148) == param_4 &&
       (iVar2 = *(int *)(param_1 + 0x134), iVar5 = FUN_032401f0(param_1), iVar2 == iVar5)))) &&
     (*(int *)(param_1 + 0x14c) == param_5)) {
    if (*(int *)(*(long *)PTR_DAT_03d84460 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03264934(param_1 + 0x138,param_6,0);
    if ((((uVar7 & 1) != 0) && (*(int *)(param_1 + 0x130) == param_7)) &&
       (*(int *)(param_1 + 0xe0) == *(int *)(param_1 + 0xdc))) {
      return 0;
    }
  }
  puVar3 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  uVar6 = FUN_032401f0(param_1);
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar13);
  }
  FUN_0325037c(local_100,param_7,uVar6,param_6,param_2,param_3,param_4,param_5,0);
  memcpy(&local_b0,local_100,0x50);
  memcpy(auStack_150,&local_b0,0x50);
  FUN_03250514(auStack_150,*(undefined4 *)(param_1 + 0xdc),*(undefined8 *)(param_1 + 400),0);
  plVar11 = (long *)FUN_02f7c08c(lVar1,0);
  if (plVar11 != (long *)0x0) {
    if (*(long *)(*plVar11 + 0x40) ==
        *(long *)(*(long *)
                   Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                 + 0x40)) {
      piVar12 = (int *)thunk_FUN_01afac30();
      iVar2 = *piVar12;
      *(int *)(param_1 + 0x124) = iVar2;
      if (0 < iVar2) {
        memcpy((void *)(param_1 + 0x130),&local_b0,0x50);
        thunk_FUN_01b4f09c(param_1 + 0x150,0);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xdc);
        if (*(char *)(param_1 + 0xd3) == '\0') {
          uVar6 = *(undefined4 *)(param_1 + 0x124);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_03250908(uVar6,0);
        }
        else {
          uVar6 = 1;
        }
        *(undefined4 *)(param_1 + 0x180) = uVar6;
      }
      *(undefined1 *)(param_1 + 0x120) = 0;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c();
  }
LAB_032407c0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


