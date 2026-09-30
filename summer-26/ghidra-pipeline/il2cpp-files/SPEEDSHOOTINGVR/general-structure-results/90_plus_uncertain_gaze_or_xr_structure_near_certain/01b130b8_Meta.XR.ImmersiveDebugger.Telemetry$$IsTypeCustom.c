/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 01b130b8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 in_stack_00000008;
  
  iVar1 = thunk_FUN_0105ce04();
  if (iVar1 != 1) {
    FUN_01d68ae8(7,0);
  }
  iVar1 = thunk_FUN_0105cdc0();
  if (iVar1 != 0) {
    FUN_01d68ae8(6,0);
  }
  uVar2 = FUN_01d60e34();
  if (uVar2 < unaff_w19) {
    FUN_01d69368(0);
  }
  iVar1 = FUN_01d60e34();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_01463474(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar1 - unaff_w19) < iVar3) {
      FUN_01d68ae8(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      FUN_0103c244(lVar8);
    }
    lVar8 = thunk_FUN_0103ffe0();
    if (lVar8 != 0) {
      FUN_01b12e38();
      return;
    }
    plVar4 = (long *)thunk_FUN_0103ffe0();
    if (plVar4 == (long *)0x0) {
      FUN_01d693a0();
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar9 = 0;
        puVar10 = (undefined4 *)(lVar8 + 0x30);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if (-1 < (int)puVar10[-4]) {
            in_stack_00000008._4_4_ = *puVar10;
            lVar5 = thunk_FUN_0103fd0c(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                       (long)&stack0x00000008 + 4);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_0103ffe0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
              FUN_00fdc400(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_0106e12c(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 6;
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


