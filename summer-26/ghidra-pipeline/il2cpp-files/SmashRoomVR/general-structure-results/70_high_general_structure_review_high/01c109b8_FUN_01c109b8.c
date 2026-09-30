/*
FUNCTION_NAME: FUN_01c109b8
ENTRY_POINT: 01c109b8
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


void FUN_01c109b8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((DAT_03fed3fb & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__24_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed3fb = 1;
  }
  *(undefined1 *)(param_4 + 0x40) = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    lVar3 = FUN_0391fab4(*(long *)(param_4 + 0x20),0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar3 != 0) {
      uVar9 = FUN_03928d34(lVar3,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
      puVar5 = *(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      uVar16 = *puVar5;
      uVar15 = puVar5[1];
      uVar14 = puVar5[2];
      uVar13 = puVar5[3];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = FUN_01f259b0(uVar9,param_2,param_3,uVar16,uVar15,uVar14,uVar13,uVar6,
                           *(undefined8 *)puVar1);
      fVar10 = (float)param_2;
      fVar11 = (float)param_3;
      plVar7 = (long *)(param_4 + 0x30);
      *plVar7 = lVar3;
      thunk_FUN_01b4f09c(plVar7,lVar3);
      if (*plVar7 != 0) {
        lVar3 = FUN_0391fab4(*plVar7,0);
        uVar6 = FUN_0391c27c(param_4,0);
        if (lVar3 != 0) {
          FUN_0392a01c(lVar3,uVar6,0);
          if (((*plVar7 != 0) && (lVar3 = FUN_0391fab4(*plVar7,0), lVar3 != 0)) &&
             (lVar3 = FUN_0392a9fc(lVar3,0,0), lVar3 != 0)) {
            lVar3 = FUN_01e8a9f8(lVar3,*(undefined8 *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__)
            ;
            if (((*(long *)(param_4 + 0x20) != 0) &&
                (lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x20),0), lVar4 != 0)) &&
               (fVar8 = (float)FUN_039291ac(lVar4,0), lVar3 != 0)) {
              fVar12 = *(float *)(param_4 + 0x38);
              FUN_0395ae9c(fVar8 * fVar12,fVar10 * fVar12,fVar11 * fVar12,lVar3,1,0);
              puVar2 = 
              Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__24_0__
              ;
              if (*plVar7 != 0) {
                lVar3 = FUN_01ed7390(*plVar7,*(undefined8 *)
                                              Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__24_0__
                                    );
                if (lVar3 != 0) {
                  *(undefined1 *)(lVar3 + 0x38) = *(undefined1 *)(param_4 + 0x6a);
                  if (*(long *)(param_4 + 0x30) != 0) {
                    lVar3 = FUN_01ed7390(*(long *)(param_4 + 0x30),*(undefined8 *)puVar2);
                    if (((*(long *)(param_4 + 0x20) != 0) &&
                        (lVar4 = FUN_0391fab4(*(long *)(param_4 + 0x20),0), lVar4 != 0)) &&
                       (FUN_039291ac(lVar4,0), lVar3 != 0)) {
                      FUN_01c00f50(lVar3,0);
                      if (*(long *)(param_4 + 0x60) != 0) {
                        FUN_03951fd4(*(long *)(param_4 + 0x60),0);
                        if (*(long *)(param_4 + 0x48) != 0) {
                          FUN_01bffa4c(DAT_00b55540,*(long *)(param_4 + 0x48),
                                       *(undefined8 *)(param_4 + 0x50),
                                       *(undefined8 *)(param_4 + 0x58),0);
                          uVar6 = FUN_01c10c60(param_4);
                          FUN_03920cb0(param_4,uVar6,0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


