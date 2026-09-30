/*
FUNCTION_NAME: FUN_01cafee0
ENTRY_POINT: 01cafee0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01cafee0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 local_48 [2];
  
  puVar5 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__;
  puVar4 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
                    /* try { // try from 01cafee4 to 01db00d3 has its CatchHandler @ 01cafaf8 */
  if ((DAT_03fed9ed & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(StringLiteral_971);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_384);
    thunk_FUN_01ad9084(StringLiteral_972);
    thunk_FUN_01ad9084(StringLiteral_973);
    DAT_03fed9ed = 1;
  }
  puVar7 = StringLiteral_971;
  puVar6 = StringLiteral_384;
  puVar3 = Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar5);
  FUN_02b591b0(lVar8,*(undefined8 *)puVar4);
  lVar11 = param_1;
  while( true ) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_0391f968(lVar11,0,0);
    if ((uVar9 & 1) == 0) break;
    if ((lVar11 == 0) || (uVar10 = FUN_039230bc(lVar11,0), lVar8 == 0)) goto LAB_01cb0174;
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_01cb0174;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      thunk_FUN_01b4f09c();
    }
    else {
      FUN_02b599e4(lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar11 = FUN_0391fab4(lVar11,0);
    if (lVar11 == 0) goto LAB_01cb0174;
    lVar12 = FUN_03928c2c(lVar11,0);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar11);
    }
    uVar9 = FUN_0391f968(lVar12,0,0);
    lVar11 = 0;
    if ((uVar9 & 1) != 0) {
      if (lVar12 == 0) goto LAB_01cb0174;
      lVar11 = FUN_0391c2b8(lVar12,0);
    }
  }
  if (param_1 != 0) {
    local_48[0] = FUN_039200ac(param_1,0);
    uVar10 = FUN_0392ebcc(local_48,0);
    uVar9 = FUN_02ee6cf0(uVar10,0);
    if (lVar8 != 0) {
      puVar13 = (undefined8 *)StringLiteral_973;
      if ((uVar9 & 1) != 0) {
        puVar13 = (undefined8 *)StringLiteral_972;
      }
      uVar10 = *puVar13;
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar3;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          thunk_FUN_01b4f09c();
        }
        else {
          FUN_02b599e4(lVar8,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        System_Collections_Generic_List<TrackedDeviceRaycaster_RaycastHitData>__System_Collections_IList_Remove
                  (lVar8,*(undefined8 *)puVar7);
        FUN_02ee7624(*(undefined8 *)puVar6,lVar8,0);
        return;
      }
    }
  }
LAB_01cb0174:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


