/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetBestPoseFromRaycastDebugger>b__51_0
ENTRY_POINT: 072d75b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_SceneDebugger__<GetBestPoseFromRaycastDebugger>b__51_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar4 = FUN_074e9028();
  lVar5 = thunk_FUN_040b4efc(*unaff_x20);
  FUN_076bca34(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = unaff_x19;
    thunk_FUN_040ec700();
    puVar2 = PTR_DAT_092c3cc8;
    puVar1 = PTR_DAT_092c3cc0;
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar11 = 0;
        uVar8 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        lVar12 = lVar5;
        do {
          if (uVar8 <= uVar11) {
LAB_072d7744:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar6 = FUN_072d71bc(*(undefined8 *)(lVar4 + uVar11 * 8 + 0x20));
          lVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
          FUN_076bca34(lVar7,0);
          if (lVar7 == 0) goto LAB_072d7740;
          *(undefined8 *)(lVar7 + 0x18) = unaff_x19;
          thunk_FUN_040ec700();
          if (lVar6 == 0) goto LAB_072d7740;
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_072d7744;
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
          thunk_FUN_040ec700();
          *(long *)(lVar12 + 0x10) = lVar7;
          thunk_FUN_040ec700((long *)(lVar12 + 0x10),lVar7);
          if (1 < *(int *)(lVar6 + 0x18)) {
            lVar12 = 5;
            lVar10 = lVar7;
            do {
              lVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
              FUN_076bca34(lVar7,0);
              if (lVar7 == 0) goto LAB_072d7740;
              *(undefined8 *)(lVar7 + 0x18) = unaff_x19;
              thunk_FUN_040ec700();
              if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar12 - 4U) goto LAB_072d7744;
              uVar3 = FUN_07676ef4(*(undefined8 *)(lVar6 + lVar12 * 8),0);
              *(long *)(lVar10 + 0x10) = lVar7;
              *(undefined4 *)(lVar7 + 0x20) = uVar3;
              thunk_FUN_040ec700((long *)(lVar10 + 0x10),lVar7);
              lVar9 = lVar12 + -3;
              lVar12 = lVar12 + 1;
              lVar10 = lVar7;
            } while (lVar9 < *(int *)(lVar6 + 0x18));
          }
          uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar11 = uVar11 + 1;
          lVar12 = lVar7;
        } while ((long)uVar11 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      return lVar5;
    }
  }
LAB_072d7740:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


