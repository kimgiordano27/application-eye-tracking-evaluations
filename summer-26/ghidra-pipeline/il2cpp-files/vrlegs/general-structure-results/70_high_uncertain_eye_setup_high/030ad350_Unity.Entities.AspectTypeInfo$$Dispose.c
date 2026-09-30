/*
FUNCTION_NAME: Unity.Entities.AspectTypeInfo$$Dispose
ENTRY_POINT: 030ad350
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x030ad678) */

undefined4 Unity_Entities_AspectTypeInfo__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x20;
  undefined4 uVar14;
  uint unaff_w22;
  int iVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  plVar4 = (long *)FUN_030ad774();
                    /* try { // try from 030ad354 to 031ad35b has its CatchHandler @ 030adc40 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar9 = *plVar4;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 030ad36c to 031ad377 has its CatchHandler @ 030adae4 */
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_030ad3c0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
                    /* try { // try from 030ad398 to 031ad39b has its CatchHandler @ 030ada08 */
                    /* try { // try from 030ad39c to 031ad3ab has its CatchHandler @ 030adae0 */
  puVar5 = (undefined8 *)
           FUN_01a472ec(plVar4,*(long *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo,0);
LAB_030ad3c0:
                    /* try { // try from 030ad3c8 to 031ad3cb has its CatchHandler @ 030ad9a0 */
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = System_Action<InputAction_CallbackContext>_TypeInfo;
  puVar1 = PTR_DAT_03cbed20;
                    /* try { // try from 030ad3cc to 031ad3db has its CatchHandler @ 030ada44 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar9 = *plVar4;
                    /* try { // try from 030ad3ec to 031ad43f has its CatchHandler @ 030abb84 */
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_030ad430;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar1,0);
LAB_030ad430:
    uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar12 & 1) == 0) {
      uVar14 = 0;
      iVar15 = 9;
      iVar8 = 9;
      if (plVar4 == (long *)0x0) goto LAB_030ad5f8;
LAB_030ad598:
      iVar15 = iVar8;
      lVar9 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 == 0) goto LAB_030ad5d0;
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_030ad48c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar2,0);
LAB_030ad48c:
    lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar8 = (int)*(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x18);
    if (0 < iVar8) {
      uVar11 = 0;
      do {
        if (unaff_w22 == uVar11) {
          in_stack_00000008 = 0;
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          in_stack_00000008 = FUN_030ad7f0();
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008);
          lVar10 = *(long *)(lVar9 + 0x28);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          in_stack_00000010 = FUN_030ad930(*(undefined4 *)(lVar10 + (ulong)unaff_w22 * 4 + 0x20));
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000010);
          lVar9 = *(long *)(lVar9 + 0x28);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar9 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uVar3 = FUN_030ada3c(*(undefined4 *)(lVar9 + (ulong)unaff_w22 * 4 + 0x20));
          in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,uVar3) & 0xffffffffffffff01;
          unaff_x20[2] = in_stack_00000018;
          unaff_x20[1] = in_stack_00000010;
          *unaff_x20 = in_stack_00000008;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          uVar14 = 1;
          iVar15 = 8;
          iVar8 = 8;
          if (plVar4 != (long *)0x0) goto LAB_030ad598;
          goto LAB_030ad5f8;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar8);
      unaff_w22 = unaff_w22 - uVar11;
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_030ad5ec;
    }
  }
LAB_030ad5d0:
  puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cbed08,0);
LAB_030ad5ec:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_030ad5f8:
  if ((iVar15 != 9) && (iVar15 != 0)) {
    return uVar14;
  }
  thunk_FUN_01a6ca08(System_Action<ModeratorTools_PunishBaseCommand>_TypeInfo);
  uVar6 = thunk_FUN_01a89e68();
  uVar7 = thunk_FUN_01a6ca08(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
  FUN_030adadc(uVar6,uVar7);
  uVar7 = thunk_FUN_01a6ca08(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar6,uVar7);
}


