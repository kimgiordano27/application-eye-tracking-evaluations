/*
FUNCTION_NAME: FUN_068596b4
ENTRY_POINT: 068596b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068596b4(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_071d6b41 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3a2b0);
    FUN_02f07e70(OVRPlugin_OVRP_1_123_0_TypeInfo);
    DAT_071d6b41 = 1;
  }
  local_38 = 0;
  uStack_78 = param_4[1];
  local_80 = *param_4;
  uStack_68 = param_4[3];
  uStack_70 = param_4[2];
  FUN_068d2e30(param_1,param_2,param_3,&local_80,0);
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d3a2b0 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d3a2b0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(param_2);
    }
  }
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    local_60 = *param_4;
    uStack_58 = param_4[1];
    uStack_50 = param_4[2];
    uStack_48 = param_4[3];
    iVar3 = (**(code **)(*plVar6 + 0x178))
                      (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
    if (param_2 != (long *)0x0) {
      if ((int)param_2[0x8a] != iVar3) {
        FUN_0685598c(param_2,iVar3);
      }
      puVar2 = OVRPlugin_OVRP_1_123_0_TypeInfo;
      local_38 = local_38 & 0xffffffff;
      if (*(long *)(param_1 + 0x90) != 0) {
        local_60 = *param_4;
        uStack_58 = param_4[1];
        uStack_50 = param_4[2];
        uStack_48 = param_4[3];
        uVar7 = FUN_047cd550(*(long *)(param_1 + 0x90),param_3,&local_60,(long)&local_38 + 4,
                             *(undefined8 *)OVRPlugin_OVRP_1_123_0_TypeInfo);
        if ((uVar7 & 1) == 0) {
          plVar6 = *(long **)(param_1 + 0x80);
          if (plVar6 == (long *)0x0) goto LAB_06859a98;
          local_60 = *param_4;
          uStack_58 = param_4[1];
          uStack_50 = param_4[2];
          uStack_48 = param_4[3];
          uVar4 = (**(code **)(*plVar6 + 0x178))
                            (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
          *(uint *)((long)param_2 + 0x3cc) = uVar4 & 1;
        }
        else {
          FUN_06853170(param_2,local_38._4_4_);
        }
        local_38 = local_38 & 0xffffffff00000000;
        if (*(long *)(param_1 + 0x98) != 0) {
          local_60 = *param_4;
          uStack_58 = param_4[1];
          uStack_50 = param_4[2];
          uStack_48 = param_4[3];
          uVar7 = FUN_047cd550(*(long *)(param_1 + 0x98),param_3,&local_60,&local_38,
                               *(undefined8 *)puVar2);
          if ((uVar7 & 1) == 0) {
            plVar6 = *(long **)(param_1 + 0x88);
            if (plVar6 == (long *)0x0) goto LAB_06859a98;
            local_60 = *param_4;
            uStack_58 = param_4[1];
            uStack_50 = param_4[2];
            uStack_48 = param_4[3];
            uVar4 = (**(code **)(*plVar6 + 0x178))
                              (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
            *(uint *)(param_2 + 0x7a) = uVar4 & 1;
          }
          else {
            FUN_068536bc(param_2,local_38 & 0xffffffff);
          }
          plVar6 = *(long **)(param_1 + 0x78);
          if (plVar6 != (long *)0x0) {
            local_60 = *param_4;
            uStack_58 = param_4[1];
            uStack_50 = param_4[2];
            uStack_48 = param_4[3];
            uVar5 = (**(code **)(*plVar6 + 0x178))
                              (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
            *(undefined4 *)(param_2 + 0x81) = uVar5;
            plVar6 = *(long **)(param_1 + 0xa0);
            if (plVar6 != (long *)0x0) {
              local_60 = *param_4;
              uStack_58 = param_4[1];
              uStack_50 = param_4[2];
              uStack_48 = param_4[3];
              uVar5 = (**(code **)(*plVar6 + 0x178))
                                (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
              *(undefined4 *)(param_2 + 0x7d) = uVar5;
              FUN_06853e60(param_2);
              plVar6 = *(long **)(param_1 + 0xa8);
              if (plVar6 != (long *)0x0) {
                local_60 = *param_4;
                uStack_58 = param_4[1];
                uStack_50 = param_4[2];
                uStack_48 = param_4[3];
                uVar5 = (**(code **)(*plVar6 + 0x178))
                                  (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
                *(undefined4 *)((long)param_2 + 0x3ec) = uVar5;
                FUN_06854074(param_2);
                plVar6 = *(long **)(param_1 + 0xb0);
                if (plVar6 != (long *)0x0) {
                  local_60 = *param_4;
                  uStack_58 = param_4[1];
                  uStack_50 = param_4[2];
                  uStack_48 = param_4[3];
                  (**(code **)(*plVar6 + 0x178))
                            (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
                  FUN_06854288(param_2);
                  plVar6 = *(long **)(param_1 + 0xc0);
                  if (plVar6 != (long *)0x0) {
                    local_60 = *param_4;
                    uStack_58 = param_4[1];
                    uStack_50 = param_4[2];
                    uStack_48 = param_4[3];
                    fVar9 = (float)(**(code **)(*plVar6 + 0x178))
                                             (plVar6,param_3,&local_60,
                                              *(undefined8 *)(*plVar6 + 0x180));
                    if (fVar9 <= 0.0) {
                      fVar9 = 0.0;
                    }
                    *(float *)((long)param_2 + 0x3f4) = fVar9;
                    plVar6 = *(long **)(param_1 + 0xb8);
                    if (plVar6 != (long *)0x0) {
                      local_60 = *param_4;
                      uStack_58 = param_4[1];
                      uStack_50 = param_4[2];
                      uStack_48 = param_4[3];
                      uVar5 = (**(code **)(*plVar6 + 0x178))
                                        (plVar6,param_3,&local_60,*(undefined8 *)(*plVar6 + 0x180));
                      FUN_0685434c(param_2,uVar5);
                      plVar6 = *(long **)(param_1 + 200);
                      if (plVar6 != (long *)0x0) {
                        local_60 = *param_4;
                        uStack_58 = param_4[1];
                        uStack_50 = param_4[2];
                        uStack_48 = param_4[3];
                        fVar9 = (float)(**(code **)(*plVar6 + 0x178))
                                                 (plVar6,param_3,&local_60,
                                                  *(undefined8 *)(*plVar6 + 0x180));
                        if (fVar9 <= 0.0) {
                          fVar9 = 0.0;
                        }
                        *(float *)(param_2 + 0x80) = fVar9;
                        plVar6 = *(long **)(param_1 + 0xd0);
                        if (plVar6 != (long *)0x0) {
                          local_60 = *param_4;
                          uStack_58 = param_4[1];
                          uStack_50 = param_4[2];
                          uStack_48 = param_4[3];
                          uVar8 = (**(code **)(*plVar6 + 0x178))
                                            (plVar6,param_3,&local_60,
                                             *(undefined8 *)(*plVar6 + 0x180));
                          FUN_068543f4(param_2,uVar8);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06859a98:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


