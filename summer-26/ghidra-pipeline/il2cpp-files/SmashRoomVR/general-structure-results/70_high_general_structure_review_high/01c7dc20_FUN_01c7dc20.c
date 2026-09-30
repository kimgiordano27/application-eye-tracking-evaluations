/*
FUNCTION_NAME: FUN_01c7dc20
ENTRY_POINT: 01c7dc20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_20;telemetry_or_network_hits_6
*/


void FUN_01c7dc20(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
                    /* try { // try from 01c7dc44 to 01d7dc4b has its CatchHandler @ 01c7dc54 */
  if ((DAT_03fed7a8 & 1) == 0) {
                    /* try { // try from 01c7dc4c to 01d7dc57 has its CatchHandler @ 01c7ca0c */
    thunk_FUN_01ad9084(StringLiteral_315);
                    /* catch() { ... } // from try @ 01c7dc44 with catch @ 01c7dc54 */
                    /* try { // try from 01c7dc58 to 01d7dc77 has its CatchHandler @ 01c7dc58
                       catch() { ... } // from try @ 01c7dc58 with catch @ 01c7dc58
                       catch() { ... } // from try @ 01c7dc80 with catch @ 01c7dc58 */
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakAsync>d__66_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_7__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                      );
                    /* try { // try from 01c7dc78 to 01d7dc7f has its CatchHandler @ 01c7dc98 */
                    /* try { // try from 01c7dc80 to 01d7dcab has its CatchHandler @ 01c7dc58 */
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
                    /* catch() { ... } // from try @ 01c7dc78 with catch @ 01c7dc98 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_374);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c7df38 with catch @ 01c7dcac
                       catch(type#1 @ 00000000) { ... } // from try @ 01c7df7c with catch @ 01c7dcac
                        */
    DAT_03fed7a8 = 1;
  }
  lVar3 = FUN_0391c27c(param_4,0);
  if (lVar3 == 0) goto LAB_01c7e09c;
  uVar11 = FUN_03929354(lVar3,0);
  if (DAT_03fed258 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed258 = '\x01';
  }
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  fVar10 = (float)uVar11 - *(float *)(lVar3 + 0xc);
  fVar12 = (float)param_2 - *(float *)(lVar3 + 0x10);
  fVar13 = (float)param_3 - *(float *)(lVar3 + 0x14);
  if (DAT_00b55084 <= fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12) {
    lVar3 = FUN_0391c27c(param_4,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    if (lVar3 == 0) goto LAB_01c7e09c;
    lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
    FUN_039293f4(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                 *(undefined4 *)(lVar8 + 0x14),lVar3,0);
    lVar3 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_7__
                        );
    lVar8 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                  Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakAsync>d__66_System_Collections_IEnumerator_Reset__
                        );
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_0391f968(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar5,*(undefined8 *)StringLiteral_374,0);
      if (lVar5 == 0) goto LAB_01c7e09c;
      lVar5 = FUN_0391fab4(lVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar4 = FUN_03923030(lVar8,0);
      if ((uVar4 & 1) == 0) {
        if (lVar5 == 0) goto LAB_01c7e09c;
      }
      else {
        if ((((lVar5 == 0) || (lVar6 = FUN_0391c2b8(lVar5,0), lVar6 == 0)) ||
            (lVar6 = FUN_01ed7044(lVar6,*(undefined8 *)
                                         Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<CalculateHashes>b__27_0__
                                 ), lVar8 == 0)) || (uVar7 = FUN_03900d8c(lVar8,0), lVar6 == 0))
        goto LAB_01c7e09c;
        FUN_03900dc8(lVar6,uVar7,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923b4c(lVar8,0);
      }
      lVar8 = FUN_0391c2b8(lVar5,0);
      if (((lVar8 == 0) ||
          (lVar8 = FUN_01ed7044(lVar8,*(undefined8 *)
                                       Method_UnityEngine_UIElements_StyleComplexSelector_<>c_<ToString>b__24_0__
                               ), lVar3 == 0)) || (uVar7 = FUN_038fe880(lVar3,0), lVar8 == 0))
      goto LAB_01c7e09c;
      FUN_038fe8bc(lVar8,uVar7,0);
      uVar7 = FUN_0391c27c(param_4,0);
      FUN_039294c8(lVar5,uVar7,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_039282dc(*puVar9,puVar9[1],puVar9[2],lVar5,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar9 = *(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      FUN_03929060(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar5,0);
      FUN_039293f4(uVar11,param_2,param_3,lVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03923b4c(lVar3,0);
    }
    lVar3 = FUN_01e8a9f8(param_4,*(undefined8 *)StringLiteral_315);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar4 = FUN_0391f968(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      if (lVar3 != 0) {
        puVar9 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        FUN_0395c1ec(*puVar9,puVar9[1],puVar9[2],lVar3,0);
        FUN_0395c324(uVar11,param_2,param_3,lVar3,0);
        return;
      }
LAB_01c7e09c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


