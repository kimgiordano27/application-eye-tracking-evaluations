/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsMetaType.<>c__DisplayClass19_0$$<CanSerializeField>b__0
ENTRY_POINT: 03ea78b4
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


void Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass19_0__<CanSerializeField>b__0
               (long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint in_w9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  uint uVar14;
  
  puVar3 = PTR_DAT_0457b5f0;
  if (*(long *)(*(long *)(param_1 + 200) + in_x11 * 8 + -8) == in_x10) {
    iVar1 = *(int *)(unaff_x19 + 0xc0);
    lVar9 = *(long *)PTR_DAT_0457b5f0;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar3;
    }
    puVar11 = (undefined8 *)PTR_DAT_0457b740;
    if (iVar1 != *(int *)(*(long *)(lVar9 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_03ea7fc8;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_03ea7fcc;
      puVar11 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
    }
    uVar13 = *puVar11;
    uVar10 = (**(code **)(*unaff_x20 + 0x218))();
    FUN_0340eee0(*(undefined8 *)PTR_DAT_0457b750,uVar10,*(undefined8 *)PTR_DAT_0457b760,uVar13,0);
    return;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b708 + 0x130);
  if ((in_w9 < bVar2) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b708)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b630 + 0x130);
    if ((bVar2 <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b630)) {
      uVar10 = (**(code **)(*unaff_x20 + 0x218))();
      puVar11 = (undefined8 *)PTR_DAT_0457b768;
LAB_03ea7bf4:
      FUN_03405678(*puVar11,uVar10,0);
      return;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b6e8 + 0x130);
    if ((bVar2 <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b6e8)) {
      uVar10 = (**(code **)(*unaff_x20 + 0x218))();
      puVar11 = (undefined8 *)PTR_DAT_0457b718;
      goto LAB_03ea7bf4;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b700 + 0x130);
    if ((in_w9 < bVar2) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b700)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_0457b6f8 + 0x130);
      if ((in_w9 < bVar2) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b6f8))
      {
        bVar2 = *(byte *)(*(long *)PTR_DAT_0457b6f0 + 0x130);
        if ((in_w9 < bVar2) ||
           (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b6f0
           )) {
          return;
        }
        lVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,5);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) != 0) {
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_0457b720;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20));
            if (1 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc0);
              thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28));
              if (2 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_0457b710;
                thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x30));
                if (3 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(unaff_x19 + 200);
                  thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x38));
                  if (4 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_0457b748;
                    thunk_FUN_01f51358();
                    FUN_0340efe8(lVar9,0);
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
    plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,4);
    puVar3 = PTR_DAT_0457b750;
    if (plVar5 == (long *)0x0) goto LAB_03ea7fc8;
    if (*(long *)PTR_DAT_0457b750 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b750,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar9 == 0) goto LAB_03ea7fd0;
      lVar9 = *(long *)puVar3;
    }
    if ((int)plVar5[3] == 0) goto LAB_03ea7fcc;
    plVar5[4] = lVar9;
    thunk_FUN_01f51358();
    lVar9 = (**(code **)(*unaff_x20 + 0x218))();
    if ((lVar9 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_03ea7fd0;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar9;
      thunk_FUN_01f51358(plVar5 + 5,lVar9);
      puVar3 = PTR_DAT_0457b738;
      if (*(long *)PTR_DAT_0457b738 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b738,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar9 == 0) goto LAB_03ea7fd0;
        lVar9 = *(long *)puVar3;
      }
      if (*(uint *)(plVar5 + 3) < 3) goto LAB_03ea7fcc;
      plVar5[6] = lVar9;
      thunk_FUN_01f51358();
      lVar9 = *(long *)(unaff_x19 + 0xc0);
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_03ea7fd0;
      if (*(uint *)(plVar5 + 3) < 4) goto LAB_03ea7fcc;
      plVar6 = plVar5 + 7;
      *plVar6 = lVar9;
      goto LAB_03ea7ec8;
    }
    goto LAB_03ea7fcc;
  }
  iVar1 = *(int *)(unaff_x19 + 0xc0);
  lVar9 = *(long *)PTR_DAT_0457b5f0;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar3;
  }
  plVar5 = (long *)PTR_DAT_0457b740;
  if (iVar1 != *(int *)(*(long *)(lVar9 + 0xb8) + 4)) {
    if (unaff_x21 == 0) goto LAB_03ea7fc8;
    if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_03ea7fcc;
    plVar5 = (long *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
  }
  lVar9 = *plVar5;
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,4);
  puVar3 = PTR_DAT_0457b728;
  if (plVar5 == (long *)0x0) {
LAB_03ea7fc8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)PTR_DAT_0457b728 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b728,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar8 == 0) goto LAB_03ea7fd0;
    lVar8 = *(long *)puVar3;
  }
  if ((int)plVar5[3] == 0) goto LAB_03ea7fcc;
  plVar5[4] = lVar8;
  thunk_FUN_01f51358();
  plVar12 = (long *)(unaff_x19 + 0xa8);
  plVar6 = (long *)*plVar12;
  uVar14 = (uint)(plVar6 != (long *)0x0);
  if (plVar6 == (long *)0x0) {
    uVar4 = 1;
LAB_03ea7d28:
    uVar14 = uVar4;
    plVar12 = *(long **)(*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                        + 0xb8);
  }
  else {
    lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    uVar4 = (uint)(plVar6 != (long *)0x0);
    if (lVar8 == 0) goto LAB_03ea7d28;
  }
  lVar8 = *plVar12;
  if ((lVar8 != 0) &&
     (lVar7 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_03ea7fd0:
    uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,0);
  }
  if (uVar14 < *(uint *)(plVar5 + 3)) {
    plVar5[(ulong)uVar14 + 4] = lVar8;
    thunk_FUN_01f51358(plVar5 + (ulong)uVar14 + 4,lVar8);
    puVar3 = PTR_DAT_0457b760;
    if (*(long *)PTR_DAT_0457b760 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b760,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar8 == 0) goto LAB_03ea7fd0;
      lVar8 = *(long *)puVar3;
    }
    if (2 < *(uint *)(plVar5 + 3)) {
      plVar5[6] = lVar8;
      thunk_FUN_01f51358();
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_03ea7fd0;
      if (3 < *(uint *)(plVar5 + 3)) {
        plVar6 = plVar5 + 7;
        *plVar6 = lVar9;
LAB_03ea7ec8:
        thunk_FUN_01f51358(plVar6,lVar9);
        FUN_0340ec80(plVar5,0);
        return;
      }
    }
  }
LAB_03ea7fcc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


