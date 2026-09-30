/*
FUNCTION_NAME: FUN_037e822c
ENTRY_POINT: 037e822c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_037e822c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_03da3b30;
  if ((DAT_03ff8215 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da43c8);
    thunk_FUN_01ad9084(PTR_DAT_03da4d80);
    thunk_FUN_01ad9084(PTR_DAT_03da4d88);
    thunk_FUN_01ad9084(PTR_DAT_03da4cd8);
    thunk_FUN_01ad9084(PTR_DAT_03da4ce0);
    thunk_FUN_01ad9084(StringLiteral_2840);
    thunk_FUN_01ad9084(PTR_DAT_03da3b30);
    thunk_FUN_01ad9084(PTR_DAT_03da4ce8);
    DAT_03ff8215 = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_037e8690(param_3);
  if ((uVar6 & 1) == 0) goto LAB_037e8480;
  if (param_3 != 0) {
    lVar7 = FUN_037d1cd0(param_3,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar3);
    }
    if (lVar7 != 0) {
      lVar7 = FUN_025bc544(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),
                           *(undefined8 *)PTR_DAT_03da43c8);
      if (lVar7 != 0) {
        uVar8 = FUN_037d0f0c(lVar7,0);
        puVar3 = PTR_DAT_03da4ce8;
        if (*(int *)(*(long *)PTR_DAT_03da4ce8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03da4ce8);
        }
        FUN_037e71a4(local_d0,param_4);
        puVar4 = PTR_DAT_03da4ce0;
        uStack_78 = local_d0._8_8_;
        local_80 = local_d0._0_8_;
        uVar11 = local_80;
        uStack_68 = uStack_b8;
        uStack_70 = local_c0;
        local_80._0_1_ = (char)local_d0._0_8_;
        bVar1 = (char)local_80 != '\0';
        local_80 = uVar11;
        if (bVar1) {
          FUN_024120b4(local_d0,&local_80,*(undefined8 *)PTR_DAT_03da4ce0);
          uVar6 = FUN_02ee6670(local_d0._8_8_,uVar8,0);
          puVar2 = StringLiteral_2840;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)StringLiteral_2840;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar7 = *(long *)puVar2;
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
            uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            local_90._0_8_ = uVar11;
            local_90._8_8_ = uVar12;
            FUN_024120b4(&local_e8,&local_80,*(undefined8 *)puVar4);
            local_d0._8_8_ = uStack_e0;
            local_d0._0_8_ = local_e8;
            local_c0 = local_d8;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uStack_f8 = local_d0._8_8_;
            local_100 = local_d0._0_8_;
            local_f0 = local_c0;
            auVar13 = FUN_037e8748(uVar8,&local_100,&local_98);
            local_90 = FUN_037d0118(uVar11,uVar12,auVar13._0_8_,auVar13._8_8_,0);
            uVar6 = FUN_037cfc00(local_90,0);
            puVar3 = PTR_DAT_03da4d88;
            uVar11 = local_90._8_8_;
            uVar8 = local_90._0_8_;
            if ((uVar6 & 1) != 0) {
LAB_037e8670:
              uVar8 = FUN_037e5658(param_1,param_4);
              *param_6 = uVar8;
              thunk_FUN_01b4f09c(param_6,uVar8);
              return local_90._0_8_;
            }
            if (local_98 != 0) {
              Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                        (local_d0,local_98,0,*(undefined8 *)PTR_DAT_03da4d88);
              auVar13 = FUN_037e8a64(param_1,param_2,param_3,local_c0,param_5,param_6);
              if (*(int *)(*(long *)StringLiteral_2840 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              auVar13 = FUN_037d0118(uVar8,uVar11,auVar13._0_8_,auVar13._8_8_,0);
              local_90 = auVar13;
              uVar6 = FUN_037cfc00(local_90,0);
              if ((uVar6 & 1) != 0) {
                return local_90._0_8_;
              }
              if (local_98 != 0) {
                iVar10 = 1;
                do {
                  puVar4 = PTR_DAT_03da3b30;
                  if (*(int *)(local_98 + 0x18) <= iVar10) {
                    if (*(int *)(*(long *)PTR_DAT_03da3b30 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar6 = FUN_037e8eb0(param_3);
                    puVar2 = PTR_DAT_03da43c8;
                    puVar3 = StringLiteral_2840;
                    if ((uVar6 & 1) != 0) {
                      lVar7 = FUN_037d1cd0(param_3,0);
                      lVar9 = *(long *)puVar4;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(lVar9);
                      }
                      if (lVar7 == 0) break;
                      lVar7 = FUN_025bc544(lVar7,*(undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                                           *(undefined8 *)puVar2);
                      if (lVar7 == 0) break;
                      uVar8 = FUN_037d0f0c(lVar7,0);
                      uVar5 = FUN_0303e194(uVar8,0);
                      if (*(long *)(param_1 + 0x28) == 0) break;
                      FUN_037e8f68(*(long *)(param_1 + 0x28),uVar5,*param_5);
                    }
                    local_d0 = local_90;
                    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,local_d0);
                    param_4 = thunk_FUN_01acfdbc(uVar8,0);
                    goto LAB_037e8670;
                  }
                  Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                            (local_d0,local_98,iVar10,*(undefined8 *)puVar3);
                  uStack_a8 = local_d0._8_8_;
                  local_b0 = local_d0._0_8_;
                  local_a0 = local_c0;
                  uVar8 = FUN_037e8dfc(&local_b0,*param_5);
                  *param_5 = uVar8;
                  thunk_FUN_01b4f09c(param_5,uVar8);
                  iVar10 = iVar10 + 1;
                } while (local_98 != 0);
              }
            }
            goto LAB_037e868c;
          }
        }
LAB_037e8480:
        uVar8 = FUN_037e8a64(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar8;
      }
    }
  }
LAB_037e868c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


