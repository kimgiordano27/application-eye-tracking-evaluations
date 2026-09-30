/*
FUNCTION_NAME: Fusion.NetworkPhysicsSimulation2D$$RequestPhysicsSyncTransform
ENTRY_POINT: 01c4ee08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 Fusion_NetworkPhysicsSimulation2D__RequestPhysicsSyncTransform(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int unaff_w19;
  long lVar6;
  long unaff_x21;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  FUN_036dd580();
  lVar2 = FUN_036cbbbc(in_stack_00000000,0);
  if (lVar2 == 0) {
LAB_01c4ef54:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_01f7e3e4(lVar2,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc3f30);
  lVar2 = in_stack_00000008;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036cee6c(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) goto LAB_01c4ef54;
    uVar1 = FUN_036d0224(*(undefined4 *)(lVar2 + 0x3c),0);
    uVar5 = 0;
    do {
      if ((uVar1 >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
        if (unaff_x21 == 0) goto LAB_01c4ef54;
        FUN_036cf4a0();
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x20);
  }
  do {
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *unaff_x26;
    }
    lVar6 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_01c4ef54;
    if (unaff_w19 <= *(int *)(lVar6 + 0x18)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *unaff_x26;
      }
      return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x10);
    }
    if (((unaff_x21 == 0) || (lVar2 = FUN_036d0210(), lVar2 == 0)) ||
       (uVar4 = FUN_01f7e2fc(lVar2,*unaff_x27), lVar6 == 0)) goto LAB_01c4ef54;
    FUN_01b5f01c(lVar6,uVar4,*unaff_x28);
  } while( true );
}


