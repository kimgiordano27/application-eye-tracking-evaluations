/*
FUNCTION_NAME: MagicaCloth2.ColliderCollisionConstraint.SerializeData.<>c__DisplayClass10_0$$.ctor
ENTRY_POINT: 052331e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ColliderCollisionConstraint_SerializeData_<>c__DisplayClass10_0___ctor
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x26;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x108);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar6 = FUN_056109c0(uVar6,0);
  if (lVar5 != 0) {
    lVar5 = FUN_054ff45c(lVar5,*(undefined8 *)PTR_DAT_06d39108,uVar6,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768(lVar7);
    }
    if (lVar5 == 0) {
      thunk_FUN_02f239f0(PTR_DAT_06d39128);
      uVar6 = thunk_FUN_02ef1808();
      uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d39130);
      FUN_054f60d0(uVar6,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6);
    }
    lVar2 = thunk_FUN_02ef170c(lVar5,lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar5,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar8 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        FUN_052352b8();
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (*unaff_x21 != 0) {
      uVar1 = FUN_05501738(*unaff_x21,*(undefined8 *)PTR_DAT_06d39118,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_02f411dc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


