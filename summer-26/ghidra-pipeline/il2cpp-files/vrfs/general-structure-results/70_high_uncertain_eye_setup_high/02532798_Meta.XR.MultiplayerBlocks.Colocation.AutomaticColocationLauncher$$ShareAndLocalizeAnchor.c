/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$ShareAndLocalizeAnchor
ENTRY_POINT: 02532798
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ShareAndLocalizeAnchor(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar8;
  float unaff_s8;
  float fVar9;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06e38ce8);
  thunk_FUN_0159f088(PTR_DAT_06e1ae18);
  *(undefined1 *)(unaff_x21 + 0x165) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_04665928();
  if ((unaff_x20 != 0) && (unaff_x19 != 0)) {
    fVar9 = *(float *)(unaff_x20 + 0xac) + unaff_s8;
    *(float *)(unaff_x19 + 0x130) = fVar9;
    *(long *)(unaff_x20 + 0xf0) = unaff_x19;
    *(undefined1 *)(unaff_x20 + 0x100) = 1;
    *(undefined1 *)(unaff_x20 + 0xe9) = 1;
    thunk_FUN_01656ef8((long *)(unaff_x20 + 0xf0));
    puVar2 = PTR_DAT_06e1ae18;
    iVar4 = *(int *)(unaff_x20 + 0xa4);
    if (iVar4 == -1) {
      *(undefined4 *)(unaff_x20 + 0xa4) = 0x7fffffff;
      FUN_04661af4(*(undefined8 *)puVar2);
      iVar4 = *(int *)(unaff_x20 + 0xa4);
    }
    fVar8 = *(float *)(unaff_x20 + 0xa0);
    *(undefined1 *)(unaff_x20 + 0x9c) = 0;
    *(undefined4 *)(unaff_x20 + 0x114) = 0;
    *(undefined4 *)(unaff_x20 + 0xac) = 0;
    *(undefined1 *)(unaff_x20 + 0x118) = 1;
    puVar2 = PTR_DAT_06e38ce8;
    if (*(char *)(unaff_x20 + 0x9b) != '\0') {
      *(undefined1 *)(unaff_x20 + 0x9b) = 0;
      FUN_04661af4(*(undefined8 *)puVar2);
    }
    fVar8 = fVar9 + fVar8 * (float)iVar4;
    *(float *)(unaff_x20 + 0x14) = fVar9;
    *(float *)(unaff_x20 + 0x18) = fVar8;
    if (*(float *)(unaff_x19 + 0xa0) < fVar8) {
      *(float *)(unaff_x19 + 0xa0) = fVar8;
    }
    lVar3 = *(long *)(unaff_x19 + 0x128);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)PTR_DAT_06d95e40;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = unaff_x20;
          thunk_FUN_01656ef8(plVar6);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))();
        }
        lVar3 = *(long *)(unaff_x19 + 0x120);
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          lVar7 = *(long *)PTR_DAT_06dcfc20;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = unaff_x20;
              thunk_FUN_01656ef8(plVar6);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))();
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


