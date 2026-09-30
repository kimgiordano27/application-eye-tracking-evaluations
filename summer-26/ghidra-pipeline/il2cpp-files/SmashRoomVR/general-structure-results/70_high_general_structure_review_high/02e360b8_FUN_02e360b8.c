/*
FUNCTION_NAME: FUN_02e360b8
ENTRY_POINT: 02e360b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


undefined1  [16]
FUN_02e360b8(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long local_a8;
  
  if ((DAT_03ff0221 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4812);
    thunk_FUN_01ad9084(StringLiteral_4814);
    thunk_FUN_01ad9084(StringLiteral_4815);
    thunk_FUN_01ad9084(StringLiteral_4816);
    thunk_FUN_01ad9084(StringLiteral_4817);
    thunk_FUN_01ad9084(StringLiteral_1114);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0221 = 1;
  }
  local_b0 = (long *)0x0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_d4 = 0;
  uStack_e0 = 0;
  if (*(char *)(param_4 + 0x90) == '\0') {
LAB_02e361d8:
    auVar17 = FUN_02e3430c(param_4,param_5);
    return auVar17;
  }
  if (*(long *)(param_4 + 0x88) != 0) {
    uVar10 = FUN_025bddd0(*(long *)(param_4 + 0x88),param_5,&local_a8,
                          *(undefined8 *)StringLiteral_4812);
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar10 & 1) == 0) goto LAB_02e361d8;
    if (param_5 != 0) {
      if (*(char *)(param_5 + 0xd9) == '\0') goto LAB_02e361d8;
      uVar13 = *(undefined8 *)(param_4 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_03923030(uVar13,0);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_02e3650c;
        lVar11 = FUN_0391c27c(*(long *)(param_4 + 0x40),0);
      }
      else {
        lVar11 = *(long *)(param_4 + 0x38);
      }
      if ((lVar11 != 0) && (uVar13 = FUN_03928d34(lVar11,0), local_a8 != 0)) {
        FUN_02907758(&local_108,local_a8,*(undefined8 *)StringLiteral_4817);
        puVar7 = StringLiteral_4815;
        puVar6 = StringLiteral_1114;
        puVar5 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
        puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        fVar2 = DAT_00b55370;
        local_b0 = local_f8;
        uVar10 = 0x7f7fffff;
        do {
          uVar16 = uVar10;
          uVar18 = 0;
LAB_02e362b4:
          do {
            do {
              uVar10 = FUN_0273941c(&local_c0,*(undefined8 *)puVar7);
              plVar9 = local_b0;
              if ((uVar10 & 1) == 0) {
                FUN_02739418(&local_c0,*(undefined8 *)StringLiteral_4814);
                auVar17._8_8_ = uVar18;
                auVar17._0_8_ = uVar16;
                return auVar17;
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_03923030(plVar9,0);
            } while ((uVar10 & 1) == 0);
            fVar15 = (float)uVar13;
            if (*(char *)(param_5 + 0x222) == '\0') {
              if (plVar9 == (long *)0x0) goto LAB_02e36508;
LAB_02e363ac:
              fVar22 = param_2;
              fVar21 = param_3;
              fVar14 = (float)FUN_0395b4d8(uVar13,plVar9,0);
            }
            else {
              if (plVar9 == (long *)0x0) {
LAB_02e36508:
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
              if (((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                  (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
                 || (uVar10 = FUN_0395be04(plVar9,0), (uVar10 & 1) != 0)) goto LAB_02e363ac;
              FUN_0395b594(&local_108,plVar9,0);
              fVar20 = fStack_100;
              fVar19 = fStack_104;
              fVar14 = local_108;
              if (DAT_03fed25d == '\0') {
                thunk_FUN_01ad9084(puVar5);
                DAT_03fed25d = '\x01';
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar14 = fVar14 - fVar15;
              fVar19 = fVar19 - param_2;
              fVar20 = fVar20 - param_3;
              fVar22 = SQRT(fVar20 * fVar20 + fVar14 * fVar14 + fVar19 * fVar19);
              if (fVar22 <= fVar2) {
                if (DAT_03fed257 == '\0') {
                  thunk_FUN_01ad9084(puVar4);
                  DAT_03fed257 = '\x01';
                }
                pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
                fVar14 = *pfVar12;
                fVar19 = pfVar12[1];
                fVar20 = pfVar12[2];
              }
              else {
                fVar14 = fVar14 / fVar22;
                fVar19 = fVar19 / fVar22;
                fVar20 = fVar20 / fVar22;
              }
              FUN_0395b594(&local_108,plVar9,0);
              fVar21 = fStack_100;
              fVar22 = fStack_104;
              fVar8 = local_108;
              if (DAT_03fed25e == '\0') {
                thunk_FUN_01ad9084(puVar5);
                DAT_03fed25e = '\x01';
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar22 = (fVar22 - param_2) * (fVar22 - param_2);
              fVar21 = (fVar21 - param_3) * (fVar21 - param_3);
              local_120 = fVar15;
              fStack_11c = param_2;
              local_118 = param_3;
              fStack_114 = fVar14;
              local_110 = fVar19;
              fStack_10c = fVar20;
              uVar10 = FUN_0395b784(SQRT(fVar21 + (fVar8 - fVar15) * (fVar8 - fVar15) + fVar22),
                                    plVar9,&local_120,&local_f0,0);
              if ((uVar10 & 1) == 0) goto LAB_02e362b4;
              fVar14 = (float)FUN_03959c54(&local_f0,0);
            }
            if (DAT_03fed25e == '\0') {
              thunk_FUN_01ad9084(puVar5);
              DAT_03fed25e = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar15 = SQRT((fVar21 - param_3) * (fVar21 - param_3) +
                          (fVar14 - fVar15) * (fVar14 - fVar15) +
                          (fVar22 - param_2) * (fVar22 - param_2));
            uVar10 = (ulong)(uint)fVar15;
          } while ((float)uVar16 <= fVar15);
        } while( true );
      }
    }
  }
LAB_02e3650c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


