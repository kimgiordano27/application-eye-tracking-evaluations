/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_firstPerson_lookAtHorizontalOuter
ENTRY_POINT: 0388dd2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void VRM_VRMSerializer__Serialize_vrm_firstPerson_lookAtHorizontalOuter(void)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x25;
  
  plVar9 = (long *)FUN_038a9038();
  if (plVar9 == (long *)0x0) {
    return;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_03cd79f8 + 0x130);
  if (*(byte *)(*plVar9 + 0x130) < bVar3) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = plVar9;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03cd79f8) {
      plVar12 = (long *)0x0;
    }
  }
  if (unaff_x19 == (long *)0x0) goto LAB_0388e1f4;
  lVar10 = (**(code **)(*unaff_x19 + 0x188))();
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray_Enumerator<SystemTypeIndex>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_Unity_Collections_NativeArray_Enumerator<SystemTypeIndex>_MoveNext__)
    ;
  }
  lVar11 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<Vector3>_Dispose__);
  if (((plVar12 != (long *)0x0) && (lVar10 != lVar11)) &&
     (lVar10 = FUN_038d6348(plVar12,0), lVar10 == 0)) {
    FUN_038a4644(plVar12,0);
    return;
  }
  if ((plVar12 != (long *)0x0) && (plVar12 = (long *)FUN_038d6348(plVar12,0), plVar12 != unaff_x21))
  {
    return;
  }
  puVar7 = PTR_DAT_03cdb9a0;
  plVar12 = (long *)thunk_FUN_01a89d6c();
  if (plVar12 == (long *)0x0) {
LAB_0388de28:
    if (((*(byte *)(unaff_x19 + 8) >> 5 & 1) == 0) ||
       ((unaff_x19[0xe] == 0 || (unaff_x19[10] != 0)))) {
      bVar6 = false;
      bVar5 = false;
    }
    else {
      bVar6 = false;
      bVar5 = true;
    }
  }
  else {
    bVar6 = true;
    bVar5 = true;
    if (((long *)unaff_x19[10] != (long *)0x0) && ((long *)unaff_x19[10] != plVar9))
    goto LAB_0388de28;
  }
  lVar10 = (**(code **)(*unaff_x19 + 0x188))();
  if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet_Enumerator<Tick>_MoveNext__ + 0xe0
              ) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_System_Collections_Generic_HashSet_Enumerator<Tick>_MoveNext__);
  }
  lVar11 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_HashSet_Enumerator<Tick>_Dispose__);
  if (lVar10 == lVar11) {
    return;
  }
  lVar10 = (**(code **)(*unaff_x19 + 0x188))();
  if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet_Enumerator<Tick>_get_Current__ +
              0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_System_Collections_Generic_HashSet_Enumerator<Tick>_get_Current__);
  }
  lVar11 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<ThreadType>_get_Current__
                       );
  if (lVar10 == lVar11) {
    return;
  }
  lVar10 = (**(code **)(*unaff_x19 + 0x188))();
  if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<TimelineClip>_MoveNext__ +
              0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<TimelineClip>_MoveNext__);
  }
  lVar11 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__)
  ;
  puVar8 = PTR_DAT_03cdbe68;
  if (!bVar5) {
    return;
  }
  if (lVar10 == lVar11) {
    return;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_03cdb970 + 0x130);
  if (bVar3 <= *(byte *)(*unaff_x21 + 0x130)) {
    if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03cdb970)
    {
      unaff_x21 = (long *)0x0;
    }
    if ((plVar12 != (long *)0x0) && (unaff_x21 != (long *)0x0)) {
      plVar13 = (long *)thunk_FUN_01a89d6c(plVar12,*(undefined8 *)PTR_DAT_03cdbe68);
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar13;
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
              puVar14 = (undefined8 *)(lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_0388dff0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)puVar8,2);
LAB_0388dff0:
        uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if ((uVar15 & 1) == 0) goto LAB_0388e08c;
      }
      lVar10 = *unaff_x25;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *unaff_x25;
      }
      lVar11 = *plVar12;
      uVar1 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
            puVar14 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0388e06c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)puVar7,1);
LAB_0388e06c:
      (*(code *)*puVar14)(plVar12,puVar14[1]);
      FUN_038a5aac(unaff_x21,uVar1);
    }
  }
LAB_0388e08c:
  *(uint *)(unaff_x19 + 8) = *(uint *)(unaff_x19 + 8) | 0x208;
  FUN_038856e4();
  puVar7 = PTR_DAT_03cd81d8;
  uVar2 = *(uint *)(unaff_x19 + 6);
  *(uint *)(unaff_x19 + 6) = uVar2 & 0xfffffff7;
  bVar3 = *(byte *)(*(long *)puVar7 + 0x130);
  if ((bVar3 <= *(byte *)(*plVar9 + 0x130)) &&
     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)puVar7)) {
    FUN_0388a9a4(plVar9);
  }
  if (!bVar6) {
    FUN_038856e4();
    *(uint *)(unaff_x19 + 6) = *(uint *)(unaff_x19 + 6) & 0xfffffff7 | uVar2 & 8;
  }
  (**(code **)(*unaff_x19 + 0x1e8))();
  *(undefined4 *)(unaff_x19 + 0xc) = 0;
  *(uint *)(unaff_x19 + 8) = *(uint *)(unaff_x19 + 8) & 0xfffffff7;
  puVar7 = Method_System_Collections_Generic_HashSet_Enumerator<TalkiesBase>_get_Current__;
  if (unaff_x19[0xb] != 0) {
    FUN_01b5f01c(unaff_x19[0xb],plVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet_Enumerator<TalkiesBase>_get_Current__);
    uVar2 = *(uint *)(unaff_x19 + 8);
    plVar9 = (long *)unaff_x19[10];
    uVar4 = uVar2 & 0xffffffbf | (uint)bVar6 << 6;
    *(uint *)(unaff_x19 + 8) = uVar4;
    if (plVar9 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<Thread,_StackTrace>_Remove__ +
                       0x130);
      if ((bVar3 <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) ==
          *(long *)Method_System_Collections_Generic_Dictionary<Thread,_StackTrace>_Remove__)) {
        *(uint *)(unaff_x19 + 8) = uVar4 | 0x80;
        if (unaff_x19[0xb] != 0) {
          FUN_01b5f01c(unaff_x19[0xb],plVar9,*(undefined8 *)puVar7);
          return;
        }
        goto LAB_0388e1f4;
      }
    }
    *(uint *)(unaff_x19 + 8) = uVar2 & 0xffffff3f | (uint)bVar6 << 6;
    return;
  }
LAB_0388e1f4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


