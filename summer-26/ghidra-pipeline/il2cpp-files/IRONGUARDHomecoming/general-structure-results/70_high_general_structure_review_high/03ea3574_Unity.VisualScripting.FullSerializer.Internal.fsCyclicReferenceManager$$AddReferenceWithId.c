/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager$$AddReferenceWithId
ENTRY_POINT: 03ea3574
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager__AddReferenceWithId
               (long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x638));
  thunk_FUN_01efb3a4(PTR_DAT_0457b640);
  thunk_FUN_01efb3a4(PTR_DAT_0457b648);
  thunk_FUN_01efb3a4(PTR_DAT_0457b650);
  thunk_FUN_01efb3a4(PTR_DAT_0457b658);
  thunk_FUN_01efb3a4(PTR_DAT_0457b660);
  thunk_FUN_01efb3a4(PTR_DAT_0457b668);
  thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__);
  *(undefined1 *)(unaff_x20 + 0xb48) = 1;
  puVar5 = PTR_DAT_0457b640;
  puVar4 = PTR_DAT_0457b638;
  puVar3 = Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__;
  plVar10 = (long *)unaff_x19[10];
  if (plVar10 == (long *)0x0) {
LAB_03ea36a0:
    uVar6 = (**(code **)(*unaff_x19 + 0x4a8))();
    FUN_0340ebc0(*(undefined8 *)puVar5,uVar6,*(undefined8 *)puVar3,0);
    return;
  }
  lVar9 = *plVar10;
  bVar1 = *(byte *)(lVar9 + 0x130);
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b628 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0457b628)) {
    uStack000000000000000c = (undefined4)plVar10[0x18];
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&stack0x0000000c);
    FUN_0340eac8(*(undefined8 *)PTR_DAT_0457b668,uVar6,*(undefined8 *)puVar3,0);
    return;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0457b638 + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b638)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457b620 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b620)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_0457b630 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457b630))
      goto LAB_03ea36a0;
      plVar10 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,5);
      plVar7 = (long *)PTR_DAT_0457b658;
    }
    else {
      plVar10 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,5);
      plVar7 = (long *)PTR_DAT_0457b650;
    }
    if (plVar10 == (long *)0x0) goto LAB_03ea3988;
    if (*plVar7 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_01f116d0(*plVar7,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_03ea397c;
      lVar9 = *plVar7;
    }
    if ((int)plVar10[3] == 0) goto LAB_03ea3978;
    plVar10[4] = lVar9;
    thunk_FUN_01f51358();
    if (unaff_x19[10] == 0) goto LAB_03ea3988;
    lVar9 = *(long *)(unaff_x19[10] + 0xa0);
  }
  else {
    plVar10 = (long *)FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   ,5);
    puVar5 = PTR_DAT_0457b648;
    if (plVar10 == (long *)0x0) {
LAB_03ea3988:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)PTR_DAT_0457b648 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b648,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_03ea397c;
      lVar9 = *(long *)puVar5;
    }
    if ((int)plVar10[3] == 0) goto LAB_03ea3978;
    plVar10[4] = lVar9;
    thunk_FUN_01f51358();
    plVar7 = (long *)unaff_x19[10];
    if (plVar7 == (long *)0x0) goto LAB_03ea3988;
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    lVar9 = plVar7[0x14];
  }
  if ((lVar9 != 0) &&
     (lVar8 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
LAB_03ea397c:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (1 < *(uint *)(plVar10 + 3)) {
    plVar10[5] = lVar9;
    thunk_FUN_01f51358(plVar10 + 5,lVar9);
    puVar4 = PTR_DAT_0457b660;
    if (*(long *)PTR_DAT_0457b660 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b660,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_03ea397c;
      lVar9 = *(long *)puVar4;
    }
    if (2 < *(uint *)(plVar10 + 3)) {
      plVar10[6] = lVar9;
      thunk_FUN_01f51358();
      lVar9 = (**(code **)(*unaff_x19 + 0x4a8))();
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
      goto LAB_03ea397c;
      if (3 < *(uint *)(plVar10 + 3)) {
        plVar10[7] = lVar9;
        thunk_FUN_01f51358(plVar10 + 7,lVar9);
        if (*(long *)puVar3 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = thunk_FUN_01f116d0(*(long *)puVar3,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar9 == 0) goto LAB_03ea397c;
          lVar9 = *(long *)puVar3;
        }
        if (4 < *(uint *)(plVar10 + 3)) {
          plVar10[8] = lVar9;
          thunk_FUN_01f51358();
          FUN_0340ec80(plVar10,0);
          return;
        }
      }
    }
  }
LAB_03ea3978:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


