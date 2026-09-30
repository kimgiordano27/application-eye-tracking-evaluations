/*
FUNCTION_NAME: FUN_01c92f44
ENTRY_POINT: 01c92f44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


undefined1  [16] FUN_01c92f44(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  
  if ((DAT_03fed878 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed878 = 1;
  }
  puVar1 = 
  Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
  ;
  if ((param_4 != 0) && (*(int *)(param_4 + 0x18) != 0)) {
    uVar2 = FUN_02b59714(param_4,*(int *)(param_4 + 0x18) + -1,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
                        );
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_02b59714(param_4,*(int *)(param_4 + 0x18) + -1,*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        auVar6 = FUN_03928d34(lVar4,0);
        if (*(int *)(param_4 + 0x18) == 1) {
          return auVar6;
        }
        fVar8 = param_2;
        fVar7 = param_3;
        lVar4 = FUN_02b59714(param_4,*(int *)(param_4 + 0x18) + -2,*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          fVar5 = (float)FUN_03928d34(lVar4,0);
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          fVar5 = fVar5 - auVar6._0_4_;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar8 = SQRT((fVar7 - param_3) * (fVar7 - param_3) +
                       fVar5 * fVar5 + (fVar8 - param_2) * (fVar8 - param_2));
          if (fVar8 <= DAT_00b55370) {
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            fVar5 = **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          }
          else {
            fVar5 = fVar5 / fVar8;
          }
          return ZEXT416((uint)(auVar6._0_4_ + fVar5 * param_1));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
                    /* try { // try from 01c92ffc to 01d9300f has its CatchHandler @ 01c9341c */
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
                    /* try { // try from 01c93018 to 01d9301f has its CatchHandler @ 01c93400 */
                    /* try { // try from 01c93020 to 01d93137 has its CatchHandler @ 01c928e0 */
  return ZEXT416(**(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8));
}


