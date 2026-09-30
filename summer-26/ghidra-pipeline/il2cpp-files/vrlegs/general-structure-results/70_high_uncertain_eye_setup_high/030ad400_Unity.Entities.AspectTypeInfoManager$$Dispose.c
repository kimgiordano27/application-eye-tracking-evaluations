/*
FUNCTION_NAME: Unity.Entities.AspectTypeInfoManager$$Dispose
ENTRY_POINT: 030ad400
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x030ad678) */

undefined4
Unity_Entities_AspectTypeInfoManager__Dispose(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong in_x9;
  int *in_x10;
  int *piVar10;
  long in_x11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uVar11;
  uint unaff_w22;
  int iVar12;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_030ad430;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_01a472ec();
LAB_030ad430:
        uVar3 = (*(code *)*puVar2)();
        if ((uVar3 & 1) == 0) {
          uVar11 = 0;
          iVar12 = 9;
          iVar6 = 9;
          if (unaff_x19 == (long *)0x0) goto LAB_030ad5f8;
LAB_030ad598:
          iVar12 = iVar6;
          lVar7 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 == 0) goto LAB_030ad5d0;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_030ad5b8;
        }
                    /* try { // try from 030ad440 to 031ad447 has its CatchHandler @ 030adbdc */
        lVar7 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 030ad458 to 031ad463 has its CatchHandler @ 030adab4 */
            if (*(long *)(piVar10 + -2) == *unaff_x25) {
                    /* try { // try from 030ad488 to 031ad48b has its CatchHandler @ 030ada00 */
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_030ad48c;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_01a472ec();
LAB_030ad48c:
                    /* try { // try from 030ad48c to 031ad49b has its CatchHandler @ 030adab0 */
        lVar7 = (*(code *)*puVar2)();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar6 = (int)*(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18);
        if (0 < iVar6) {
          uVar9 = 0;
          do {
                    /* try { // try from 030ad4b8 to 031ad4bb has its CatchHandler @ 030ad99c */
                    /* try { // try from 030ad4bc to 031ad4cb has its CatchHandler @ 030ada2c */
            if (unaff_w22 == uVar9) {
              in_stack_00000008 = 0;
              in_stack_00000010 = 0;
              in_stack_00000018 = 0;
              in_stack_00000008 = FUN_030ad7f0();
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000008);
              lVar8 = *(long *)(lVar7 + 0x28);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar8 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              in_stack_00000010 = FUN_030ad930(*(undefined4 *)(lVar8 + (ulong)unaff_w22 * 4 + 0x20))
              ;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000010);
              lVar7 = *(long *)(lVar7 + 0x28);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar7 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              uVar1 = FUN_030ada3c(*(undefined4 *)(lVar7 + (ulong)unaff_w22 * 4 + 0x20));
              in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,uVar1) & 0xffffffffffffff01;
              unaff_x20[2] = in_stack_00000018;
              unaff_x20[1] = in_stack_00000010;
              *unaff_x20 = in_stack_00000008;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              uVar11 = 1;
              iVar12 = 8;
              iVar6 = 8;
              if (unaff_x19 != (long *)0x0) goto LAB_030ad598;
              goto LAB_030ad5f8;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < iVar6);
          unaff_w22 = unaff_w22 - uVar9;
        }
        param_1 = *unaff_x19;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_030ad5b8:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_030ad5ec;
    }
  }
LAB_030ad5d0:
  puVar2 = (undefined8 *)FUN_01a472ec();
LAB_030ad5ec:
  (*(code *)*puVar2)();
LAB_030ad5f8:
  if ((iVar12 != 9) && (iVar12 != 0)) {
    return uVar11;
  }
  thunk_FUN_01a6ca08(System_Action<ModeratorTools_PunishBaseCommand>_TypeInfo);
  uVar4 = thunk_FUN_01a89e68();
  uVar5 = thunk_FUN_01a6ca08(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
  FUN_030adadc(uVar4,uVar5);
  uVar5 = thunk_FUN_01a6ca08(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar5);
}


