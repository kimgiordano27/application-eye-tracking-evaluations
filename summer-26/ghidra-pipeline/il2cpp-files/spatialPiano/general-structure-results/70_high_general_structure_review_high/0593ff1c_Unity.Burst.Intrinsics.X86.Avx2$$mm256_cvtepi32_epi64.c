/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Avx2$$mm256_cvtepi32_epi64
ENTRY_POINT: 0593ff1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Burst_Intrinsics_X86_Avx2__mm256_cvtepi32_epi64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  uint unaff_w21;
  
  puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_isCanceled__;
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
                    /* try { // try from 0593ff3c to 05a3ff63 has its CatchHandler @ 0594016c */
  FUN_059225e4(*(long *)(unaff_x19 + 0x90),
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
               ,0);
  lVar7 = *(long *)puVar1;
  uVar13 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar1;
  }
  puVar2 = Method_System_Collections_Generic_List<Pose>_ToArray__;
  uVar4 = FUN_050f4514(uVar13,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
  if ((unaff_w21 & uVar4) == 1) {
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05940334;
    uVar8 = FUN_05940338();
    if ((uVar8 & 1) == 0) goto LAB_0593ffb8;
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
    FUN_05922590(*(long *)(unaff_x19 + 0x90),*(undefined8 *)puVar2,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<SerializedCommand>_get_Count__,0);
    uVar11 = 1;
  }
  else {
LAB_0593ffb8:
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
    FUN_059225e4(*(long *)(unaff_x19 + 0x90),*(undefined8 *)puVar2,0);
    uVar11 = 0;
  }
  lVar7 = *(long *)(unaff_x19 + 0xe8);
  *(undefined1 *)(unaff_x19 + 0x124) = uVar11;
  if (lVar7 == 0) goto LAB_05940334;
  if (*(char *)(lVar7 + 0x30) == '\0') {
    bVar3 = false;
    puVar12 = (undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__;
  }
  else {
    bVar3 = *(char *)(lVar7 + 0x32) == '\0';
    puVar12 = (undefined8 *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__;
    if (!bVar3) {
      puVar12 = (undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__;
    }
  }
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
  uVar13 = *puVar12;
  puVar12 = (undefined8 *)
            Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TwoFingerDragGesture>_Cancel__;
  if (!bVar3) {
    puVar12 = (undefined8 *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__;
  }
  FUN_059225e4(*(long *)(unaff_x19 + 0x90),*puVar12,0);
  plVar9 = *(long **)(unaff_x19 + 0xe8);
  if (plVar9 == (long *)0x0) goto LAB_05940334;
  uVar10 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
  uVar8 = FUN_050f4514(uVar10,0,0);
  if ((uVar8 & 1) == 0) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar1;
    }
    uVar4 = FUN_050f4514(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
  }
  else {
    uVar4 = 1;
  }
  if (*(char *)(unaff_x19 + 0x98) == '\0') {
LAB_05940134:
    lVar7 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar1;
    }
    uVar8 = FUN_050f4514(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x90);
      puVar12 = (undefined8 *)PTR_DAT_067cff58;
joined_r0x0594011c:
      if (lVar7 == 0) goto LAB_05940334;
      FUN_05922590(lVar7,uVar13,*puVar12,0);
    }
  }
  else {
    lVar7 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar1;
    }
    uVar5 = FUN_050f4514(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
    if (((uVar4 | uVar5) & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
      lVar7 = FUN_059058a0(*(long *)(unaff_x19 + 0x90),uVar13,0);
      if (lVar7 != 0) {
        if ((*(long *)(unaff_x19 + 0x90) == 0) ||
           (lVar7 = FUN_059058a0(*(long *)(unaff_x19 + 0x90),uVar13,0), lVar7 == 0))
        goto LAB_05940334;
        iVar6 = FUN_04f73d24(lVar7,*(undefined8 *)
                                    Method_System_Collections_Generic_HashSet<IUIInteractor>_Add__,5
                             ,0);
        if (iVar6 != -1) goto LAB_05940184;
      }
      lVar7 = *(long *)(unaff_x19 + 0x90);
      puVar12 = (undefined8 *)Method_System_Collections_Generic_HashSet<IUIInteractor>_Add__;
      goto joined_r0x0594011c;
    }
    if (*(char *)(unaff_x19 + 0x98) == '\0') goto LAB_05940134;
  }
LAB_05940184:
  uVar13 = *(undefined8 *)(unaff_x19 + 0x160);
  if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar8 = FUN_058620fc(uVar13,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05940334;
    uVar8 = FUN_05863f98(*(long *)(unaff_x19 + 0x40),0);
    lVar7 = *(long *)(unaff_x19 + 0x40);
    if ((uVar8 & 1) != 0) goto LAB_059401e8;
LAB_059401c0:
    if (lVar7 == 0) goto LAB_05940334;
    uVar13 = 0x84;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x160);
    if (*(char *)(unaff_x19 + 0x158) != '\0') goto LAB_059401c0;
LAB_059401e8:
    if (lVar7 == 0) goto LAB_05940334;
    uVar13 = 4;
  }
  uVar13 = FUN_05868790(lVar7,uVar13,2,0);
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
  FUN_0592324c(*(long *)(unaff_x19 + 0x90),
               *(undefined8 *)Method_System_Collections_Generic_List<Player>_get_Count__,uVar13,0);
  puVar1 = PTR_DAT_067cbf00;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    uVar13 = FUN_05932a98(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x40),0);
    uVar8 = FUN_04f6dc3c(uVar13,*(undefined8 *)puVar1,0);
    lVar7 = *(long *)(unaff_x19 + 0x90);
    if ((uVar8 & 1) == 0) {
      if (lVar7 == 0) goto LAB_05940334;
      FUN_059225e4(lVar7,*(undefined8 *)Method_System_Collections_Generic_List<Popup>_Clear__,0);
    }
    else {
      if (lVar7 == 0) goto LAB_05940334;
      FUN_05922590(lVar7,*(undefined8 *)Method_System_Collections_Generic_List<Popup>_Clear__,uVar13
                   ,0);
    }
  }
  lVar7 = 0;
  if ((*(uint *)(unaff_x19 + 0x134) & 1) != 0) {
    lVar7 = *(long *)Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__;
  }
  plVar9 = (long *)Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Add__;
  if (lVar7 != 0) {
    plVar9 = (long *)Method_System_Collections_Generic_List<SerializedCommand>_get_Item__;
  }
  if ((*(uint *)(unaff_x19 + 0x134) & 2) != 0) {
    lVar7 = *plVar9;
  }
  if (lVar7 != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05940334;
    FUN_05922590(*(long *)(unaff_x19 + 0x90),
                 *(undefined8 *)Method_System_Collections_Generic_List<PlayerLoopSystem>_Add__,lVar7
                 ,0);
  }
  if ((*(char *)(unaff_x19 + 0xba) == '\0') && (*(char *)(unaff_x19 + 0xb9) != '\0')) {
    FUN_059403d4();
  }
  plVar9 = *(long **)(unaff_x19 + 0x90);
  if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0594031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    return;
  }
LAB_05940334:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


