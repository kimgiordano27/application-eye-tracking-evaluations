/*
FUNCTION_NAME: FUN_049f278c
ENTRY_POINT: 049f278c
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_049f278c(void)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  
  DAT_0b559050 = FUN_049e9204();
  DAT_0b558f20 = FUN_049e9240(DAT_0b559050,0xfffffffffffffffb,1,1);
  uVar2 = DAT_0b31ec28;
  uVar6 = (ulong)DAT_0b31ec28;
  if (0x3f < DAT_0b31ec28) {
    (*(code *)PTR_FUN_0b31ec10)("Too many mark procedures");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = uVar6 + 1;
  bVar3 = DAT_0b31ec28 != 0x3f;
  iVar7 = (int)lVar5;
  DAT_0b31ec28 = iVar7;
  *(code **)(&DAT_0b3462e0 + uVar6 * 8) =
       RenderHeads_Media_AVProVideo_RequestPermissions_<Start>d__0__System_Collections_IEnumerator_Reset
  ;
  DAT_0b558f40 = uVar2;
  if (bVar3) {
    DAT_0b31ec28 = uVar2 + 2;
    *(code **)(&DAT_0b3462e0 + lVar5 * 8) = FUN_049f2c58;
    DAT_0b558f44 = iVar7;
    uVar4 = FUN_049e9204();
    DAT_0b558f24 = FUN_049e9240(uVar4,(long)(int)(DAT_0b558f44 << 2 | 2),0,1);
    uVar1 = _UNK_01df13a8;
    uVar4 = _DAT_01df13a0;
    lVar5 = 0;
    DAT_0b558f50 = 1;
    uVar6 = 0x3f;
    do {
      bVar8 = (byte)((ulong)lVar5 >> 8);
      bVar9 = (byte)((ulong)lVar5 >> 0x10);
      bVar10 = (byte)((ulong)lVar5 >> 0x18);
      bVar11 = (byte)((ulong)lVar5 >> 0x20);
      bVar12 = (byte)((ulong)lVar5 >> 0x28);
      bVar13 = (byte)((ulong)lVar5 >> 0x30);
      bVar14 = (byte)((ulong)lVar5 >> 0x38);
      if (CONCAT17(bVar14 | (byte)((ulong)uVar4 >> 0x38),
                   CONCAT16(bVar13 | (byte)((ulong)uVar4 >> 0x30),
                            CONCAT15(bVar12 | (byte)((ulong)uVar4 >> 0x28),
                                     CONCAT14(bVar11 | (byte)((ulong)uVar4 >> 0x20),
                                              CONCAT13(bVar10 | (byte)((ulong)uVar4 >> 0x18),
                                                       CONCAT12(bVar9 | (byte)((ulong)uVar4 >> 0x10)
                                                                ,CONCAT11(bVar8 | (byte)((ulong)
                                                  uVar4 >> 8),(byte)lVar5 | (byte)uVar4))))))) <
          0x1f) {
        (&DAT_0b558f58)[lVar5] = -1L << (uVar6 & 0x3f) | 1;
      }
      if (CONCAT17(bVar14 | (byte)((ulong)uVar1 >> 0x38),
                   CONCAT16(bVar13 | (byte)((ulong)uVar1 >> 0x30),
                            CONCAT15(bVar12 | (byte)((ulong)uVar1 >> 0x28),
                                     CONCAT14(bVar11 | (byte)((ulong)uVar1 >> 0x20),
                                              CONCAT13(bVar10 | (byte)((ulong)uVar1 >> 0x18),
                                                       CONCAT12(bVar9 | (byte)((ulong)uVar1 >> 0x10)
                                                                ,CONCAT11(bVar8 | (byte)((ulong)
                                                  uVar1 >> 8),(byte)lVar5 | (byte)uVar1))))))) <
          0x1f) {
        (&DAT_0b558f60)[lVar5] = -1L << (uVar6 - 1 & 0x3f) | 1;
      }
      lVar5 = lVar5 + 2;
      uVar6 = uVar6 - 2;
    } while (lVar5 != 0x20);
    return;
  }
  (*(code *)PTR_FUN_0b31ec10)("Too many mark procedures");
                    /* WARNING: Subroutine does not return */
  abort();
}


