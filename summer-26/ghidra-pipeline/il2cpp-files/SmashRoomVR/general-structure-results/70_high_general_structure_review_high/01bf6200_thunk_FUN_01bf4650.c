/*
FUNCTION_NAME: thunk_FUN_01bf4650
ENTRY_POINT: 01bf6200
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_11;telemetry_or_network_hits_4
*/


undefined8
thunk_FUN_01bf4650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lStack_98;
  long lStack_48;
  
  if ((DAT_03fed30b & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_94__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_95__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_96__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_97__);
    DAT_03fed30b = 1;
  }
  lStack_48 = 0;
  lStack_98 = 0;
  if (param_9 == 0) goto LAB_01bf494c;
  uVar3 = FUN_01ed84c4(param_9,&lStack_48,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_92__);
  if ((uVar3 & 1) == 0) {
    puVar8 = (undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_94__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar8 = (undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_94__;
    }
  }
  else {
    uVar3 = FUN_01ed84c4(param_9,&lStack_98,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_93__);
    if ((uVar3 & 1) == 0) {
      puVar8 = (undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_97__;
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        puVar8 = (undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_97__;
      }
    }
    else {
      if ((lStack_98 == 0) || (lVar4 = FUN_038fe900(lStack_98,0), lStack_48 == 0)) {
LAB_01bf494c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar5 = FUN_03900d8c(lStack_48,0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_03922f24(lVar5,0,0);
      if ((uVar3 & 1) == 0) {
        if ((lVar5 == 0) || (uVar2 = FUN_038fb9d8(lVar5,0), lVar4 == 0)) goto LAB_01bf494c;
        uVar3 = (ulong)uVar2;
        if (uVar2 == *(uint *)(lVar4 + 0x18)) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_0391f968(param_10,0,0);
          if (((uVar6 & 1) != 0) && (0 < (int)uVar2)) {
            uVar6 = 0;
            do {
              if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              uVar9 = *(undefined8 *)(lVar4 + 0x20 + uVar6 * 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar7 = FUN_03922f24(uVar9,param_10,0);
              if ((uVar7 & 1) != 0) {
                uVar3 = uVar6 & 0xffffffff;
                break;
              }
              uVar6 = uVar6 + 1;
            } while (uVar3 != uVar6);
          }
          uVar9 = FUN_01bf4954(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5
                               ,uVar3);
          return uVar9;
        }
        puVar8 = (undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_96__;
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          puVar8 = (undefined8 *)
                   Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_96__;
        }
      }
      else {
        puVar8 = (undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_95__;
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          puVar8 = (undefined8 *)
                   Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_95__;
        }
      }
    }
  }
  FUN_038f336c(*puVar8,0);
  return 0;
}


