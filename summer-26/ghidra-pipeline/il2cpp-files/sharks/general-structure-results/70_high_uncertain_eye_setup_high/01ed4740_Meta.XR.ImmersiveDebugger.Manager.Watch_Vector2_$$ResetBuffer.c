/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ResetBuffer
ENTRY_POINT: 01ed4740
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ResetBuffer(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if (*(int *)(unaff_x20 + 0x18) < (int)unaff_w19) {
    FUN_02befb2c(0);
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_0213b314(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w19) < iVar3) {
      FUN_02bef2ac(5,0);
    }
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x20);
      if (0 < (int)uVar2) {
        lVar5 = *(long *)(lVar5 + 0x18);
        if (lVar5 == 0) goto LAB_01ed4824;
        uVar6 = 0;
        puVar7 = (undefined8 *)(lVar5 + 0x38);
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_01ed480c:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          if (-1 < *(int *)(puVar7 + -3)) {
            if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_01ed480c;
            uVar8 = *puVar7;
            lVar1 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
            puVar4 = (undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(lVar1 + 0x28) = puVar7[1];
            *puVar4 = uVar8;
            unaff_w19 = unaff_w19 + 1;
            thunk_FUN_0188fd20(puVar4,0);
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 5;
        } while (uVar2 != uVar6);
      }
      return;
    }
  }
LAB_01ed4824:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


