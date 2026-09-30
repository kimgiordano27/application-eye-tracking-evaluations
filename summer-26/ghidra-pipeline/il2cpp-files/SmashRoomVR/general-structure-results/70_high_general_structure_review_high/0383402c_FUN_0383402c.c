/*
FUNCTION_NAME: FUN_0383402c
ENTRY_POINT: 0383402c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_15
*/


void FUN_0383402c(undefined1 param_1 [16],ulong param_2,undefined8 param_3,ulong param_4,
                 long *param_5,int param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  char local_80 [4];
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  undefined1 local_70 [16];
  
  if ((DAT_03ff84e1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d953e0);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5570);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    DAT_03ff84e1 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_74[0] = '\0';
  local_78[0] = '\0';
  local_7c[0] = '\0';
  local_80[0] = '\0';
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_038203f8(param_5,param_6);
  if (param_6 != 1) {
    return;
  }
  *(undefined4 *)((long)param_5 + 0x354) = 0;
  if (*(char *)((long)param_5 + 0x2fd) == '\0') {
    return;
  }
  uVar4 = FUN_0381f328(param_5);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_5 + 0x481) != '\0') {
    if (param_5[0x8e] == 0) goto LAB_038349d8;
    local_70 = FUN_03803cf4(param_5[0x8e],0);
    uVar4 = FUN_03b3916c(local_70,0);
    if ((uVar4 & 1) != 0) {
      if (param_5[0x8e] == 0) goto LAB_038349d8;
      auVar19 = FUN_03803cf4(param_5[0x8e],0);
      puVar2 = PTR_DAT_03da5570;
      lVar7 = param_5[0x8e];
      if (lVar7 == 0) goto LAB_038349d8;
      uVar1 = *(undefined4 *)(lVar7 + 0xc4);
      uVar18 = *(undefined4 *)(lVar7 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_03da5570 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03856384(uVar18,auVar19._0_8_,auVar19._8_8_,uVar1,local_74,0);
      if (param_5[0x8e] == 0) goto LAB_038349d8;
      auVar19 = FUN_03803cf4(param_5[0x8e],0);
      lVar7 = param_5[0x8e];
      if (lVar7 == 0) goto LAB_038349d8;
      FUN_03856384(*(undefined4 *)(lVar7 + 0xb8),auVar19._0_8_,auVar19._8_8_,
                   *(undefined4 *)(lVar7 + 200),local_78,0);
      if (local_78[0] != '\0' || local_74[0] != '\0') {
        param_2 = 0xbf800000;
        uVar1 = 0xbf800000;
        if (local_74[0] != '\0') {
          uVar1 = 0x3f800000;
        }
        if ((char)param_5[0x6b] == '\0') {
          lVar7 = FUN_0391c27c(param_5,0);
        }
        else {
          lVar7 = param_5[0x54];
        }
        (**(code **)(*param_5 + 0x938))
                  (uVar1,param_5,lVar7,param_5[10],*(undefined8 *)(*param_5 + 0x940));
      }
      if ((int)param_5[0x62] == 1) {
        if (param_5[0x8e] == 0) goto LAB_038349d8;
        auVar19 = FUN_03803cf4(param_5[0x8e],0);
        if (param_5[0x8e] == 0) goto LAB_038349d8;
        uVar1 = *(undefined4 *)(param_5[0x8e] + 0xcc);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_038569bc(auVar19._0_8_,auVar19._8_8_,uVar1,&local_88,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = param_5[0x61];
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_0391f968(lVar7,0,0);
          uVar5 = param_3;
          uVar4 = param_4;
          if ((uVar6 & 1) == 0) {
            if ((char)param_5[0x6b] == '\0') {
              lVar7 = FUN_0391c27c(param_5,0);
              uVar5 = param_3;
              uVar4 = param_4;
            }
            else {
              lVar7 = param_5[0x54];
            }
          }
          else {
            lVar7 = param_5[0x61];
          }
          param_4 = param_2;
          if (lVar7 == 0) goto LAB_038349d8;
          param_3 = FUN_039274a0(lVar7,0);
          param_2 = local_88 >> 0x20;
          (**(code **)(*param_5 + 0x928))
                    (local_88 & 0xffffffff,param_2,param_3,param_4,uVar5,uVar4,param_5,param_5[10],
                     *(undefined8 *)(*param_5 + 0x930));
        }
      }
      else if ((int)param_5[0x62] == 0) {
        if (param_5[0x8e] == 0) goto LAB_038349d8;
        auVar19 = FUN_03803cf4(param_5[0x8e],0);
        lVar7 = param_5[0x8e];
        if (lVar7 == 0) goto LAB_038349d8;
        uVar1 = *(undefined4 *)(lVar7 + 0xbc);
        uVar18 = *(undefined4 *)(lVar7 + 0xb8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03856384(uVar18,auVar19._0_8_,auVar19._8_8_,uVar1,local_7c,0);
        if (param_5[0x8e] == 0) goto LAB_038349d8;
        auVar19 = FUN_03803cf4(param_5[0x8e],0);
        lVar7 = param_5[0x8e];
        if (lVar7 == 0) goto LAB_038349d8;
        FUN_03856384(*(undefined4 *)(lVar7 + 0xb8),auVar19._0_8_,auVar19._8_8_,
                     *(undefined4 *)(lVar7 + 0xc0),local_80,0);
        if (local_80[0] != '\0' || local_7c[0] != '\0') {
          param_2 = 0x3f800000;
          uVar1 = 0x3f800000;
          if (local_7c[0] != '\0') {
            uVar1 = 0xbf800000;
          }
          (**(code **)(*param_5 + 0x918))
                    (uVar1,param_5,param_5[10],*(undefined8 *)(*param_5 + 0x920));
        }
      }
    }
  }
  if ((char)param_5[0x90] != '\0') {
    lVar7 = param_5[0x8d];
    if (lVar7 == 0) goto LAB_038349d8;
    local_90 = *(undefined8 *)(lVar7 + 0x220);
    uStack_98 = *(undefined8 *)(lVar7 + 0x218);
    local_a0 = *(undefined8 *)(lVar7 + 0x210);
    lVar7 = FUN_034523e4(&local_a0,0);
    puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__;
    if (*(int *)(*(long *)
                  Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                        );
    }
    if (lVar7 != 0) {
      uVar4 = FUN_03440e8c(lVar7,0);
      if ((uVar4 & 1) != 0) {
        *(byte *)((long)param_5 + 0x35a) = *(byte *)((long)param_5 + 0x35a) ^ 1;
      }
    }
    if (*(char *)((long)param_5 + 0x35a) == '\0') {
      if ((int)param_5[0x62] == 1) {
        lVar7 = param_5[0x8d];
        if (lVar7 == 0) goto LAB_038349d8;
        local_90 = *(undefined8 *)(lVar7 + 0x1f0);
        uStack_98 = *(undefined8 *)(lVar7 + 0x1e8);
        local_a0 = *(undefined8 *)(lVar7 + 0x1e0);
        uVar5 = FUN_034523e4(&local_a0,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar4 = FUN_03833940(uVar5,&local_b8);
        if ((uVar4 & 1) != 0) {
          lVar7 = param_5[0x61];
          uVar4 = param_2;
          uVar5 = param_3;
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
            uVar4 = param_2;
            uVar5 = param_3;
          }
          uVar6 = FUN_0391f968(lVar7,0,0);
          if ((uVar6 & 1) == 0) {
            if ((char)param_5[0x6b] == '\0') {
              lVar7 = FUN_0391c27c(param_5,0);
            }
            else {
              lVar7 = param_5[0x54];
            }
          }
          else {
            lVar7 = param_5[0x61];
          }
          if (lVar7 == 0) goto LAB_038349d8;
          param_3 = FUN_039274a0(lVar7,0);
          param_2 = local_b8 >> 0x20;
          (**(code **)(*param_5 + 0x928))
                    (local_b8 & 0xffffffff,param_2,param_3,uVar4,uVar5,param_4,param_5,param_5[10],
                     *(undefined8 *)(*param_5 + 0x930));
        }
      }
      else if ((int)param_5[0x62] == 0) {
        lVar7 = param_5[0x8d];
        if (lVar7 == 0) goto LAB_038349d8;
        local_90 = *(undefined8 *)(lVar7 + 0x1d8);
        uStack_98 = *(undefined8 *)(lVar7 + 0x1d0);
        local_a0 = *(undefined8 *)(lVar7 + 0x1c8);
        uVar5 = FUN_034523e4(&local_a0,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar4 = FUN_03833940(uVar5,&local_b0);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*param_5 + 0x918))
                    (local_b0 & 0xffffffff,param_5,param_5[10],*(undefined8 *)(*param_5 + 0x920));
        }
      }
      lVar7 = param_5[0x8d];
      if (lVar7 == 0) goto LAB_038349d8;
      local_90 = *(undefined8 *)(lVar7 + 0x208);
      uStack_98 = *(undefined8 *)(lVar7 + 0x200);
      local_a0 = *(undefined8 *)(lVar7 + 0x1f8);
      uVar5 = FUN_034523e4(&local_a0,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar4 = FUN_03833940(uVar5,&uStack_a8);
      if ((uVar4 & 1) != 0) {
        if ((char)param_5[0x6b] == '\0') {
          lVar7 = FUN_0391c27c(param_5,0);
        }
        else {
          lVar7 = param_5[0x54];
        }
        (**(code **)(*param_5 + 0x938))
                  (uStack_a8._4_4_,param_5,lVar7,param_5[10],*(undefined8 *)(*param_5 + 0x940));
      }
    }
    else if ((int)param_5[0x6a] == 1) {
      lVar7 = param_5[0x8d];
      if (lVar7 == 0) goto LAB_038349d8;
      local_90 = *(undefined8 *)(lVar7 + 0x238);
      uStack_98 = *(undefined8 *)(lVar7 + 0x230);
      local_a0 = *(undefined8 *)(lVar7 + 0x228);
      uVar5 = FUN_034523e4(&local_a0,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar4 = FUN_03833940(uVar5,&local_c0);
      if ((uVar4 & 1) != 0) {
        *(undefined4 *)((long)param_5 + 0x354) = local_c0._4_4_;
      }
    }
  }
  if (*(char *)((long)param_5 + 0x482) == '\0') {
    return;
  }
  if ((int)param_5[0x62] == 1) {
    lVar7 = param_5[0x8f];
    if (lVar7 == 0) goto LAB_038349d8;
    local_90 = *(undefined8 *)(lVar7 + 0x160);
    uStack_98 = *(undefined8 *)(lVar7 + 0x158);
    local_a0 = *(undefined8 *)(lVar7 + 0x150);
    lVar7 = FUN_034523e4(&local_a0,0);
    if (lVar7 == 0) {
LAB_03834770:
      lVar7 = param_5[0x8f];
      if (lVar7 == 0) goto LAB_038349d8;
      local_90 = *(undefined8 *)(lVar7 + 0xe8);
      uStack_98 = *(undefined8 *)(lVar7 + 0xe0);
      local_a0 = *(undefined8 *)(lVar7 + 0xd8);
      lVar7 = FUN_034523e4(&local_a0,0);
      if (lVar7 != 0) {
        lVar7 = param_5[0x8f];
        if (lVar7 == 0) goto LAB_038349d8;
        local_90 = *(undefined8 *)(lVar7 + 0xe8);
        uStack_98 = *(undefined8 *)(lVar7 + 0xe0);
        local_a0 = *(undefined8 *)(lVar7 + 0xd8);
        lVar7 = FUN_034523e4(&local_a0,0);
        if (lVar7 == 0) goto LAB_038349d8;
        uVar5 = FUN_03440b48(lVar7,0);
        uVar4 = FUN_034d5bb0(uVar5,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = param_5[0x8f];
          if (lVar7 == 0) goto LAB_038349d8;
          local_90 = *(undefined8 *)(lVar7 + 0x178);
          uStack_98 = *(undefined8 *)(lVar7 + 0x170);
          local_a0 = *(undefined8 *)(lVar7 + 0x168);
          lVar7 = FUN_034523e4(&local_a0,0);
          if (lVar7 != 0) {
            iVar3 = FUN_01ee11d0(lVar7,*(undefined8 *)PTR_DAT_03d953e0);
            if (1 < iVar3) {
              lVar7 = param_5[0x8f];
              if (lVar7 == 0) goto LAB_038349d8;
              local_90 = *(undefined8 *)(lVar7 + 0xe8);
              uStack_98 = *(undefined8 *)(lVar7 + 0xe0);
              local_a0 = *(undefined8 *)(lVar7 + 0xd8);
              lVar7 = FUN_034523e4(&local_a0,0);
              if (lVar7 == 0) goto LAB_038349d8;
              uVar5 = FUN_01ee146c(lVar7,*(undefined8 *)
                                          Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                                  );
              if (param_5[10] == 0) goto LAB_038349d8;
              uVar4 = param_2;
              uVar12 = FUN_039291ac(param_5[10],0);
              if (DAT_03fed25b == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed25b = '\x01';
              }
              lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
              fVar16 = *(float *)(lVar7 + 0x18);
              FUN_03914800(uVar12,uVar4,param_3,fVar16,*(undefined4 *)(lVar7 + 0x1c),
                           *(undefined4 *)(lVar7 + 0x20),0);
              fVar14 = (float)param_3;
              fVar11 = (float)uVar4;
              fVar9 = (float)FUN_03914250(0);
              if (param_5[10] == 0) goto LAB_038349d8;
              fVar17 = fVar16;
              fVar13 = fVar11;
              fVar15 = fVar14;
              fVar10 = (float)FUN_039274a0(param_5[10],0);
              fVar9 = (float)FUN_03914a7c((fVar11 * fVar15 + fVar16 * fVar10 + fVar9 * fVar17) -
                                          fVar14 * fVar13,
                                          (fVar14 * fVar10 + fVar16 * fVar13 + fVar11 * fVar17) -
                                          fVar9 * fVar15,
                                          (fVar9 * fVar13 + fVar16 * fVar15 + fVar14 * fVar17) -
                                          fVar11 * fVar10,
                                          ((fVar16 * fVar17 - fVar9 * fVar10) - fVar11 * fVar13) -
                                          fVar14 * fVar15,uVar5,param_2,0,0);
              fVar11 = (float)FUN_038fa7b0(0);
              lVar7 = param_5[10];
              pcVar8 = *(code **)(*param_5 + 0x918);
              uVar5 = *(undefined8 *)(*param_5 + 0x920);
              fVar9 = (fVar9 / fVar11) * -50.0;
              goto LAB_03834764;
            }
          }
        }
      }
    }
    else {
      lVar7 = param_5[0x8f];
      if (lVar7 == 0) goto LAB_038349d8;
      local_90 = *(undefined8 *)(lVar7 + 0x160);
      uStack_98 = *(undefined8 *)(lVar7 + 0x158);
      local_a0 = *(undefined8 *)(lVar7 + 0x150);
      lVar7 = FUN_034523e4(&local_a0,0);
      if (lVar7 == 0) goto LAB_038349d8;
      uVar5 = FUN_03440b48(lVar7,0);
      uVar4 = FUN_034d5bb0(uVar5,0);
      if ((uVar4 & 1) == 0) goto LAB_03834770;
      lVar7 = param_5[0x8f];
      if (lVar7 == 0) goto LAB_038349d8;
      local_90 = *(undefined8 *)(lVar7 + 0x160);
      uStack_98 = *(undefined8 *)(lVar7 + 0x158);
      local_a0 = *(undefined8 *)(lVar7 + 0x150);
      lVar7 = FUN_034523e4(&local_a0,0);
      if (lVar7 == 0) goto LAB_038349d8;
      fVar9 = (float)FUN_01ee1390(lVar7,*(undefined8 *)
                                         Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                 );
      lVar7 = param_5[10];
      fVar9 = -fVar9;
      pcVar8 = *(code **)(*param_5 + 0x918);
      uVar5 = *(undefined8 *)(*param_5 + 0x920);
LAB_03834764:
      (*pcVar8)(fVar9,param_5,lVar7,uVar5);
    }
  }
  if ((int)param_5[0x6a] == 2) {
    if (param_5[0x8f] == 0) {
LAB_038349d8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    *(undefined4 *)((long)param_5 + 0x354) = *(undefined4 *)(param_5[0x8f] + 0x18c);
  }
  return;
}


