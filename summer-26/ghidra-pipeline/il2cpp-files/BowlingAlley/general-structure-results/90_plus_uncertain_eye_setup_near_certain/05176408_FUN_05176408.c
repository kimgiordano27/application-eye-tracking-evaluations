/*
FUNCTION_NAME: FUN_05176408
ENTRY_POINT: 05176408
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05176408(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_44;
  
  if ((DAT_076d30aa & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07284028);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    DAT_076d30aa = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(3,0);
  }
  iVar1 = thunk_FUN_032f6668(param_2,0);
  if (iVar1 != 1) {
    FUN_059441cc(7,0);
  }
  iVar1 = thunk_FUN_032f6624(param_2,0,0);
  if (iVar1 != 0) {
    FUN_059441cc(6,0);
  }
  uVar2 = FUN_0593be7c(param_2,0);
  if (uVar2 < param_3) {
    FUN_05944a4c(0);
  }
  iVar1 = FUN_0593be7c(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_059441cc(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8(lVar8);
  }
  lVar8 = thunk_FUN_032a55a4(param_2,lVar8);
  if (lVar8 != 0) {
    FUN_05174b2c(param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x178));
    return;
  }
  lVar8 = thunk_FUN_032a55a4(param_2,*(undefined8 *)PTR_DAT_07284028);
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_032a55a4(param_2,*(undefined8 *)PTR_DAT_07279560);
    if (plVar6 == (long *)0x0) {
      FUN_05944a84();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar8 + 0x2c);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          uStack_88 = puVar11[1];
          local_b0 = *puVar11;
          local_80 = puVar11[2];
          local_70 = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          local_58 = 0;
          local_60 = 0;
          uStack_5c = 0;
          uStack_a8 = (undefined4)uStack_88;
          uStack_a4 = (undefined4)((ulong)uStack_88 >> 0x20);
          local_a0 = (undefined4)local_80;
          uStack_9c = (undefined4)((ulong)local_80 >> 0x20);
          local_90 = local_b0;
          FUN_03fc0384(&local_70,*(undefined4 *)((long)puVar11 + -4),&local_b0,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150));
          uStack_a8 = uStack_68;
          local_b0 = local_70;
          uStack_9c = uStack_5c;
          uStack_98 = local_58;
          uStack_a4 = uStack_64;
          local_a0 = local_60;
          lVar9 = thunk_FUN_032a52d0(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),&local_b0
                                    );
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar3,0);
          }
          if (*(uint *)(plVar6 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          plVar6[(long)(int)param_3 + 4] = lVar9;
          thunk_FUN_0333a630(plVar6 + (long)(int)param_3 + 4,lVar9);
          param_3 = param_3 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          local_44 = *(undefined4 *)((long)puVar11 + -4);
          uVar3 = thunk_FUN_032a52d0(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),&local_44
                                    );
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose:
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          local_70 = *puVar11;
          local_60 = (undefined4)puVar11[2];
          uStack_5c = (undefined4)((ulong)puVar11[2] >> 0x20);
          uStack_68 = (undefined4)puVar11[1];
          uStack_64 = (undefined4)((ulong)puVar11[1] >> 0x20);
          uVar4 = thunk_FUN_032a52d0(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),&local_70
                                    );
          local_b0 = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          FUN_058f08a8(&local_b0,uVar3,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= param_3)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
          lVar7 = lVar8 + (long)(int)param_3 * 0x10;
          puVar5 = (undefined8 *)(lVar7 + 0x20);
          *(ulong *)(lVar7 + 0x28) = CONCAT44(uStack_a4,uStack_a8);
          *puVar5 = local_b0;
          param_3 = param_3 + 1;
          thunk_FUN_0333a630(puVar5,0);
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


