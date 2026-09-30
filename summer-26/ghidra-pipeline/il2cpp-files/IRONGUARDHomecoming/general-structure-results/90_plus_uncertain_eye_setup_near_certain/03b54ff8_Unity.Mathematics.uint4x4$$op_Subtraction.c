/*
FUNCTION_NAME: Unity.Mathematics.uint4x4$$op_Subtraction
ENTRY_POINT: 03b54ff8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b551a4) */
/* WARNING: Removing unreachable block (ram,0x03b551d0) */
/* WARNING: Removing unreachable block (ram,0x03b551f4) */

void Unity_Mathematics_uint4x4__op_Subtraction(code *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *extraout_x1;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  byte *unaff_x22;
  undefined4 *unaff_x23;
  int unaff_w24;
  undefined8 uVar11;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    iVar3 = (*param_1)();
    plVar7 = unaff_x21;
    if (iVar3 == unaff_w24) {
      if (extraout_x1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar7 = (long *)(**(code **)(*extraout_x1 + 0x178))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x180));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_03582560(unaff_x21,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = (**(code **)(*plVar7 + 0x2a8))(plVar7,unaff_x21,*(undefined8 *)(*plVar7 + 0x2b0));
        if ((uVar8 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = (**(code **)(*unaff_x21 + 0x2a8))
                            (unaff_x21,plVar7,*(undefined8 *)(*unaff_x21 + 0x2b0));
          plVar7 = unaff_x21;
          if ((uVar8 & 1) == 0) {
            uVar11 = *(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
            ;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar7 = (long *)FUN_03579868(uVar11,0);
          }
        }
      }
      uVar4 = (**(code **)(*extraout_x1 + 0x188))(extraout_x1,*(undefined8 *)(*extraout_x1 + 400));
      uVar5 = *unaff_x23;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0356bc8c(uVar4,uVar5,0);
      *unaff_x23 = uVar5;
      bVar1 = *unaff_x22;
      bVar2 = Unity_Mathematics_double2__op_GreaterThan(extraout_x1,0);
      *unaff_x22 = bVar2 & bVar1 & 1;
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x29) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b54f94;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03b54f94:
    uVar8 = (*(code *)*puVar6)();
    if ((uVar8 & 1) == 0) break;
    lVar9 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b54ff0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03b54ff0:
    param_1 = (code *)*puVar6;
    unaff_x21 = plVar7;
  } while( true );
  if (unaff_x20 != (long *)0x0) {
    lVar9 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b5518c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03b5518c:
    (*(code *)*puVar6)();
  }
  *unaff_x19 = (long)plVar7;
  thunk_FUN_01f51358();
  return;
}


