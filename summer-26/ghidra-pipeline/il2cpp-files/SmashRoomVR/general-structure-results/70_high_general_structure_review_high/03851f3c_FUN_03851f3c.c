/*
FUNCTION_NAME: FUN_03851f3c
ENTRY_POINT: 03851f3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x038521cc) */

void FUN_03851f3c(undefined1 param_1 [16],float param_2,float param_3,long *param_4,long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_130 [16];
  long local_120;
  long *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long local_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  if ((DAT_03ff8610 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da72a8);
    thunk_FUN_01ad9084(PTR_DAT_03da72b0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da72b8);
    thunk_FUN_01ad9084(PTR_DAT_03da72c0);
    thunk_FUN_01ad9084(PTR_DAT_03da5820);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    DAT_03ff8610 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_f0 = 0;
  local_120 = 0;
  local_118 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  local_130._0_8_ = 0;
  local_130._8_8_ = 0;
  if (param_5 != (long *)0x0) {
    lVar7 = param_4[0x3a];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(lVar7,0,0);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN_024cb144(param_4 + 0x3a,*(undefined8 *)PTR_DAT_03da72a8), (uVar3 & 1) == 0)) {
      return;
    }
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    local_c4 = 0;
    uStack_d0 = 0;
    bVar1 = *(byte *)(*(long *)
                       Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_5 + 0x130)) &&
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__)) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(param_5,0,0);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_03831ffc(param_5,&local_e0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar7 = param_4[7];
        uVar4 = FUN_03959ba8(&local_e0,0);
        if (lVar7 == 0) goto UnityEngine_ParticleSystem_MainModule__set_simulationSpace_Injected;
        uVar3 = FUN_03843b30(lVar7,uVar4,&local_118,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (local_118 != param_4) {
          return;
        }
        if (*(char *)((long)param_4 + 0x1e4) != '\0') {
          lVar7 = FUN_0391c27c(param_4,0);
          if (lVar7 == 0) goto UnityEngine_ParticleSystem_MainModule__set_simulationSpace_Injected;
          fVar8 = (float)FUN_03929130(lVar7,0);
          fVar13 = param_2;
          fVar15 = param_3;
          fVar9 = (float)FUN_03959c60(&local_e0,0);
          if (DAT_03fed315 == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed315 = '\x01';
          }
          puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar10 = SQRT((param_3 * param_3 + fVar8 * fVar8 + param_2 * param_2) *
                        (fVar15 * fVar15 + fVar9 * fVar9 + fVar13 * fVar13));
          fVar14 = 0.0;
          if (DAT_00b55154 <= fVar10) {
            fVar10 = (param_3 * fVar15 + fVar8 * fVar9 + param_2 * fVar13) / fVar10;
            if (fVar10 < -1.0) {
              fVar10 = -1.0;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            dVar12 = acos((double)fVar10);
            fVar14 = (float)dVar12 * DAT_00b556e8;
          }
          if (*(float *)(param_4 + 0x3d) < fVar14) {
            return;
          }
        }
      }
    }
    lVar7 = param_4[0x3b];
    uVar11 = FUN_03925ca4(0);
    uStack_108 = 0;
    uStack_100 = 0;
    local_110 = 0;
    local_f8 = (ulong)uVar11 << 0x20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_03da5820 + 0x130);
    if ((*(byte *)(*param_5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03da5820))
    {
      pcVar6 = *(code **)(*param_4 + 0x868);
      uVar4 = *(undefined8 *)(*param_4 + 0x870);
    }
    else {
      pcVar6 = *(code **)(*param_4 + 0x878);
      uVar4 = *(undefined8 *)(*param_4 + 0x880);
    }
    uStack_8c = uStack_bc;
    uStack_90 = uStack_c0;
    local_94 = local_c4;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_a8 = uStack_d8;
    local_b0 = local_e0;
    local_f0 = (int)lVar7;
    uVar3 = (*pcVar6)(param_4,param_5,&local_b0,&local_110,uVar4);
    if ((uVar3 & 1) != 0) {
      FUN_03852480(param_4,param_5,&local_110);
      plVar5 = (long *)param_4[0x3a];
      if (plVar5 == (long *)0x0) {
UnityEngine_ParticleSystem_MainModule__set_simulationSpace_Injected:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uStack_a8 = uStack_108;
      local_b0 = local_110;
      uStack_98 = (undefined4)local_f8;
      local_94 = (undefined4)((ulong)local_f8 >> 0x20);
      uStack_a0 = uStack_100;
      uStack_90 = local_f0;
      uVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,&local_b0,*(undefined8 *)(*plVar5 + 400));
      if (((uVar3 & 1) != 0) && (param_4[0x3e] != 0)) {
        if (param_4[0x3f] == 0)
        goto UnityEngine_ParticleSystem_MainModule__set_simulationSpace_Injected;
        local_130 = System_Collections_Generic_List<StyleSyntaxToken>__TrueForAll
                              (param_4[0x3f],&local_120,*(undefined8 *)PTR_DAT_03da72b0);
        if (local_120 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(long *)(local_120 + 0x10) = (long)param_5;
        thunk_FUN_01b4f09c((long *)(local_120 + 0x10),param_5);
        if (local_120 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(long *)(local_120 + 0x18) = (long)param_4;
        thunk_FUN_01b4f09c((long *)(local_120 + 0x18),param_4);
        uStack_a8 = uStack_108;
        local_b0 = local_110;
        uStack_98 = (undefined4)local_f8;
        local_94 = (undefined4)((ulong)local_f8 >> 0x20);
        uStack_a0 = uStack_100;
        uStack_90 = local_f0;
        if (local_120 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(local_120 + 0x40) = local_f0;
        *(undefined8 *)(local_120 + 0x28) = uStack_108;
        *(undefined8 *)(local_120 + 0x20) = local_110;
        *(long *)(local_120 + 0x38) = local_f8;
        *(undefined8 *)(local_120 + 0x30) = uStack_100;
        if (param_4[0x3e] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_02203ccc(param_4[0x3e],local_120,*(undefined8 *)PTR_DAT_03da72c0);
        FUN_02d788c0(local_130,*(undefined8 *)PTR_DAT_03da72b8);
      }
    }
  }
  return;
}


