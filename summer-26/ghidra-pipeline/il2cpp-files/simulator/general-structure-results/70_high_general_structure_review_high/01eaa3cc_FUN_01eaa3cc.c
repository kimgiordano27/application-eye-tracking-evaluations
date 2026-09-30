/*
FUNCTION_NAME: FUN_01eaa3cc
ENTRY_POINT: 01eaa3cc
PROGRAM: simulator-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_01eaa3cc(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_036c3364 & 1) == 0) {
    FUN_018c48dc(PTR_DAT_0349a510);
    FUN_018c48dc(PTR_DAT_03496718);
    DAT_036c3364 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_028fe0a8(3,0);
  }
  iVar1 = thunk_FUN_0187c2b0(param_2,0);
  if (iVar1 != 1) {
    FUN_0290b8c0(7,0);
  }
  iVar1 = thunk_FUN_0187c26c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_0290b8c0(6,0);
  }
  uVar2 = Obi_ComputeColliderWorld__get_forceZoneCount(param_2,0);
  if (uVar2 < param_3) {
    FUN_0290c0a8(0);
  }
  iVar1 = Obi_ComputeColliderWorld__get_forceZoneCount(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_0290b8c0(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_018a835c(lVar6);
  }
  lVar6 = thunk_FUN_018af234(param_2,lVar6);
  if (lVar6 != 0) {
    FUN_01ea8aa0(param_1,lVar6,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
    return;
  }
  lVar6 = thunk_FUN_018af234(param_2,*(undefined8 *)PTR_DAT_0349a510);
  if (lVar6 == 0) {
    plVar4 = (long *)thunk_FUN_018af234(param_2,*(undefined8 *)PTR_DAT_03496718);
    if (plVar4 == (long *)0x0) {
      FUN_0290c0e0();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
      uVar8 = 0;
      puVar9 = (undefined8 *)(lVar6 + 0x40);
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_018c4b04();
        }
        if (-1 < *(int *)(puVar9 + -4)) {
          local_a0 = puVar9[-1];
          uStack_a8 = puVar9[-2];
          local_b0 = puVar9[-3];
          uStack_68 = 0;
          local_70 = 0;
          uStack_58 = 0;
          local_60 = 0;
          local_90 = local_b0;
          uStack_88 = uStack_a8;
          local_80 = local_a0;
          FUN_0229002c(&local_70,&local_b0,*puVar9,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
          uStack_a8 = uStack_68;
          local_b0 = local_70;
          uStack_98 = uStack_58;
          local_a0 = local_60;
          lVar7 = thunk_FUN_018aef84(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),&local_b0
                                    );
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4afc();
          }
          if ((lVar7 != 0) &&
             (lVar5 = thunk_FUN_018af234(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar3 = thunk_FUN_01867f60();
                    /* WARNING: Subroutine does not return */
            FUN_018c49d0(uVar3,0);
          }
          if (*(uint *)(plVar4 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_018c4b04();
          }
          lVar5 = (long)(int)param_3;
          param_3 = param_3 + 1;
          plVar4[lVar5 + 4] = lVar7;
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 5;
      } while (uVar2 != uVar8);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
      uVar8 = 0;
      puVar9 = (undefined8 *)(lVar7 + 0x40);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar8)
        goto System_Array_EmptyInternalEnumerator<AsyncGPUReadbackRequest>__get_Current;
        if (-1 < *(int *)(puVar9 + -4)) {
          local_60 = puVar9[-1];
          uStack_68 = puVar9[-2];
          local_70 = puVar9[-3];
          uVar3 = thunk_FUN_018aef84(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),&local_70
                                    );
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
System_Array_EmptyInternalEnumerator<AsyncGPUReadbackRequest>__get_Current:
                    /* WARNING: Subroutine does not return */
            FUN_018c4b04();
          }
          local_b0 = 0;
          uStack_a8 = 0;
          FUN_028cf538(&local_b0,uVar3,*puVar9,0);
          if (*(uint *)(lVar6 + 0x18) <= param_3)
          goto System_Array_EmptyInternalEnumerator<AsyncGPUReadbackRequest>__get_Current;
          lVar5 = lVar6 + (long)(int)param_3 * 0x10;
          param_3 = param_3 + 1;
          *(undefined8 *)(lVar5 + 0x28) = uStack_a8;
          *(undefined8 *)(lVar5 + 0x20) = local_b0;
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 5;
      } while ((long)uVar8 < (long)iVar1);
    }
  }
  return;
}


