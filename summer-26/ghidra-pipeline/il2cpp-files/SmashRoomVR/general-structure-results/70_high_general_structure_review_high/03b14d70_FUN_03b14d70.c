/*
FUNCTION_NAME: FUN_03b14d70
ENTRY_POINT: 03b14d70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03b14d70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_03d9cc18;
  if ((DAT_03ffdac7 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9cc18);
    thunk_FUN_01ad9084(StringLiteral_13728);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db6ae0);
    thunk_FUN_01ad9084(PTR_DAT_03db6ae8);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(StringLiteral_5532);
    DAT_03ffdac7 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_039a3324(param_1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_03b14f9c;
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x118);
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                              );
    FUN_02200540(uVar4,param_1,*(undefined8 *)PTR_DAT_03db6ae0,0);
    if (lVar5 == 0) goto LAB_03b14f9c;
    FUN_02205390(lVar5,uVar4,*(undefined8 *)StringLiteral_5532);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x118);
      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                                );
      FUN_02200540(uVar4,param_1,*(undefined8 *)PTR_DAT_03db6ae8,0);
      if (lVar5 != 0) {
        FUN_02205390(lVar5,uVar4,*(undefined8 *)StringLiteral_5532);
        goto LAB_03b14f04;
      }
    }
LAB_03b14f9c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_03b14f04:
  puVar2 = StringLiteral_13728;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  FUN_03927ab4(param_1 + 0x120,0);
  if (DAT_03fed2da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
    DAT_03fed2da = '\x01';
  }
  *(undefined8 *)(param_1 + 0xb8) =
       **(undefined8 **)
         (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8);
  uVar4 = FUN_03b13ffc(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  FUN_03b05830(uVar4,0);
  FUN_03b22b18(param_1,0);
  return;
}


