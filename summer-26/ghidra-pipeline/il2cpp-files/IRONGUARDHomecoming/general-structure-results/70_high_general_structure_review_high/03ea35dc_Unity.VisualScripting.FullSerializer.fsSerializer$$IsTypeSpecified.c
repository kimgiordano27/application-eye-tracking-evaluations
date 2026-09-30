/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsTypeSpecified
ENTRY_POINT: 03ea35dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__IsTypeSpecified(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x19;
  long unaff_x22;
  long *plVar10;
  undefined4 uStack000000000000000c;
  
  puVar4 = PTR_DAT_0457b640;
  puVar3 = PTR_DAT_0457b638;
  plVar9 = (long *)unaff_x19[10];
  plVar10 = *(long **)(unaff_x22 + 0xf10);
  if (plVar9 == (long *)0x0) {
LAB_03ea36a0:
    uVar5 = (**(code **)(*unaff_x19 + 0x4a8))();
    FUN_0340ebc0(*(undefined8 *)puVar4,uVar5,*plVar10,0);
    return;
  }
  lVar8 = *plVar9;
  bVar1 = *(byte *)(lVar8 + 0x130);
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b628 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b628)) {
    uStack000000000000000c = (undefined4)plVar9[0x18];
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&stack0x0000000c);
    FUN_0340eac8(*(undefined8 *)PTR_DAT_0457b668,uVar5,*plVar10,0);
    return;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b638 + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b638)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b620 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b620)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_0457b630 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b630))
      goto LAB_03ea36a0;
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,5);
      plVar6 = (long *)PTR_DAT_0457b658;
    }
    else {
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,5);
      plVar6 = (long *)PTR_DAT_0457b650;
    }
    if (plVar9 == (long *)0x0) goto LAB_03ea3988;
    if (*plVar6 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = thunk_FUN_01f116d0(*plVar6,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar8 == 0) goto LAB_03ea397c;
      lVar8 = *plVar6;
    }
    if ((int)plVar9[3] == 0) goto LAB_03ea3978;
    plVar9[4] = lVar8;
    thunk_FUN_01f51358();
    if (unaff_x19[10] == 0) goto LAB_03ea3988;
    lVar8 = *(long *)(unaff_x19[10] + 0xa0);
  }
  else {
    plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,5);
    puVar4 = PTR_DAT_0457b648;
    if (plVar9 == (long *)0x0) {
LAB_03ea3988:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)PTR_DAT_0457b648 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b648,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar8 == 0) goto LAB_03ea397c;
      lVar8 = *(long *)puVar4;
    }
    if ((int)plVar9[3] == 0) goto LAB_03ea3978;
    plVar9[4] = lVar8;
    thunk_FUN_01f51358();
    plVar6 = (long *)unaff_x19[10];
    if (plVar6 == (long *)0x0) goto LAB_03ea3988;
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    lVar8 = plVar6[0x14];
  }
  if ((lVar8 != 0) &&
     (lVar7 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
LAB_03ea397c:
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  if (1 < *(uint *)(plVar9 + 3)) {
    plVar9[5] = lVar8;
    thunk_FUN_01f51358(plVar9 + 5,lVar8);
    puVar3 = PTR_DAT_0457b660;
    if (*(long *)PTR_DAT_0457b660 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b660,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar8 == 0) goto LAB_03ea397c;
      lVar8 = *(long *)puVar3;
    }
    if (2 < *(uint *)(plVar9 + 3)) {
      plVar9[6] = lVar8;
      thunk_FUN_01f51358();
      lVar8 = (**(code **)(*unaff_x19 + 0x4a8))();
      if ((lVar8 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
      goto LAB_03ea397c;
      if (3 < *(uint *)(plVar9 + 3)) {
        plVar9[7] = lVar8;
        thunk_FUN_01f51358(plVar9 + 7,lVar8);
        if (*plVar10 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = thunk_FUN_01f116d0(*plVar10,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar8 == 0) goto LAB_03ea397c;
          lVar8 = *plVar10;
        }
        if (4 < *(uint *)(plVar9 + 3)) {
          plVar9[8] = lVar8;
          thunk_FUN_01f51358();
          FUN_0340ec80(plVar9,0);
          return;
        }
      }
    }
  }
LAB_03ea3978:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


