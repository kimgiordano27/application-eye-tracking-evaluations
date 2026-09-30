/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData.<>c__DisplayClass10_0$$<ReplaceTransform>b__0
ENTRY_POINT: 05233238
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ColliderCollisionConstraint_SerializeData_<>c__DisplayClass10_0__<ReplaceTransform>b__0
               (long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long *unaff_x21;
  long lVar5;
  ulong uVar6;
  long unaff_x24;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_02eea768(lVar5);
  }
  if (unaff_x24 == 0) {
    thunk_FUN_02f239f0(PTR_DAT_06d39128);
    uVar2 = thunk_FUN_02ef1808();
    uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d39130);
    FUN_054f60d0(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar2);
  }
  lVar5 = thunk_FUN_02ef170c();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar6 = 0;
    uVar4 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      FUN_052352b8();
      uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = FUN_05501738(*unaff_x21,*(undefined8 *)PTR_DAT_06d39118,0);
  *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  thunk_FUN_02f411dc();
  return;
}


