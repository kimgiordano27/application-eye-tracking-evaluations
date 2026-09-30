/*
FUNCTION_NAME: FUN_01c82de0
ENTRY_POINT: 01c82de0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_01c82de0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_03fed7e0 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_231);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed7e0 = 1;
  }
                    /* try { // try from 01c82e3c to 01d82e53 has its CatchHandler @ 01c83af4 */
  if (*(long *)(param_5 + 0xb0) != 0) {
    uVar7 = *(undefined8 *)(param_5 + 200);
    uVar9 = FUN_03928d34(*(long *)(param_5 + 0xb0),0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
    if (*(long *)(param_5 + 0xb0) != 0) {
      uVar11 = param_2;
      uVar12 = param_3;
      uVar10 = FUN_039274a0(*(long *)(param_5 + 0xb0),0);
                    /* try { // try from 01c82e90 to 01d82e97 has its CatchHandler @ 01c839a0 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = FUN_01f259b0(uVar9,param_2,param_3,uVar10,uVar11,uVar12,param_4,uVar7,
                           *(undefined8 *)puVar1);
      if (lVar3 != 0) {
        lVar4 = FUN_01ed7390(lVar3,*(undefined8 *)StringLiteral_231);
        uVar5 = FUN_03923030(lVar4,0);
        if ((uVar5 & 1) != 0) {
          if (DAT_03fed25f == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                    /* try { // try from 01c82f00 to 01d82f17 has its CatchHandler @ 01c83af4 */
            DAT_03fed25f = '\x01';
          }
          if (lVar4 == 0) goto LAB_01c82f80;
          fVar8 = *(float *)(param_5 + 0x68);
          lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_0395af54(fVar8 * *(float *)(lVar6 + 0x3c),fVar8 * *(float *)(lVar6 + 0x40),
                       fVar8 * *(float *)(lVar6 + 0x44),lVar4,2,0);
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a44(0x40a00000,lVar3,0);
        return;
      }
    }
  }
LAB_01c82f80:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


