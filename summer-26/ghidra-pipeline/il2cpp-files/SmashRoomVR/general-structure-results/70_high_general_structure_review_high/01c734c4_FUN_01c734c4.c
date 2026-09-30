/*
FUNCTION_NAME: FUN_01c734c4
ENTRY_POINT: 01c734c4
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


void FUN_01c734c4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_03fed745 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 01c734fc to 01d73513 has its CatchHandler @ 01c73624 */
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
                      );
                    /* try { // try from 01c73514 to 01d735d3 has its CatchHandler @ 01c73468 */
    DAT_03fed745 = 1;
  }
  if ((char)param_1[0x18] == '\0') {
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  if ((uVar3 & 1) != 0) {
    if (param_1[6] == 0) goto LAB_01c738c4;
    uVar3 = FUN_0391b7d0(param_1[6],0);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
    }
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar6 = param_1[6];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(lVar6,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_1[6] != 0) {
    uVar3 = FUN_0391b7d0(param_1[6],0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (param_1[6] == 0) goto LAB_01c738c4;
    uVar4 = FUN_038e75a4(param_1[6],0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    fVar10 = *(float *)(param_1 + 0xe);
    fVar9 = *(float *)((long)param_1 + 0x74);
    fVar7 = (float)FUN_03925cf4(0);
    fVar7 = fVar7 * *(float *)(param_1 + 0xb);
    fVar8 = fVar7;
    if (1.0 < fVar7) {
      fVar8 = 1.0;
    }
    if (fVar7 < 0.0) {
      fVar8 = 0.0;
    }
    fVar12 = *(float *)(param_1 + 0x10);
    fVar11 = *(float *)((long)param_1 + 0x84);
    *(float *)((long)param_1 + 0x74) = fVar9 + (fVar10 - fVar9) * fVar8;
    fVar7 = (float)FUN_03925cf4(0);
    fVar10 = *(float *)(param_1 + 0xf);
    fVar9 = *(float *)((long)param_1 + 0x7c);
    fVar7 = fVar7 * *(float *)(param_1 + 0xb);
    fVar8 = fVar7;
    if (1.0 < fVar7) {
      fVar8 = 1.0;
    }
    if (fVar7 < 0.0) {
      fVar8 = 0.0;
    }
    *(float *)((long)param_1 + 0x84) = fVar11 + (fVar12 - fVar11) * fVar8;
    fVar7 = (float)FUN_03925cf4(0);
    fVar7 = fVar7 * *(float *)(param_1 + 0xb);
    fVar8 = fVar7;
    if (1.0 < fVar7) {
      fVar8 = 1.0;
    }
    if (fVar7 < 0.0) {
      fVar8 = 0.0;
    }
    *(float *)((long)param_1 + 0x7c) = fVar9 + (fVar10 - fVar9) * fVar8;
    puVar2 = 
    Field_<PrivateImplementationDetails>_533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
    ;
    if (param_1[6] == 0) goto LAB_01c738c4;
    FUN_038e6720(*(undefined4 *)((long)param_1 + 0x74),param_1[6],
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
                 ,0);
    if (param_1[6] == 0) goto LAB_01c738c4;
    FUN_038e70f8(*(undefined4 *)((long)param_1 + 0x84),param_1[6],1,0);
    if (param_1[6] == 0) goto LAB_01c738c4;
    FUN_038e70f8(*(undefined4 *)((long)param_1 + 0x7c),param_1[6],2,0);
    lVar6 = param_1[0xc];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if (param_1[0xc] == 0) goto LAB_01c738c4;
      uVar4 = *(undefined8 *)(param_1[0xc] + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (param_1[6] == 0) goto LAB_01c738c4;
        FUN_038e70f8(0,param_1[6],0,0);
        if (param_1[6] == 0) goto LAB_01c738c4;
        FUN_038e70f8(0,param_1[6],1,0);
        if (param_1[6] == 0) goto LAB_01c738c4;
        FUN_038e70f8(0,param_1[6],2,0);
        if ((param_1[0xc] == 0) || (lVar6 = *(long *)(param_1[0xc] + 0x80), lVar6 == 0))
        goto LAB_01c738c4;
        *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(lVar6 + 0x98);
        uVar4 = *(undefined8 *)(lVar6 + 0x140);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar4,0,0);
        if ((uVar3 & 1) == 0) {
          if (param_1[0xc] == 0) goto LAB_01c738c4;
          uVar3 = FUN_01c4ba84(param_1[0xc],0);
          if ((uVar3 & 1) != 0) {
            *(undefined4 *)(param_1 + 0xf) = 0;
            *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x10) = 0;
          }
        }
        else {
          if (param_1[6] == 0) goto LAB_01c738c4;
          FUN_038e70f8(0x3f800000,param_1[6],0,0);
          if (param_1[6] == 0) goto LAB_01c738c4;
          FUN_038e6720(0x3f800000,param_1[6],*(undefined8 *)puVar2,0);
          if (((param_1[0xc] == 0) || (lVar6 = *(long *)(param_1[0xc] + 0x80), lVar6 == 0)) ||
             (lVar6 = *(long *)(lVar6 + 0x140), lVar6 == 0)) goto LAB_01c738c4;
          FUN_01c738c8(*(undefined4 *)(lVar6 + 0x44),*(undefined4 *)(lVar6 + 0x48),(int)param_1[0xf]
                       ,param_1,2);
          if (((param_1[0xc] == 0) || (lVar6 = *(long *)(param_1[0xc] + 0x80), lVar6 == 0)) ||
             (lVar6 = *(long *)(lVar6 + 0x140), lVar6 == 0)) goto LAB_01c738c4;
          FUN_01c738c8(*(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),
                       (int)param_1[0x10],param_1,1);
        }
        lVar6 = param_1[6];
        if (lVar6 == 0) goto LAB_01c738c4;
        uVar5 = *(undefined4 *)((long)param_1 + 0x94);
        goto LAB_01c738a0;
      }
    }
    lVar6 = param_1[6];
    if (lVar6 != 0) {
      uVar5 = 0;
LAB_01c738a0:
      FUN_038e6870(lVar6,*(undefined8 *)
                          Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                   ,uVar5,0);
      return;
    }
  }
LAB_01c738c4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


