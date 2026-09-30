/*
FUNCTION_NAME: FUN_01c54cc8
ENTRY_POINT: 01c54cc8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_01c54cc8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,ulong param_4,
                 long *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed648 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed648 = 1;
  }
  lVar7 = param_5[4];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = (long *)param_5[4];
  if (plVar3 == (long *)0x0) goto LAB_01c5528c;
  if ((char)plVar3[4] == '\0') {
    if (0.0 < *(float *)(param_5 + 10)) {
      lVar7 = param_5[6];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar7,0);
      if ((uVar2 & 1) != 0) {
        lVar7 = param_5[6];
        if (lVar7 == 0) goto LAB_01c5528c;
        uVar4 = FUN_03928fd8(lVar7,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        puVar6 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        uVar12 = *puVar6;
        uVar17 = puVar6[1];
        uVar8 = puVar6[2];
        uVar18 = puVar6[3];
        FUN_03925cf4(0);
        FUN_03914490(uVar4,param_2,param_3,param_4,uVar12,uVar17,uVar8,uVar18,0);
        FUN_03929060(lVar7,0);
      }
      lVar7 = param_5[8];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar7,0);
      if ((uVar2 & 1) != 0) {
        lVar7 = param_5[8];
        if (lVar7 == 0) goto LAB_01c5528c;
        uVar4 = FUN_03928fd8(lVar7,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        puVar6 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        uVar12 = *puVar6;
        uVar17 = puVar6[1];
        uVar8 = puVar6[2];
        uVar18 = puVar6[3];
        FUN_03925cf4(0);
        FUN_03914490(uVar4,param_2,param_3,param_4,uVar12,uVar17,uVar8,uVar18,0);
        FUN_03929060(lVar7,0);
      }
    }
  }
  else {
    lVar7 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
    uVar17 = (undefined4)param_3;
    uVar12 = (undefined4)param_2;
    if (lVar7 == 0) goto LAB_01c5528c;
    uVar4 = FUN_0391c27c(lVar7,0);
    lVar7 = param_5[6];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar2 = FUN_03923030(lVar7,0);
    if ((uVar2 & 1) != 0) {
      if (param_5[6] == 0) goto LAB_01c5528c;
      uVar8 = FUN_039274a0(param_5[6],0);
      *(undefined4 *)(param_5 + 0x10) = uVar8;
      *(undefined4 *)((long)param_5 + 0x84) = uVar12;
      *(undefined4 *)(param_5 + 0x11) = uVar17;
      *(int *)((long)param_5 + 0x8c) = (int)param_4;
      lVar7 = param_5[6];
      if (DAT_03fed45c == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed45c = '\x01';
      }
      if (lVar7 == 0) goto LAB_01c5528c;
      lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_03929f5c(*(undefined4 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x34),
                   *(undefined4 *)(lVar5 + 0x38),lVar7,uVar4,0);
      if (param_5[6] == 0) goto LAB_01c5528c;
      fVar9 = (float)FUN_03928fa8(param_5[6],0);
      fVar13 = fVar9 + -360.0;
      if (fVar9 <= 180.0) {
        fVar13 = fVar9;
      }
      *(float *)(param_5 + 0xf) = fVar13;
      if (param_5[6] == 0) goto LAB_01c5528c;
      fVar9 = *(float *)((long)param_5 + 0x3c);
      if (fVar13 <= *(float *)((long)param_5 + 0x3c)) {
        fVar9 = fVar13;
      }
      if (fVar13 < *(float *)(param_5 + 7)) {
        fVar9 = *(float *)(param_5 + 7);
      }
      uVar12 = 0;
      uVar17 = 0;
      FUN_03929030(fVar9,param_5[6],0);
      if ((char)param_5[5] != '\0') {
        if (param_5[6] == 0) goto LAB_01c5528c;
        FUN_039274a0(param_5[6],0);
        if (param_5[6] == 0) goto LAB_01c5528c;
        uVar17 = (undefined4)param_5[0x11];
        param_4 = (ulong)*(uint *)((long)param_5 + 0x8c);
        uVar12 = *(undefined4 *)((long)param_5 + 0x84);
        FUN_03928f54((int)param_5[0x10],param_5[6],0);
        lVar7 = param_5[6];
        if (lVar7 == 0) goto LAB_01c5528c;
        uVar10 = FUN_039274a0(lVar7,0);
        FUN_03925cf4(0);
        FUN_03914490(uVar10,0);
        FUN_03928f54(lVar7,0);
      }
    }
    lVar7 = param_5[8];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar7,0);
    if ((uVar2 & 1) != 0) {
      if (param_5[8] != 0) {
        uVar8 = FUN_039274a0(param_5[8],0);
        *(undefined4 *)(param_5 + 0x10) = uVar8;
        *(undefined4 *)((long)param_5 + 0x84) = uVar12;
        *(undefined4 *)(param_5 + 0x11) = uVar17;
        *(int *)((long)param_5 + 0x8c) = (int)param_4;
        lVar7 = param_5[8];
        if (DAT_03fed45c == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed45c = '\x01';
        }
        if (lVar7 != 0) {
          lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar13 = *(float *)(lVar5 + 0x34);
          FUN_03929f5c(*(undefined4 *)(lVar5 + 0x30),fVar13,*(undefined4 *)(lVar5 + 0x38),lVar7,
                       uVar4,0);
          if (param_5[8] != 0) {
            FUN_03928fa8(param_5[8],0);
            fVar9 = fVar13 + -360.0;
            if (fVar13 <= 180.0) {
              fVar9 = fVar13;
            }
            *(float *)((long)param_5 + 0x7c) = fVar9;
            if (param_5[8] != 0) {
              fVar13 = *(float *)((long)param_5 + 0x4c);
              if (fVar9 <= *(float *)((long)param_5 + 0x4c)) {
                fVar13 = fVar9;
              }
              if (fVar9 < *(float *)(param_5 + 9)) {
                fVar13 = *(float *)(param_5 + 9);
              }
              uVar2 = (ulong)(uint)fVar13;
              uVar4 = 0;
              FUN_03929030(0,uVar2,0,param_5[8],0);
              if ((char)param_5[5] == '\0') goto LAB_01c5525c;
              if (param_5[8] != 0) {
                uVar10 = FUN_039274a0(param_5[8],0);
                if (param_5[8] != 0) {
                  uVar15 = (ulong)*(uint *)(param_5 + 0x11);
                  uVar16 = (ulong)*(uint *)((long)param_5 + 0x8c);
                  uVar14 = (ulong)*(uint *)((long)param_5 + 0x84);
                  FUN_03928f54((int)param_5[0x10],uVar14,uVar15,uVar16,param_5[8],0);
                  lVar7 = param_5[8];
                  if (lVar7 != 0) {
                    uVar11 = FUN_039274a0(lVar7,0);
                    FUN_03925cf4(0);
                    FUN_03914490(uVar11,uVar14,uVar15,uVar16,uVar10,uVar2,uVar4,param_4,0);
                    FUN_03928f54(lVar7,0);
                    goto LAB_01c5525c;
                  }
                }
              }
            }
          }
        }
      }
LAB_01c5528c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
LAB_01c5525c:
                    /* WARNING: Could not recover jumptable at 0x01c55288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x178))(param_5,*(undefined8 *)(*param_5 + 0x180));
  return;
}


