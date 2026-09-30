/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 0568f160
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Photon_Realtime_CustomTypesUnity__SerializeVector2(ulong param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  int unaff_w19;
  uint unaff_w20;
  undefined8 uVar9;
  long unaff_x23;
  int iVar10;
  
  if ((param_1 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a87120);
    *(undefined1 *)(unaff_x23 + 0xdb1) = 1;
  }
  puVar4 = PTR_DAT_06a87120;
  if (unaff_w19 == 0) {
    puVar7 = *(undefined8 **)(*(long *)(PTR_DAT_06a2f000 + 0x90) + 0xb8);
LAB_0568f2a8:
    return *puVar7;
  }
  lVar5 = *(long *)PTR_DAT_06a87120;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar5 = *(long *)puVar4;
  }
  if (param_3 != 0) {
    if (unaff_w20 < *(uint *)(param_3 + 0x18)) {
      iVar10 = **(int **)(lVar5 + 0xb8) + unaff_w19;
      iVar1 = unaff_w20 + 1;
      iVar10 = ((uint)*(ushort *)(param_3 + (long)(int)unaff_w20 * 2 + 0x20) ^ iVar10 * 0x80) +
               iVar10;
      if (iVar1 < (int)(unaff_w19 + unaff_w20)) {
        lVar5 = (long)(int)(unaff_w19 + unaff_w20) - (long)iVar1;
        puVar8 = (ushort *)(param_3 + (long)iVar1 * 2 + 0x20);
        do {
          if (1U - unaff_w19 <= unaff_w20 - *(uint *)(param_3 + 0x18)) goto LAB_0568f2c0;
          lVar5 = lVar5 + -1;
          iVar10 = ((uint)*puVar8 ^ iVar10 << 7) + iVar10;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
      }
      uVar2 = *(uint *)(param_2 + 0x20);
      thunk_FUN_02e4aa50();
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar5 == 0) goto LAB_0568f2c4;
      iVar10 = iVar10 - (iVar10 >> 0x11);
      iVar10 = iVar10 - (iVar10 >> 0xb);
      uVar3 = iVar10 - (iVar10 >> 5);
      uVar2 = uVar2 & uVar3;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
        do {
          if (lVar5 == 0) {
            return 0;
          }
          if (*(uint *)(lVar5 + 0x18) == uVar3) {
            uVar9 = *(undefined8 *)(lVar5 + 0x10);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar6 = FUN_0568f2c8(uVar9,param_3,unaff_w20,unaff_w19);
            if ((uVar6 & 1) != 0) {
              puVar7 = (undefined8 *)(lVar5 + 0x10);
              goto LAB_0568f2a8;
            }
          }
          lVar5 = *(long *)(lVar5 + 0x20);
        } while( true );
      }
    }
LAB_0568f2c0:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
LAB_0568f2c4:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


