/*
FUNCTION_NAME: FUN_01c41f6c
ENTRY_POINT: 01c41f6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void FUN_01c41f6c(undefined1 param_1 [16],float param_2,float param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 01c41f6c to 01d41f73 has its CatchHandler @ 01c4201c */
  if ((DAT_03fed5b2 & 1) == 0) {
                    /* try { // try from 01c41fa0 to 01d41fb3 has its CatchHandler @ 01c42004 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5b2 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_4 + 0x76) != '\0') {
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
                    /* try { // try from 01c41fcc to 01d41fdb has its CatchHandler @ 01c4200c */
    uVar2 = FUN_0391f968(param_5,0,0);
                    /* try { // try from 01c41fdc to 01d42023 has its CatchHandler @ 01c41da4 */
    if ((uVar2 & 1) != 0) {
      if (*(int *)((long)param_4 + 0x54) == 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41ebc with catch @ 01c41ff8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41e78 with catch @ 01c42000
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41fa0 with catch @ 01c42004
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41fcc with catch @ 01c4200c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41f48 with catch @ 01c42010
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41f28 with catch @ 01c42014
                        */
                    /* WARNING: Could not recover jumptable at 0x01c42018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41f14 with catch @ 01c42018
                        */
        (**(code **)(*param_4 + 0x398))(param_4,param_5,*(undefined8 *)(*param_4 + 0x3a0));
        return;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c41ef4 with catch @ 01c4201c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c41f6c with catch @ 01c4201c
                        */
      lVar3 = FUN_01c40b3c(param_4);
                    /* try { // try from 01c42024 to 01d42033 has its CatchHandler @ 01c42034 */
      if (lVar3 != 0) {
        fVar6 = (float)FUN_03928d34(lVar3,0);
        fVar9 = param_2;
        fVar8 = param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c42024 with catch @ 01c42034
                        */
                    /* try { // try from 01c42038 to 01d4203b has its CatchHandler @ 01c4206c */
        lVar3 = FUN_0391c27c(param_4,0);
        if (lVar3 != 0) {
                    /* try { // try from 01c42050 to 01d4205f has its CatchHandler @ 01c42068 */
          fVar7 = (float)FUN_03928d34(lVar3,0);
                    /* try { // try from 01c42060 to 01d4206f has its CatchHandler @ 01c41da4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c42050 with catch @ 01c42068
                        */
          if (DAT_03fed25e == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c42038 with catch @ 01c4206c
                        */
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25e = '\x01';
          }
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar9 = SQRT((fVar8 - param_3) * (fVar8 - param_3) +
                       (fVar7 - fVar6) * (fVar7 - fVar6) + (fVar9 - param_2) * (fVar9 - param_2));
          if ((char)param_4[0x30] == '\0') {
            uVar5 = FUN_01c40b3c(param_4);
            lVar3 = *(long *)puVar1;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar3);
            }
            uVar2 = FUN_0391f968(uVar5,0,0);
            if (DAT_00b55290 <= fVar9) {
              return;
            }
            if ((uVar2 & 1) == 0) {
              return;
            }
            (**(code **)(*param_4 + 0x398))(param_4,param_5,*(undefined8 *)(*param_4 + 0x3a0));
            FUN_01c42224(param_4,param_5);
          }
          else {
            if (DAT_00b5568c <= fVar9) {
              return;
            }
            (**(code **)(*param_4 + 0x398))(param_4,param_5,*(undefined8 *)(*param_4 + 0x3a0));
          }
          if (param_5 != 0) {
            uVar5 = *(undefined8 *)(param_5 + 0x50);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar2 = FUN_0391f968(uVar5,0,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            lVar3 = *(long *)(param_5 + 0x50);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            if (lVar3 != 0) {
              puVar4 = *(undefined4 **)
                        (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
              FUN_03929030(*puVar4,puVar4[1],puVar4[2],lVar3,0);
              if (*(long *)(param_5 + 0x50) != 0) {
                FUN_039282dc(*(undefined4 *)(param_5 + 0xb4),*(undefined4 *)(param_5 + 0xb8),
                             *(undefined4 *)(param_5 + 0xbc),*(long *)(param_5 + 0x50),0);
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
  return;
}


