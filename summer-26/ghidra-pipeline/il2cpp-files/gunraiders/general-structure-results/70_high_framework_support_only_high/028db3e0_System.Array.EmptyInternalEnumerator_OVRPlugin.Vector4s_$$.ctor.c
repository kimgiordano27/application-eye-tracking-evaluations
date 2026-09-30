/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 028db3e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
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
  undefined4 local_44;
  
  if ((DAT_04530e10 & 1) == 0) {
    FUN_01c5d288(System_Security_Cryptography_PaddingMode_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    DAT_04530e10 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032e32a8(3,0);
  }
  iVar1 = thunk_FUN_01c5c828(param_2,0);
  if (iVar1 != 1) {
    FUN_032f2014(7,0);
  }
  iVar1 = thunk_FUN_01c5c7e4(param_2,0,0);
  if (iVar1 != 0) {
    FUN_032f2014(6,0);
  }
  uVar2 = FUN_032e9d44(param_2,0);
  if (uVar2 < param_3) {
    FUN_032f2894(0);
  }
  iVar1 = FUN_032e9d44(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_032f2014(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01c72394(lVar7);
  }
  lVar7 = thunk_FUN_01c495e4(param_2,lVar7);
  if (lVar7 != 0) {
    FUN_028d9e90(param_1,lVar7,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x178));
    return;
  }
  lVar7 = thunk_FUN_01c495e4(param_2,*(undefined8 *)
                                      System_Security_Cryptography_PaddingMode_TypeInfo);
  if (lVar7 == 0) {
    plVar5 = (long *)thunk_FUN_01c495e4(param_2,*(undefined8 *)PTR_DAT_042305b8);
    if (plVar5 == (long *)0x0) {
      FUN_032f28cc();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (-1 < *(int *)(puVar10 + -2)) {
          local_a0 = puVar10[2];
          uStack_a8 = puVar10[1];
          local_b0 = *puVar10;
          uStack_68 = 0;
          local_70 = 0;
          uStack_58 = 0;
          local_60 = 0;
          local_90 = local_b0;
          uStack_88 = uStack_a8;
          local_80 = local_a0;
          FUN_02c6d750(&local_70,*(undefined4 *)(puVar10 + -1),&local_b0,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150));
          uStack_a8 = uStack_68;
          local_b0 = local_70;
          uStack_98 = uStack_58;
          local_a0 = local_60;
          lVar8 = thunk_FUN_01c49334(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8),&local_b0
                                    );
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar3,0);
          }
          if (*(uint *)(plVar5 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          lVar6 = (long)(int)param_3;
          param_3 = param_3 + 1;
          plVar5[lVar6 + 4] = lVar8;
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 5;
      } while (uVar2 != uVar9);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_028db718;
        if (-1 < *(int *)(puVar10 + -2)) {
          local_44 = *(undefined4 *)(puVar10 + -1);
          uVar3 = thunk_FUN_01c49334(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),&local_44
                                    );
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_028db718:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          local_60 = puVar10[2];
          uStack_68 = puVar10[1];
          local_70 = *puVar10;
          uVar4 = thunk_FUN_01c49334(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),&local_70
                                    );
          local_b0 = 0;
          uStack_a8 = 0;
          FUN_0329f3a8(&local_b0,uVar3,uVar4,0);
          if (*(uint *)(lVar7 + 0x18) <= param_3) goto LAB_028db718;
          lVar6 = lVar7 + (long)(int)param_3 * 0x10;
          param_3 = param_3 + 1;
          *(undefined8 *)(lVar6 + 0x28) = uStack_a8;
          *(undefined8 *)(lVar6 + 0x20) = local_b0;
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 5;
      } while ((long)uVar9 < (long)iVar1);
    }
  }
  return;
}


