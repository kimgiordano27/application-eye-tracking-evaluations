/*
FUNCTION_NAME: System.Array.InternalEnumerator<MaterialPropertyFloat>$$Dispose
ENTRY_POINT: 02e83788
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e83bc8) */
/* WARNING: Removing unreachable block (ram,0x02e83bd8) */

void System_Array_InternalEnumerator<MaterialPropertyFloat>__Dispose(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ushort *in_x9;
  ulong uVar10;
  long in_x10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar12;
  long *plVar13;
  void *__src;
  undefined8 *puVar14;
  void *__s;
  long lVar15;
  long unaff_x28;
  long unaff_x29;
  
  uVar1 = *in_x9;
  uVar12 = (ulong)*(uint *)(in_x10 + 0xfc);
  lVar7 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_01ecaf44(param_1);
    unaff_x28 = *(long *)(unaff_x20 + 0x20);
    lVar7 = *(long *)(*(long *)(unaff_x28 + 0xc0) + 0x48);
    uVar1 = *(ushort *)(lVar7 + 0x135);
  }
  lVar9 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    unaff_x28 = *(long *)(unaff_x20 + 0x20);
  }
  lVar15 = lVar9 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar10 = uVar12 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar15 - uVar10);
  puVar14 = (undefined8 *)((long)__src - uVar10);
  __s = (void *)((long)puVar14 - uVar10);
  memset(__s,0,uVar12);
  puVar3 = Method_System_Configuration_ConfigurationElement_Reset__;
  lVar8 = *(long *)(unaff_x28 + 0xc0);
  lVar7 = *(long *)(lVar8 + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar7,*(undefined8 *)(lVar8 + 0x78),lVar9);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
        goto LAB_02e838e0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02e838e0:
  (*(code *)*puVar4)();
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar9 + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar7,*(undefined8 *)(lVar9 + 0x88),lVar15);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar13 = *(long **)(unaff_x29 + -0x18);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02e83984;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_02e83984:
    uVar10 = (*(code *)*puVar4)(plVar13,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar13 == (long *)0x0) goto LAB_02e83b28;
      lVar7 = *plVar13;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 == 0) goto LAB_02e83b00;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          lVar7 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_02e839fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar7 = FUN_01ecb238(plVar13,lVar7,0);
LAB_02e839fc:
    *(void **)(unaff_x29 + -0x18) = __src;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar13,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,uVar12);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    memcpy(puVar14,__s,uVar12);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar4 = puVar14;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x60) + 0x28)) {
      puVar4 = (undefined8 *)*puVar14;
    }
    puVar6 = *(undefined8 **)(lVar9 + 0xa0);
    uVar5 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar6[2])(uVar5,puVar6,lVar7,unaff_x29 + -0x18);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar11 = piVar11 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar14 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02e83b1c;
    }
  }
LAB_02e83b00:
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar13,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02e83b1c:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_02e83b28:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar12 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar14 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
        goto LAB_02e83b80;
      }
      uVar12 = uVar12 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar12 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238();
LAB_02e83b80:
  (*(code *)*puVar14)();
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


