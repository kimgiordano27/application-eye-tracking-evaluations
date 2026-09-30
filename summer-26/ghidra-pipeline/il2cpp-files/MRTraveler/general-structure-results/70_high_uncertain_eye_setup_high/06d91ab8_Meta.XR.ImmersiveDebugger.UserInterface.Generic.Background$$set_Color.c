/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_Color
ENTRY_POINT: 06d91ab8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_Color(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar11;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  *(int *)(unaff_x19 + 0x18) = (int)in_x10 + 1;
  *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x21;
  thunk_FUN_03d233cc();
  lVar5 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    lVar11 = *unaff_x20;
    uVar4 = FUN_069a0c14(lVar5,0x43,*unaff_x25);
    if (lVar11 != 0) {
      uVar6 = FUN_085875ac(lVar11,uVar4,0);
      lVar5 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
      if (lVar5 != 0) {
        lVar11 = *unaff_x20;
        uVar4 = FUN_069a0c14(lVar5,0x44,*unaff_x25);
        if (lVar11 != 0) {
          uVar7 = FUN_085875ac(lVar11,uVar4,0);
          uVar8 = thunk_FUN_03cf5234(*unaff_x26);
          FUN_06d926d0(uVar8,uVar6,uVar7,0x43,0x44);
          lVar5 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar2 = *(uint *)(unaff_x19 + 0x18);
            if (uVar2 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
              puVar9 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
              *puVar9 = uVar8;
              thunk_FUN_03d233cc(puVar9,uVar8);
            }
            else {
              FUN_05212cf4();
            }
            puVar3 = PTR_DAT_08e68f00;
            iVar1 = *(int *)(unaff_x19 + 0x18);
joined_r0x06d91be8:
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) {
              return;
            }
            lVar5 = FUN_05212a24();
            if (lVar5 != 0) {
              lVar11 = *(long *)puVar3;
              uVar6 = *(undefined8 *)(lVar5 + 0x10);
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_03cd7500(lVar11);
              }
              uVar10 = FUN_085dfaac(uVar6,0,0);
              if ((uVar10 & 1) != 0) goto LAB_06d91c84;
              lVar5 = FUN_05212a24();
              if (lVar5 != 0) goto code_r0x06d91c58;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
code_r0x06d91c58:
  lVar11 = *(long *)puVar3;
  uVar6 = *(undefined8 *)(lVar5 + 0x18);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar11);
  }
  uVar10 = FUN_085dfaac(uVar6,0,0);
  if ((uVar10 & 1) != 0) {
LAB_06d91c84:
    FUN_052143ec();
  }
  goto joined_r0x06d91be8;
}


