/*
FUNCTION_NAME: UnityEngine.XR.Hand$$get_deviceId
ENTRY_POINT: 0419d620
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


/* WARNING: Removing unreachable block (ram,0x0419da50) */
/* WARNING: Removing unreachable block (ram,0x0419daa0) */
/* WARNING: Removing unreachable block (ram,0x0419da94) */

void UnityEngine_XR_Hand__get_deviceId(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar7 = (long *)FUN_041b1698(param_1,0);
  puVar5 = PTR_DAT_0458ded8;
  puVar4 = PTR_DAT_0458ded0;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0419d69c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_0419d69c:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_0419d7c8;
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_0419d7a0;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0419d6f8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0419d6f8:
    uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)puVar5;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *puVar8 = uVar9;
      thunk_FUN_01f51358(puVar8);
    }
    else {
      FUN_030f2bb4(lVar10,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar14 + -2) == lVar10) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0419d7bc;
    }
  }
LAB_0419d7a0:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_0419d7bc:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0419d7c8:
  if ((*(long *)(unaff_x20 + 0x420) == 0) ||
     (plVar7 = (long *)FUN_041a7868(*(long *)(unaff_x20 + 0x420),0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
        goto UnityEngine_XR_Bone__get_deviceId;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                        ,0);
UnityEngine_XR_Bone__get_deviceId:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = PTR_DAT_0458e0e0;
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0419d8b0;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_0419d8b0:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_0419da44;
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_0419da1c;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0419d90c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0419d90c:
    lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_041a76f4(lVar10,0);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar6);
    in_stack_00000028 = *(undefined8 *)(lVar10 + 0x10);
    thunk_FUN_01f51358((ulong)&stack0x00000020 | 8);
    in_stack_00000030 = CONCAT44(*(undefined4 *)(lVar10 + 0x44),*(undefined4 *)(lVar10 + 0x5c));
    in_stack_00000038 = CONCAT71(in_stack_00000038._1_7_,*(undefined1 *)(lVar10 + 0x40));
    lVar10 = *(long *)(unaff_x19 + 0x20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *(long *)puVar5;
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    lVar11 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      lVar11 = lVar11 + (long)(int)uVar1 * 0x20;
      *(undefined8 *)(lVar11 + 0x28) = in_stack_00000028;
      *(undefined8 *)(lVar11 + 0x20) = in_stack_00000020;
      *(undefined8 *)(lVar11 + 0x38) = in_stack_00000038;
      *(undefined8 *)(lVar11 + 0x30) = in_stack_00000030;
      thunk_FUN_01f51358(lVar11 + 0x28,0);
    }
    else {
      in_stack_00000068 = in_stack_00000028;
      in_stack_00000060 = in_stack_00000020;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      FUN_032969a4(lVar10,&stack0x00000060,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar14 + -2) == lVar10) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0419da38;
    }
  }
LAB_0419da1c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_0419da38:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0419da44:
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
}


