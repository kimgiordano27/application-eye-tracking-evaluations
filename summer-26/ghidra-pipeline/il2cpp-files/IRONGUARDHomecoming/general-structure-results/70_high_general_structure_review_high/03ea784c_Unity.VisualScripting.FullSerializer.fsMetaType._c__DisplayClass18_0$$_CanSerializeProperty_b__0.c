/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsMetaType.<>c__DisplayClass18_0$$<CanSerializeProperty>b__0
ENTRY_POINT: 03ea784c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass18_0__<CanSerializeProperty>b__0
               (long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long in_x10;
  long unaff_x19;
  long *plVar15;
  long *unaff_x20;
  long unaff_x21;
  uint uVar16;
  
  puVar4 = PTR_DAT_0457b5f0;
  bVar2 = *(byte *)(param_1 + 0x130);
  if ((*(byte *)(in_x10 + 0x130) <= bVar2) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x10 + 0x130) * 8 + -8) == in_x10)) {
    iVar1 = *(int *)(unaff_x19 + 0xc0);
    lVar11 = *(long *)PTR_DAT_0457b5f0;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar4;
    }
    puVar13 = (undefined8 *)PTR_DAT_0457b740;
    if (iVar1 != *(int *)(*(long *)(lVar11 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_03ea7fc8;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_03ea7fcc;
      puVar13 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
    }
    uVar12 = *puVar13;
    uVar7 = (**(code **)(*unaff_x20 + 0x218))();
    puVar13 = (undefined8 *)PTR_DAT_0457b758;
LAB_03ea7c54:
    uVar14 = *puVar13;
    puVar13 = (undefined8 *)PTR_DAT_0457b760;
LAB_03ea7c68:
    FUN_0340eee0(uVar14,uVar7,*puVar13,uVar12,0);
    return;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_0457b628 + 0x130);
  if ((bVar3 <= bVar2) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_0457b628)) {
    iVar1 = *(int *)(unaff_x19 + 0xc0);
    lVar11 = *(long *)PTR_DAT_0457b5f0;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar4;
    }
    puVar13 = (undefined8 *)PTR_DAT_0457b740;
    if (iVar1 != *(int *)(*(long *)(lVar11 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_03ea7fc8;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_03ea7fcc;
      puVar13 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
    }
    uVar7 = *puVar13;
    uVar12 = (**(code **)(*unaff_x20 + 0x218))();
    uVar14 = *(undefined8 *)PTR_DAT_0457b730;
    puVar13 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<CylinderGrabSurface>__;
    goto LAB_03ea7c68;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_0457b620 + 0x130);
  if ((bVar3 <= bVar2) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_0457b620)) {
    iVar1 = *(int *)(unaff_x19 + 0xc0);
    lVar11 = *(long *)PTR_DAT_0457b5f0;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar4;
    }
    puVar13 = (undefined8 *)PTR_DAT_0457b740;
    if (iVar1 != *(int *)(*(long *)(lVar11 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_03ea7fc8;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_03ea7fcc;
      puVar13 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
    }
    uVar12 = *puVar13;
    uVar7 = (**(code **)(*unaff_x20 + 0x218))();
    puVar13 = (undefined8 *)PTR_DAT_0457b750;
    goto LAB_03ea7c54;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_0457b708 + 0x130);
  if ((bVar2 < bVar3) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457b708)) {
    bVar3 = *(byte *)(*(long *)PTR_DAT_0457b630 + 0x130);
    if ((bVar3 <= bVar2) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_0457b630)) {
      uVar12 = (**(code **)(*unaff_x20 + 0x218))();
      puVar13 = (undefined8 *)PTR_DAT_0457b768;
LAB_03ea7bf4:
      FUN_03405678(*puVar13,uVar12,0);
      return;
    }
    bVar3 = *(byte *)(*(long *)PTR_DAT_0457b6e8 + 0x130);
    if ((bVar3 <= bVar2) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_0457b6e8)) {
      uVar12 = (**(code **)(*unaff_x20 + 0x218))();
      puVar13 = (undefined8 *)PTR_DAT_0457b718;
      goto LAB_03ea7bf4;
    }
    bVar3 = *(byte *)(*(long *)PTR_DAT_0457b700 + 0x130);
    if ((bVar2 < bVar3) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457b700)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_0457b6f8 + 0x130);
      if ((bVar2 < bVar3) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457b6f8))
      {
        bVar3 = *(byte *)(*(long *)PTR_DAT_0457b6f0 + 0x130);
        if ((bVar2 < bVar3) ||
           (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457b6f0
           )) {
          return;
        }
        lVar11 = FUN_01f08890(*(undefined8 *)
                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              ,5);
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x18) != 0) {
            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_0457b720;
            thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x20));
            if (1 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc0);
              thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28));
              if (2 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_0457b710;
                thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x30));
                if (3 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(unaff_x19 + 200);
                  thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x38));
                  if (4 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_0457b748;
                    thunk_FUN_01f51358();
                    FUN_0340efe8(lVar11,0);
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
      lVar11 = 0;
    }
    else {
      lVar11 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b750,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar11 == 0) goto LAB_03ea7fd0;
      lVar11 = *(long *)puVar4;
    }
    if ((int)plVar6[3] == 0) goto LAB_03ea7fcc;
    plVar6[4] = lVar11;
    thunk_FUN_01f51358();
    lVar11 = (**(code **)(*unaff_x20 + 0x218))();
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_03ea7fd0;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar11;
      thunk_FUN_01f51358(plVar6 + 5,lVar11);
      puVar4 = PTR_DAT_0457b738;
      if (*(long *)PTR_DAT_0457b738 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b738,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar11 == 0) goto LAB_03ea7fd0;
        lVar11 = *(long *)puVar4;
      }
      if (*(uint *)(plVar6 + 3) < 3) goto LAB_03ea7fcc;
      plVar6[6] = lVar11;
      thunk_FUN_01f51358();
      lVar11 = *(long *)(unaff_x19 + 0xc0);
      if ((lVar11 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_03ea7fd0;
      if (*(uint *)(plVar6 + 3) < 4) goto LAB_03ea7fcc;
      plVar8 = plVar6 + 7;
      *plVar8 = lVar11;
      goto LAB_03ea7ec8;
    }
    goto LAB_03ea7fcc;
  }
  iVar1 = *(int *)(unaff_x19 + 0xc0);
  lVar11 = *(long *)PTR_DAT_0457b5f0;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar4;
  }
  plVar6 = (long *)PTR_DAT_0457b740;
  if (iVar1 != *(int *)(*(long *)(lVar11 + 0xb8) + 4)) {
    if (unaff_x21 == 0) goto LAB_03ea7fc8;
    if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_03ea7fcc;
    plVar6 = (long *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
  }
  lVar11 = *plVar6;
  plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,4);
  puVar4 = PTR_DAT_0457b728;
  if (plVar6 == (long *)0x0) {
LAB_03ea7fc8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
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
  plVar15 = (long *)(unaff_x19 + 0xa8);
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
    uVar12 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,0);
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
      if ((lVar11 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_03ea7fd0;
      if (3 < *(uint *)(plVar6 + 3)) {
        plVar8 = plVar6 + 7;
        *plVar8 = lVar11;
LAB_03ea7ec8:
        thunk_FUN_01f51358(plVar8,lVar11);
        FUN_0340ec80(plVar6,0);
        return;
      }
    }
  }
LAB_03ea7fcc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


