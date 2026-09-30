/*
FUNCTION_NAME: FUN_03b54e18
ENTRY_POINT: 03b54e18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03b551a4) */
/* WARNING: Removing unreachable block (ram,0x03b551d0) */
/* WARNING: Removing unreachable block (ram,0x03b551f4) */

void FUN_03b54e18(undefined8 param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
                 byte *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *extraout_x1;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  
  if ((DAT_04839521 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_12314);
    thunk_FUN_01efb3a4(StringLiteral_12315);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04839521 = 1;
  }
  *param_4 = 0;
  *param_5 = 1;
  plVar8 = (long *)FUN_03b3d430(param_1,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *plVar8;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_12314) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03b54f20;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)StringLiteral_12314,0);
LAB_03b54f20:
  puVar3 = StringLiteral_12315;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  plVar8 = (long *)0x0;
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03b54f94;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03b54f94:
    uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_03b55198;
      lVar12 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_03b55170;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03b54ff0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_03b54ff0:
    iVar5 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (iVar5 == param_2) {
      if (extraout_x1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar11 = (long *)(**(code **)(*extraout_x1 + 0x178))
                                  (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x180));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03582560(plVar8,0,0);
      if ((uVar13 & 1) == 0) {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = (**(code **)(*plVar11 + 0x2a8))(plVar11,plVar8,*(undefined8 *)(*plVar11 + 0x2b0));
        if ((uVar13 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar11,*(undefined8 *)(*plVar8 + 0x2b0));
          plVar11 = plVar8;
          if ((uVar13 & 1) == 0) {
            uVar15 = *(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
            ;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar11 = (long *)FUN_03579868(uVar15,0);
          }
        }
      }
      uVar6 = (**(code **)(*extraout_x1 + 0x188))(extraout_x1,*(undefined8 *)(*extraout_x1 + 400));
      uVar7 = *param_4;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0356bc8c(uVar6,uVar7,0);
      *param_4 = uVar7;
      bVar1 = *param_5;
      bVar4 = Unity_Mathematics_double2__op_GreaterThan(extraout_x1,0);
      *param_5 = bVar4 & bVar1 & 1;
      plVar8 = plVar11;
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03b5518c;
    }
  }
LAB_03b55170:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03b5518c:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_03b55198:
  *param_3 = plVar8;
  thunk_FUN_01f51358(param_3,plVar8);
  return;
}


