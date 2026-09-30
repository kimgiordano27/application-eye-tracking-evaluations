/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ColliderSurface$$ClosestSurfacePoint
ENTRY_POINT: 018bf1d0
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Oculus_Interaction_Surfaces_ColliderSurface__ClosestSurfacePoint(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_031c8668(uVar6,0);
  if (unaff_x22 != 0) {
    lVar2 = FUN_02cab2b8();
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe0);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
    if (lVar2 == 0) {
      thunk_FUN_0159f088(PTR_DAT_06e06730);
      uVar6 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar4 = thunk_FUN_0159f088(PTR_DAT_06d89cc8);
      FUN_03168104(uVar6,uVar4,0);
      uVar4 = thunk_FUN_0159f088(PTR_DAT_06da0508);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar6,uVar4);
    }
    lVar3 = thunk_FUN_015d0480(lVar2,lVar7);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(lVar2,lVar7);
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar8 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78) + 8))();
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar8 = uVar8 + 1;
                    /* try { // try from 018bf294 to 019bf2bb has its CatchHandler @ 018bf408 */
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (*unaff_x21 != 0) {
      uVar1 = FUN_02cad608(*unaff_x21,*(undefined8 *)PTR_DAT_06d90088,0);
      *(undefined4 *)(unaff_x19 + 0x38) = uVar1;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
                    /* try { // try from 018bf2d4 to 019bf333 has its CatchHandler @ 018bf40c */
      thunk_FUN_01656ef8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


