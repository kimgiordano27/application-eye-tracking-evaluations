/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02b57964
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x26;
  long in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar4 = FUN_0353ca4c(0);
  if (lVar4 != 0) {
    FUN_02a64f10();
    if (in_stack_00000018 == 0) {
      return;
    }
    uVar2 = FUN_0348b56c(in_stack_00000018,
                         *(undefined8 *)Method_System_Linq_Enumerable_ToList<IInteractorView>__,0);
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (in_stack_00000018 != 0) {
      iVar3 = FUN_0348b56c(in_stack_00000018,
                           *(undefined8 *)
                            Method_System_Linq_Enumerable_ToList<GlyphPairAdjustmentRecord>__,0);
      lVar4 = *(long *)puVar1;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x150);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar4);
      }
      uVar9 = FUN_03579868(uVar9,0);
      if (in_stack_00000018 != 0) {
        lVar4 = FUN_03489498(in_stack_00000018,
                             *(undefined8 *)Method_System_Linq_Enumerable_ToList<IBoundsClipper>__,
                             uVar9,0);
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar10);
          }
        }
        *(long *)(unaff_x19 + 0x30) = lVar5;
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01f116d0(lVar4,lVar10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar10);
          }
        }
        thunk_FUN_01f51358((long *)(unaff_x19 + 0x30),lVar5);
        if (iVar3 == 0) {
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x10),0);
        }
        else {
          FUN_02b57364();
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x168);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_03579868(uVar9,0);
          if (in_stack_00000018 == 0) goto LAB_02b57c70;
          lVar4 = FUN_03489498(in_stack_00000018,
                               *(undefined8 *)
                                Method_System_Linq_Enumerable_ToList<ICylinderClipper>__,uVar9,0);
          lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x128);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          if (lVar4 == 0) {
            FUN_0358b70c(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar6 = (long *)thunk_FUN_01f116d0(lVar4,lVar10);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar4,lVar10);
          }
          if (0 < (int)plVar6[3]) {
            uVar8 = 0;
            plVar11 = plVar6;
            do {
              plVar11 = plVar11 + 4;
              uVar7 = (ulong)*(uint *)(plVar6 + 3);
              if (uVar7 <= uVar8) {
LAB_02b57c6c:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (*plVar11 == 0) {
                FUN_0358b70c(0x11,0);
                uVar7 = (ulong)*(uint *)(plVar6 + 3);
              }
              if (uVar7 <= uVar8) goto LAB_02b57c6c;
              FUN_02b57444();
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(int)plVar6[3]);
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
LAB_02b57c70:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


