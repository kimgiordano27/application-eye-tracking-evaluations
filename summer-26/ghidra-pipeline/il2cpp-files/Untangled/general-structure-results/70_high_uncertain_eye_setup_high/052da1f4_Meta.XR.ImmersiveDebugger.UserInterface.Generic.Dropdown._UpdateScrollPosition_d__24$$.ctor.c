/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$.ctor
ENTRY_POINT: 052da1f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24___ctor
          (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,ulong param_5,
          long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  
                    /* catch() { ... } // from try @ 052da1e8 with catch @ 052da1fc */
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(param_1);
  }
                    /* try { // try from 052da20c to 053da213 has its CatchHandler @ 052da228 */
  uVar1 = FUN_066cd30c();
                    /* try { // try from 052da214 to 053da21f has its CatchHandler @ 052da100 */
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x22 + 0xa8) == 0) goto LAB_052da4cc;
    param_6 = FUN_066c67b0(*(long *)(unaff_x22 + 0xa8),0);
  }
  if ((char)unaff_x19[0x4e] == '\0') {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c();
    if ((uVar1 & 1) == 0) {
      if (*(char *)((long)unaff_x19 + 0x2c1) == '\0') {
        (**(code **)(*unaff_x19 + 600))();
        goto joined_r0x052da244;
      }
      uVar5 = (ulong)*(uint *)(unaff_x19 + 0x55);
      param_3 = (ulong)*(uint *)((long)unaff_x19 + 0x2ac);
      param_4 = (ulong)*(uint *)(unaff_x19 + 0x56);
      uVar6 = (ulong)*(uint *)(unaff_x19 + 0x53);
      uVar1 = (ulong)*(uint *)((long)unaff_x19 + 0x29c);
      uVar8 = (ulong)*(uint *)(unaff_x19 + 0x54);
      param_5 = (ulong)*(uint *)((long)unaff_x19 + 0x2a4);
    }
    else {
      if (unaff_x21 == 0) goto LAB_052da4cc;
      if (*(char *)(unaff_x21 + 0x24) != '\0') {
        lVar2 = FUN_066c67b0();
        if (lVar2 != 0) {
          auVar7 = FUN_066d3ed0(lVar2,0);
          return auVar7;
        }
        goto LAB_052da4cc;
      }
      uVar5 = FUN_052c3290();
      uVar1 = param_3;
      uVar8 = param_4;
      uVar6 = FUN_052c32c8();
    }
    if (unaff_x19[0x67] != 0) {
      FUN_066d3f5c((int)unaff_x19[0x46],*(undefined4 *)((long)unaff_x19 + 0x234),
                   (int)unaff_x19[0x47],unaff_x19[0x67],0);
      if (unaff_x19[0x67] != 0) {
        FUN_066d4bec(*(undefined4 *)((long)unaff_x19 + 0x23c),(int)unaff_x19[0x48],
                     *(undefined4 *)((long)unaff_x19 + 0x244),(int)unaff_x19[0x49],unaff_x19[0x67],0
                    );
        lVar2 = unaff_x19[0x68];
        if (*(char *)((long)unaff_x19 + 0x2c1) == '\0') {
          (**(code **)(*unaff_x19 + 600))();
        }
        else {
          if ((unaff_x19[0x26] == 0) || (lVar3 = *(long *)(unaff_x19[0x26] + 0x48), lVar3 == 0))
          goto LAB_052da4cc;
          FUN_066d48c0(lVar3,0);
        }
        if (lVar2 != 0) {
          FUN_066d4960(lVar2,0);
          lVar2 = unaff_x19[0x67];
          uVar4 = (**(code **)(*unaff_x19 + 0x238))();
          if (lVar2 != 0) {
            FUN_066d5054(lVar2,uVar4,0);
            if (unaff_x19[0x67] != 0) {
              FUN_066d3f5c(uVar5,param_3,param_4,unaff_x19[0x67],0);
              if (unaff_x19[0x67] != 0) {
                FUN_066d4bec(uVar6,uVar1,uVar8,param_5,unaff_x19[0x67],0);
                if ((unaff_x19[0x68] != 0) && (FUN_066d48c0(unaff_x19[0x68],0), param_6 != 0)) {
                  auVar7 = FUN_066d6014(param_6,0);
                  uVar9 = auVar7._8_8_;
                  lVar2 = unaff_x19[0x67];
                  uVar4 = FUN_066c67b0();
                  if (lVar2 != 0) {
                    FUN_066d5054(lVar2,uVar4,0);
                    auVar7._8_8_ = uVar9;
                    return auVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (unaff_x19[0x50] == 0) goto LAB_052da4cc;
    FUN_052c2b3c(unaff_x19[0x50],0);
joined_r0x052da244:
    if (param_6 != 0) {
      auVar7 = FUN_066d6014(param_6,0);
      return auVar7;
    }
  }
LAB_052da4cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


