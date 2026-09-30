/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$RegisterSceneLoadedCallback
ENTRY_POINT: 0771b0d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__RegisterSceneLoadedCallback(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar5;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x27;
  uint uVar6;
  
  while( true ) {
    if (0 < (int)in_w8) {
      uVar6 = 0;
      do {
        if (in_w8 <= uVar6) goto LAB_0771b23c;
        lVar4 = *(long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_0771b238;
        lVar4 = *(long *)(lVar4 + 0x18);
        if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) {
          iVar5 = 0;
          do {
            lVar2 = FUN_05badb74(lVar4,iVar5,*unaff_x25);
            if (lVar2 == 0) goto LAB_0771b238;
            *(uint *)(lVar2 + 0x30) = uVar6;
            uVar3 = FUN_05badb74(lVar4,iVar5,*unaff_x25);
            if (unaff_x21 == 0) goto LAB_0771b238;
            lVar2 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar2 == 0) goto LAB_0771b238;
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
              thunk_FUN_044bb4b4();
            }
            else {
              FUN_05bade44();
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar4 + 0x18));
        }
        in_w8 = *(uint *)(unaff_x27 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)in_w8);
    }
    unaff_w24 = unaff_w24 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
LAB_0771b23c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = *(long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
    if ((lVar4 == 0) || (unaff_x27 = *(long *)(lVar4 + 0x10), unaff_x27 == 0)) goto LAB_0771b238;
    in_w8 = *(uint *)(unaff_x27 + 0x18);
  }
  lVar4 = (**(code **)(*unaff_x19 + 0x178))();
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x18) = 0xcb4;
    lVar4 = (**(code **)(*unaff_x19 + 0x178))();
    if ((unaff_x21 != 0) && (uVar3 = FUN_05baf9bc(), lVar4 != 0)) {
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x20),uVar3);
      return;
    }
  }
LAB_0771b238:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


