/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_RegisterOpenXREventHandler
ENTRY_POINT: 01dbf7f4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_RegisterOpenXREventHandler(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  int iVar10;
  
  puVar2 = PTR_DAT_0235aa28;
  if (0 < param_1) {
    bVar1 = false;
    iVar10 = 0;
    do {
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01dbf85c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348();
LAB_01dbf85c:
      lVar7 = (*(code *)*puVar3)();
      if (lVar7 == 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar4 = thunk_FUN_010400dc();
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0235a1f0);
        uVar6 = thunk_FUN_010303a8(PTR_DAT_0234d418);
        FUN_01c5e198(uVar4,uVar5,uVar6,0);
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0235aa30);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar4,uVar5);
      }
      if (bVar1) {
LAB_01dbf8a8:
        bVar1 = true;
      }
      else {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar8 = FUN_01db86c8();
        if ((uVar8 & 1) != 0) goto LAB_01dbf8a8;
        uVar8 = FUN_01db86c8(lVar7,0);
        if ((uVar8 & 1) != 0) {
          FUN_01dbfacc();
          goto LAB_01dbf8a8;
        }
        FUN_01dbbf60(lVar7);
        uVar8 = FUN_01db86c8();
        if ((uVar8 & 1) != 0) {
          FUN_01db751c(lVar7);
        }
        bVar1 = false;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != param_1);
  }
  return;
}


