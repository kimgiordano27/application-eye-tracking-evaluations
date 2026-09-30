/*
FUNCTION_NAME: FUN_038235ec
ENTRY_POINT: 038235ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


void FUN_038235ec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 038235fc to 0392361f has its CatchHandler @ 038236a0 */
  if ((DAT_03ff8456 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da6218);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                      );
                    /* try { // try from 03823640 to 03923647 has its CatchHandler @ 03823694 */
    DAT_03ff8456 = 1;
  }
                    /* try { // try from 03823648 to 0392368b has its CatchHandler @ 038234bc */
  plVar5 = (long *)(param_1 + 0x50);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar6,0,0);
  if ((uVar2 & 1) != 0) {
    lVar6 = FUN_0391c2b8(param_1,0);
    if (lVar6 != 0) {
      uVar3 = FUN_039230bc(lVar6,0);
      uVar3 = FUN_02ee6c30(*(undefined8 *)
                            Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                           ,uVar3,*(undefined8 *)PTR_DAT_03da6218,0);
      lVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar6,uVar3,0);
      if (lVar6 != 0) {
        uVar3 = FUN_0391fab4(lVar6,0);
        *(undefined8 *)(param_1 + 0x50) = uVar3;
        thunk_FUN_01b4f09c(plVar5,uVar3);
        lVar6 = *(long *)(param_1 + 0x50);
        uVar3 = FUN_0391c27c(param_1,0);
        if (lVar6 != 0) {
          FUN_03929660(lVar6,uVar3,0,0);
          lVar6 = *plVar5;
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          if (lVar6 != 0) {
            puVar4 = *(undefined4 **)
                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_039282dc(*puVar4,puVar4[1],puVar4[2],lVar6,0);
            lVar6 = *plVar5;
            if (DAT_03fed256 == '\0') {
              thunk_FUN_01ad9084(
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                );
              DAT_03fed256 = '\x01';
            }
            if (lVar6 != 0) {
              puVar4 = *(undefined4 **)
                        (*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                        0xb8);
              FUN_03929060(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar6,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


