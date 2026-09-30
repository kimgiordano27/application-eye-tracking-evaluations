/*
FUNCTION_NAME: UnityEngine.XR.InputDevice$$GetHashCode
ENTRY_POINT: 0419d5f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419da50) */
/* WARNING: Removing unreachable block (ram,0x0419daa0) */
/* WARNING: Removing unreachable block (ram,0x0419da94) */

void UnityEngine_XR_InputDevice__GetHashCode(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
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
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0358d1e4(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
  }
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x3d8) != 0)) {
    plVar8 = (long *)FUN_041b1698(*(long *)(unaff_x20 + 0x3d8),0);
    puVar6 = PTR_DAT_0458ded8;
    puVar5 = PTR_DAT_0458ded0;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0419d69c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_0419d69c:
      uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0419d7c8;
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_0419d7a0;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0419d788;
      }
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0419d6f8;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_0419d6f8:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar14 = *(long *)puVar6;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
        puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *puVar9 = uVar10;
        thunk_FUN_01f51358(puVar9);
      }
      else {
        FUN_030f2bb4(lVar11,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_0419da8c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_0419da04:
    if (*(long *)(piVar15 + -2) == lVar11) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0419da38;
    }
  }
LAB_0419da1c:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_0419da38:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0419da44:
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_0419d788:
    if (*(long *)(piVar15 + -2) == lVar11) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0419d7bc;
    }
  }
LAB_0419d7a0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_0419d7bc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0419d7c8:
  if ((*(long *)(unaff_x20 + 0x420) != 0) &&
     (plVar8 = (long *)FUN_041a7868(*(long *)(unaff_x20 + 0x420),0), plVar8 != (long *)0x0)) {
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto UnityEngine_XR_Bone__get_deviceId;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
UnityEngine_XR_Bone__get_deviceId:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar6 = PTR_DAT_0458e0e0;
    puVar5 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0419d8b0;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_0419d8b0:
      uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0419da44;
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_0419da1c;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0419da04;
      }
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0419d90c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_0419d90c:
      lVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = FUN_041a76f4(lVar11,0);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar7);
      in_stack_00000028 = *(undefined8 *)(lVar11 + 0x10);
      thunk_FUN_01f51358((ulong)&stack0x00000020 | 8);
      in_stack_00000030 = CONCAT44(*(undefined4 *)(lVar11 + 0x44),*(undefined4 *)(lVar11 + 0x5c));
      in_stack_00000038 = CONCAT71(in_stack_00000038._1_7_,*(undefined1 *)(lVar11 + 0x40));
      lVar11 = *(long *)(unaff_x19 + 0x20);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar14 = *(long *)puVar6;
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      lVar12 = *(long *)(lVar11 + 0x10);
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(lVar11 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar2 + 1;
        lVar12 = lVar12 + (long)(int)uVar2 * 0x20;
        *(undefined8 *)(lVar12 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar12 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar12 + 0x38) = in_stack_00000038;
        *(undefined8 *)(lVar12 + 0x30) = in_stack_00000030;
        thunk_FUN_01f51358(lVar12 + 0x28,0);
      }
      else {
        in_stack_00000068 = in_stack_00000028;
        in_stack_00000060 = in_stack_00000020;
        in_stack_00000078 = in_stack_00000038;
        in_stack_00000070 = in_stack_00000030;
        FUN_032969a4(lVar11,&stack0x00000060,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
LAB_0419da8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


