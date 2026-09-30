/*
FUNCTION_NAME: FUN_01c036c8
ENTRY_POINT: 01c036c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_01c036c8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
                    /* try { // try from 01c036ec to 01d037e3 has its CatchHandler @ 01c036ec
                       catch() { ... } // from try @ 01c036ec with catch @ 01c036ec
                       catch() { ... } // from try @ 01c037f0 with catch @ 01c036ec */
  if ((DAT_03fed398 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed398 = 1;
  }
  if (*(char *)(param_4 + 0x40) == '\0') {
    return;
  }
  *(undefined1 *)(param_4 + 0x40) = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    lVar3 = FUN_0391fab4(*(long *)(param_4 + 0x20),0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar3 != 0) {
      uVar10 = FUN_03928d34(lVar3,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
      puVar6 = *(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      uVar17 = *puVar6;
      uVar16 = puVar6[1];
      uVar15 = puVar6[2];
      uVar14 = puVar6[3];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = FUN_01f259b0(uVar10,param_2,param_3,uVar17,uVar16,uVar15,uVar14,uVar7,
                           *(undefined8 *)puVar1);
      fVar11 = (float)param_2;
      fVar12 = (float)param_3;
                    /* try { // try from 01c037e4 to 01d037ef has its CatchHandler @ 01c03818 */
      plVar8 = (long *)(param_4 + 0x30);
      *plVar8 = lVar3;
                    /* try { // try from 01c037f0 to 01d0382b has its CatchHandler @ 01c036ec */
      thunk_FUN_01b4f09c(plVar8,lVar3);
      if (*plVar8 != 0) {
        lVar3 = FUN_0391fab4(*plVar8,0);
        uVar7 = FUN_0391c27c(param_4,0);
                    /* catch() { ... } // from try @ 01c037e4 with catch @ 01c03818 */
        if (lVar3 != 0) {
          FUN_0392a01c(lVar3,uVar7,0);
          if (*plVar8 != 0) {
            lVar3 = FUN_01ed712c(*plVar8,*(undefined8 *)
                                          Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_1__
                                );
            if (*plVar8 != 0) {
              lVar4 = FUN_01ed712c(*plVar8,*(undefined8 *)
                                            Method_UnityEngine_ProBuilder_MeshOperations_UVEditing_<>c_<ProjectFacesAuto>b__8_0__
                                  );
              uVar5 = FUN_0391f968(lVar4,0,0);
              if ((uVar5 & 1) != 0) {
                if (lVar4 == 0) goto LAB_01c03964;
                *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_4 + 0x48);
                thunk_FUN_01b4f09c();
                uVar7 = FUN_01c02360(lVar4);
                FUN_03920cb0(lVar4,uVar7,0);
              }
              if (((*(long *)(param_4 + 0x20) != 0) &&
                  (lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x20),0), lVar4 != 0)) &&
                 (fVar9 = (float)FUN_039291ac(lVar4,0), lVar3 != 0)) {
                fVar13 = *(float *)(param_4 + 0x38);
                FUN_0395ae9c(fVar9 * fVar13,fVar11 * fVar13,fVar12 * fVar13,lVar3,1,0);
                if ((*(long *)(param_4 + 0x48) != 0) && (*(long *)(param_4 + 0x50) != 0)) {
                  FUN_038ea93c(*(float *)(*(long *)(param_4 + 0x48) + 0x20) * DAT_00b55540,
                               *(long *)(param_4 + 0x50),*(undefined8 *)(param_4 + 0x58),0);
                  uVar7 = FUN_01c03968(param_4);
                  FUN_03920cb0(param_4,uVar7,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01c03964:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


