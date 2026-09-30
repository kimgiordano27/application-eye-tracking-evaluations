/*
FUNCTION_NAME: FUN_067092f0
ENTRY_POINT: 067092f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_067092f0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  unkbyte10 Var7;
  long local_90;
  long local_88;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0897b802 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a8620);
    FUN_03a8a718(PTR_DAT_084a8628);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(PTR_DAT_084a8630);
    FUN_03a8a718(PTR_DAT_084a0668);
    FUN_03a8a718(PTR_DAT_08496150);
    DAT_0897b802 = 1;
  }
  puVar2 = PTR_DAT_08488b88;
  local_60 = 0;
  uStack_58 = 0;
  iVar1 = *param_1;
  local_70._8_8_ = 0;
  local_70._0_8_ = 0;
  local_78 = 0;
  if (iVar1 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x1e);
    local_60 = *(undefined8 *)(param_1 + 0x1c);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *param_1 = -1;
LAB_067093d4:
    FUN_0667aa84(&local_60,0);
LAB_067093ec:
    plVar4 = *(long **)(param_1 + 0x12);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = (**(code **)(*plVar4 + 0x1a8))
                      (plVar4,*(undefined8 *)(param_1 + 0x14),0,param_1[0x16],
                       *(undefined8 *)(param_1 + 0x18),0,(char)param_1[0x1a],
                       *(undefined8 *)(*plVar4 + 0x1b0));
    if (0 < (int)uVar3) {
      lVar6 = *(long *)(param_1 + 0x18);
      plVar4 = *(long **)(param_1 + 0xe);
      local_90 = 0;
      local_88 = 0;
      if (lVar6 == 0) {
        FUN_06771580(0);
        local_90 = 0;
        local_88 = 0;
      }
      else {
        if (*(uint *)(lVar6 + 0x18) < uVar3) {
          FUN_06771580(0);
        }
        local_90 = lVar6;
        thunk_FUN_03afed3c(&local_90,lVar6);
        local_88 = (ulong)uVar3 << 0x20;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      Var7 = (**(code **)(*plVar4 + 0x338))
                       (plVar4,local_90,local_88,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(*plVar4 + 0x340));
      if (*(int *)(*(long *)PTR_DAT_08496150 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uStack_48 = 0;
      local_50 = (long)Var7;
      thunk_FUN_03afed3c(&local_50,(long)Var7);
      uStack_48._0_3_ = (uint3)(ushort)((unkuint10)Var7 >> 0x40);
      uStack_38 = uStack_48;
      local_40 = local_50;
      thunk_FUN_03afed3c(&local_40,0);
      thunk_FUN_03afed3c(&local_40,0);
      uStack_58 = uStack_38;
      local_60 = local_40;
      uVar5 = FUN_0667a944(&local_60,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x1e) = uStack_58;
        *(undefined8 *)(param_1 + 0x1c) = local_60;
        thunk_FUN_03afed3c(param_1 + 0x1c,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043ec1b8(param_1 + 2,&local_60,param_1,*(undefined8 *)PTR_DAT_084a8628);
        return;
      }
Newtonsoft_Json_JsonTextWriter__WriteStartArray:
      FUN_0667aa84(&local_60,0);
    }
    if (*(char *)((long)param_1 + 0x69) == '\0') goto LAB_0670955c;
    plVar4 = *(long **)(param_1 + 0xe);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = (**(code **)(*plVar4 + 0x2b8))
                      (plVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar4 + 0x2c0));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_70 = FUN_067c4c10(lVar6,0,0);
    uVar5 = FUN_0666ef78(local_70,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x20) = local_70;
      thunk_FUN_03afed3c(param_1 + 0x20,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043eb808(param_1 + 2,local_70,param_1,*(undefined8 *)PTR_DAT_084a8620);
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      uStack_58 = *(undefined8 *)(param_1 + 0x1e);
      local_60 = *(undefined8 *)(param_1 + 0x1c);
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = -1;
      goto Newtonsoft_Json_JsonTextWriter__WriteStartArray;
    }
    if (iVar1 != 2) {
      if ((char)param_1[8] == '\0') {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        *(undefined1 *)(*(long *)(param_1 + 10) + 0x61) = 1;
        plVar4 = *(long **)(param_1 + 0xc);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(lVar6 + 0x18) != 0) {
          plVar4 = *(long **)(param_1 + 0xe);
          local_88 = 0;
          local_90 = lVar6;
          thunk_FUN_03afed3c(&local_90,lVar6);
          local_88 = *(long *)(lVar6 + 0x18) << 0x20;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          Var7 = (**(code **)(*plVar4 + 0x338))
                           (plVar4,local_90,local_88,*(undefined8 *)(param_1 + 0x10),
                            *(undefined8 *)(*plVar4 + 0x340));
          local_50 = (undefined8)Var7;
          if (*(int *)(*(long *)PTR_DAT_08496150 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uStack_48 = 0;
          thunk_FUN_03afed3c(&local_50,local_50);
          uStack_48._0_3_ = (uint3)(ushort)((unkuint10)Var7 >> 0x40);
          uStack_38 = uStack_48;
          local_40 = local_50;
          thunk_FUN_03afed3c(&local_40,0);
          thunk_FUN_03afed3c(&local_40,0);
          uStack_58 = uStack_38;
          local_60 = local_40;
          uVar5 = FUN_0667a944(&local_60,0);
          if ((uVar5 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0x1e) = uStack_58;
            *(undefined8 *)(param_1 + 0x1c) = local_60;
            thunk_FUN_03afed3c(param_1 + 0x1c,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_043ec1b8(param_1 + 2,&local_60,param_1,*(undefined8 *)PTR_DAT_084a8628);
            return;
          }
          goto LAB_067093d4;
        }
      }
      goto LAB_067093ec;
    }
    local_70 = *(undefined1 (*) [16])(param_1 + 0x20);
                    /* try { // try from 06709398 to 0680a5e7 has its CatchHandler @ 06709398
                       catch() { ... } // from try @ 06709398 with catch @ 06709398
                       catch() { ... } // from try @ 0670a660 with catch @ 06709398
                       catch() { ... } // from try @ 0670a6ec with catch @ 06709398
                       catch() { ... } // from try @ 0670b118 with catch @ 06709398
                       catch() { ... } // from try @ 0670b164 with catch @ 06709398
                       catch() { ... } // from try @ 0670b1a4 with catch @ 06709398
                       catch() { ... } // from try @ 0670b1e8 with catch @ 06709398
                       catch() { ... } // from try @ 0670b214 with catch @ 06709398
                       catch() { ... } // from try @ 0670b268 with catch @ 06709398 */
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *param_1 = -1;
  }
  FUN_0666ef90(local_70,0);
LAB_0670955c:
  *param_1 = -2;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


