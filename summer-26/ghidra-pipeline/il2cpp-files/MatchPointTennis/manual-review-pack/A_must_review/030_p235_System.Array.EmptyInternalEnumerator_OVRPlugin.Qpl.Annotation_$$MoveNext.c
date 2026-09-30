/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 07530ec4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x075312ec) */

void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong __n;
  undefined8 *puVar13;
  void *__src;
  void *__s;
  long *unaff_x26;
  long lVar14;
  long unaff_x29;
  
  FUN_04447ba8(PTR_DAT_09f1f018);
  *(undefined1 *)(unaff_x21 + 0xa23) = 1;
  lVar14 = *(long *)(unaff_x19 + 0x20);
  lVar10 = *(long *)(lVar14 + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0xa8) + 0xfc);
  puVar7 = (undefined8 *)
           (&stack0x00000000 +
           -((ulong)*(uint *)(*(long *)(lVar10 + 0x70) + 0xfc) + 0xf & 0x1fffffff0));
  puVar13 = (undefined8 *)
            ((long)puVar7 - ((ulong)*(uint *)(*(long *)(lVar10 + 0x78) + 0xfc) + 0xf & 0x1fffffff0))
  ;
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)puVar13 - uVar11);
  __s = (void *)((long)__src - uVar11);
  memset(__s,0,__n);
  lVar10 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x48);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    FUN_04481fb8(lVar10);
  }
  plVar4 = (long *)thunk_FUN_04485110();
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_04481fb8(lVar10);
    }
    lVar14 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>__MoveNext
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar4,lVar10,0);

    System_Array_EmptyInternalEnumerator<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>__MoveNext
    :
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  (**(code **)**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0))
            (unaff_x20,uVar3,*(undefined8 *)(unaff_x29 + -0x20));
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(6,0);
  }
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04481fb8(lVar10);
  }
  lVar14 = *unaff_x26;
  uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar10) {
        puVar5 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0753108c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac();
LAB_0753108c:
  puVar1 = PTR_DAT_09f1f008;
  plVar4 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_075310fc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_075310fc:
    uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_04481fb8(lVar10);
    }
    lVar14 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          lVar10 = lVar14 + (long)*piVar12 * 0x10 + 0x138;
          goto 
          System_Array_EmptyInternalEnumerator<PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar10 = FUN_044822ac(plVar4,lVar10,0);

    System_Array_EmptyInternalEnumerator<PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_IEnumerator_get_Current
    :
    *(void **)(unaff_x29 + -0x18) = __src;
    lVar10 = *(long *)(lVar10 + 8);
    (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar4,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,__n);
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0);
    uVar6 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    (*(code *)puVar5[2])(uVar6,puVar5,__s,unaff_x29 + -0x18,puVar7);
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    uVar6 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar13;
    (*(code *)puVar5[2])(uVar6,puVar5,__s,unaff_x29 + -0x18,puVar13);
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar5 = puVar7;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x70) + 0x28)) {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar9 = puVar13;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x78) + 0x28)) {
      puVar9 = (undefined8 *)*puVar13;
    }
    puVar8 = *(undefined8 **)(lVar10 + 0x80);
    uVar6 = *puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
    (*(code *)puVar8[2])(uVar6);
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07531294;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_07531294:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


