/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Avx2$$mm256_cvtepi16_epi32
ENTRY_POINT: 0593fe4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Burst_Intrinsics_X86_Avx2__mm256_cvtepi16_epi32(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 uVar14;
  
  if ((*(int *)(unaff_x19 + 0x174) == 1) || (*(int *)(unaff_x19 + 0x184) == 1)) {
    if ((*(char *)(unaff_x19 + 0x60) == '\0') &&
       ((param_1 < 1 && (*(char *)(unaff_x19 + 0x11c) == '\0')))) {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
      FUN_059225e4(*(long *)(unaff_x19 + 0x90),
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__,0);
    }
    else {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
      FUN_0592324c(*(long *)(unaff_x19 + 0x90),
                   *(undefined8 *)
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__,
                   *(undefined8 *)PTR_DAT_067d52c8,0);
    }
LAB_0593fe94:
    bVar3 = false;
  }
  else {
    bVar3 = 0 < param_1;
    if (((*(char *)(unaff_x19 + 0x60) == '\0') && (param_1 < 1)) &&
       (*(char *)(unaff_x19 + 0x11c) == '\0')) goto LAB_0593fe94;
    lVar8 = *(long *)(unaff_x19 + 0x90);
    uVar14 = FUN_050d3cdc(param_2,0);
    if (lVar8 == 0) goto LAB_05940334;
    FUN_0592324c(lVar8,*(undefined8 *)
                        Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Clear__,
                 uVar14,0);
  }
  puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_isCanceled__;
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
  FUN_059225e4(*(long *)(unaff_x19 + 0x90),
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
               ,0);
  lVar8 = *(long *)puVar1;
  uVar14 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar1;
  }
  puVar2 = Method_System_Collections_Generic_List<Pose>_ToArray__;
  bVar4 = FUN_050f4514(uVar14,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),0);
  if ((bVar3 & bVar4) == 1) {
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05940334;
    uVar9 = FUN_05940338();
    if ((uVar9 & 1) == 0) goto LAB_0593ffb8;
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
    FUN_05922590(*(long *)(unaff_x19 + 0x90),*(undefined8 *)puVar2,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<SerializedCommand>_get_Count__,0);
    uVar12 = 1;
  }
  else {
LAB_0593ffb8:
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
    FUN_059225e4(*(long *)(unaff_x19 + 0x90),*(undefined8 *)puVar2,0);
    uVar12 = 0;
  }
  lVar8 = *(long *)(unaff_x19 + 0xe8);
  *(undefined1 *)(unaff_x19 + 0x124) = uVar12;
  if (lVar8 == 0) goto LAB_05940334;
  if (*(char *)(lVar8 + 0x30) == '\0') {
    bVar3 = false;
    puVar13 = (undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__;
  }
  else {
    bVar3 = *(char *)(lVar8 + 0x32) == '\0';
    puVar13 = (undefined8 *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__;
    if (!bVar3) {
      puVar13 = (undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__;
    }
  }
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
  uVar14 = *puVar13;
  puVar13 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__;
  if (!bVar3) {
    puVar13 = (undefined8 *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__;
  }
  FUN_059225e4(*(long *)(unaff_x19 + 0x90),*puVar13,0);
  plVar10 = *(long **)(unaff_x19 + 0xe8);
  if (plVar10 == (long *)0x0) goto LAB_05940334;
  uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
  uVar9 = FUN_050f4514(uVar11,0,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    uVar5 = FUN_050f4514(uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
  }
  else {
    uVar5 = 1;
  }
  if (*(char *)(unaff_x19 + 0x98) == '\0') {
LAB_05940134:
    lVar8 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    uVar9 = FUN_050f4514(uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),0);
    if ((uVar9 & 1) != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x90);
      puVar13 = (undefined8 *)PTR_DAT_067cff58;
joined_r0x0594011c:
      if (lVar8 == 0) goto LAB_05940334;
      FUN_05922590(lVar8,uVar14,*puVar13,0);
    }
  }
  else {
    lVar8 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    uVar6 = FUN_050f4514(uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
    if (((uVar5 | uVar6) & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
      lVar8 = FUN_059058a0(*(long *)(unaff_x19 + 0x90),uVar14,0);
      if (lVar8 != 0) {
        if ((*(long *)(unaff_x19 + 0x90) == 0) ||
           (lVar8 = FUN_059058a0(*(long *)(unaff_x19 + 0x90),uVar14,0), lVar8 == 0))
        goto LAB_05940334;
        iVar7 = FUN_04f73d24(lVar8,*(undefined8 *)
                                    Method_System_Collections_Generic_HashSet<IUIInteractor>_Add__,5
                             ,0);
        if (iVar7 != -1) goto LAB_05940184;
      }
      lVar8 = *(long *)(unaff_x19 + 0x90);
      puVar13 = (undefined8 *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Add__;
      goto joined_r0x0594011c;
    }
    if (*(char *)(unaff_x19 + 0x98) == '\0') goto LAB_05940134;
  }
LAB_05940184:
  uVar14 = *(undefined8 *)(unaff_x19 + 0x160);
  if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar9 = FUN_058620fc(uVar14,0,0);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05940334;
    uVar9 = FUN_05863f98(*(long *)(unaff_x19 + 0x40),0);
    lVar8 = *(long *)(unaff_x19 + 0x40);
    if ((uVar9 & 1) != 0) goto LAB_059401e8;
LAB_059401c0:
    if (lVar8 == 0) goto LAB_05940334;
    uVar14 = 0x84;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0x160);
    if (*(char *)(unaff_x19 + 0x158) != '\0') goto LAB_059401c0;
LAB_059401e8:
    if (lVar8 == 0) goto LAB_05940334;
    uVar14 = 4;
  }
  uVar14 = FUN_05868790(lVar8,uVar14,2,0);
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
  FUN_0592324c(*(long *)(unaff_x19 + 0x90),
               *(undefined8 *)Method_System_Collections_Generic_List<Player>_get_Count__,uVar14,0);
  puVar1 = PTR_DAT_067cbf00;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    uVar14 = FUN_05932a98(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x40),0);
    uVar9 = FUN_04f6dc3c(uVar14,*(undefined8 *)puVar1,0);
    lVar8 = *(long *)(unaff_x19 + 0x90);
    if ((uVar9 & 1) == 0) {
      if (lVar8 == 0) goto LAB_05940334;
      FUN_059225e4(lVar8,*(undefined8 *)Method_System_Collections_Generic_List<Popup>_Clear__,0);
    }
    else {
      if (lVar8 == 0) goto LAB_05940334;
      FUN_05922590(lVar8,*(undefined8 *)Method_System_Collections_Generic_List<Popup>_Clear__,uVar14
                   ,0);
    }
  }
  lVar8 = 0;
  if ((*(uint *)(unaff_x19 + 0x134) & 1) != 0) {
    lVar8 = *(long *)Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__;
  }
  plVar10 = (long *)Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Add__;
  if (lVar8 != 0) {
    plVar10 = (long *)Method_System_Collections_Generic_List<SerializedCommand>_get_Item__;
  }
  if ((*(uint *)(unaff_x19 + 0x134) & 2) != 0) {
    lVar8 = *plVar10;
  }
  if (lVar8 != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
    FUN_05922590(*(long *)(unaff_x19 + 0x90),
                 *(undefined8 *)Method_System_Collections_Generic_List<PlayerLoopSystem>_Add__,lVar8
                 ,0);
  }
  if ((*(char *)(unaff_x19 + 0xba) == '\0') && (*(char *)(unaff_x19 + 0xb9) != '\0')) {
    FUN_059403d4();
  }
  plVar10 = *(long **)(unaff_x19 + 0x90);
  if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0594031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    return;
  }
LAB_05940334:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


