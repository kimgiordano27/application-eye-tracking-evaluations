/*
FUNCTION_NAME: FUN_039b4bc4
ENTRY_POINT: 039b4bc4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039b5194) */

void FUN_039b4bc4(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5,long param_6,uint param_7)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_34;
  
  if ((DAT_03ffc7fb & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_11__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d608);
    DAT_03ffc7fb = 1;
  }
  if (param_6 != 0) {
    FUN_03b0ff20(param_6,0);
    if (*(float *)((long)param_5 + 0xf4) < DAT_00b5568c) {
      return;
    }
    fVar27 = DAT_00b5568c;
    local_34 = (float)FUN_039b2d6c(param_5,param_7 & 1);
    fVar28 = fVar27;
    fVar30 = param_3;
    fVar29 = param_4;
    uVar10 = FUN_039b2094(param_5);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar11 = FUN_0391f968(uVar10,0,0);
    if ((uVar11 & 1) == 0) {
      if (DAT_03fed318 == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_80__);
        DAT_03fed318 = '\x01';
      }
      pfVar14 = *(float **)
                 (*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_80__ +
                 0xb8);
      fVar18 = *pfVar14;
      fVar28 = pfVar14[1];
      fVar30 = pfVar14[2];
      fVar29 = pfVar14[3];
    }
    else {
      uVar10 = FUN_039b2094(param_5);
      fVar18 = (float)FUN_0392be70(uVar10,0);
    }
    if (*(int *)(*(long *)PTR_DAT_03d9d608 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    FUN_01bd7168(0);
    puVar7 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_11__;
    if ((int)param_5[0x1e] == 1) {
      fVar19 = (fVar29 - fVar28) * *(float *)((long)param_5 + 0xf4);
      fVar23 = (param_4 - fVar27) * *(float *)((long)param_5 + 0xf4);
      if (*(int *)((long)param_5 + 0xfc) == 1) {
        fVar27 = param_4 - fVar23;
        fVar28 = fVar29 - fVar19;
      }
      else {
        param_4 = fVar27 + fVar23;
        fVar29 = fVar28 + fVar19;
      }
    }
    else if ((int)param_5[0x1e] == 0) {
      fVar19 = (fVar30 - fVar18) * *(float *)((long)param_5 + 0xf4);
      fVar23 = (param_3 - local_34) * *(float *)((long)param_5 + 0xf4);
      if (*(int *)((long)param_5 + 0xfc) == 1) {
        local_34 = param_3 - fVar23;
        fVar18 = fVar30 - fVar19;
      }
      else {
        fVar30 = fVar18 + fVar19;
        param_3 = local_34 + fVar23;
      }
    }
    lVar12 = *(long *)Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_11__;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar12 = *(long *)puVar7;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_039b54a4:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      *(undefined4 *)(lVar12 + 0x28) = 0;
      *(float *)(lVar12 + 0x20) = local_34;
      *(float *)(lVar12 + 0x24) = fVar27;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
      if (lVar12 == 0) goto LAB_039b54a8;
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_039b54a4;
      *(undefined4 *)(lVar12 + 0x34) = 0;
      *(float *)(lVar12 + 0x2c) = local_34;
      *(float *)(lVar12 + 0x30) = param_4;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
      if (lVar12 == 0) goto LAB_039b54a8;
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_039b54a4;
      *(float *)(lVar12 + 0x38) = param_3;
      *(float *)(lVar12 + 0x3c) = param_4;
      *(undefined4 *)(lVar12 + 0x40) = 0;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
      if (lVar12 == 0) goto LAB_039b54a8;
      if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_039b54a4;
      *(float *)(lVar12 + 0x44) = param_3;
      *(float *)(lVar12 + 0x48) = fVar27;
      *(undefined4 *)(lVar12 + 0x4c) = 0;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
      if (lVar12 == 0) goto LAB_039b54a8;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_039b54a4;
      *(float *)(lVar12 + 0x20) = fVar18;
      *(float *)(lVar12 + 0x24) = fVar28;
      *(undefined4 *)(lVar12 + 0x28) = 0;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
      if (lVar12 == 0) goto LAB_039b54a8;
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_039b54a4;
      *(float *)(lVar12 + 0x2c) = fVar18;
      *(float *)(lVar12 + 0x30) = fVar29;
      *(undefined4 *)(lVar12 + 0x34) = 0;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
      if (lVar12 == 0) goto LAB_039b54a8;
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_039b54a4;
      *(float *)(lVar12 + 0x38) = fVar30;
      *(float *)(lVar12 + 0x3c) = fVar29;
      *(undefined4 *)(lVar12 + 0x40) = 0;
      lVar12 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
      if (lVar12 == 0) goto LAB_039b54a8;
      if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_039b54a4;
      *(float *)(lVar12 + 0x44) = fVar30;
      *(float *)(lVar12 + 0x48) = fVar28;
      *(undefined4 *)(lVar12 + 0x4c) = 0;
      fVar19 = *(float *)((long)param_5 + 0xf4);
      if (1.0 <= fVar19) goto switchD_039b4f38_caseD_0;
      switch((int)param_5[0x1e]) {
      case 2:
        lVar12 = *(long *)puVar7;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar12 = *(long *)puVar7;
          fVar19 = *(float *)((long)param_5 + 0xf4);
        }
        uVar11 = FUN_039b5c10(fVar19,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),
                              *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20),(char)param_5[0x1f],
                              *(undefined4 *)((long)param_5 + 0xfc));
        if ((uVar11 & 1) == 0) {
          return;
        }
      case 0:
      case 1:
switchD_039b4f38_caseD_0:
        lVar12 = *(long *)puVar7;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar12 = *(long *)puVar7;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
        (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
        uVar9 = FUN_01bd7168(0);
        UnityEngine_UIElements_TimerState__GetHashCode
                  (param_6,uVar10,uVar9,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20));
        return;
      case 3:
        uVar17 = 0;
        bVar8 = true;
        do {
          bVar6 = bVar8;
          uVar15 = (uint)(1 < (int)*(uint *)((long)param_5 + 0xfc));
          if ((*(uint *)((long)param_5 + 0xfc) | 2) == 2) {
            fVar19 = 1.0;
            fVar26 = 0.0;
            fVar23 = 0.5;
            fVar22 = fVar26;
            if (uVar17 != uVar15) {
              fVar22 = 0.5;
              fVar23 = fVar19;
            }
          }
          else {
            fVar19 = 1.0;
            if (uVar17 != uVar15) {
              fVar19 = 0.5;
            }
            fVar26 = 0.5;
            fVar23 = 1.0;
            fVar22 = 0.0;
            if (uVar17 != uVar15) {
              fVar26 = 0.0;
              fVar23 = 1.0;
              fVar22 = 0.0;
            }
          }
          lVar12 = *(long *)puVar7;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar12);
            lVar12 = *(long *)puVar7;
          }
          lVar16 = *(long *)(lVar12 + 0xb8);
          lVar13 = *(long *)(lVar16 + 0x18);
          if (lVar13 == 0) goto LAB_039b54a8;
          uVar15 = *(uint *)(lVar13 + 0x18);
          if (uVar15 == 0) goto LAB_039b54a4;
          fVar20 = local_34 + (param_3 - local_34) * fVar22;
          *(float *)(lVar13 + 0x20) = fVar20;
          if ((uVar15 == 1) || (*(float *)(lVar13 + 0x2c) = fVar20, uVar15 < 3)) goto LAB_039b54a4;
          fVar20 = local_34 + (param_3 - local_34) * fVar23;
          *(float *)(lVar13 + 0x38) = fVar20;
          if (uVar15 == 3) goto LAB_039b54a4;
          fVar21 = fVar27 + (param_4 - fVar27) * fVar26;
          fVar24 = fVar27 + (param_4 - fVar27) * fVar19;
          *(float *)(lVar13 + 0x24) = fVar21;
          *(float *)(lVar13 + 0x30) = fVar24;
          *(float *)(lVar13 + 0x3c) = fVar24;
          *(float *)(lVar13 + 0x44) = fVar20;
          *(float *)(lVar13 + 0x48) = fVar21;
          lVar16 = *(long *)(lVar16 + 0x20);
          if (lVar16 == 0) goto LAB_039b54a8;
          uVar15 = *(uint *)(lVar16 + 0x18);
          if (uVar15 == 0) goto LAB_039b54a4;
          fVar22 = fVar18 + (fVar30 - fVar18) * fVar22;
          *(float *)(lVar16 + 0x20) = fVar22;
          if ((uVar15 == 1) || (*(float *)(lVar16 + 0x2c) = fVar22, uVar15 < 3)) goto LAB_039b54a4;
          fVar23 = fVar18 + (fVar30 - fVar18) * fVar23;
          *(float *)(lVar16 + 0x38) = fVar23;
          if (uVar15 == 3) goto LAB_039b54a4;
          fVar22 = fVar28 + (fVar29 - fVar28) * fVar26;
          fVar19 = fVar28 + (fVar29 - fVar28) * fVar19;
          *(float *)(lVar16 + 0x24) = fVar22;
          *(float *)(lVar16 + 0x30) = fVar19;
          *(float *)(lVar16 + 0x3c) = fVar19;
          *(float *)(lVar16 + 0x44) = fVar23;
          *(float *)(lVar16 + 0x48) = fVar22;
          bVar2 = *(byte *)(param_5 + 0x1f);
          fVar19 = *(float *)((long)param_5 + 0xf4);
          bVar3 = bVar2;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar12);
            lVar13 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
            lVar16 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
            bVar3 = *(byte *)(param_5 + 0x1f);
          }
          fVar19 = (fVar19 + fVar19) - (float)(bVar2 ^ uVar17 ^ 1);
          iVar1 = uVar17 + *(int *)((long)param_5 + 0xfc);
          if (fVar19 < 0.0) {
            fVar19 = 0.0;
          }
          uVar17 = iVar1 + 3;
          uVar15 = iVar1 + 6;
          if (-1 < (int)uVar17) {
            uVar15 = uVar17;
          }
          uVar11 = FUN_039b5c10(fVar19,lVar13,lVar16,bVar3 != 0,uVar17 - (uVar15 & 0xfffffffc));
          if ((uVar11 & 1) != 0) {
            lVar12 = *(long *)puVar7;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *(long *)puVar7;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
            (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
            uVar9 = FUN_01bd7168(0);
            UnityEngine_UIElements_TimerState__GetHashCode
                      (param_6,uVar10,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20));
          }
          uVar17 = 1;
          bVar8 = false;
        } while (bVar6);
        break;
      case 4:
        uVar17 = 0;
        fVar19 = 0.5;
        do {
          lVar12 = *(long *)puVar7;
          fVar22 = fVar19;
          fVar23 = 1.0;
          if (uVar17 < 2) {
            fVar22 = 0.0;
            fVar23 = fVar19;
          }
          fVar26 = fVar19;
          if (uVar17 != 0 && uVar17 != 3) {
            fVar26 = 1.0;
          }
          fVar20 = 0.0;
          if (uVar17 != 0 && uVar17 != 3) {
            fVar20 = 0.5;
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar12);
            lVar12 = *(long *)puVar7;
          }
          lVar16 = *(long *)(lVar12 + 0xb8);
          lVar13 = *(long *)(lVar16 + 0x18);
          if (lVar13 == 0) goto LAB_039b54a8;
          uVar15 = *(uint *)(lVar13 + 0x18);
          if (uVar15 == 0) goto LAB_039b54a4;
          fVar21 = local_34 + (param_3 - local_34) * fVar22;
          *(float *)(lVar13 + 0x20) = fVar21;
          if ((uVar15 == 1) || (*(float *)(lVar13 + 0x2c) = fVar21, uVar15 < 3)) goto LAB_039b54a4;
          fVar21 = local_34 + (param_3 - local_34) * fVar23;
          *(float *)(lVar13 + 0x38) = fVar21;
          if (uVar15 == 3) goto LAB_039b54a4;
          fVar24 = fVar27 + (param_4 - fVar27) * fVar20;
          fVar25 = fVar27 + (param_4 - fVar27) * fVar26;
          *(float *)(lVar13 + 0x24) = fVar24;
          *(float *)(lVar13 + 0x30) = fVar25;
          *(float *)(lVar13 + 0x3c) = fVar25;
          *(float *)(lVar13 + 0x44) = fVar21;
          *(float *)(lVar13 + 0x48) = fVar24;
          lVar16 = *(long *)(lVar16 + 0x20);
          if (lVar16 == 0) goto LAB_039b54a8;
          uVar15 = *(uint *)(lVar16 + 0x18);
          if (uVar15 == 0) goto LAB_039b54a4;
          fVar22 = fVar18 + (fVar30 - fVar18) * fVar22;
          *(float *)(lVar16 + 0x20) = fVar22;
          if ((uVar15 == 1) || (*(float *)(lVar16 + 0x2c) = fVar22, uVar15 < 3)) goto LAB_039b54a4;
          fVar23 = fVar18 + (fVar30 - fVar18) * fVar23;
          *(float *)(lVar16 + 0x38) = fVar23;
          if (uVar15 == 3) goto LAB_039b54a4;
          fVar22 = fVar28 + (fVar29 - fVar28) * fVar20;
          fVar26 = fVar28 + (fVar29 - fVar28) * fVar26;
          *(float *)(lVar16 + 0x24) = fVar22;
          *(float *)(lVar16 + 0x30) = fVar26;
          *(float *)(lVar16 + 0x3c) = fVar26;
          *(float *)(lVar16 + 0x44) = fVar23;
          *(float *)(lVar16 + 0x48) = fVar22;
          cVar4 = (char)param_5[0x1f];
          fVar23 = *(float *)((long)param_5 + 0xf4);
          iVar5 = (int)(uVar17 + *(int *)((long)param_5 + 0xfc)) % 4;
          iVar1 = 3 - iVar5;
          if (cVar4 != '\0') {
            iVar1 = iVar5;
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar12);
            cVar4 = (char)param_5[0x1f];
            lVar13 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
            lVar16 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
          }
          fVar22 = fVar23 * 4.0 - (float)iVar1;
          fVar23 = fVar22;
          if (1.0 < fVar22) {
            fVar23 = 1.0;
          }
          if (fVar22 < 0.0) {
            fVar23 = 0.0;
          }
          uVar11 = FUN_039b5c10(fVar23,lVar13,lVar16,cVar4 != '\0',uVar17 + 2 & 3);
          if ((uVar11 & 1) != 0) {
            lVar12 = *(long *)puVar7;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *(long *)puVar7;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18);
            (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
            uVar9 = FUN_01bd7168(0);
            UnityEngine_UIElements_TimerState__GetHashCode
                      (param_6,uVar10,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20));
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != 4);
      }
      return;
    }
  }
LAB_039b54a8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


