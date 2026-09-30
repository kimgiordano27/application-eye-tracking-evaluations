/*
FUNCTION_NAME: FUN_01c6e7e8
ENTRY_POINT: 01c6e7e8
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


void FUN_01c6e7e8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((DAT_03fed723 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed723 = 1;
  }
  if ((((char)param_1[4] != '\0') && (*(char *)((long)param_1 + 0x104) == '\0')) &&
     (uVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180)),
     (uVar4 & 1) != 0)) {
    FUN_01c6eea8(param_1);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    lVar7 = param_1[0xf];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar7,0,0);
    puVar2 = 
    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
    ;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
                    /* try { // try from 01c6e8a8 to 01d6e907 has its CatchHandler @ 01c6e57c */
      lVar7 = FUN_01c4997c(0);
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar7 + 0x4c);
                    /* catch() { ... } // from try @ 01c6e5e0 with catch @ 01c6e8c0 */
      lVar7 = FUN_01c4997c(0);
                    /* catch() { ... } // from try @ 01c6e7cc with catch @ 01c6e8c4 */
                    /* catch() { ... } // from try @ 01c6e6c8 with catch @ 01c6e8c8 */
                    /* catch() { ... } // from try @ 01c6e664 with catch @ 01c6e8cc
                       catch() { ... } // from try @ 01c6e72c with catch @ 01c6e8cc */
      if (((param_1[0xf] == 0) || (lVar5 = FUN_03452478(param_1[0xf],0), lVar5 == 0)) ||
         (uVar8 = FUN_01ee1390(lVar5,*(undefined8 *)
                                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                              ), lVar7 == 0)) goto LAB_01c6eea4;
      *(undefined4 *)(lVar7 + 0x4c) = uVar8;
      lVar7 = FUN_01c4997c(0);
      fVar9 = *(float *)((long)param_1 + 0x124);
                    /* catch() { ... } // from try @ 01c6ece4 with catch @ 01c6e908 */
      lVar5 = FUN_01c4997c(0);
      if (lVar5 == 0) goto LAB_01c6eea4;
      if (*(float *)(lVar5 + 0xbc) <= fVar9) {
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        fVar9 = *(float *)(lVar5 + 0x4c);
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        bVar6 = *(float *)(lVar5 + 0xbc) <= fVar9;
      }
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(bool *)(lVar7 + 0x52) = bVar6;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01c4997c(0);
      fVar9 = *(float *)((long)param_1 + 0x124);
      lVar5 = FUN_01c4997c(0);
      if (lVar5 == 0) goto LAB_01c6eea4;
      if (fVar9 <= *(float *)(lVar5 + 0xbc)) {
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        fVar9 = *(float *)(lVar5 + 0x4c);
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        bVar6 = fVar9 < *(float *)(lVar5 + 0xbc);
      }
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(bool *)(lVar7 + 0x51) = bVar6;
    }
    lVar7 = param_1[0xe];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar7,0,0);
    puVar2 = 
    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
    ;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01c4997c(0);
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar7 + 0x3c);
      lVar7 = FUN_01c4997c(0);
      if (((param_1[0xe] == 0) || (lVar5 = FUN_03452478(param_1[0xe],0), lVar5 == 0)) ||
         (uVar8 = FUN_01ee1390(lVar5,*(undefined8 *)
                                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                              ), lVar7 == 0)) goto LAB_01c6eea4;
      *(undefined4 *)(lVar7 + 0x3c) = uVar8;
      lVar7 = FUN_01c4997c(0);
      fVar9 = *(float *)((long)param_1 + 0x124);
      lVar5 = FUN_01c4997c(0);
      if (lVar5 == 0) goto LAB_01c6eea4;
      if (*(float *)(lVar5 + 0xbc) <= fVar9) {
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        fVar9 = *(float *)(lVar5 + 0x3c);
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        bVar6 = *(float *)(lVar5 + 0xbc) <= fVar9;
      }
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(bool *)(lVar7 + 0x40) = bVar6;
    }
    lVar7 = param_1[0x10];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01c4997c(0);
      if (((param_1[0x10] == 0) || (lVar5 = FUN_03452478(param_1[0x10],0), lVar5 == 0)) ||
         (fVar9 = (float)FUN_01ee1390(lVar5,*(undefined8 *)
                                             Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                     ), lVar7 == 0)) goto LAB_01c6eea4;
      *(bool *)(lVar7 + 0x5b) = fVar9 == 1.0;
    }
    lVar7 = param_1[0x12];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if ((param_1[0x12] == 0) ||
         (lVar7 = FUN_03452478(param_1[0x12],0),
         puVar2 = 
         Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
         , lVar7 == 0)) goto LAB_01c6eea4;
      FUN_01ee1390(lVar7,*(undefined8 *)
                          Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                  );
      puVar3 = 
      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
      ;
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01c4997c(0);
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar7 + 0x54);
      lVar7 = FUN_01c4997c(0);
      if (((param_1[0x12] == 0) || (lVar5 = FUN_03452478(param_1[0x12],0), lVar5 == 0)) ||
         (uVar8 = FUN_01ee1390(lVar5,*(undefined8 *)puVar2), lVar7 == 0)) goto LAB_01c6eea4;
      *(undefined4 *)(lVar7 + 0x54) = uVar8;
      lVar7 = FUN_01c4997c(0);
      fVar9 = *(float *)((long)param_1 + 0x124);
      lVar5 = FUN_01c4997c(0);
      if (lVar5 == 0) goto LAB_01c6eea4;
      if (*(float *)(lVar5 + 0xbc) <= fVar9) {
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        fVar9 = *(float *)(lVar5 + 0x54);
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        bVar6 = *(float *)(lVar5 + 0xbc) <= fVar9;
      }
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(bool *)(lVar7 + 0x59) = bVar6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01c4997c(0);
      fVar9 = *(float *)((long)param_1 + 0x124);
      lVar5 = FUN_01c4997c(0);
      if (lVar5 == 0) goto LAB_01c6eea4;
      if (fVar9 <= *(float *)(lVar5 + 0xbc)) {
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        fVar9 = *(float *)(lVar5 + 0x54);
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        bVar6 = fVar9 < *(float *)(lVar5 + 0xbc);
      }
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(bool *)(lVar7 + 0x58) = bVar6;
    }
    lVar7 = param_1[0x11];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar7,0,0);
    puVar2 = 
    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
    ;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01c4997c(0);
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(lVar7 + 0x44);
      lVar7 = FUN_01c4997c(0);
      if (((param_1[0x11] == 0) || (lVar5 = FUN_03452478(param_1[0x11],0), lVar5 == 0)) ||
         (uVar8 = FUN_01ee1390(lVar5,*(undefined8 *)
                                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                              ), lVar7 == 0)) goto LAB_01c6eea4;
      *(undefined4 *)(lVar7 + 0x44) = uVar8;
      lVar7 = FUN_01c4997c(0);
      fVar9 = *(float *)((long)param_1 + 0x124);
      lVar5 = FUN_01c4997c(0);
      if (lVar5 == 0) goto LAB_01c6eea4;
      if (*(float *)(lVar5 + 0xbc) <= fVar9) {
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        fVar9 = *(float *)(lVar5 + 0x44);
        lVar5 = FUN_01c4997c(0);
        if (lVar5 == 0) goto LAB_01c6eea4;
        bVar6 = *(float *)(lVar5 + 0xbc) <= fVar9;
      }
      if (lVar7 == 0) goto LAB_01c6eea4;
      *(bool *)(lVar7 + 0x48) = bVar6;
    }
    lVar7 = param_1[0x13];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar7,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar7 = FUN_01c4997c(0);
      if (((param_1[0x13] == 0) || (lVar5 = FUN_03452478(param_1[0x13],0), lVar5 == 0)) ||
         (fVar9 = (float)FUN_01ee1390(lVar5,*(undefined8 *)
                                             Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                     ), lVar7 == 0)) {
LAB_01c6eea4:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(bool *)(lVar7 + 0x5c) = fVar9 == 1.0;
    }
  }
  return;
}


