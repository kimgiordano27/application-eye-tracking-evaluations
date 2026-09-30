/*
FUNCTION_NAME: Unity.Mathematics.uint4x4$$op_Subtraction
ENTRY_POINT: 03b54f0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03b551a4) */
/* WARNING: Removing unreachable block (ram,0x03b551d0) */
/* WARNING: Removing unreachable block (ram,0x03b551f4) */

void Unity_Mathematics_uint4x4__op_Subtraction(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *extraout_x1;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long *plVar14;
  byte *unaff_x22;
  undefined4 *unaff_x23;
  int unaff_w24;
  undefined8 uVar15;
  
  puVar8 = (undefined8 *)FUN_01ecb238();
  puVar3 = StringLiteral_12315;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar9 = (long *)(*(code *)*puVar8)();
  plVar14 = (long *)0x0;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03b54f94;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03b54f94:
    uVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_03b55198;
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03b55170;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03b54ff0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03b54ff0:
    iVar5 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (iVar5 == unaff_w24) {
      if (extraout_x1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar10 = (long *)(**(code **)(*extraout_x1 + 0x178))
                                  (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x180));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03582560(plVar14,0,0);
      if ((uVar12 & 1) == 0) {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar14,*(undefined8 *)(*plVar10 + 0x2b0));
        if ((uVar12 & 1) == 0) {
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = (**(code **)(*plVar14 + 0x2a8))
                             (plVar14,plVar10,*(undefined8 *)(*plVar14 + 0x2b0));
          plVar10 = plVar14;
          if ((uVar12 & 1) == 0) {
            uVar15 = *(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
            ;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar10 = (long *)FUN_03579868(uVar15,0);
          }
        }
      }
      uVar6 = (**(code **)(*extraout_x1 + 0x188))(extraout_x1,*(undefined8 *)(*extraout_x1 + 400));
      uVar7 = *unaff_x23;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0356bc8c(uVar6,uVar7,0);
      *unaff_x23 = uVar7;
      bVar1 = *unaff_x22;
      bVar4 = Unity_Mathematics_double2__op_GreaterThan(extraout_x1,0);
      *unaff_x22 = bVar4 & bVar1 & 1;
      plVar14 = plVar10;
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03b5518c;
    }
  }
LAB_03b55170:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03b5518c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_03b55198:
  *unaff_x19 = plVar14;
  thunk_FUN_01f51358();
  return;
}


