/*
FUNCTION_NAME: System.Collections.Generic.List<Pose>$$Insert
ENTRY_POINT: 03026a38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03026cec) */

void System_Collections_Generic_List<Pose>__Insert(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  void *unaff_x24;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_01ecaf44(param_2);
    }
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == param_2) {
          lVar8 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_03026a94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar8 = FUN_01ecb238();
LAB_03026a94:
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
    (**(code **)(*(long *)(lVar8 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 8) + 8));
    memcpy(unaff_x24,unaff_x23,unaff_x22);
    plVar11 = *(long **)(unaff_x29 + -0x28);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = *(uint *)(unaff_x29 + -0x2c);
    uVar2 = *(uint *)(plVar11 + 3);
    memcpy(unaff_x23,unaff_x24,unaff_x22);
    if (uVar5 < uVar2) {
      if (*(uint *)(plVar11 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar5 + 0x20),
             unaff_x23,unaff_x22);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar11 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar8,(long)plVar11 +
                         (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar5 + 0x20);
    }
    else {
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar4 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar4 & 1) == 0) {
        lVar8 = FUN_01ecaf44();
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *(ushort *)(lVar7 + 0x135);
      }
      uVar12 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x50);
      lVar8 = lVar7;
      if ((uVar4 & 1) == 0) {
        lVar8 = FUN_01ecaf44();
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *(ushort *)(lVar7 + 0x135);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x50);
      if ((uVar4 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      puVar6 = unaff_x23;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x48) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x23;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x28;
      *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x2c;
      (**(code **)(lVar8 + 0x10))(uVar12,lVar8);
    }
    *(int *)(unaff_x29 + -0x2c) = *(int *)(unaff_x29 + -0x2c) + 1;
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03026a10;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03026a10:
    uVar9 = (*(code *)*puVar6)();
    if ((uVar9 & 1) == 0) break;
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    param_2 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
  } while( true );
  iVar3 = *(int *)(unaff_x29 + -0x2c);
  iVar1 = *(int *)(unaff_x21 + 0x28);
  *(int *)(unaff_x21 + 0x28) = iVar3;
  *(int *)(unaff_x21 + 0x2c) = (iVar3 + *(int *)(unaff_x21 + 0x2c)) - iVar1;
  if (unaff_x19 != (long *)0x0) {
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03026c94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03026c94:
    (*(code *)*puVar6)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


