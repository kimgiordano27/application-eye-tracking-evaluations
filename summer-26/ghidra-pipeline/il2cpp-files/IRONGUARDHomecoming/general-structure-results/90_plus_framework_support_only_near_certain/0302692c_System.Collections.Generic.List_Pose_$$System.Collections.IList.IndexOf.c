/*
FUNCTION_NAME: System.Collections.Generic.List<Pose>$$System.Collections.IList.IndexOf
ENTRY_POINT: 0302692c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03026cec) */

void System_Collections_Generic_List<Pose>__System_Collections_IList_IndexOf
               (ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  void *unaff_x24;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01ecaf44();
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0xc0) + 0x28);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03026998;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03026998:
  plVar8 = (long *)(*(code *)*puVar7)();
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x21 + 0x28);
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03026a10;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_03026a10:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      iVar3 = *(int *)(unaff_x29 + -0x2c);
      iVar1 = *(int *)(unaff_x21 + 0x28);
      *(int *)(unaff_x21 + 0x28) = iVar3;
      *(int *)(unaff_x21 + 0x2c) = (iVar3 + *(int *)(unaff_x21 + 0x2c)) - iVar1;
      if (plVar8 == (long *)0x0) goto LAB_03026ca0;
      lVar9 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_03026c78;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          lVar9 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_03026a94;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar9 = FUN_01ecb238(plVar8,lVar9,0);
LAB_03026a94:
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar8,unaff_x29 + -0x20);
    memcpy(unaff_x24,unaff_x23,unaff_x22);
    plVar13 = *(long **)(unaff_x29 + -0x28);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = *(uint *)(unaff_x29 + -0x2c);
    uVar2 = *(uint *)(plVar13 + 3);
    memcpy(unaff_x23,unaff_x24,unaff_x22);
    if (uVar5 < uVar2) {
      if (*(uint *)(plVar13 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar13 + (ulong)*(uint *)(*plVar13 + 0x104) * (long)(int)uVar5 + 0x20),
             unaff_x23,unaff_x22);
      lVar9 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar13 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar9,(long)plVar13 +
                         (ulong)*(uint *)(*plVar13 + 0x104) * (long)(int)uVar5 + 0x20);
    }
    else {
      lVar10 = *(long *)(unaff_x20 + 0x20);
      uVar4 = *(ushort *)(lVar10 + 0x135);
      lVar9 = lVar10;
      if ((uVar4 & 1) == 0) {
        lVar9 = FUN_01ecaf44();
        lVar10 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *(ushort *)(lVar10 + 0x135);
      }
      uVar14 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x50);
      lVar9 = lVar10;
      if ((uVar4 & 1) == 0) {
        lVar9 = FUN_01ecaf44();
        lVar10 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *(ushort *)(lVar10 + 0x135);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
      if ((uVar4 & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      puVar7 = unaff_x23;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x48) + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x23;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x28;
      *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x2c;
      (**(code **)(lVar9 + 0x10))(uVar14,lVar9);
    }
    *(int *)(unaff_x29 + -0x2c) = *(int *)(unaff_x29 + -0x2c) + 1;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03026c94;
    }
  }
LAB_03026c78:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03026c94:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_03026ca0:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


