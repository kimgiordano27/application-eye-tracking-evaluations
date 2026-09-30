/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_firstPerson_lookAtHorizontalInner
ENTRY_POINT: 0388dc28
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void VRM_VRMSerializer__Serialize_vrm_firstPerson_lookAtHorizontalInner
               (undefined8 param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int *piVar17;
  
  if ((DAT_04138167 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb970);
    FUN_01ab69ac(PTR_DAT_03cd81d8);
    FUN_01ab69ac(Method_System_Collections_Generic_List_Enumerator<Vector3>_Dispose__);
    FUN_01ab69ac(Method_System_Collections_Generic_List_Enumerator<ThreadType>_get_Current__);
    FUN_01ab69ac(Method_System_Collections_Generic_HashSet_Enumerator<Tick>_Dispose__);
    FUN_01ab69ac(Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__);
    FUN_01ab69ac(Method_Unity_Collections_NativeArray_Enumerator<SystemTypeIndex>_MoveNext__);
    FUN_01ab69ac(Method_System_Collections_Generic_HashSet_Enumerator<Tick>_MoveNext__);
    FUN_01ab69ac(Method_System_Collections_Generic_List_Enumerator<TimelineClip>_MoveNext__);
    FUN_01ab69ac(Method_System_Collections_Generic_HashSet_Enumerator<Tick>_get_Current__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<Thread,_StackTrace>_Remove__);
    FUN_01ab69ac(PTR_DAT_03cdbe68);
    FUN_01ab69ac(PTR_DAT_03cdb9a0);
    FUN_01ab69ac(Method_System_Collections_Generic_HashSet_Enumerator<TalkiesBase>_get_Current__);
    FUN_01ab69ac(PTR_DAT_03cdb2b0);
    FUN_01ab69ac(PTR_DAT_03cd79f8);
    DAT_04138167 = 1;
  }
  puVar7 = PTR_DAT_03cdb2b0;
  if (param_3 == (long *)0x0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_03cdb2b0;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar7;
  }
  plVar11 = (long *)FUN_038a9038(param_3,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8),0);
  if (plVar11 == (long *)0x0) {
    return;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_03cd79f8 + 0x130);
  if (*(byte *)(*plVar11 + 0x130) < bVar3) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = plVar11;
    if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03cd79f8) {
      plVar13 = (long *)0x0;
    }
  }
  if (param_2 == (long *)0x0) goto LAB_0388e1f4;
  lVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray_Enumerator<SystemTypeIndex>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_Unity_Collections_NativeArray_Enumerator<SystemTypeIndex>_MoveNext__)
    ;
  }
  lVar12 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<Vector3>_Dispose__);
  if (((plVar13 != (long *)0x0) && (lVar10 != lVar12)) &&
     (lVar10 = FUN_038d6348(plVar13,0), lVar10 == 0)) {
    FUN_038a4644(plVar13,0);
    return;
  }
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)FUN_038d6348(plVar13,0), plVar13 != param_3)) {
    return;
  }
  puVar8 = PTR_DAT_03cdb9a0;
  plVar13 = (long *)thunk_FUN_01a89d6c(param_2,*(undefined8 *)PTR_DAT_03cdb9a0);
  if (plVar13 == (long *)0x0) {
LAB_0388de28:
    if (((*(byte *)(param_2 + 8) >> 5 & 1) == 0) || ((param_2[0xe] == 0 || (param_2[10] != 0)))) {
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
    if (((long *)param_2[10] != (long *)0x0) && ((long *)param_2[10] != plVar11)) goto LAB_0388de28;
  }
  lVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet_Enumerator<Tick>_MoveNext__ + 0xe0
              ) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_System_Collections_Generic_HashSet_Enumerator<Tick>_MoveNext__);
  }
  lVar12 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_HashSet_Enumerator<Tick>_Dispose__);
  if (lVar10 == lVar12) {
    return;
  }
  lVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet_Enumerator<Tick>_get_Current__ +
              0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_System_Collections_Generic_HashSet_Enumerator<Tick>_get_Current__);
  }
  lVar12 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<ThreadType>_get_Current__
                       );
  if (lVar10 == lVar12) {
    return;
  }
  lVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<TimelineClip>_MoveNext__ +
              0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<TimelineClip>_MoveNext__);
  }
  lVar12 = FUN_021c3474(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<TimeValue>_get_Current__)
  ;
  puVar9 = PTR_DAT_03cdbe68;
  if (!bVar5) {
    return;
  }
  if (lVar10 == lVar12) {
    return;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_03cdb970 + 0x130);
  if (bVar3 <= *(byte *)(*param_3 + 0x130)) {
    if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03cdb970) {
      param_3 = (long *)0x0;
    }
    if ((plVar13 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar14 = (long *)thunk_FUN_01a89d6c(plVar13,*(undefined8 *)PTR_DAT_03cdbe68);
      if (plVar14 != (long *)0x0) {
        lVar10 = *plVar14;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
              puVar15 = (undefined8 *)(lVar10 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_0388dff0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar15 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)puVar9,2);
LAB_0388dff0:
        uVar16 = (*(code *)*puVar15)(plVar14,puVar15[1]);
        if ((uVar16 & 1) == 0) goto LAB_0388e08c;
      }
      lVar10 = *(long *)puVar7;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *(long *)puVar7;
      }
      lVar12 = *plVar13;
      uVar1 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar8) {
            puVar15 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0388e06c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar15 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)puVar8,1);
LAB_0388e06c:
      (*(code *)*puVar15)(plVar13,puVar15[1]);
      FUN_038a5aac(param_3,uVar1,param_2,0);
    }
  }
LAB_0388e08c:
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x208;
  FUN_038856e4(param_2,plVar11);
  puVar7 = PTR_DAT_03cd81d8;
  uVar2 = *(uint *)(param_2 + 6);
  *(uint *)(param_2 + 6) = uVar2 & 0xfffffff7;
  bVar3 = *(byte *)(*(long *)puVar7 + 0x130);
  if ((bVar3 <= *(byte *)(*plVar11 + 0x130)) &&
     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)puVar7)) {
    FUN_0388a9a4(plVar11,param_2);
  }
  if (!bVar6) {
    FUN_038856e4(param_2,0);
    *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0xfffffff7 | uVar2 & 8;
  }
  (**(code **)(*param_2 + 0x1e8))(param_2,0,*(undefined8 *)(*param_2 + 0x1f0));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
  puVar7 = Method_System_Collections_Generic_HashSet_Enumerator<TalkiesBase>_get_Current__;
  if (param_2[0xb] != 0) {
    FUN_01b5f01c(param_2[0xb],plVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet_Enumerator<TalkiesBase>_get_Current__);
    uVar2 = *(uint *)(param_2 + 8);
    plVar11 = (long *)param_2[10];
    uVar4 = uVar2 & 0xffffffbf | (uint)bVar6 << 6;
    *(uint *)(param_2 + 8) = uVar4;
    if (plVar11 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<Thread,_StackTrace>_Remove__ +
                       0x130);
      if ((bVar3 <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) ==
          *(long *)Method_System_Collections_Generic_Dictionary<Thread,_StackTrace>_Remove__)) {
        *(uint *)(param_2 + 8) = uVar4 | 0x80;
        if (param_2[0xb] != 0) {
          FUN_01b5f01c(param_2[0xb],plVar11,*(undefined8 *)puVar7);
          return;
        }
        goto LAB_0388e1f4;
      }
    }
    *(uint *)(param_2 + 8) = uVar2 & 0xffffff3f | (uint)bVar6 << 6;
    return;
  }
LAB_0388e1f4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


