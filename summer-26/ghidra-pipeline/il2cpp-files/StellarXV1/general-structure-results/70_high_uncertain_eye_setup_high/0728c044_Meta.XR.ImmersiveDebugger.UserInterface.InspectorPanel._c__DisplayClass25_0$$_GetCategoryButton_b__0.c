/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass25_0$$<GetCategoryButton>b__0
ENTRY_POINT: 0728c044
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass25_0__<GetCategoryButton>b__0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  long unaff_x24;
  long lVar5;
  undefined1 unaff_w25;
  ulong unaff_x26;
  
  while( true ) {
    FUN_0728a2f0(param_1,param_2,param_3,unaff_x22);
    lVar4 = unaff_x23;
    lVar5 = unaff_x24;
    do {
      unaff_x24 = unaff_x22;
      unaff_x23 = unaff_x21;
      if (lVar4 == 0) goto LAB_0728c0c4;
      uVar1 = *(undefined4 *)(unaff_x20 + 0x54);
      *(int *)(unaff_x23 + 0x20) = *(int *)(lVar4 + 0x20) - *(int *)(unaff_x24 + 0x58);
      uVar2 = FUN_07288f9c(uVar1);
      *(undefined1 *)(lVar4 + 0x26) = unaff_w25;
      *(byte *)(unaff_x23 + 0x24) = (byte)uVar2 & 1;
      if (((unaff_x26 & 1) == 0) &&
         (uVar2 = Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_Callstack(),
         (uVar2 & 1) != 0)) {
        FUN_072893fc(unaff_x24,lVar5);
        uVar3 = FUN_0728ba5c();
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0728c0c4;
        uVar2 = FUN_0728a634(uVar3,*(undefined8 *)(unaff_x20 + 0x10),lVar5);
      }
      unaff_x21 = FUN_0728b8fc(uVar2,unaff_x23);
      unaff_x26 = 0;
      if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) ||
          (unaff_x22 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x28), unaff_x22 == 0)) ||
         (unaff_x24 == 0)) goto LAB_0728c0c4;
      if (*(long *)(unaff_x22 + 0x40) != *(long *)(unaff_x24 + 0x40)) {
        if (unaff_x23 != 0) {
          *(undefined1 *)(unaff_x23 + 0x26) = 1;
          if ((unaff_x19 & 1) != 0) {
            FUN_0728c2c4();
            return;
          }
          return;
        }
        goto LAB_0728c0c4;
      }
      lVar4 = unaff_x23;
      lVar5 = unaff_x24;
    } while (*(long *)(unaff_x22 + 0x30) == unaff_x24);
    if ((*(long *)(unaff_x22 + 0x28) == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) break;
    param_1 = FUN_0728a2f0(unaff_x21,*(undefined8 *)(unaff_x20 + 0x10),
                           *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x38),unaff_x22);
    if ((*(long *)(unaff_x24 + 0x28) == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) break;
    param_2 = *(undefined8 *)(unaff_x20 + 0x10);
    param_3 = *(undefined8 *)(*(long *)(unaff_x24 + 0x28) + 0x38);
  }
LAB_0728c0c4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


