/*
FUNCTION_NAME: FUN_034af5d8
ENTRY_POINT: 034af5d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_034af5d8(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  int local_38 [2];
  
  if ((DAT_04832c10 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_StreamWriter_Flush__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Texture2DArray_Internal_Create__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__);
    DAT_04832c10 = 1;
  }
  puVar1 = Method_UnityEngine_Texture2DArray_Internal_Create__;
  plVar7 = *(long **)(param_1 + 0x10);
                    /* try { // try from 034af634 to 035af63f has its CatchHandler @ 034af6c0 */
  if (plVar7 == (long *)0x0) goto LAB_034afad8;
                    /* try { // try from 034af640 to 035af6d7 has its CatchHandler @ 034af594 */
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar12);
    lVar12 = *(long *)puVar1;
  }
  if (iVar3 != **(int **)(lVar12 + 0xb8)) {
    uVar8 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadPool_RegisterWaitForSingleObject__);
    uVar8 = FUN_035ac8e0(uVar8,0);
LAB_034afbfc:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar9,uVar8,0);
    goto LAB_034afb18;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_034afad8;
  uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_034afad8;
  uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  if ((int)(uVar5 | uVar4) < 0) goto LAB_034afae0;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 034af634 with catch @ 034af6c0
                        */
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_034afad8;
  lVar12 = *plVar7;
  if ((int)uVar4 < 2) {
                    /* try { // try from 034af6d8 to 035af6db has its CatchHandler @ 034af6e8 */
    uVar8 = (**(code **)(lVar12 + 0x298))(plVar7,*(undefined8 *)(lVar12 + 0x2a0));
    lVar12 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 034af6d8 with catch @ 034af6e8 */
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
      lVar12 = *(long *)puVar1;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20);
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_StreamWriter_Flush__);
                    /* try { // try from 034af720 to 035af747 has its CatchHandler @ 034af75c */
    FUN_034ba858(uVar9,uVar13,0);
    uVar10 = FUN_034ac8c8(uVar8,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),uVar9);
    if ((uVar10 & 1) == 0) {
      uVar9 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar9 = FUN_01f08890(uVar9,1);
      FUN_01bc50c0();
      FUN_01bc56ec(uVar9,uVar8);
      FUN_01bc5408(uVar9,0,uVar8);
      uVar8 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadPool_RegisterWaitForSingleObject__);
      uVar8 = FUN_035ae81c(uVar8,uVar9,0);
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar9 = thunk_FUN_01f117cc();
      FUN_0356663c(uVar9,uVar8,0);
      goto LAB_034afb18;
    }
    FUN_034acf18(param_1);
                    /* try { // try from 034af748 to 035af753 has its CatchHandler @ 034af594 */
  }
  else {
    plVar7 = (long *)(**(code **)(lVar12 + 0x188))(plVar7,*(undefined8 *)(lVar12 + 400));
                    /* try { // try from 034af754 to 035af75b has its CatchHandler @ 034af75c */
    if (plVar7 == (long *)0x0) goto LAB_034afad8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034af720 with catch @ 034af75c
                       catch(type#2 @ 00000000) { ... } // from try @ 034af754 with catch @ 034af75c
                        */
                    /* try { // try from 034af760 to 035af7cb has its CatchHandler @ 034af760
                       catch() { ... } // from try @ 034af760 with catch @ 034af760
                       catch() { ... } // from try @ 034af830 with catch @ 034af760
                       catch() { ... } // from try @ 034af8b4 with catch @ 034af760
                       catch() { ... } // from try @ 034af950 with catch @ 034af760 */
    (**(code **)(*plVar7 + 0x308))(plVar7,uVar5,1,*(undefined8 *)(*plVar7 + 0x310));
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_034afad8;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  if (1 < iVar3 - 1U) {
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar8 = FUN_01f08890(uVar8,2);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_38[1] = 2;
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar9 = thunk_FUN_01f113fc(uVar9,local_38 + 1);
    FUN_01bc50c0(uVar8);
    FUN_01bc56ec(uVar8,uVar9);
    FUN_01bc5408(uVar8,0,uVar9);
    local_38[0] = iVar3;
    uVar9 = thunk_FUN_01efb3a4(puVar1);
    uVar9 = thunk_FUN_01f113fc(uVar9,local_38);
    FUN_01bc50c0(uVar8);
    FUN_01bc56ec(uVar8,uVar9);
    FUN_01bc5408(uVar8,1,uVar9);
    uVar9 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadPool_RegisterWaitForSingleObject__);
    uVar8 = FUN_035ae81c(uVar9,uVar8,0);
    goto LAB_034afbfc;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(int *)(param_1 + 0x78) = iVar3;
  if (plVar7 == (long *)0x0) goto LAB_034afad8;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  *(int *)(param_1 + 0x68) = iVar3;
  if (-1 < iVar3) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 == (long *)0x0) goto LAB_034afad8;
                    /* try { // try from 034af7cc to 035af7d7 has its CatchHandler @ 034af8b8 */
    uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    puVar1 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
    if (-1 < (int)uVar4) {
                    /* try { // try from 034af7e8 to 035af7f3 has its CatchHandler @ 034af8c0 */
      uVar8 = FUN_01f08890(*(undefined8 *)
                            Method_Meta_WitAi_Events_SpeechEvents_SetEvent<VoiceServiceRequest>__,
                           uVar4);
                    /* try { // try from 034af800 to 035af823 has its CatchHandler @ 034af8bc */
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      thunk_FUN_01f51358();
      uVar8 = FUN_01f08890(*(undefined8 *)puVar1,uVar4);
      *(undefined8 *)(param_1 + 0x58) = uVar8;
      thunk_FUN_01f51358();
                    /* try { // try from 034af824 to 035af82f has its CatchHandler @ 034af8b4 */
      if (uVar4 != 0) {
        uVar10 = 0;
        do {
          plVar7 = *(long **)(param_1 + 0x10);
          if (plVar7 == (long *)0x0) goto LAB_034afad8;
          lVar12 = *(long *)(param_1 + 0x58);
          plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
          if (plVar7 == (long *)0x0) goto LAB_034afad8;
          uVar6 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
          if (lVar12 == 0) goto LAB_034afad8;
          if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_034afadc;
          *(undefined4 *)(lVar12 + uVar10 * 4 + 0x20) = uVar6;
          FUN_034acf18(param_1);
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
      }
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_034afad8;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (plVar7 == (long *)0x0) goto LAB_034afad8;
      uVar4 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
      if ((uVar4 & 7) != 0) {
        uVar4 = uVar4 & 7 | 0xfffffff8;
        do {
          plVar7 = *(long **)(param_1 + 0x10);
          if (plVar7 == (long *)0x0) goto LAB_034afad8;
          (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
          bVar2 = uVar4 != 0xffffffff;
          uVar4 = uVar4 + 1;
        } while (bVar2);
      }
      uVar4 = *(uint *)(param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar8 = FUN_01f08890(*(undefined8 *)puVar1,(ulong)uVar4);
        *(undefined8 *)(param_1 + 0x30) = uVar8;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30));
        uVar10 = (ulong)*(uint *)(param_1 + 0x68);
        if (0 < (int)*(uint *)(param_1 + 0x68)) {
          uVar14 = 0;
          do {
            plVar7 = *(long **)(param_1 + 0x10);
            if (plVar7 == (long *)0x0) goto LAB_034afad8;
            lVar12 = *(long *)(param_1 + 0x30);
            uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
            if (lVar12 == 0) goto LAB_034afad8;
            if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_034afadc;
            *(undefined4 *)(lVar12 + uVar14 * 4 + 0x20) = uVar6;
            uVar10 = (ulong)*(int *)(param_1 + 0x68);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)uVar10);
        }
      }
      else {
        if (uVar4 >> 0x1d != 0) goto LAB_034afae0;
        uVar8 = FUN_034cf434(*(long *)(param_1 + 0x70),0);
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
        if (plVar7 == (long *)0x0) goto LAB_034afad8;
        (**(code **)(*plVar7 + 0x308))(plVar7,(ulong)uVar4 << 2,1,*(undefined8 *)(*plVar7 + 0x310));
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_034afad8;
        FUN_034cf434(*(long *)(param_1 + 0x70),0);
        uVar10 = (ulong)*(uint *)(param_1 + 0x68);
      }
      if (*(long *)(param_1 + 0x70) == 0) {
        lVar12 = FUN_01f08890(*(undefined8 *)puVar1,uVar10 & 0xffffffff);
        plVar7 = (long *)(param_1 + 0x40);
        *plVar7 = lVar12;
        thunk_FUN_01f51358(plVar7);
        if (0 < *(int *)(param_1 + 0x68)) {
          uVar10 = 0;
          do {
            plVar11 = *(long **)(param_1 + 0x10);
            if (plVar11 == (long *)0x0) goto LAB_034afad8;
            iVar3 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
            if (iVar3 < 0) goto LAB_034afae0;
            lVar12 = *plVar7;
            if (lVar12 == 0) goto LAB_034afad8;
            if (*(uint *)(lVar12 + 0x18) <= uVar10) {
LAB_034afadc:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(int *)(lVar12 + uVar10 * 4 + 0x20) = iVar3;
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)*(int *)(param_1 + 0x68));
        }
      }
      else {
        if ((uVar10 >> 0x1d & 7) != 0) goto LAB_034afae0;
        uVar8 = FUN_034cf434(*(long *)(param_1 + 0x70),0);
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x48) = uVar8;
        if (plVar7 == (long *)0x0) goto LAB_034afad8;
        (**(code **)(*plVar7 + 0x308))(plVar7,(int)uVar10 << 2,1,*(undefined8 *)(*plVar7 + 0x310));
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_034afad8;
        FUN_034cf434(*(long *)(param_1 + 0x70),0);
      }
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_034afad8;
      iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
      *(long *)(param_1 + 0x28) = (long)iVar3;
      if (-1 < iVar3) {
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 == (long *)0x0) {
LAB_034afad8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        if (plVar7 == (long *)0x0) goto LAB_034afad8;
        lVar12 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
        *(long *)(param_1 + 0x20) = lVar12;
        if (lVar12 <= *(long *)(param_1 + 0x28)) {
          return;
        }
      }
    }
  }
LAB_034afae0:
  uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_Texture3D_SetPixelData<byte>__);
  uVar8 = FUN_035ac8e0(uVar8,0);
  thunk_FUN_01efb3a4(Method_UnityEngine_SubsystemManager_GetInstances<XRInputSubsystem>__);
  uVar9 = thunk_FUN_01f117cc();
  FUN_034f85bc(uVar9,uVar8,0);
LAB_034afb18:
  uVar8 = thunk_FUN_01efb3a4(Method_System_Threading_ThreadPool_QueueUserWorkItemHelper__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar8);
}


