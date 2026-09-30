/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<AsyncGPUReadbackRequest>
ENTRY_POINT: 02411760
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02411af4) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<AsyncGPUReadbackRequest>(void)

{
  void *__src;
  code *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long in_x10;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *plVar13;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar8 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == **(long **)(in_x10 + 0x930)) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_024117b0;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_024117b0:
  pcVar1 = (code *)*puVar4;
  *(undefined8 *)(unaff_x19 + 8) = unaff_x27;
  plVar5 = (long *)(*pcVar1)();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0241181c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0241181c:
    uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar10 & 1) == 0) {
LAB_02411a44:
      lVar8 = *(long *)(unaff_x19 + 8);
      if (plVar5 == (long *)0x0) goto LAB_02411ab0;
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_02411a88;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
           ) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02411880;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                          ,0);
LAB_02411880:
    uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar13 = *(long **)(unaff_x20 + 0x38);
    __src = *(void **)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar13 + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,__src,unaff_x21);
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*plVar13 + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    puVar7 = (undefined8 *)plVar13[3];
    uVar6 = *puVar7;
    *(undefined8 **)(unaff_x19 + 0x80) = puVar4;
    *(ulong *)(unaff_x19 + 0x48) = uVar10;
    *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x48;
    (*(code *)puVar7[2])(uVar6,puVar7,0,unaff_x19 + 0x80,unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) == '\0') goto LAB_02411a44;
    lVar8 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0241194c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0241194c:
    lVar8 = (*(code *)*puVar4)();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03e1f400(unaff_x19 + 0x80,lVar8,uVar10 >> 0x20,0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x90);
    uVar2 = *(undefined4 *)(unaff_x19 + 0xb0);
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x58) = uVar15;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar14;
    uVar14 = *(undefined8 *)(unaff_x19 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined4 *)(unaff_x29 + -0x40) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x30);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar14;
    *(undefined8 *)(unaff_x29 + -0x50) = uVar6;
    lVar8 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_024119e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_024119e8:
    lVar8 = (*(code *)*puVar4)();
    uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar15 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar14 = *(undefined8 *)(unaff_x29 + -0x60);
    uVar17 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar16 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar2 = *(undefined4 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x19 + 0x80) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x98) = uVar15;
    *(undefined8 *)(unaff_x19 + 0x90) = uVar14;
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar17;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar16;
    *(undefined4 *)(unaff_x19 + 0xb0) = uVar2;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x19 + 0xb0);
    FUN_03e1f16c(lVar8,uVar10 >> 0x20,unaff_x19 + 0x10,1,0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02411aa4;
    }
  }
LAB_02411a88:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02411aa4:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02411ab0:
  if (*(long *)(lVar8 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


