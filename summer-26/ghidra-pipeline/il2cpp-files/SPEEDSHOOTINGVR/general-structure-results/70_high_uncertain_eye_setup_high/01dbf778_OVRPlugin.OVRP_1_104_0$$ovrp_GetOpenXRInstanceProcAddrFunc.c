/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 01dbf778
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_104_0__ovrp_GetOpenXRInstanceProcAddrFunc(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 in_w8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar12;
  
  *(undefined1 *)(unaff_x20 + 0xa8d) = in_w8;
  lVar4 = thunk_FUN_010400dc(*unaff_x21);
  FUN_01dbf96c();
  if (unaff_x19 == (long *)0x0) {
LAB_01dbf968:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0235aa20) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_01dbf7e8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0103c348();
LAB_01dbf7e8:
  iVar3 = (*(code *)*puVar5)();
  puVar2 = PTR_DAT_0235aa28;
  if (0 < iVar3) {
    bVar1 = false;
    iVar12 = 0;
    do {
      lVar9 = *unaff_x19;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01dbf85c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0103c348();
LAB_01dbf85c:
      lVar9 = (*(code *)*puVar5)();
      if (lVar9 == 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar6 = thunk_FUN_010400dc();
        uVar7 = thunk_FUN_010303a8(PTR_DAT_0235a1f0);
        uVar8 = thunk_FUN_010303a8(PTR_DAT_0234d418);
        FUN_01c5e198(uVar6,uVar7,uVar8,0);
        uVar7 = thunk_FUN_010303a8(PTR_DAT_0235aa30);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar6,uVar7);
      }
      if (bVar1) {
LAB_01dbf8a8:
        bVar1 = true;
      }
      else {
        if (lVar4 == 0) goto LAB_01dbf968;
        uVar10 = FUN_01db86c8(lVar4,0);
        if ((uVar10 & 1) != 0) goto LAB_01dbf8a8;
        uVar10 = FUN_01db86c8(lVar9,0);
        if ((uVar10 & 1) != 0) {
          FUN_01dbfacc(lVar4,lVar9);
          goto LAB_01dbf8a8;
        }
        FUN_01dbbf60(lVar9,lVar4,0);
        uVar10 = FUN_01db86c8(lVar4,0);
        if ((uVar10 & 1) != 0) {
          FUN_01db751c(lVar9,lVar4,0);
        }
        bVar1 = false;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar3);
  }
  return lVar4;
}


