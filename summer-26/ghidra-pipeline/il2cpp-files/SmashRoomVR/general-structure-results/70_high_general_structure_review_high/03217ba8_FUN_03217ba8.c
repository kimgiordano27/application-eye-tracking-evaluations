/*
FUNCTION_NAME: FUN_03217ba8
ENTRY_POINT: 03217ba8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_16;telemetry_or_network_hits_4
*/


void FUN_03217ba8(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar2 = PTR_DAT_03d836e0;
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__;
  if ((DAT_03ff4620 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d836e0);
    DAT_03ff4620 = 1;
  }
  uVar6 = *(undefined8 *)puVar2;
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_0391fe00(lVar3,uVar6,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar3 == 0) goto LAB_03217e38;
  lVar3 = FUN_0391fab4(lVar3,0);
  plVar5 = (long *)(param_4 + 0x60);
  *plVar5 = lVar3;
  thunk_FUN_01b4f09c(plVar5,lVar3);
  uVar6 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar6,0);
  lVar3 = *plVar5;
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_0391c27c(param_4,0);
    if (lVar7 == 0) goto LAB_03217e38;
    uVar6 = FUN_03928d34(lVar7,0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    if (lVar3 == 0) goto LAB_03217e38;
    fVar8 = **(float **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
  }
  else {
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_03217e38;
    uVar6 = FUN_03928d34(*(long *)(param_4 + 0x40),0);
    if ((*(long *)(param_4 + 0x40) == 0) ||
       (fVar8 = (float)FUN_039274a0(*(long *)(param_4 + 0x40),0), lVar3 == 0)) goto LAB_03217e38;
  }
  FUN_039297a8(uVar6,lVar3,0);
  lVar7 = *(long *)(param_4 + 0x60);
  lVar3 = FUN_0391c27c(param_4,0);
  if ((lVar3 != 0) && (uVar6 = FUN_03928c2c(lVar3,0), lVar7 != 0)) {
    FUN_039294c8(lVar7,uVar6,0);
    if (*plVar5 != 0) {
      FUN_039274a0(*plVar5,0);
      fVar9 = (float)FUN_03914250(0);
      fVar13 = fVar8;
      fVar11 = param_2;
      fVar12 = param_3;
      lVar3 = FUN_0391c27c(param_4,0);
      if (lVar3 != 0) {
        fVar10 = (float)FUN_039274a0(lVar3,0);
        *(float *)(param_4 + 0x4c) =
             (param_2 * fVar12 + fVar8 * fVar10 + fVar9 * fVar13) - param_3 * fVar11;
        *(float *)(param_4 + 0x50) =
             (param_3 * fVar10 + fVar8 * fVar11 + param_2 * fVar13) - fVar9 * fVar12;
        *(float *)(param_4 + 0x54) =
             (fVar9 * fVar11 + fVar8 * fVar12 + param_3 * fVar13) - param_2 * fVar10;
        *(float *)(param_4 + 0x58) =
             ((fVar8 * fVar13 - fVar9 * fVar10) - param_2 * fVar11) - param_3 * fVar12;
        return;
      }
    }
  }
LAB_03217e38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


