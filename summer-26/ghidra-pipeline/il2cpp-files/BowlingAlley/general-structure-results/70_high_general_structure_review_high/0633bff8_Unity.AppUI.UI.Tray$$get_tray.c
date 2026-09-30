/*
FUNCTION_NAME: Unity.AppUI.UI.Tray$$get_tray
ENTRY_POINT: 0633bff8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


undefined8 Unity_AppUI_UI_Tray__get_tray(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  if ((DAT_076de8df & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279468);
    thunk_FUN_032e1da0(PTR_DAT_072b9830);
    DAT_076de8df = 1;
  }
  iVar8 = FUN_0633bb40(param_1);
  if (iVar8 == 0x17) {
    lVar9 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279468,0x10);
    if ((lVar9 != 0) && (lVar12 = *(long *)(param_1 + 0x18), lVar12 != 0)) {
      uVar13 = 0;
      lVar14 = 0x800000000;
      do {
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar13) {
          if (0x1b < *(uint *)(lVar12 + 0x18)) {
            bVar3 = *(byte *)(lVar12 + 0x3a);
            bVar4 = *(byte *)(lVar12 + 0x3b);
            bVar5 = *(byte *)(lVar12 + 0x39);
            bVar6 = *(byte *)(lVar12 + 0x38);
            uVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b9830);
            FUN_06329158(uVar10,lVar9,
                         (long)(int)((uint)bVar4 << 0x18) | (ulong)bVar3 << 0x10 | (ulong)bVar5 << 8
                         | (ulong)bVar6,0);
            return uVar10;
          }
          goto LAB_0633c1a4;
        }
        if (((ulong)*(uint *)(lVar12 + 0x18) <= uVar13 + 8) || (*(uint *)(lVar9 + 0x18) <= uVar13))
        goto LAB_0633c1a4;
        lVar1 = lVar14 >> 0x20;
        lVar14 = lVar14 + 0x100000000;
        *(undefined1 *)(lVar9 + 0x20 + uVar13) = *(undefined1 *)(lVar12 + lVar1 + 0x20);
        lVar12 = *(long *)(param_1 + 0x18);
        uVar13 = uVar13 + 1;
      } while (lVar12 != 0);
    }
  }
  else {
    iVar8 = FUN_0633bb40(param_1);
    if (iVar8 != 2) {
      thunk_FUN_032e1da0(PTR_DAT_072b9868);
      uVar10 = thunk_FUN_032a56a0();
      FUN_063893ac(uVar10,0x273f,0);
      uVar11 = thunk_FUN_032e1da0(Meta_WitAi_TTS_Interfaces_ISpeakerTextPostprocessor_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar10,uVar11);
    }
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if ((((4 < uVar2) && (uVar2 != 5)) && (6 < uVar2)) && (uVar2 != 7)) {
        uVar7 = *(undefined4 *)(lVar9 + 0x24);
        uVar10 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b9830);
        FUN_063290cc(uVar10,uVar7,0);
        return uVar10;
      }
LAB_0633c1a4:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


