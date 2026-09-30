/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<InputFeatureUsage<Vector2>>
ENTRY_POINT: 01c59bf0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__IndexOf<InputFeatureUsage<Vector2>>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  long unaff_x21;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xf58));
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
  thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    );
  thunk_FUN_01ad9084(
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                    );
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__);
  thunk_FUN_01ad9084(StringLiteral_158);
  thunk_FUN_01ad9084(StringLiteral_159);
  *(undefined1 *)(unaff_x21 + 0x67b) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = FUN_01c4997c();
  plVar8 = (long *)(unaff_x19 + 0xe0);
  *plVar8 = lVar4;
  thunk_FUN_01b4f09c(plVar8,lVar4);
  lVar4 = FUN_01e8a9f8();
  plVar9 = (long *)(unaff_x19 + 0xd0);
  *plVar9 = lVar4;
  thunk_FUN_01b4f09c(plVar9,lVar4);
  uVar5 = FUN_01e8a9f8();
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar5;
  thunk_FUN_01b4f09c();
  uVar5 = FUN_01e8ac5c();
  *(undefined8 *)(unaff_x19 + 200) = uVar5;
  thunk_FUN_01b4f09c();
  if (*plVar9 != 0) {
    plVar10 = (long *)(unaff_x19 + 0xe8);
    *plVar10 = *(long *)(*plVar9 + 0x30);
    thunk_FUN_01b4f09c(plVar10);
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*plVar10 != 0) {
      uVar5 = FUN_01e8ac5c(*plVar10,*(undefined8 *)StringLiteral_156);
      *(undefined8 *)(unaff_x19 + 0xf0) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0xf0),uVar5);
      uVar5 = FUN_01b47fd0(*(undefined8 *)puVar2,*(undefined4 *)(unaff_x19 + 0x84));
      *(undefined8 *)(unaff_x19 + 0x150) = uVar5;
      thunk_FUN_01b4f09c(unaff_x19 + 0x150);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0391f968(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (lVar4 = FUN_0391c27c(*(long *)(unaff_x19 + 0x20),0), lVar4 == 0)) goto LAB_01c59f24;
        FUN_039294c8(lVar4,0,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01c59f24;
        lVar4 = FUN_0391c27c(*(long *)(unaff_x19 + 0x20),0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar4 == 0) goto LAB_01c59f24;
        puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_03928dd4(*puVar7,puVar7[1],puVar7[2],lVar4,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01c59f24;
        lVar4 = FUN_0391c27c(*(long *)(unaff_x19 + 0x20),0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar4 == 0) goto LAB_01c59f24;
        puVar7 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        FUN_03928f54(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar4,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01c59f24;
        uVar11 = FUN_038fcad8(*(long *)(unaff_x19 + 0x20),0);
        *(undefined4 *)(unaff_x19 + 0x100) = uVar11;
      }
      iVar3 = FUN_03920150(*(undefined4 *)(unaff_x19 + 0x90),0);
      if (iVar3 == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(*(undefined8 *)StringLiteral_158,0);
        uVar11 = FUN_03920154(1,0);
        *(undefined4 *)(unaff_x19 + 0x90) = uVar11;
      }
      if (*(int *)(unaff_x19 + 0x98) == 0) {
        if (*plVar8 == 0) goto LAB_01c59f24;
        if (*(char *)(*plVar8 + 0xd2) != '\0') {
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f2acc(*(undefined8 *)StringLiteral_159,0);
          *(undefined4 *)(unaff_x19 + 0x98) = 1;
        }
      }
      *(undefined1 *)(unaff_x19 + 0x104) = 1;
      return;
    }
  }
LAB_01c59f24:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


