/*
FUNCTION_NAME: FUN_01c62d44
ENTRY_POINT: 01c62d44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_01c62d44(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_03fed6bd & 1) == 0) {
                    /* try { // try from 01c62d70 to 01d62d7f has its CatchHandler @ 01c62dd0 */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
                    /* try { // try from 01c62d80 to 01d62e0f has its CatchHandler @ 01c62ce8 */
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed6bd = 1;
  }
  if ((param_5 != 0) && (lVar2 = FUN_03954698(param_5,0), lVar2 != 0)) {
    lVar2 = FUN_01e8a9f8(lVar2,*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    lVar3 = FUN_0391c27c(param_4,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c62d70 with catch @ 01c62dd0
                        */
    if (lVar3 != 0) {
      FUN_039294c8(lVar3,0,0);
      lVar3 = FUN_03954858(param_5,0);
      if (lVar3 != 0) {
        uVar4 = FUN_0391fc2c(lVar3,0);
        puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if ((uVar4 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c62e10 with catch @ 01c62e14
                        */
                    /* try { // try from 01c62e18 to 01d62e1b has its CatchHandler @ 01c62e24 */
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_0391f968(lVar2,0,0);
          if ((uVar4 & 1) != 0) {
            if (lVar2 == 0) goto LAB_01c63170;
            uVar4 = FUN_0395a324(lVar2,0);
            if ((uVar4 & 1) == 0) {
              lVar3 = FUN_0391c2b8(param_4,0);
              if ((lVar3 != 0) &&
                 (lVar3 = FUN_01ed7044(lVar3,*(undefined8 *)
                                              Field_<PrivateImplementationDetails>_74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04
                                      ), lVar3 != 0)) {
                FUN_0395c650(lVar3,lVar2,0);
                FUN_0395cc88(lVar3,0,0);
                FUN_0395cb78(0x7f7fffff,lVar3,0);
                FUN_0395cc00(0x7f7fffff,lVar3,0);
                return;
              }
              goto LAB_01c63170;
            }
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_0391f968(lVar2,0,0);
          puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if ((uVar4 & 1) != 0) {
            if (lVar2 == 0) goto LAB_01c63170;
            uVar4 = FUN_0395a324(lVar2,0);
            if ((uVar4 & 1) != 0) {
              lVar2 = FUN_039547c4(param_5,0);
              if (lVar2 == 0) goto LAB_01c63170;
              fVar6 = (float)FUN_03929354(lVar2,0);
              if (DAT_03fed258 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed258 = '\x01';
              }
              lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
              fVar6 = fVar6 - *(float *)(lVar2 + 0xc);
              fVar7 = param_2 - *(float *)(lVar2 + 0x10);
              param_3 = param_3 - *(float *)(lVar2 + 0x14);
              param_2 = param_3 * param_3;
              if (param_2 + fVar6 * fVar6 + fVar7 * fVar7 < DAT_00b55084) {
                lVar2 = FUN_0391c27c(param_4,0);
                uVar5 = FUN_039547c4(param_5,0);
                if (lVar2 != 0) {
                  FUN_03929618(lVar2,uVar5,0);
                  if (*(long *)(param_4 + 0x20) != 0) {
                    FUN_0395a294(*(long *)(param_4 + 0x20),0,0);
                    if (*(long *)(param_4 + 0x20) != 0) {
                      FUN_0395a4a4(*(long *)(param_4 + 0x20),0,0);
                      if (*(long *)(param_4 + 0x20) != 0) {
                        FUN_0395a360(*(long *)(param_4 + 0x20),1,0);
                        if (*(long *)(param_4 + 0x20) != 0) {
                          FUN_0395a424(*(long *)(param_4 + 0x20),0x7e,0);
                          if (*(long *)(param_4 + 0x20) != 0) {
                            FUN_0395ada4(*(long *)(param_4 + 0x20),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_01c63170;
              }
            }
          }
          lVar2 = FUN_039547c4(param_5,0);
          if (lVar2 == 0) goto LAB_01c63170;
          fVar6 = (float)FUN_03929354(lVar2,0);
          if (DAT_03fed258 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed258 = '\x01';
          }
          lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
          fVar6 = fVar6 - *(float *)(lVar2 + 0xc);
          param_2 = param_2 - *(float *)(lVar2 + 0x10);
          param_3 = param_3 - *(float *)(lVar2 + 0x14);
          if (param_3 * param_3 + fVar6 * fVar6 + param_2 * param_2 < DAT_00b55084) {
            lVar2 = FUN_0391c27c(param_4,0);
            uVar5 = FUN_039547c4(param_5,0);
            if (lVar2 != 0) {
              FUN_03929618(lVar2,uVar5,0);
              if (*(long *)(param_4 + 0x20) != 0) {
                FUN_0395a424(*(long *)(param_4 + 0x20),0x7e,0);
                return;
              }
            }
            goto LAB_01c63170;
          }
          if (*(long *)(param_4 + 0x20) == 0) goto LAB_01c63170;
          FUN_0395a4a4(*(long *)(param_4 + 0x20),0,0);
          if (*(long *)(param_4 + 0x20) == 0) goto LAB_01c63170;
          FUN_0395a294(*(long *)(param_4 + 0x20),0,0);
        }
        else {
          if (*(long *)(param_4 + 0x20) == 0) goto LAB_01c63170;
          FUN_0395a4a4(*(long *)(param_4 + 0x20),0,0);
                    /* try { // try from 01c62e10 to 01d62e13 has its CatchHandler @ 01c62e14 */
        }
        if (*(long *)(param_4 + 0x20) != 0) {
          FUN_0395a360(*(long *)(param_4 + 0x20),1,0);
          return;
        }
      }
    }
  }
LAB_01c63170:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


