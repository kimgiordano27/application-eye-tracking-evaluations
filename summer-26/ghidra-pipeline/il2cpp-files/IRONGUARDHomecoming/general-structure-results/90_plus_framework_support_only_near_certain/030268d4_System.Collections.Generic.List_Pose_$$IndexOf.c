/*
FUNCTION_NAME: System.Collections.Generic.List<Pose>$$IndexOf
ENTRY_POINT: 030268d4
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

void System_Collections_Generic_List<Pose>__IndexOf(ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong __n;
  void *__s;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01ecaf44();
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x48) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  puVar10 = (undefined8 *)(&stack0x00000000 + -uVar12);
  __s = (void *)((long)puVar10 - uVar12);
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  memset(__s,0,__n);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar11 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03026998;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03026998:
  plVar9 = (long *)(*(code *)*puVar8)();
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x21 + 0x20);
  *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x21 + 0x28);
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03026a10;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar6,0);
LAB_03026a10:
    uVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      iVar3 = *(int *)(unaff_x29 + -0x2c);
      iVar1 = *(int *)(unaff_x21 + 0x28);
      *(int *)(unaff_x21 + 0x28) = iVar3;
      *(int *)(unaff_x21 + 0x2c) = (iVar3 + *(int *)(unaff_x21 + 0x2c)) - iVar1;
      if (plVar9 == (long *)0x0) goto LAB_03026ca0;
      lVar7 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 == 0) goto LAB_03026c78;
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar7) {
          lVar7 = lVar11 + (long)*piVar13 * 0x10 + 0x138;
          goto LAB_03026a94;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    lVar7 = FUN_01ecb238(plVar9,lVar7,0);
LAB_03026a94:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar9,unaff_x29 + -0x20,puVar10);
    memcpy(__s,puVar10,__n);
    plVar14 = *(long **)(unaff_x29 + -0x28);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = *(uint *)(unaff_x29 + -0x2c);
    uVar2 = *(uint *)(plVar14 + 3);
    memcpy(puVar10,__s,__n);
    if (uVar5 < uVar2) {
      if (*(uint *)(plVar14 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar14 + (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar5 + 0x20),
             puVar10,__n);
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar14 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar7,(long)plVar14 +
                         (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar5 + 0x20,puVar10);
    }
    else {
      lVar11 = *(long *)(unaff_x20 + 0x20);
      uVar4 = *(ushort *)(lVar11 + 0x135);
      lVar7 = lVar11;
      if ((uVar4 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
        lVar11 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *(ushort *)(lVar11 + 0x135);
      }
      uVar15 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x50);
      lVar7 = lVar11;
      if ((uVar4 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
        lVar11 = *(long *)(unaff_x20 + 0x20);
        uVar4 = *(ushort *)(lVar11 + 0x135);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x50);
      if ((uVar4 & 1) == 0) {
        lVar11 = FUN_01ecaf44();
      }
      puVar8 = puVar10;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x48) + 0x28)) {
        puVar8 = (undefined8 *)*puVar10;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x28;
      *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x2c;
      (**(code **)(lVar7 + 0x10))(uVar15,lVar7);
    }
    *(int *)(unaff_x29 + -0x2c) = *(int *)(unaff_x29 + -0x2c) + 1;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03026c94;
    }
  }
LAB_03026c78:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03026c94:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03026ca0:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


