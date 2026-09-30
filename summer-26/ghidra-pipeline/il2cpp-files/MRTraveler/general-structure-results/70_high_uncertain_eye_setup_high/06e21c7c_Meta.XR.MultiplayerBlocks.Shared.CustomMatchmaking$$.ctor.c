/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking$$.ctor
ENTRY_POINT: 06e21c7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking___ctor(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_08e68f00;
  if (param_1 != 0) {
    uVar3 = FUN_06e21e18();
    lVar5 = *(long *)puVar1;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar5);
    }
    uVar4 = FUN_085decd4(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      bVar2 = false;
    }
    else {
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_06e21e10;
      bVar2 = *(char *)(*(long *)(unaff_x19 + 0x48) + 0x120) != '\0';
    }
    uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar4 = FUN_085decd4(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06e21e10;
      if (*(char *)(*(long *)(unaff_x19 + 0x50) + 0x120) != '\0') {
        FUN_06e21efc();
        FUN_085e0160();
        goto LAB_06e21d7c;
      }
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_06e2eec4(*(long *)(unaff_x19 + 0x20),uVar3,0,0,0,!bVar2,0);
LAB_06e21d7c:
      lVar5 = *(long *)(unaff_x19 + 0x68);
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 0 && bVar2)) &&
         (0 < (int)*(ulong *)(lVar5 + 0x18))) {
        uVar4 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          lVar8 = *(long *)(unaff_x19 + 0x20);
          uVar3 = FUN_06e21e18();
          if (lVar8 == 0) goto LAB_06e21e10;
          FUN_06e2eec4(lVar8,uVar3,0,0,0,0,0);
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      return;
    }
  }
LAB_06e21e10:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


