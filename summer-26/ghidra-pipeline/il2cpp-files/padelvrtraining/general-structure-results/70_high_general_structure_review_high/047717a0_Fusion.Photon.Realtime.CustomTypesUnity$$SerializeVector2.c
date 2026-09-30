/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 047717a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__SerializeVector2(void)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  int unaff_w20;
  
  if (unaff_w20 != 0) {
    return;
  }
  if (unaff_x19[0x14] != 0) {
    iVar2 = FUN_045595cc(unaff_x19[0x14],0);
    if (iVar2 < 1) {
      cVar1 = *(char *)((long)unaff_x19 + 0x52);
      thunk_FUN_03d187c8();
      if (cVar1 == '\0') {
        thunk_FUN_03d1e194(PTR_DAT_091c6fe0);
        uVar5 = thunk_FUN_03d2ef40();
                    /* try { // try from 047718e0 to 048718e3 has its CatchHandler @ 04771a7c */
        Fusion_UTF32Tools__Convert(uVar5,0x28);
      }
      else {
        plVar3 = (long *)(**(code **)(*unaff_x19 + 0x1c8))();
        if (plVar3 == (long *)0x0) goto LAB_047718a8;
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091c7088) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
              goto LAB_04771844;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03d8f370(plVar3,*(long *)PTR_DAT_091c7088,0xb);
LAB_04771844:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 04771850 to 04871877 has its CatchHandler @ 04771a88 */
        if ((uVar8 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x04771870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x208))();
          return;
        }
        (**(code **)(*unaff_x19 + 0x228))();
        thunk_FUN_03d1e194(PTR_DAT_091d29b8);
        uVar5 = thunk_FUN_03d2ef40();
        FUN_0476e5d0();
      }
    }
    else {
                    /* try { // try from 047718ac to 048718d3 has its CatchHandler @ 04771a84 */
      thunk_FUN_03d1e194(PTR_DAT_091ae4d0);
      uVar5 = thunk_FUN_03d2ef40();
      FUN_070b2c10(uVar5,0);
    }
                    /* try { // try from 04771918 to 04871927 has its CatchHandler @ 04771a70 */
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091d2a28);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar5,uVar6);
  }
LAB_047718a8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


