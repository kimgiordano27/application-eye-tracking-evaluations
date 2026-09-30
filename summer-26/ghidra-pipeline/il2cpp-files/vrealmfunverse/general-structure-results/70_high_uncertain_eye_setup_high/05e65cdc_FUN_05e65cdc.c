/*
FUNCTION_NAME: FUN_05e65cdc
ENTRY_POINT: 05e65cdc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e65cdc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  int iStack_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  local_e8 = param_2;
  if ((DAT_066dc664 & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__7__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__9__
                );
    FUN_02b3c81c(
                Method_OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    FUN_02b3c81c(Method_OVRSpaceQuery_Options_ToQueryInfo__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_105__);
    DAT_066dc664 = 1;
  }
  puVar4 = Method_OVRSpaceQuery_Options_ToQueryInfo__;
  puVar3 = Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (param_3[0x14] == 0) {
    return;
  }
  uVar8 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRAnchor_Tracker_AsyncLock>>__get_Current
                    (param_1,param_3[0x14],
                     *(undefined8 *)
                      Method_OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_System_Collections_IEnumerator_Reset__
                    );
  lVar9 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRAnchor_Tracker_AsyncLock>>__get_Current
                    (param_1,param_3[0x15],*(undefined8 *)puVar4);
  lVar10 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRAnchor_Tracker_AsyncLock>>__get_Current
                     (param_1,param_3[0x16],*(undefined8 *)puVar4);
  lVar11 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRAnchor_Tracker_AsyncLock>>__get_Current
                     (param_1,param_3[0x17],*(undefined8 *)puVar3);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) == 0) {
      return;
    }
    if (lVar9 != 0) {
      uVar13 = *(ulong *)(lVar9 + 0x18);
      FUN_05f4f5c0(param_1,uVar13 & 0xffffffff,*(int *)(lVar11 + 0x18),&local_f8,&local_108,0);
      uVar18 = uStack_100;
      uVar15 = local_108;
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__7__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05e63a6c(lVar9,lVar11,uVar15,uVar18);
      iVar1 = *(int *)(param_3 + 0x21);
      if (0 < (int)uVar13) {
        uVar2 = *(uint *)((long)param_3 + 0x10c);
        uVar12 = 0;
        pfVar14 = (float *)(lVar9 + 0x24);
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_05e65fc4:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar15 = *param_3;
          uVar18 = param_3[1];
          fVar20 = pfVar14[-1];
          fVar22 = *pfVar14;
          fVar21 = *(float *)(param_3 + 0x18);
          fVar16 = *(float *)((long)param_3 + 0xc4);
          fVar23 = *(float *)(param_3 + 0x19);
          fVar17 = *(float *)((long)param_3 + 0xcc);
          uVar19 = **(undefined4 **)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__810_105__ + 0xb8);
          uVar7 = FUN_04b73170(*(undefined4 *)(param_3 + 6),*(undefined4 *)((long)param_3 + 0x34),
                               *(undefined4 *)(param_3 + 7),*(undefined4 *)((long)param_3 + 0x3c),0)
          ;
          if (lVar10 == 0) goto LAB_05e65fc8;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_05e65fc4;
          local_d0 = *(undefined8 *)(lVar10 + 0x20 + uVar12 * 8);
          local_c8 = 0;
          local_c0 = 0;
          local_be = 0;
          local_a8 = 0;
          local_e0 = CONCAT44((1.0 - (fVar22 - fVar16) / fVar17) * (float)((ulong)uVar18 >> 0x20) +
                              (float)((ulong)uVar15 >> 0x20),
                              ((fVar20 - fVar21) / fVar23) * (float)uVar18 + (float)uVar15);
          local_b8 = 0;
          uStack_b0 = 0;
          local_d8 = uVar19;
          local_d4 = uVar7;
          iStack_c4 = (uVar2 & 0xff0000) << 8;
          local_bd = iVar1 != 0;
          local_bc = uVar2 << 0x10;
          FUN_03ac7544(&local_f8,uVar12 & 0xffffffff,&local_e0,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__9__
                      );
          uVar12 = uVar12 + 1;
          pfVar14 = pfVar14 + 2;
        } while ((uVar13 & 0xffffffff) != uVar12);
      }
      uVar6 = uStack_f0;
      uVar5 = local_f8;
      uVar18 = uStack_100;
      uVar15 = local_108;
      iVar1 = *(int *)(param_3 + 0x22);
      lVar9 = FUN_05e29228(&local_e8,0);
      if (lVar9 != 0) {
        FUN_05f4e458(lVar9,uVar5,uVar6,uVar15,uVar18,uVar8,iVar1 == 2,0);
        return;
      }
    }
  }
LAB_05e65fc8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


