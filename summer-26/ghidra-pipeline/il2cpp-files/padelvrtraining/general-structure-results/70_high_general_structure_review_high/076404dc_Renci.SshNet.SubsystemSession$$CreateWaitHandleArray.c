/*
FUNCTION_NAME: Renci.SshNet.SubsystemSession$$CreateWaitHandleArray
ENTRY_POINT: 076404dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


void Renci_SshNet_SubsystemSession__CreateWaitHandleArray(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar6;
  long unaff_x27;
  undefined8 *unaff_x29;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1aa68(param_1,1,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *(long *)(unaff_x19 + 0x58);
    uVar3 = FUN_0761ceb0(*(long *)(unaff_x19 + 0x10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar3,uVar3 & 0xffffffff);
    }
    FUN_07c17eec(lVar6,uVar3 & 0xffffffff,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar6 = *(long *)(unaff_x19 + 0x58);
    uVar3 = FUN_0761ceb0(*(long *)(unaff_x19 + 0x10),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar3,uVar3 & 0xffffffff);
    }
    FUN_07c17f54(lVar6,uVar3 & 0xffffffff,0);
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1c9ec(*unaff_x23,unaff_x27,*(undefined4 *)(unaff_x19 + 0x40),0);
    if ((*unaff_x23 != 0) && (*(char *)(*unaff_x23 + 0x52) != '\0')) break;
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    unaff_x27 = *(long *)(unaff_x22 + unaff_x21 * 8);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = FUN_07cf1710(unaff_x27,0);
    lVar6 = thunk_FUN_03d2ef40(*unaff_x29);
    FUN_07c1738c(lVar6,uVar2,1,6,0);
    *unaff_x23 = lVar6;
    thunk_FUN_03d1023c();
    param_1 = *unaff_x23;
  }
  lVar6 = *(long *)(unaff_x19 + 0x58);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x52) == '\0')) {
    uVar3 = Renci_SshNet_Session__Reset();
    if ((uVar3 & 1) != 0) {
      FUN_06fc5244(*(undefined8 *)PTR_DAT_0922d728);
      FUN_07620134();
    }
    FUN_0762014c();
    return;
  }
  *(bool *)(unaff_x19 + 0x44) = *(int *)(lVar6 + 0x20) == 0x17;
  plVar4 = (long *)FUN_07c1b194(lVar6,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (cRam00000000098498ef == '\0') {
      FUN_03d2d2b0(PTR_DAT_0922cdd0);
      cRam00000000098498ef = '\x01';
    }
    puVar1 = PTR_DAT_0922cdd0;
    **(undefined8 **)(*(long *)PTR_DAT_0922cdd0 + 0xb8) = uVar5;
    thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
    plVar4 = *(long **)(unaff_x19 + 0x10);
    *(undefined4 *)(unaff_x19 + 0x1c) = 2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      FUN_07640ac0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


