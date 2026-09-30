/*
FUNCTION_NAME: FUN_039b3944
ENTRY_POINT: 039b3944
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


void FUN_039b3944(undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
                 long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  if ((DAT_03ffc7f9 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_11__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffc7f9 = 1;
  }
  uVar3 = FUN_039b2964(param_5);
  if ((uVar3 & 1) == 0) {
    FUN_039b33a0(param_5,param_6,0);
    return;
  }
  uVar4 = FUN_039b2094(param_5);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar3 = FUN_0391f968(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (DAT_03fed318 == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_80__);
      DAT_03fed318 = '\x01';
    }
    pfVar6 = *(float **)
              (*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_80__ + 0xb8)
    ;
    local_bc = *pfVar6;
    local_c0 = pfVar6[1];
    local_cc = pfVar6[2];
    local_d0 = pfVar6[3];
    local_c8 = local_d0;
    local_c4 = local_cc;
    local_b8 = local_c0;
    local_b4 = local_bc;
    local_b0 = local_d0;
    fStack_ac = local_cc;
    local_a8 = local_c0;
    fStack_a4 = local_bc;
    fVar11 = local_bc;
    fVar16 = local_cc;
    fVar17 = local_d0;
    fVar15 = local_c0;
  }
  else {
    local_cc = param_3;
    local_d0 = param_4;
    local_b8 = param_2;
    uVar4 = FUN_039b2094(param_5);
    local_b4 = (float)FUN_0392be70(uVar4,0);
    local_c4 = local_cc;
    local_c8 = local_d0;
    local_c0 = local_b8;
    uVar4 = FUN_039b2094(param_5);
    local_bc = (float)FUN_0392be60(uVar4,0);
    fStack_ac = local_c4;
    local_b0 = local_c8;
    local_a8 = local_c0;
    uVar4 = FUN_039b2094(param_5);
    fStack_a4 = (float)UnityEngine_UIElements_StyleSheets_StylePropertyValueMatcher__MatchColor
                                 (uVar4,0);
    param_3 = fStack_ac;
    param_4 = local_b0;
    param_2 = local_a8;
    lVar5 = FUN_039b2094(param_5);
    if (lVar5 == 0) goto LAB_039b3e68;
    fVar11 = (float)FUN_0392b11c(lVar5,0);
    fVar16 = param_3;
    fVar17 = param_4;
    fVar15 = param_2;
  }
  fVar12 = (float)FUN_039af43c(param_5);
  fVar13 = (float)FUN_039b2a44(param_5);
  fVar13 = fVar13 * *(float *)(param_5 + 0x21);
  fVar15 = fVar15 / fVar13;
  fVar16 = fVar16 / fVar13;
  fVar17 = fVar17 / fVar13;
  uVar14 = FUN_039b5918(fVar11 / fVar13,param_5);
  fVar11 = (float)FUN_039b2a44(param_5);
  puVar2 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_11__;
  fVar13 = *(float *)(param_5 + 0x21);
  lVar5 = *(long *)Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_11__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      fVar11 = fVar11 * fVar13;
      *(float *)(lVar5 + 0x20) = fStack_a4 / fVar11;
      *(float *)(lVar5 + 0x24) = local_a8 / fVar11;
      lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_039b3e68;
      if (3 < *(uint *)(lVar5 + 0x18)) {
        *(float *)(lVar5 + 0x38) = param_3 - fStack_ac / fVar11;
        *(float *)(lVar5 + 0x3c) = param_4 - local_b0 / fVar11;
        lVar5 = *(long *)puVar2;
        lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_039b3e68;
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(undefined4 *)(lVar7 + 0x28) = uVar14;
          *(float *)(lVar7 + 0x2c) = fVar15;
          if (*(uint *)(lVar7 + 0x18) != 2) {
            *(float *)(lVar7 + 0x30) = param_3 - fVar16;
            *(float *)(lVar7 + 0x34) = param_4 - fVar17;
            uVar3 = 0;
            while( true ) {
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar5 = *(long *)puVar2;
              }
              if (uVar3 == 4) break;
              lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar7 == 0) goto LAB_039b3e68;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_039b3e64;
              lVar7 = lVar7 + uVar3 * 8;
              uVar4 = *(undefined8 *)(lVar7 + 0x20);
              uVar3 = uVar3 + 1;
              *(ulong *)(lVar7 + 0x20) =
                   CONCAT44(param_2 + (float)((ulong)uVar4 >> 0x20),fVar12 + (float)uVar4);
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
            if (lVar5 == 0) goto LAB_039b3e68;
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(float *)(lVar5 + 0x20) = local_b4;
              *(float *)(lVar5 + 0x24) = local_b8;
              lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              if (lVar5 == 0) goto LAB_039b3e68;
              if (1 < *(uint *)(lVar5 + 0x18)) {
                *(float *)(lVar5 + 0x28) = local_bc;
                *(float *)(lVar5 + 0x2c) = local_c0;
                lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                if (lVar5 == 0) goto LAB_039b3e68;
                if (2 < *(uint *)(lVar5 + 0x18)) {
                  *(float *)(lVar5 + 0x30) = local_c4;
                  *(float *)(lVar5 + 0x34) = local_c8;
                  lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                  if (lVar5 == 0) goto LAB_039b3e68;
                  if (3 < *(uint *)(lVar5 + 0x18)) {
                    *(float *)(lVar5 + 0x38) = local_cc;
                    *(float *)(lVar5 + 0x3c) = local_d0;
                    if (param_6 != 0) {
                      FUN_03b0ff20(param_6,0);
                      uVar3 = 0;
                      do {
                        uVar1 = uVar3 + 1;
                        uVar9 = 0;
                        do {
                          if (((uVar9 == 1) && (uVar3 == 1)) &&
                             (*(char *)((long)param_5 + 0xed) == '\0')) {
                            uVar10 = 2;
                          }
                          else {
                            lVar5 = *(long *)puVar2;
                            if (*(int *)(lVar5 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                              lVar5 = *(long *)puVar2;
                            }
                            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                            if (lVar5 == 0) goto LAB_039b3e68;
                            uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                            if (((uVar8 <= uVar3) || (uVar8 <= uVar9)) ||
                               ((uVar8 <= uVar1 || (uVar10 = uVar9 + 1, uVar8 <= uVar10))))
                            goto LAB_039b3e64;
                            uVar18 = *(undefined4 *)(lVar5 + uVar10 * 8 + 0x24);
                            uVar21 = *(undefined4 *)(lVar5 + uVar3 * 8 + 0x20);
                            uVar20 = *(undefined4 *)(lVar5 + uVar9 * 8 + 0x24);
                            uVar19 = *(undefined4 *)(lVar5 + uVar1 * 8 + 0x20);
                            (**(code **)(*param_5 + 0x298))
                                      (param_5,*(undefined8 *)(*param_5 + 0x2a0));
                            uVar14 = FUN_01bd7168(0);
                            lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                            if (lVar5 == 0) goto LAB_039b3e68;
                            uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                            if (((uVar8 <= uVar3) || (uVar8 <= uVar9)) ||
                               ((uVar8 <= uVar1 || (uVar8 <= uVar10)))) goto LAB_039b3e64;
                            FUN_039b59d8(uVar21,uVar20,uVar19,uVar18,
                                         *(undefined4 *)(lVar5 + uVar3 * 8 + 0x20),
                                         *(undefined4 *)(lVar5 + uVar9 * 8 + 0x24),
                                         *(undefined4 *)(lVar5 + 0x20 + uVar1 * 8),
                                         *(undefined4 *)(lVar5 + 0x20 + uVar10 * 8 + 4),param_6,
                                         uVar14);
                          }
                          uVar9 = uVar10;
                        } while (uVar10 != 3);
                        uVar3 = uVar1;
                        if (uVar1 == 3) {
                          return;
                        }
                      } while( true );
                    }
                    goto LAB_039b3e68;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_039b3e64:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_039b3e68:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


