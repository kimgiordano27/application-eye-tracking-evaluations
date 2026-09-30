/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 07530f2c
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

void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  void *unaff_x24;
  void *__s;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  __s = (void *)((long)unaff_x24 - in_x9);
  memset(__s,0,unaff_x21);
  lVar7 = *(long *)(*(long *)(unaff_x27 + 0xc0) + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_04481fb8(lVar7);
  }
  plVar4 = (long *)thunk_FUN_04485110();
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8(lVar7);
    }
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>__MoveNext
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar4,lVar7,0);

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
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8(lVar7);
  }
  lVar10 = *unaff_x26;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
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
    lVar7 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
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
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8(lVar7);
    }
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          lVar7 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
          goto 
          System_Array_EmptyInternalEnumerator<PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar7 = FUN_044822ac(plVar4,lVar7,0);

    System_Array_EmptyInternalEnumerator<PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_IEnumerator_get_Current
    :
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar4,unaff_x29 + -0x18);
    memcpy(__s,unaff_x24,unaff_x21);
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0);
    uVar6 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar5[2])(uVar6,puVar5,__s,unaff_x29 + -0x18);
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    uVar6 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
    (*(code *)puVar5[2])(uVar6,puVar5,__s,unaff_x29 + -0x18);
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar5 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x70) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x22;
    }
    puVar9 = unaff_x23;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x78) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x23;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0x80);
    uVar6 = *puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
    (*(code *)puVar8[2])(uVar6);
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07531294;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_07531294:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


