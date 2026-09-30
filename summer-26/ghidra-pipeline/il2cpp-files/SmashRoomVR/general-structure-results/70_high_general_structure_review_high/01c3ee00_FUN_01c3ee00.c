/*
FUNCTION_NAME: FUN_01c3ee00
ENTRY_POINT: 01c3ee00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;telemetry_or_network_hits_3
*/


void FUN_01c3ee00(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
  ;
  if ((DAT_03fed585 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed585 = 1;
  }
  fVar8 = *(float *)(param_1 + 0x4c);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = FUN_01c4997c(0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar3 == 0) goto LAB_01c3f09c;
                    /* try { // try from 01c3ee70 to 01d3ee7b has its CatchHandler @ 01c3ee7c */
  uVar6 = *(undefined8 *)(param_1 + 0x78);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c3edd8 with catch @ 01c3ee7c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c3ee70 with catch @ 01c3ee7c
                       try { // try from 01c3ee7c to 01d3ee93 has its CatchHandler @ 01c3ed30 */
  bVar2 = false;
  if ((*(char *)(lVar3 + 200) == '\0') && (bVar2 = false, !NAN(fVar8))) {
    bVar2 = fVar8 < 1.0;
  }
  fVar9 = 1.0;
  if (!bVar2) {
    fVar9 = fVar8;
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar6,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(uVar6,0);
    if ((uVar4 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x88);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03923030(uVar6,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x88) != 0) {
          fVar7 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x58);
          fVar8 = *(float *)(param_1 + 0x50);
          if (fVar7 <= *(float *)(param_1 + 0x50)) {
            fVar8 = fVar7;
          }
          if (fVar7 < fVar9) {
            fVar8 = fVar9;
          }
          FUN_0395c080(fVar8,*(long *)(param_1 + 0x88),0);
          lVar3 = *(long *)(param_1 + 0x88);
          if (lVar3 != 0) {
            fVar8 = (float)FUN_0395c044(lVar3,0);
            fVar8 = fVar8 * 0.5 + *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0x114);
LAB_01c3f014:
            FUN_0395bf24(0,fVar8,0,lVar3,0);
            return;
          }
        }
        goto LAB_01c3f09c;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 == 0) goto LAB_01c3f09c;
    fVar8 = *(float *)(param_1 + 0x58);
    fVar10 = *(float *)(param_1 + 0x5c);
    fVar7 = (float)FUN_0395bcfc(lVar3,0);
    fVar7 = (fVar8 + fVar10) - fVar7;
    fVar8 = *(float *)(param_1 + 0x50);
    if (fVar7 <= *(float *)(param_1 + 0x50)) {
      fVar8 = fVar7;
    }
    if (fVar7 < fVar9) {
      fVar8 = fVar9;
    }
    FUN_0395bb3c(fVar8,lVar3,0);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x98);
      if (plVar5 == (long *)0x0) goto LAB_01c3f09c;
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if ((uVar4 & 1) != 0) {
        if ((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
          FUN_0395c080(*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x30),*(long *)(param_1 + 0x88),0
                      );
          if ((*(long *)(param_1 + 0x98) != 0) && (lVar3 = *(long *)(param_1 + 0x88), lVar3 != 0)) {
            fVar8 = *(float *)(*(long *)(param_1 + 0x98) + 0x34);
            fVar8 = fVar8 + fVar8;
            goto LAB_01c3f014;
          }
        }
        goto LAB_01c3f09c;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
        FUN_0395bc28(0,*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x34),0,*(long *)(param_1 + 0x78)
                     ,0);
        return;
      }
LAB_01c3f09c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


