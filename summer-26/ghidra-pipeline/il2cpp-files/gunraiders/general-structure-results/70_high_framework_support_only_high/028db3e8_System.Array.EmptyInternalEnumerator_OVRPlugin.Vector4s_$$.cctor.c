/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.cctor
ENTRY_POINT: 028db3e8
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___cctor
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
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
    plVar3 = (long *)thunk_FUN_01c495e4(param_2,*(undefined8 *)PTR_DAT_042305b8);
    if (plVar3 == (long *)0x0) {
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
      lVar8 = lVar7 + 0x30;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (-1 < *(int *)(lVar8 + -0x10)) {
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          FUN_02c6d750(&stack0x00000040,*(undefined4 *)(lVar8 + -8));
          lVar4 = thunk_FUN_01c49334(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar6,0);
          }
          if (*(uint *)(plVar3 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          lVar5 = (long)(int)param_3;
          param_3 = param_3 + 1;
          plVar3[lVar5 + 4] = lVar4;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x28;
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
          in_stack_00000068._4_4_ = *(undefined4 *)(puVar10 + -1);
          thunk_FUN_01c49334(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),
                             (long)&stack0x00000068 + 4);
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_028db718:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          in_stack_00000050 = puVar10[2];
          in_stack_00000048 = puVar10[1];
          in_stack_00000040 = *puVar10;
          thunk_FUN_01c49334(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000040);
          FUN_0329f3a8();
          if (*(uint *)(lVar7 + 0x18) <= param_3) goto LAB_028db718;
          lVar4 = lVar7 + (long)(int)param_3 * 0x10;
          param_3 = param_3 + 1;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 5;
      } while ((long)uVar9 < (long)iVar1);
    }
  }
  return;
}


