/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<NamedValue,-Vector4>$$.ctor
ENTRY_POINT: 02794688
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Linq_Enumerable_WhereSelectArrayIterator<NamedValue,_Vector4>___ctor(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  if (*(int *)(unaff_x20 + 0x18) < (int)unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_02b20bc4(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w19) < iVar3) {
      FUN_033b2d60(5,0);
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar1) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0)
        goto System_Linq_Enumerable_WhereSelectArrayIterator<NamedValue,_Vector4>__MoveNext;
        uVar2 = *(uint *)(lVar4 + 0x18);
        uVar5 = 0;
        puVar6 = (undefined4 *)(lVar4 + 0x30);
        do {
          if (uVar2 <= uVar5) {
LAB_02794744:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < (int)puVar6[-4]) {
            if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_02794744;
            lVar4 = (long)(int)unaff_w19;
            unaff_w19 = unaff_w19 + 1;
            *(undefined4 *)(unaff_x20 + lVar4 * 4 + 0x20) = *puVar6;
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 6;
        } while (uVar1 != uVar5);
      }
      return;
    }
  }
System_Linq_Enumerable_WhereSelectArrayIterator<NamedValue,_Vector4>__MoveNext:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


