/*
FUNCTION_NAME: FUN_01c13af0
ENTRY_POINT: 01c13af0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_01c13af0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
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
  
                    /* try { // try from 01c13afc to 01d13b3b has its CatchHandler @ 01c13afc
                       catch() { ... } // from try @ 01c13afc with catch @ 01c13afc
                       catch() { ... } // from try @ 01c13cc8 with catch @ 01c13afc */
  if ((DAT_03fed418 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__24_0__
                      );
                    /* try { // try from 01c13b3c to 01d13b47 has its CatchHandler @ 01c13cfc */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed418 = 1;
  }
                    /* try { // try from 01c13b54 to 01d13b63 has its CatchHandler @ 01c13d28 */
  *(undefined1 *)(param_4 + 0x40) = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x20),0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 != 0) {
      uVar10 = FUN_03928d34(lVar4,0);
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
      lVar4 = FUN_01f259b0(uVar10,param_2,param_3,uVar17,uVar16,uVar15,uVar14,uVar7,
                           *(undefined8 *)puVar1);
      fVar11 = (float)param_2;
      fVar12 = (float)param_3;
      plVar8 = (long *)(param_4 + 0x30);
      *plVar8 = lVar4;
      thunk_FUN_01b4f09c(plVar8,lVar4);
      if (*plVar8 != 0) {
        lVar4 = FUN_0391fab4(*plVar8,0);
        uVar7 = FUN_0391c27c(param_4,0);
        if (lVar4 != 0) {
          FUN_0392a01c(lVar4,uVar7,0);
          if (*plVar8 != 0) {
            lVar4 = FUN_01ed7390(*plVar8,*(undefined8 *)
                                          Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__24_0__
                                );
            if (((*(long *)(param_4 + 0x20) != 0) &&
                (lVar5 = FUN_0391fab4(*(long *)(param_4 + 0x20),0), lVar5 != 0)) &&
               (FUN_039291ac(lVar5,0), lVar4 != 0)) {
              FUN_01c00f50(lVar4,0);
              if (*(long *)(param_4 + 0x30) != 0) {
                lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x30),0);
                if (((*plVar8 != 0) && (lVar5 = FUN_0391fab4(*plVar8,0), lVar5 != 0)) &&
                   ((iVar3 = FUN_0392a654(lVar5,0), lVar4 != 0 &&
                    (lVar4 = FUN_0392a9fc(lVar4,iVar3 + -1,0), lVar4 != 0)))) {
                  lVar4 = FUN_01e8a9f8(lVar4,*(undefined8 *)
                                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__
                                      );
                  if (((*(long *)(param_4 + 0x20) != 0) &&
                      (lVar5 = FUN_0391fab4(*(long *)(param_4 + 0x20),0), lVar5 != 0)) &&
                     (fVar9 = (float)FUN_039291ac(lVar5,0), lVar4 != 0)) {
                    fVar13 = *(float *)(param_4 + 0x38);
                    FUN_0395ae9c(fVar9 * fVar13,fVar11 * fVar13,fVar12 * fVar13,lVar4,1,0);
                    if (*(long *)(param_4 + 0x60) != 0) {
                      FUN_03951fd4(*(long *)(param_4 + 0x60),0);
                      if (*(long *)(param_4 + 0x48) != 0) {
                        FUN_01bffa4c(DAT_00b55540,*(long *)(param_4 + 0x48),
                                     *(undefined8 *)(param_4 + 0x50),*(undefined8 *)(param_4 + 0x58)
                                     ,0);
                        uVar7 = FUN_01c13e10(param_4);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


