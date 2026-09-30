/*
FUNCTION_NAME: System.Array.InternalEnumerator<MaterialPropertyFloat>$$get_Current
ENTRY_POINT: 02e837dc
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

void System_Array_InternalEnumerator<MaterialPropertyFloat>__get_Current(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *plVar9;
  void *__src;
  undefined8 *puVar10;
  void *__s;
  long lVar11;
  long lVar12;
  long unaff_x29;
  
  lVar3 = FUN_01ecaf44();
  lVar12 = *(long *)(unaff_x20 + 0x20);
  lVar11 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar7 = unaff_x21 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar11 - uVar7);
  puVar10 = (undefined8 *)((long)__src - uVar7);
  __s = (void *)((long)puVar10 - uVar7);
  memset(__s,0,unaff_x21);
  puVar2 = Method_System_Configuration_ConfigurationElement_Reset__;
  lVar12 = *(long *)(lVar12 + 0xc0);
  lVar3 = *(long *)(lVar12 + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
    lVar12 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar3,*(undefined8 *)(lVar12 + 0x78));
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_02e838e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02e838e0:
  (*(code *)*puVar4)();
  lVar12 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar12 + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
    lVar12 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar3,*(undefined8 *)(lVar12 + 0x88),lVar11);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar9 = *(long **)(unaff_x29 + -0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02e83984;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02e83984:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_02e83b28;
      lVar3 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 == 0) goto LAB_02e83b00;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar12 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02e839fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar3 = FUN_01ecb238(plVar9,lVar3,0);
LAB_02e839fc:
    *(void **)(unaff_x29 + -0x18) = __src;
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar9,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,unaff_x21);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    memcpy(puVar10,__s,unaff_x21);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar4 = puVar10;
    if (-1 < *(int *)(*(long *)(lVar12 + 0x60) + 0x28)) {
      puVar4 = (undefined8 *)*puVar10;
    }
    puVar6 = *(undefined8 **)(lVar12 + 0xa0);
    uVar5 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    *(long **)(unaff_x29 + -0x10) = unaff_x19;
    (*(code *)puVar6[2])(uVar5,puVar6,lVar3,unaff_x29 + -0x18);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02e83b1c;
    }
  }
LAB_02e83b00:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02e83b1c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_02e83b28:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
        goto LAB_02e83b80;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238();
LAB_02e83b80:
  (*(code *)*puVar10)();
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


