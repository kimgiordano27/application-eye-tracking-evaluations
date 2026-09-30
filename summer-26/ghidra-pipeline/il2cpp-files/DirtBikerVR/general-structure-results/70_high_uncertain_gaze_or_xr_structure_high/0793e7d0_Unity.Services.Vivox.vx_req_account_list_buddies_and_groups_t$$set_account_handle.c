/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_list_buddies_and_groups_t$$set_account_handle
ENTRY_POINT: 0793e7d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0793ec1c) */
/* WARNING: Removing unreachable block (ram,0x0793ead0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Services_Vivox_vx_req_account_list_buddies_and_groups_t__set_account_handle(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  int *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  int iStack000000000000004c;
  
  FUN_03a8a718();
                    /* try { // try from 0793e7d8 to 07a3e7db has its CatchHandler @ 0793e854 */
                    /* try { // try from 0793e7dc to 07a3e7df has its CatchHandler @ 0793e834 */
  FUN_03a8a718(PTR_DAT_08488568);
                    /* try { // try from 0793e7e0 to 07a3e7e3 has its CatchHandler @ 0793e828 */
                    /* try { // try from 0793e7e4 to 07a3e7e7 has its CatchHandler @ 0793e824 */
                    /* try { // try from 0793e7e8 to 07a3e7eb has its CatchHandler @ 0793e81c */
  FUN_03a8a718(PTR_DAT_084b1ba8);
                    /* try { // try from 0793e7ec to 07a3e7ef has its CatchHandler @ 0793e814 */
                    /* try { // try from 0793e7f0 to 07a3e7f3 has its CatchHandler @ 0793e80c */
                    /* try { // try from 0793e7f4 to 07a3e7f7 has its CatchHandler @ 0793e860 */
  FUN_03a8a718(PTR_DAT_084b1bb0);
                    /* catch() { ... } // from try @ 0793e48c with catch @ 0793e7f8
                       try { // try from 0793e7f8 to 07a3e87b has its CatchHandler @ 0793e2c0 */
                    /* catch() { ... } // from try @ 0793e788 with catch @ 0793e7fc */
                    /* catch() { ... } // from try @ 0793e79c with catch @ 0793e800 */
  FUN_03a8a718(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
                    /* catch() { ... } // from try @ 0793e6e0 with catch @ 0793e804 */
                    /* catch() { ... } // from try @ 0793e6cc with catch @ 0793e808 */
                    /* catch() { ... } // from try @ 0793e7f0 with catch @ 0793e80c */
  FUN_03a8a718(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
                    /* catch() { ... } // from try @ 0793e5fc with catch @ 0793e810 */
                    /* catch() { ... } // from try @ 0793e7ec with catch @ 0793e814 */
                    /* catch() { ... } // from try @ 0793e5e4 with catch @ 0793e818 */
  FUN_03a8a718(
              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_StopNaNPassData,_RenderGraphContext>_TypeInfo
              );
                    /* catch() { ... } // from try @ 0793e7e8 with catch @ 0793e81c */
                    /* catch() { ... } // from try @ 0793e5d0 with catch @ 0793e820 */
  *(undefined1 *)(unaff_x20 + 0xdcb) = 1;
  puVar6 = OVRPlugin_Vector3f___TypeInfo;
                    /* catch() { ... } // from try @ 0793e7e4 with catch @ 0793e824 */
                    /* catch() { ... } // from try @ 0793e7e0 with catch @ 0793e828 */
                    /* catch() { ... } // from try @ 0793e5ac with catch @ 0793e82c */
  iStack000000000000004c = *unaff_x19;
                    /* catch() { ... } // from try @ 0793e59c with catch @ 0793e830 */
  in_stack_00000030 = 0;
  in_stack_00000038 = (long *)0x0;
                    /* catch() { ... } // from try @ 0793e7dc with catch @ 0793e834 */
                    /* catch() { ... } // from try @ 0793e70c with catch @ 0793e838 */
                    /* catch() { ... } // from try @ 0793e6f8 with catch @ 0793e83c */
  if (iStack000000000000004c != 0) {
    lVar14 = *(long *)(unaff_x19 + 8);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = FUN_065cd268(*(undefined8 *)(lVar14 + 0x10),0);
    if ((uVar7 & 1) == 0) {
      plVar13 = (long *)System_Globalization_Bootstring__Encode(0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar8 = (**(code **)(*plVar13 + 0x248))
                        (plVar13,*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(*plVar13 + 0x250));
    }
    else {
      uVar8 = FUN_07fc796c(0);
    }
    uVar1 = *(undefined8 *)(lVar14 + 0x18);
    uVar2 = *(undefined8 *)(lVar14 + 0x20);
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_StopNaNPassData,_RenderGraphContext>_TypeInfo
                              );
    FUN_07fc4f90(lVar9,uVar1,uVar2,0);
    plVar13 = *(long **)(lVar14 + 0x28);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar11 = *plVar13;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_084c3f08) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0793e92c;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)PTR_DAT_084c3f08,0);
LAB_0793e92c:
    in_stack_00000038 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
    puVar5 = PTR_DAT_084c3f10;
    puVar4 = PTR_DAT_08488568;
    do {
      plVar13 = in_stack_00000038;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *in_stack_00000038;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0793e9b0;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)puVar4,0);
LAB_0793e9b0:
      uVar7 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      plVar13 = in_stack_00000038;
      if ((uVar7 & 1) == 0) {
        if ((-1 < iStack000000000000004c) || (in_stack_00000038 == (long *)0x0)) goto LAB_0793eac4;
        lVar11 = *in_stack_00000038;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 == 0) goto Unity_Services_Vivox_vx_req_account_login_t__getCPtr;
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0793ea84;
      }
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *in_stack_00000038;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0793ea14;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)puVar5,0);
LAB_0793ea14:
      auVar15 = (*(code *)*puVar10)(plVar13,puVar10[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_07fc64a4(lVar9,auVar15._0_8_,auVar15._8_8_,0);
    } while( true );
  }
  in_stack_00000030 = *(undefined8 *)(unaff_x19 + 10);
  unaff_x19[10] = 0;
  unaff_x19[0xb] = 0;
  iStack000000000000004c = -1;
  *unaff_x19 = -1;
  goto LAB_0793eb58;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
LAB_0793ea84:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08488550) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0793eab8;
    }
  }
Unity_Services_Vivox_vx_req_account_login_t__getCPtr:
  puVar10 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*(long *)PTR_DAT_08488550,0);
LAB_0793eab8:
  (*(code *)*puVar10)(plVar13,puVar10[1]);
LAB_0793eac4:
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc6c14(lVar9,*(undefined4 *)(lVar14 + 0x30),0);
  FUN_0793d9e4(lVar9,*(undefined8 *)(lVar14 + 0x38),uVar8);
  uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_SetGlobalColorPassData,_RenderGraphContext>_TypeInfo
                            );
  FUN_07fc4948(uVar8,0);
  FUN_07fc52b8(lVar9,uVar8,0);
  if (*(long *)(lVar14 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07fc5660(lVar9,0);
  in_stack_00000030 = FUN_0793e484();
  uVar7 = FUN_0587c6c4(&stack0x00000030,
                       *(undefined8 *)
                        UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo)
  ;
  if ((uVar7 & 1) == 0) {
    iStack000000000000004c = 0;
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000030;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ffb670(unaff_x19 + 2,&stack0x00000030);
    return;
  }
LAB_0793eb58:
  uVar8 = FUN_0587c704(&stack0x00000030,
                       *(undefined8 *)
                        UnityEngine_UIElements_PointerDeviceState_RuntimePointerState___TypeInfo);
  puVar4 = UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo;
  iVar3 = *(int *)(*(long *)puVar6 + 0xe4);
  *unaff_x19 = -2;
  if (iVar3 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar8,*(undefined8 *)puVar4);
  return;
}


