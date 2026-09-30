/*
FUNCTION_NAME: Renci.SshNet.SubsystemSession$$Dispose
ENTRY_POINT: 07640934
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void Renci_SshNet_SubsystemSession__Dispose(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x29;
  
  FUN_06fc5244();
  FUN_07620134();
  do {
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar4 = *(long *)(unaff_x22 + unaff_x21 * 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = FUN_07cf1710(lVar4,0);
    lVar3 = thunk_FUN_03d2ef40(*unaff_x29);
    FUN_07c1738c(lVar3,uVar2,1,6,0);
    *unaff_x23 = lVar3;
    thunk_FUN_03d1023c();
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1aa68(*unaff_x23,1,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = *(long *)(unaff_x19 + 0x58);
    uVar7 = FUN_0761ceb0(*(long *)(unaff_x19 + 0x10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar7,uVar7 & 0xffffffff);
    }
    FUN_07c17eec(lVar3,uVar7 & 0xffffffff,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = *(long *)(unaff_x19 + 0x58);
    uVar7 = FUN_0761ceb0(*(long *)(unaff_x19 + 0x10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar7,uVar7 & 0xffffffff);
    }
    FUN_07c17f54(lVar3,uVar7 & 0xffffffff,0);
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1c9ec(*unaff_x23,lVar4,*(undefined4 *)(unaff_x19 + 0x40),0);
  } while ((*unaff_x23 == 0) || (*(char *)(*unaff_x23 + 0x52) == '\0'));
  lVar4 = *(long *)(unaff_x19 + 0x58);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x52) == '\0')) {
    uVar7 = Renci_SshNet_Session__Reset();
    if ((uVar7 & 1) != 0) {
      FUN_06fc5244(*(undefined8 *)PTR_DAT_0922d728);
      FUN_07620134();
    }
    FUN_0762014c();
    return;
  }
  *(bool *)(unaff_x19 + 0x44) = *(int *)(lVar4 + 0x20) == 0x17;
  plVar5 = (long *)FUN_07c1b194(lVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (cRam00000000098498ef == '\0') {
      FUN_03d2d2b0(PTR_DAT_0922cdd0);
      cRam00000000098498ef = '\x01';
    }
    puVar1 = PTR_DAT_0922cdd0;
    **(undefined8 **)(*(long *)PTR_DAT_0922cdd0 + 0xb8) = uVar6;
    thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
    plVar5 = *(long **)(unaff_x19 + 0x10);
    *(undefined4 *)(unaff_x19 + 0x1c) = 2;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
      FUN_07640ac0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


