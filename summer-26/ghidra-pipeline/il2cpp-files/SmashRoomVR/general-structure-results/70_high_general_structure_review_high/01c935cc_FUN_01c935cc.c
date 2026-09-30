/*
FUNCTION_NAME: FUN_01c935cc
ENTRY_POINT: 01c935cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_01c935cc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c9359c with catch @ 01c935d0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c934e8 with catch @ 01c935e4
                        */
  if ((DAT_03fed86e & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_578);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed86e = 1;
  }
  uVar2 = FUN_0391b7d0(param_1,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar2 & 1) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x90);
    uVar4 = *puVar3;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = FUN_01e8a9f8(param_1,*(undefined8 *)StringLiteral_578);
      *(undefined8 *)(param_1 + 0x90) = uVar4;
      thunk_FUN_01b4f09c(puVar3,uVar4);
    }
    if (*(char *)(param_1 + 0x74) != '\0') {
      uVar4 = *puVar3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        FUN_038f997c(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                     *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),0);
        if (*(long *)(param_1 + 0x90) != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          FUN_01c92f44(*(undefined4 *)(param_1 + 0x30),
                       *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x50));
          FUN_01c937ac(param_1,uVar4,*(undefined4 *)(param_1 + 0x78));
          if (*(long *)(param_1 + 0x90) != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x40);
            FUN_01c92f44(*(undefined4 *)(param_1 + 0x30),
                         *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x58));
            FUN_01c937ac(param_1,uVar4,*(undefined4 *)(param_1 + 0x78));
            if (*(long *)(param_1 + 0x90) != 0) {
              uVar4 = *(undefined8 *)(param_1 + 0x48);
              FUN_01c92f44(*(undefined4 *)(param_1 + 0x30),
                           *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x60));
              FUN_01c937ac(param_1,uVar4,*(undefined4 *)(param_1 + 0x78));
              if (*(long *)(param_1 + 0x90) != 0) {
                uVar4 = *(undefined8 *)(param_1 + 0x50);
                FUN_01c92f44(*(undefined4 *)(param_1 + 0x30),
                             *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x68));
                FUN_01c937ac(param_1,uVar4,*(undefined4 *)(param_1 + 0x78));
                if (*(long *)(param_1 + 0x90) != 0) {
                  uVar4 = *(undefined8 *)(param_1 + 0x58);
                  FUN_01c92f44(*(undefined4 *)(param_1 + 0x30),
                               *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x70));
                  FUN_01c937ac(param_1,uVar4,*(undefined4 *)(param_1 + 0x78));
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
  return;
}


