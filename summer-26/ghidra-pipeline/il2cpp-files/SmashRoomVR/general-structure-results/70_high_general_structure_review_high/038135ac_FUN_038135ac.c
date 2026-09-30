/*
FUNCTION_NAME: FUN_038135ac
ENTRY_POINT: 038135ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4
*/


void FUN_038135ac(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* try { // try from 038135ac to 039135af has its CatchHandler @ 038135b4 */
                    /* try { // try from 038135b0 to 039135db has its CatchHandler @ 03813244 */
                    /* catch() { ... } // from try @ 03813598 with catch @ 038135b4
                       catch() { ... } // from try @ 038135ac with catch @ 038135b4 */
                    /* catch() { ... } // from try @ 038135a4 with catch @ 038135b8 */
                    /* catch() { ... } // from try @ 03813554 with catch @ 038135bc */
  if ((DAT_03ff83ac & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5b28);
    thunk_FUN_01ad9084(PTR_DAT_03da5c20);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff83ac = 1;
  }
  if (param_5[0x6d] != 0) {
    FUN_025bdac0(param_5[0x6d],param_6,*(undefined8 *)PTR_DAT_03da5b28);
    lVar2 = (**(code **)(*param_5 + 0x5a8))(param_5,param_6,*(undefined8 *)(*param_5 + 0x5b0));
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (param_5[0x6d] != 0) {
      FUN_025bc5b0(param_5[0x6d],param_6,param_7,*(undefined8 *)PTR_DAT_03da5c20);
      uVar3 = FUN_0391c27c(param_5,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar6);
      }
      uVar4 = FUN_03922f24(lVar2,uVar3,0);
      if ((uVar4 & 1) == 0) {
        if (lVar2 != 0) {
          uVar3 = FUN_03928c2c(lVar2,0);
          uVar5 = FUN_0391c27c(param_5,0);
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar6);
          }
          uVar4 = FUN_03922f24(uVar3,uVar5,0);
          if ((uVar4 & 1) == 0) {
            uVar8 = FUN_03928d34(lVar2,0);
            uVar3 = param_2;
            uVar5 = param_3;
            uVar9 = FUN_039274a0(lVar2,0);
            if (param_7 != 0) {
              FUN_039297a8(uVar8,param_2,param_3,uVar9,uVar3,uVar5,param_4,param_7,0);
              return;
            }
          }
          else {
            FUN_03928280(lVar2,0);
            if (param_7 != 0) {
              FUN_039282dc(param_7,0);
              uVar4 = FUN_03928fd8(lVar2,0);
              goto LAB_03813798;
            }
          }
        }
      }
      else {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (param_7 != 0) {
          puVar7 = *(undefined4 **)
                    (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_039282dc(*puVar7,puVar7[1],puVar7[2],param_7,0);
          if (DAT_03fed256 == '\0') {
            thunk_FUN_01ad9084(
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              );
            DAT_03fed256 = '\x01';
          }
          uVar4 = (ulong)**(uint **)(*(long *)
                                      Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                    + 0xb8);
LAB_03813798:
          FUN_03929060(uVar4,param_7,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


