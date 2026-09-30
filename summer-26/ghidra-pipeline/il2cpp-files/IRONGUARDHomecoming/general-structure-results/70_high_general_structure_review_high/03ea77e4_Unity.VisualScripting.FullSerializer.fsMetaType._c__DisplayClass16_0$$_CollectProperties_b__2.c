/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsMetaType.<>c__DisplayClass16_0$$<CollectProperties>b__2
ENTRY_POINT: 03ea77e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass16_0__<CollectProperties>b__2
               (void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *unaff_x19;
  long *plVar15;
  long *unaff_x20;
  long unaff_x21;
  uint uVar16;
  long unaff_x22;
  
  thunk_FUN_01efb3a4(PTR_DAT_0457b748);
  thunk_FUN_01efb3a4(PTR_DAT_0457b750);
  thunk_FUN_01efb3a4(PTR_DAT_0457b758);
  thunk_FUN_01efb3a4(PTR_DAT_0457b760);
  thunk_FUN_01efb3a4(PTR_DAT_0457b768);
  *(undefined1 *)(unaff_x22 + 0xb74) = 1;
  puVar4 = PTR_DAT_0457b638;
  if (unaff_x19 == (long *)0x0) {
LAB_03ea7fc8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*unaff_x19 + 0x188))();
  puVar3 = PTR_DAT_0457b5f0;
  lVar12 = *unaff_x19;
  bVar1 = *(byte *)(lVar12 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
    lVar12 = unaff_x19[0x18];
    lVar10 = *(long *)PTR_DAT_0457b5f0;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar10 = *(long *)puVar3;
    }
    puVar13 = (undefined8 *)PTR_DAT_0457b740;
    if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_03ea7fc8;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) goto LAB_03ea7fcc;
      puVar13 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 8 + 0x20);
    }
    uVar11 = *puVar13;
    uVar7 = (**(code **)(*unaff_x20 + 0x218))();
    puVar13 = (undefined8 *)PTR_DAT_0457b758;
LAB_03ea7c54:
    uVar14 = *puVar13;
    puVar13 = (undefined8 *)PTR_DAT_0457b760;
LAB_03ea7c68:
    FUN_0340eee0(uVar14,uVar7,*puVar13,uVar11,0);
    return;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b628 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b628)) {
    lVar12 = unaff_x19[0x18];
    lVar10 = *(long *)PTR_DAT_0457b5f0;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar10 = *(long *)puVar3;
    }
    puVar13 = (undefined8 *)PTR_DAT_0457b740;
    if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_03ea7fc8;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) goto LAB_03ea7fcc;
      puVar13 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 8 + 0x20);
    }
    uVar7 = *puVar13;
    uVar11 = (**(code **)(*unaff_x20 + 0x218))();
    uVar14 = *(undefined8 *)PTR_DAT_0457b730;
    puVar13 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<CylinderGrabSurface>__;
    goto LAB_03ea7c68;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b620 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b620)) {
    lVar12 = unaff_x19[0x18];
    lVar10 = *(long *)PTR_DAT_0457b5f0;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar10 = *(long *)puVar3;
    }
    puVar13 = (undefined8 *)PTR_DAT_0457b740;
    if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_03ea7fc8;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) goto LAB_03ea7fcc;
      puVar13 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 8 + 0x20);
    }
    uVar11 = *puVar13;
    uVar7 = (**(code **)(*unaff_x20 + 0x218))();
    puVar13 = (undefined8 *)PTR_DAT_0457b750;
    goto LAB_03ea7c54;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b708 + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b708)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b630 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b630)) {
      uVar11 = (**(code **)(*unaff_x20 + 0x218))();
      puVar13 = (undefined8 *)PTR_DAT_0457b768;
LAB_03ea7bf4:
      FUN_03405678(*puVar13,uVar11,0);
      return;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b6e8 + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b6e8)) {
      uVar11 = (**(code **)(*unaff_x20 + 0x218))();
      puVar13 = (undefined8 *)PTR_DAT_0457b718;
      goto LAB_03ea7bf4;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b700 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b700)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_0457b6f8 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b6f8))
      {
        bVar2 = *(byte *)(*(long *)PTR_DAT_0457b6f0 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b6f0)
           ) {
          return;
        }
        lVar12 = FUN_01f08890(*(undefined8 *)
                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              ,5);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) != 0) {
            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_0457b720;
            thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x20));
            if (1 < *(uint *)(lVar12 + 0x18)) {
              *(long *)(lVar12 + 0x28) = unaff_x19[0x18];
              thunk_FUN_01f51358((long *)(lVar12 + 0x28));
              if (2 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_0457b710;
                thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x30));
                if (3 < *(uint *)(lVar12 + 0x18)) {
                  *(long *)(lVar12 + 0x38) = unaff_x19[0x19];
                  thunk_FUN_01f51358((long *)(lVar12 + 0x38));
                  if (4 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_0457b748;
                    thunk_FUN_01f51358();
                    FUN_0340efe8(lVar12,0);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_03ea7fcc;
        }
        goto LAB_03ea7fc8;
      }
    }
    plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,4);
    puVar4 = PTR_DAT_0457b750;
    if (plVar6 == (long *)0x0) goto LAB_03ea7fc8;
    if (*(long *)PTR_DAT_0457b750 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b750,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar12 == 0) goto LAB_03ea7fd0;
      lVar12 = *(long *)puVar4;
    }
    if ((int)plVar6[3] == 0) goto LAB_03ea7fcc;
    plVar6[4] = lVar12;
    thunk_FUN_01f51358();
    lVar12 = (**(code **)(*unaff_x20 + 0x218))();
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_03ea7fd0;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar12;
      thunk_FUN_01f51358(plVar6 + 5,lVar12);
      puVar4 = PTR_DAT_0457b738;
      if (*(long *)PTR_DAT_0457b738 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b738,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar12 == 0) goto LAB_03ea7fd0;
        lVar12 = *(long *)puVar4;
      }
      if (*(uint *)(plVar6 + 3) < 3) goto LAB_03ea7fcc;
      plVar6[6] = lVar12;
      thunk_FUN_01f51358();
      lVar12 = unaff_x19[0x18];
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_03ea7fd0;
      if (*(uint *)(plVar6 + 3) < 4) goto LAB_03ea7fcc;
      plVar8 = plVar6 + 7;
      *plVar8 = lVar12;
      goto LAB_03ea7ec8;
    }
    goto LAB_03ea7fcc;
  }
  lVar12 = unaff_x19[0x18];
  lVar10 = *(long *)PTR_DAT_0457b5f0;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *(long *)puVar3;
  }
  plVar6 = (long *)PTR_DAT_0457b740;
  if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
    if (unaff_x21 == 0) goto LAB_03ea7fc8;
    if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) goto LAB_03ea7fcc;
    plVar6 = (long *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 8 + 0x20);
  }
  lVar12 = *plVar6;
  plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,4);
  puVar4 = PTR_DAT_0457b728;
  if (plVar6 == (long *)0x0) goto LAB_03ea7fc8;
  if (*(long *)PTR_DAT_0457b728 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b728,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar10 == 0) goto LAB_03ea7fd0;
    lVar10 = *(long *)puVar4;
  }
  if ((int)plVar6[3] == 0) goto LAB_03ea7fcc;
  plVar6[4] = lVar10;
  thunk_FUN_01f51358();
  plVar15 = unaff_x19 + 0x15;
  plVar8 = (long *)*plVar15;
  uVar16 = (uint)(plVar8 != (long *)0x0);
  if (plVar8 == (long *)0x0) {
    uVar5 = 1;
LAB_03ea7d28:
    uVar16 = uVar5;
    plVar15 = *(long **)(*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                        + 0xb8);
  }
  else {
    lVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar5 = (uint)(plVar8 != (long *)0x0);
    if (lVar10 == 0) goto LAB_03ea7d28;
  }
  lVar10 = *plVar15;
  if ((lVar10 != 0) &&
     (lVar9 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_03ea7fd0:
    uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,0);
  }
  if (uVar16 < *(uint *)(plVar6 + 3)) {
    plVar6[(ulong)uVar16 + 4] = lVar10;
    thunk_FUN_01f51358(plVar6 + (ulong)uVar16 + 4,lVar10);
    puVar4 = PTR_DAT_0457b760;
    if (*(long *)PTR_DAT_0457b760 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b760,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar10 == 0) goto LAB_03ea7fd0;
      lVar10 = *(long *)puVar4;
    }
    if (2 < *(uint *)(plVar6 + 3)) {
      plVar6[6] = lVar10;
      thunk_FUN_01f51358();
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_03ea7fd0;
      if (3 < *(uint *)(plVar6 + 3)) {
        plVar8 = plVar6 + 7;
        *plVar8 = lVar12;
LAB_03ea7ec8:
        thunk_FUN_01f51358(plVar8,lVar12);
        FUN_0340ec80(plVar6,0);
        return;
      }
    }
  }
LAB_03ea7fcc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


