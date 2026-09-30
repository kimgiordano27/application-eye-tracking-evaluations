/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 04f728e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateDynamicObjectTrackerAsync
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
               undefined4 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000008 = in_x9[1];
  uStack0000000000000000 = *in_x9;
  uStack0000000000000018 = in_x9[3];
  uVar8 = in_x9[2];
  uStack0000000000000020 = *(undefined8 *)(param_1 + 0x168);
  uVar9 = param_4;
  uStack0000000000000010 = uVar8;
  FUN_04f4ce0c();
  uVar7 = (undefined4)uVar8;
  uVar6 = FUN_05c7bb74(0);
  lVar1 = FUN_05c89340();
  if (lVar1 != 0) {
    FUN_05c9cce4(unaff_s8,unaff_s9,param_4,uVar6,uVar7,uVar9,param_5,lVar1,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_05c56fc0(*(long *)(unaff_x19 + 0x40),1,0);
      plVar5 = *(long **)(unaff_x19 + 0x58);
      if (plVar5 == (long *)0x0) {
        uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
      }
      else {
        lVar1 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)System_Data_IndexField_var) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_04f729cc;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)System_Data_IndexField_var,0);
LAB_04f729cc:
        uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      }
      lVar1 = 0x98;
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        lVar1 = 0x90;
      }
      if (*(long *)(unaff_x19 + lVar1) != 0) {
        FUN_05c3b794(uVar3,*(long *)(unaff_x19 + lVar1),0);
        FUN_04f725f0();
        FUN_04f72a34();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


