/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 02bbbcd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>___ctor
               (ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x26;
  long *plVar11;
  long in_stack_00000008;
  
  plVar11 = *(long **)(unaff_x26 + 0xa38);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<int>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<string,_InternedString>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IBoundsClipper>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<ICylinderClipper>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<IInteractorView>__);
    *(undefined1 *)(unaff_x21 + 0x3b6) = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = FUN_0353ca4c(0);
  if (lVar4 != 0) {
    FUN_02a64f10(lVar4,param_2,&stack0x00000008,
                 *(undefined8 *)Method_System_Linq_Enumerable_ToList<int>__);
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
      lVar4 = in_stack_00000008;
      lVar6 = *(long *)puVar1;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x150);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
      }
      uVar9 = FUN_03579868(uVar9,0);
      if (lVar4 != 0) {
        lVar4 = FUN_03489498(lVar4,*(undefined8 *)
                                    Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,uVar9,0);
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar6);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar6);
          }
        }
        *(long *)(param_2 + 0x30) = lVar5;
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar6);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar6);
          }
        }
        thunk_FUN_01f51358((long *)(param_2 + 0x30),lVar5);
        if (iVar3 == 0) {
          *(undefined8 *)(param_2 + 0x10) = 0;
          thunk_FUN_01f51358((undefined8 *)(param_2 + 0x10),0);
        }
        else {
          FUN_02bbb768(param_2,iVar3,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10));
          lVar4 = in_stack_00000008;
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x168);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_03579868(uVar9,0);
          if (lVar4 == 0) goto LAB_02bbc048;
          lVar4 = FUN_03489498(lVar4,*(undefined8 *)
                                      Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,uVar9
                               ,0);
          lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x128);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44(lVar6);
          }
          if (lVar4 == 0) {
            FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar6);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar6);
          }
          if (0 < *(int *)(lVar5 + 0x18)) {
            uVar8 = 0;
            plVar10 = (long *)(lVar5 + 0x20);
            do {
              uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
              if (uVar7 <= uVar8) {
LAB_02bbc044:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (*plVar10 == 0) {
                FUN_0358b70c(0x11,0);
                uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
              }
              if (uVar7 <= uVar8) goto LAB_02bbc044;
              FUN_02bbb848(param_2,*plVar10,(int)plVar10[1],2,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) +
                                                                    0xc0) + 0x80) + 0x20) + 0xc0) +
                            0xf8));
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 2;
            } while ((long)uVar8 < (long)*(int *)(lVar5 + 0x18));
          }
        }
        *(undefined4 *)(param_2 + 0x2c) = uVar2;
        if (*(int *)(*plVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar4 = FUN_0353ca4c(0);
        if (lVar4 != 0) {
          FUN_02a64cc0(lVar4,param_2,
                       *(undefined8 *)Method_System_Linq_Enumerable_ToList<IValueAnimationUpdate>__)
          ;
          return;
        }
      }
    }
  }
LAB_02bbc048:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


