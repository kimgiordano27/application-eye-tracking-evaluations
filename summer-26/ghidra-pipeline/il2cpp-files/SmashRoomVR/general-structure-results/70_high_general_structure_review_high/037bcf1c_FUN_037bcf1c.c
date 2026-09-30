/*
FUNCTION_NAME: FUN_037bcf1c
ENTRY_POINT: 037bcf1c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_037bcf1c(long *param_1,undefined4 param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_03ff803a & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5431);
    thunk_FUN_01ad9084(StringLiteral_2269);
    thunk_FUN_01ad9084(StringLiteral_2248);
    thunk_FUN_01ad9084(StringLiteral_725);
    thunk_FUN_01ad9084(StringLiteral_5263);
    thunk_FUN_01ad9084(StringLiteral_2298);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_616);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_2364);
    thunk_FUN_01ad9084(StringLiteral_2366);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da39b0);
    thunk_FUN_01ad9084(PTR_DAT_03da39b8);
    thunk_FUN_01ad9084(StringLiteral_3678);
    DAT_03ff803a = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
  local_64 = 0;
  local_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (param_1 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = thunk_FUN_01acfdbc(param_1,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03057a60(uVar6,0,0);
  if (((uVar7 & 1) != 0) || (uVar7 = FUN_037cb374(param_1,0), (uVar7 & 1) != 0)) {
    uVar6 = *(undefined8 *)PTR_DAT_03da39b8;
    goto LAB_037bd07c;
  }
  uVar12 = *(undefined8 *)StringLiteral_616;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_0304eec0(uVar12,0);
  uVar7 = FUN_03057a60(uVar6,uVar12,0);
  if ((uVar7 & 1) != 0) {
    if (param_1 == (long *)0x0) goto LAB_037bd39c;
    if (*(long *)(*param_1 + 0x40) !=
        *(long *)(*(long *)
                   Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                 + 0x40)) {
LAB_037bd3a0:
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(param_1);
    }
    puVar8 = (undefined4 *)thunk_FUN_01afac30(param_1);
    local_64 = *puVar8;
    uVar6 = FUN_03052740(&local_64,*(undefined8 *)PTR_DAT_03da39b0,0);
    goto LAB_037bd07c;
  }
  uVar12 = *(undefined8 *)StringLiteral_2248;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_0304eec0(uVar12,0);
  uVar7 = FUN_03057a60(uVar6,uVar12,0);
  if ((uVar7 & 1) != 0) {
    if (param_1 == (long *)0x0) goto LAB_037bd39c;
    if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)StringLiteral_725 + 0x40))
    goto LAB_037bd3a0;
    puVar9 = (undefined8 *)thunk_FUN_01afac30(param_1);
    local_70 = *puVar9;
    uVar6 = FUN_0302885c(&local_70,*(undefined8 *)PTR_DAT_03da39b0,0);
    goto LAB_037bd07c;
  }
  uVar12 = *(undefined8 *)StringLiteral_5431;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_0304eec0(uVar12,0);
  uVar7 = FUN_03057a60(uVar6,uVar12,0);
  puVar5 = StringLiteral_2366;
  puVar4 = StringLiteral_2269;
  if ((uVar7 & 1) != 0) {
    if (param_1 == (long *)0x0) goto LAB_037bd39c;
    if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)StringLiteral_2269 + 0x40))
    goto LAB_037bd3a0;
    puVar9 = (undefined8 *)thunk_FUN_01afac30(param_1);
    uStack_58 = puVar9[1];
    local_60 = *puVar9;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0309b768(&local_60,*(undefined8 *)PTR_DAT_03da39b0,0);
    goto LAB_037bd07c;
  }
  if (*(int *)(*(long *)StringLiteral_2366 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_037b9b8c(uVar6);
  if ((uVar7 & 1) == 0) {
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar5;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (lVar10 == 0) goto LAB_037bd39c;
    uVar7 = FUN_029072e4(lVar10,uVar6,*(undefined8 *)StringLiteral_5263);
    if ((uVar7 & 1) != 0) goto LAB_037bd2b4;
    uVar12 = *(undefined8 *)StringLiteral_2298;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    plVar11 = (long *)FUN_0304eec0(uVar12,0);
    if (plVar11 == (long *)0x0) goto LAB_037bd39c;
    uVar7 = (**(code **)(*plVar11 + 0x2a8))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
      goto LAB_037bd07c;
    }
    if (param_1 == (long *)0x0) goto LAB_037bd39c;
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__))
    goto LAB_037bd3a0;
    uVar6 = FUN_039230bc(param_1,0);
  }
  else {
LAB_037bd2b4:
    if (param_1 == (long *)0x0) {
LAB_037bd39c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar6 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
  }
  if (*(int *)(*(long *)StringLiteral_2364 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)StringLiteral_2364);
  }
  uVar6 = FUN_037ca3f8(uVar6,param_2,*(undefined8 *)StringLiteral_3678,0);
LAB_037bd07c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


