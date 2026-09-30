/*
FUNCTION_NAME: FUN_01fe47d0
ENTRY_POINT: 01fe47d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_01fe47d0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint extraout_w1;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 local_180;
  int iStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  int iStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  int iStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  puVar4 = Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_0482ee47 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<ProductList>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    DAT_0482ee47 = 1;
  }
  local_f0 = 0;
  local_e8 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (*(int *)(param_1 + 0x20) != 2) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar11 = thunk_FUN_01f117cc();
    FUN_0356ad6c(uVar11,0);
    uVar13 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,uVar13);
  }
  if (*(long *)(param_1 + 8) != 0) {
    if (*(int *)(*(long *)(param_1 + 8) + 0x18) == 0) {
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar10 = *(long *)puVar4;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar11 = FUN_0239ae2c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                            *(undefined8 *)
                             Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
      if (lVar10 == 0) goto LAB_01fe4b8c;
      uVar12 = (**(code **)(lVar10 + 0x18))
                         (*(undefined8 *)(lVar10 + 0x40),uVar11,*(undefined4 *)(param_1 + 0x18),
                          *(undefined8 *)(lVar10 + 0x28));
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_01fe4c50(param_1);
        goto LAB_01fe4bcc;
      }
    }
    puVar5 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__;
    if (param_2 != 0) {
      uStack_98 = *(undefined8 *)(param_1 + 0x60);
      local_a0 = *(undefined8 *)(param_1 + 0x58);
      uStack_88 = *(undefined8 *)(param_1 + 0x70);
      local_90 = *(undefined8 *)(param_1 + 0x68);
      local_70 = *(undefined4 *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0xa0);
      uStack_78 = *(undefined8 *)(param_1 + 0x80);
      local_80 = *(undefined8 *)(param_1 + 0x78);
      lVar10 = param_2 + 0x18;
      local_100 = *(undefined4 *)(param_1 + 0x88);
      uVar11 = *(undefined8 *)(param_1 + 0x90);
      uStack_128 = *(undefined8 *)(param_1 + 0x60);
      local_130 = *(undefined8 *)(param_1 + 0x58);
      uStack_108 = *(undefined8 *)(param_1 + 0x80);
      uStack_110 = *(undefined8 *)(param_1 + 0x78);
      uStack_118 = *(undefined8 *)(param_1 + 0x70);
      local_120 = *(undefined8 *)(param_1 + 0x68);
      iStack_fc = *(int *)(param_1 + 0x8c) * 3;
      local_f8 = uVar11;
      uVar7 = OculusSampleFramework_TrainCarBase__get_Scale(lVar10,1,&local_130);
      iStack_13c = *(int *)(param_1 + 0x8c) * 3 + 1;
      uStack_158 = uStack_88;
      local_160 = local_90;
      uStack_148 = uStack_78;
      uStack_150 = local_80;
      uStack_168 = uStack_98;
      local_170 = local_a0;
      local_140 = local_70;
      local_138 = uVar11;
      uVar8 = OculusSampleFramework_TrainCarBase__get_Scale(lVar10,2,&local_170);
      iStack_17c = *(int *)(param_1 + 0x8c) + 1000000;
      uStack_198 = uStack_88;
      local_1a0 = local_90;
      uStack_188 = uStack_78;
      uStack_190 = local_80;
      uStack_1a8 = uStack_98;
      local_1b0 = local_a0;
      local_180 = local_70;
      local_178 = uVar11;
      uVar9 = OculusSampleFramework_TrainCarBase__get_Scale(lVar10,3,&local_1b0);
      uStack_d8 = *(undefined8 *)(param_1 + 0x18);
      local_e0 = *(undefined8 *)(param_1 + 0x10);
      FUN_01fe5138(lVar10,uVar7);
      uVar11 = FUN_01fe31f8();
      FUN_01fe5138(lVar10,uVar8);
      uVar13 = FUN_01fe31f8();
      FUN_01fe5138(lVar10,uVar9);
      local_b0 = FUN_01fe31f8();
      uStack_c8 = uStack_d8;
      local_d0 = local_e0;
      local_c0 = uVar11;
      uStack_b8 = uVar13;
      auVar18 = FUN_02349e70(&local_d0,0,0,*(undefined8 *)puVar5);
      *(undefined1 (*) [16])(param_1 + 0x28) = auVar18;
      uVar11 = FUN_01fe5138(lVar10,uVar7);
      FUN_01fe3594(uVar11,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      uVar11 = FUN_01fe5138(lVar10,uVar8);
      FUN_01fe3594(uVar11,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      uVar11 = FUN_01fe5138(lVar10,uVar9);
      FUN_01fe3594(uVar11,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      if (*(long *)(param_1 + 8) != 0) {
        if (*(int *)(*(long *)(param_1 + 8) + 0x18) < 1) {
LAB_01fe4bb4:
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          *(undefined4 *)(param_1 + 0x20) = 3;
LAB_01fe4bcc:
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar10 = FUN_01fe5138(lVar10,uVar8);
        puVar6 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
        puVar5 = Method_Oculus_Platform_Message<ProductList>_get_Data__;
        lVar15 = *(long *)(param_1 + 8);
        if (lVar15 != 0) {
          lVar10 = *(long *)(lVar10 + 0x80);
          iVar17 = 0;
          do {
            iVar1 = *(int *)(lVar15 + 0x18);
            if (iVar1 <= iVar17) {
              *(undefined4 *)(lVar15 + 0x18) = 0;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (0 < iVar1) {
                FUN_0358d1e4(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
              }
              goto LAB_01fe4bb4;
            }
            local_f0 = 0;
            local_e8 = 0;
            local_f0 = FUN_031bfff0(lVar15,iVar17,*(undefined8 *)puVar6);
            thunk_FUN_01f51358(&local_f0,local_f0);
            if (*(long *)(param_1 + 8) == 0) break;
            FUN_031bfff0(*(long *)(param_1 + 8),iVar17,*(undefined8 *)puVar6);
            local_e8 = CONCAT44(local_e8._4_4_,(extraout_w1 & 1) << 4) | 10;
            if (lVar10 == 0) break;
            lVar15 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar5;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar15 == 0) break;
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + (long)(int)uVar2 * 0x10;
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              puVar14 = (undefined8 *)(lVar15 + 0x20);
              *puVar14 = local_f0;
              *(ulong *)(lVar15 + 0x28) = local_e8;
              thunk_FUN_01f51358(puVar14,0);
            }
            else {
              FUN_031baaa4(lVar10,local_f0,local_e8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = *(long *)(param_1 + 8);
            iVar17 = iVar17 + 1;
          } while (lVar15 != 0);
        }
      }
    }
  }
LAB_01fe4b8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


