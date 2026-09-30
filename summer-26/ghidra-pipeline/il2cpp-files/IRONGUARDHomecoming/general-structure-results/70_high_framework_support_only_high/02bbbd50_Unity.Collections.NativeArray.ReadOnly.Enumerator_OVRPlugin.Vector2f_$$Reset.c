/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$Reset
ENTRY_POINT: 02bbbd50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x26;
  long in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = FUN_0353ca4c(0);
  if (lVar4 != 0) {
    FUN_02a64f10();
    if (in_stack_00000008 == 0) {
      return;
    }
    uVar2 = FUN_0348b56c(in_stack_00000008,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<IInteractorView>__,0);
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (in_stack_00000008 != 0) {
      iVar3 = FUN_0348b56c(in_stack_00000008,
                           *(undefined8 *)
                            Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__,0);
      lVar4 = *(long *)puVar1;
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x150);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar4);
      }
      uVar8 = FUN_03579868(uVar8,0);
      if (in_stack_00000008 != 0) {
        lVar4 = FUN_03489498(in_stack_00000008,
                             *(undefined8 *)Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                             uVar8,0);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar9);
          }
        }
        *(long *)(unaff_x19 + 0x30) = lVar5;
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01ecaf44(lVar9);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar9);
          }
        }
        thunk_FUN_01f51358((long *)(unaff_x19 + 0x30),lVar5);
        if (iVar3 == 0) {
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x10),0);
        }
        else {
          FUN_02bbb768();
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_03579868(uVar8,0);
          if (in_stack_00000008 == 0) goto LAB_02bbc048;
          lVar4 = FUN_03489498(in_stack_00000008,
                               *(undefined8 *)
                                Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,uVar8,0);
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          if (lVar4 == 0) {
            FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar9);
          }
          if (0 < *(int *)(lVar5 + 0x18)) {
            uVar7 = 0;
            plVar10 = (long *)(lVar5 + 0x20);
            do {
              uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
              if (uVar6 <= uVar7) {
LAB_02bbc044:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (*plVar10 == 0) {
                FUN_0358b70c(0x11,0);
                uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
              }
              if (uVar6 <= uVar7) goto LAB_02bbc044;
              FUN_02bbb848();
              uVar7 = uVar7 + 1;
              plVar10 = plVar10 + 2;
            } while ((long)uVar7 < (long)*(int *)(lVar5 + 0x18));
          }
        }
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar4 = FUN_0353ca4c(0);
        if (lVar4 != 0) {
          FUN_02a64cc0();
          return;
        }
      }
    }
  }
LAB_02bbc048:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


