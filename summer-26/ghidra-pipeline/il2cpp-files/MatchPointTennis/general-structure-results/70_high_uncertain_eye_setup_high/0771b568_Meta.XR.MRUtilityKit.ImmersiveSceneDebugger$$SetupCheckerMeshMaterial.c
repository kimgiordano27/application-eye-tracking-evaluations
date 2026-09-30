/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$SetupCheckerMeshMaterial
ENTRY_POINT: 0771b568
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__SetupCheckerMeshMaterial(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar4;
  undefined4 uVar5;
  
  do {
    if (*unaff_x26 == 0) {
LAB_0771b61c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_094ea778(unaff_d9,unaff_d8);
    do {
      unaff_w22 = unaff_w22 + 1;
      if (*(int *)(unaff_x21 + 0x18) <= (int)unaff_w22) {
        return;
      }
      if (*(char *)(unaff_x23 + 0x7a0) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x23 + 0x7a0) = unaff_w24;
      }
      puVar2 = *(undefined4 **)(*unaff_x20 + 0xb8);
      unaff_d9 = (ulong)(uint)puVar2[2];
      unaff_d8 = (ulong)(uint)puVar2[3];
      if (*(char *)(unaff_x25 + 0x153) == '\0') {
        FUN_04447ba8();
        lVar3 = *unaff_x20;
        *(undefined1 *)(unaff_x25 + 0x153) = unaff_w24;
        puVar2 = *(undefined4 **)(lVar3 + 0xb8);
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_0771b618;
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      unaff_x26 = (long *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20);
      if (*unaff_x26 == 0) goto LAB_0771b61c;
      uVar1 = FUN_094e2b8c();
    } while ((uVar1 & 1) == 0);
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) break;
    if (*unaff_x26 == 0) goto LAB_0771b61c;
    FUN_094ea740(uVar4,uVar5);
  } while (unaff_w22 < *(uint *)(unaff_x21 + 0x18));
LAB_0771b618:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


