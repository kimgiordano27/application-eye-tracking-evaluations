/*
FUNCTION_NAME: FUN_036d6268
ENTRY_POINT: 036d6268
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036d6268(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff75cc & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_46__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cc18);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_49__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d598);
    thunk_FUN_01ad9084(PTR_DAT_03d9d5a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d4e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9d5a8);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    thunk_FUN_01ad9084(StringLiteral_5532);
    DAT_03ff75cc = 1;
  }
  *(undefined8 *)(param_1 + 0x278) = 0;
  thunk_FUN_01b4f09c(param_1 + 0x278,0);
  FUN_036d65a4(param_1,0);
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(uVar6,0,0);
  puVar4 = PTR_DAT_03d9d598;
  puVar3 = Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__;
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x138);
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_PokeInteractor_<>c_<Awake>b__51_0__);
    FUN_0392e4c8(uVar6,param_1,*(undefined8 *)puVar4,0);
    if (lVar7 == 0) goto LAB_036d65a0;
    FUN_039b0050(lVar7,uVar6,0);
    lVar7 = *(long *)(param_1 + 0x138);
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
    FUN_0392e4c8(uVar6,param_1,*(undefined8 *)PTR_DAT_03d9d5a8,0);
    if (lVar7 == 0) goto LAB_036d65a0;
    FUN_039b0050(lVar7,uVar6,0);
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_0391f968(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x150) == 0) goto LAB_036d65a0;
      lVar7 = *(long *)(*(long *)(param_1 + 0x150) + 0x118);
      uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                                );
      FUN_02200540(uVar6,param_1,*(undefined8 *)PTR_DAT_03d9d4e8,0);
      if (lVar7 == 0) goto LAB_036d65a0;
      FUN_02205390(lVar7,uVar6,*(undefined8 *)StringLiteral_5532);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03d9cc18 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_039a3324(param_1,0);
  uVar6 = *(undefined8 *)(param_1 + 600);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0391f968(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 600) == 0) goto LAB_036d65a0;
    FUN_03af8ce0(*(long *)(param_1 + 600),0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x268);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar3 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__;
  puVar1 = (undefined8 *)(param_1 + 0x268);
  uVar5 = FUN_0391f968(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    uVar6 = *puVar1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923b4c(uVar6,0);
  }
  puVar4 = PTR_DAT_03d9d5a0;
  puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_46__;
  *puVar1 = 0;
  thunk_FUN_01b4f09c(puVar1,0);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
  uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02518558(uVar6,param_1,*(undefined8 *)puVar4,0);
  if (lVar7 != 0) {
    FUN_02898498(lVar7,uVar6,
                 *(undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_49__
                );
    FUN_03b1245c(param_1,0);
    return;
  }
LAB_036d65a0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


