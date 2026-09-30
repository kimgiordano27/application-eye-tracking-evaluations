/*
FUNCTION_NAME: UnityEngine.Object$$CompareBaseObjects
ENTRY_POINT: 03f765c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f769e0) */

byte UnityEngine_Object__CompareBaseObjects(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long in_x10;
  int *piVar13;
  byte bVar14;
  long *unaff_x20;
  byte bVar15;
  undefined8 uVar16;
  bool bVar17;
  long *unaff_x24;
  long *unaff_x25;
  
  lVar10 = *param_1;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == **(long **)(in_x10 + 0x1b0)) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03f7673c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_1,**(long **)(in_x10 + 0x1b0),0);
LAB_03f7673c:
  plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
  puVar3 = StringLiteral_5820;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      lVar10 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto UnityEngine_Object__set_name;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
UnityEngine_Object__set_name:
      uVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar12 & 1) == 0) {
        bVar14 = 0;
        bVar15 = 0;
        goto LAB_03f76938;
      }
      lVar10 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03f76808;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03f76808:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
    } while ((uVar12 & 1) == 0);
    uVar7 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_03582560(uVar7);
  } while ((uVar12 & 1) == 0);
  lVar10 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
  lVar8 = (**(code **)(*unaff_x20 + 0x478))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = (int)*(ulong *)(lVar8 + 0x18);
  bVar17 = 0 < iVar9;
  if (0 < iVar9) {
    uVar12 = 0;
    uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
    do {
      if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar7 = *(undefined8 *)(lVar8 + 0x20 + uVar12 * 8);
      uVar16 = *(undefined8 *)(lVar10 + 0x20 + uVar12 * 8);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03f762bc(uVar7,uVar16);
      if ((uVar11 & 1) == 0) break;
      uVar1 = *(uint *)(lVar8 + 0x18);
      uVar11 = (ulong)uVar1;
      uVar12 = uVar12 + 1;
      bVar17 = (long)uVar12 < (long)(int)uVar1;
    } while ((long)uVar12 < (long)(int)uVar1);
  }
  bVar15 = bVar17 ^ 1;
  bVar14 = 1;
LAB_03f76938:
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03f76990;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03f76990:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  return bVar14 & bVar15;
}


