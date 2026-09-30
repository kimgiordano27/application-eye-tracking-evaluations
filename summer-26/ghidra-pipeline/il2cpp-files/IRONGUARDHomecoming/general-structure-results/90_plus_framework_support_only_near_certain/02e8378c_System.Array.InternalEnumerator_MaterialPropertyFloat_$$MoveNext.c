/*
FUNCTION_NAME: System.Array.InternalEnumerator<MaterialPropertyFloat>$$MoveNext
ENTRY_POINT: 02e8378c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e83bc8) */
/* WARNING: Removing unreachable block (ram,0x02e83bd8) */

void System_Array_InternalEnumerator<MaterialPropertyFloat>__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ushort in_w9;
  ulong uVar9;
  long in_x10;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar11;
  long *plVar12;
  void *__src;
  undefined8 *puVar13;
  void *__s;
  long lVar14;
  long unaff_x28;
  long unaff_x29;
  
  uVar11 = (ulong)*(uint *)(in_x10 + 0xfc);
  lVar6 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_01ecaf44(param_1);
    unaff_x28 = *(long *)(unaff_x20 + 0x20);
    lVar6 = *(long *)(*(long *)(unaff_x28 + 0xc0) + 0x48);
    in_w9 = *(ushort *)(lVar6 + 0x135);
  }
  lVar8 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((in_w9 & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
    unaff_x28 = *(long *)(unaff_x20 + 0x20);
  }
  lVar14 = lVar8 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar9 = uVar11 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar14 - uVar9);
  puVar13 = (undefined8 *)((long)__src - uVar9);
  __s = (void *)((long)puVar13 - uVar9);
  memset(__s,0,uVar11);
  puVar2 = Method_System_Configuration_ConfigurationElement_Reset__;
  lVar7 = *(long *)(unaff_x28 + 0xc0);
  lVar6 = *(long *)(lVar7 + 0x48);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar6,*(undefined8 *)(lVar7 + 0x78),lVar8);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_02e838e0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02e838e0:
  (*(code *)*puVar3)();
  lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar8 + 0x48);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar6,*(undefined8 *)(lVar8 + 0x88),lVar14);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar12 = *(long **)(unaff_x29 + -0x18);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e83984;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_02e83984:
    uVar9 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar12 == (long *)0x0) goto LAB_02e83b28;
      lVar6 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 == 0) goto LAB_02e83b00;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          lVar6 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02e839fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar6 = FUN_01ecb238(plVar12,lVar6,0);
LAB_02e839fc:
    *(void **)(unaff_x29 + -0x18) = __src;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar12,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,uVar11);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    memcpy(puVar13,__s,uVar11);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar3 = puVar13;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x60) + 0x28)) {
      puVar3 = (undefined8 *)*puVar13;
    }
    puVar5 = *(undefined8 **)(lVar8 + 0xa0);
    uVar4 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar5[2])(uVar4,puVar5,lVar6,unaff_x29 + -0x18);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar10 = piVar10 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02e83b1c;
    }
  }
LAB_02e83b00:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02e83b1c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_02e83b28:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar13 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_02e83b80;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ecb238();
LAB_02e83b80:
  (*(code *)*puVar13)();
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


