/*
FUNCTION_NAME: Unity.Mathematics.uint4x4$$op_Subtraction
ENTRY_POINT: 03b54f70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b551a4) */
/* WARNING: Removing unreachable block (ram,0x03b551d0) */
/* WARNING: Removing unreachable block (ram,0x03b551f4) */

void Unity_Mathematics_uint4x4__op_Subtraction(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *extraout_x1;
  long lVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  byte *unaff_x22;
  undefined4 *unaff_x23;
  int unaff_w24;
  undefined8 uVar11;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x03b54f70:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_03b54f60;
LAB_03b54f78:
  puVar6 = (undefined8 *)FUN_01ecb238();
  plVar10 = unaff_x21;
  do {
    uVar7 = (*(code *)*puVar6)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_03b55198;
      lVar8 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 == 0) goto LAB_03b55170;
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b54ff0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03b54ff0:
    iVar3 = (*(code *)*puVar6)();
    unaff_x21 = plVar10;
    if (iVar3 == unaff_w24) {
      if (extraout_x1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x21 = (long *)(**(code **)(*extraout_x1 + 0x178))
                                    (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x180));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03582560(plVar10,0,0);
      if ((uVar7 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = (**(code **)(*unaff_x21 + 0x2a8))
                          (unaff_x21,plVar10,*(undefined8 *)(*unaff_x21 + 0x2b0));
        if ((uVar7 & 1) == 0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = (**(code **)(*plVar10 + 0x2a8))
                            (plVar10,unaff_x21,*(undefined8 *)(*plVar10 + 0x2b0));
          unaff_x21 = plVar10;
          if ((uVar7 & 1) == 0) {
            uVar11 = *(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
            ;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            unaff_x21 = (long *)FUN_03579868(uVar11,0);
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
    param_1 = *unaff_x20;
    param_3 = *unaff_x29;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03b54f78;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03b54f60:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x03b54f70;
    }
    puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    plVar10 = unaff_x21;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03b5518c;
    }
  }
LAB_03b55170:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03b5518c:
  (*(code *)*puVar6)();
LAB_03b55198:
  *unaff_x19 = plVar10;
  thunk_FUN_01f51358();
  return;
}


