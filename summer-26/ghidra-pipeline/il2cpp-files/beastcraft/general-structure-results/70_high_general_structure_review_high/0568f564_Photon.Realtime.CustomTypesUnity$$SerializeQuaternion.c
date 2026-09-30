/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeQuaternion
ENTRY_POINT: 0568f564
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Photon_Realtime_CustomTypesUnity__SerializeQuaternion(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar6;
  
  *(undefined1 *)(unaff_x20 + 0xdb3) = in_w8;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x20) & unaff_w21;
    if (*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) <= uVar1) {
LAB_0568f630:
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    lVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a87138);
    FUN_0568f640();
    plVar6 = *(long **)(unaff_x19 + 0x18);
    if (plVar6 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02e789bc(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_02e86560();
                    /* WARNING: Subroutine does not return */
        FUN_02e3cb88(uVar5,0);
      }
      if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_0568f630;
      plVar6[(long)(int)uVar1 + 4] = lVar3;
      thunk_FUN_02ee2be8(plVar6 + (long)(int)uVar1 + 4,lVar3);
      iVar2 = *(int *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x10) = iVar2 + 1;
      if (iVar2 == *(int *)(unaff_x19 + 0x20)) {
        FUN_0568f694();
      }
      if (lVar3 != 0) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


