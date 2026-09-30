/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$Render
ENTRY_POINT: 065fb5a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Universal_PostProcessPass__Render(void)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  int in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000050;
  undefined8 in_stack_00000070;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  int iStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  int iStack00000000000000d4;
  ulong in_stack_000000d8;
  int iStack00000000000000e0;
  int iStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  int iStack00000000000000ec;
  undefined4 in_stack_000000f0;
  
  FUN_03188a78(Oculus_Platform_Models_AchievementProgress_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x90a) = 1;
  lVar14 = *unaff_x21;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar14 = *unaff_x21;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if ((lVar14 != 0) && (uVar13 = FUN_065ea99c(lVar14,0), unaff_x20 != 0)) {
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      iVar16 = 0;
      iVar19 = 0;
      do {
        System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__DownHeap
                  (unaff_x20,iVar16,*(undefined8 *)UnityEngine_UIElements_BaseTreeView_TypeInfo);
        iVar5 = in_stack_00000038._4_4_;
        if (in_stack_00000030 - iVar19 <= in_stack_00000038._4_4_) {
          iVar5 = in_stack_00000030 - iVar19;
        }
        iVar3 = iVar19;
        if (iVar5 != 0) {
          iVar3 = iVar5 + iVar19;
          do {
            plVar1 = (long *)(in_stack_00000050 + (long)iVar19 * 0x10);
            uVar6 = *(uint *)(plVar1 + 1);
            uVar7 = *(undefined4 *)((long)plVar1 + 0xc);
            lVar14 = *plVar1;
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar15 = FUN_065ea9b4(uVar7,0);
            if ((unaff_x22 == 0) || (lVar22 = *(long *)(unaff_x22 + 0x18), lVar22 == 0))
            goto LAB_065fb898;
            if (0 < (int)*(ulong *)(lVar22 + 0x18)) {
              uVar2 = lVar14 + (uVar15 & 0xffffffff);
              uVar4 = lVar14 + (uVar15 << 0x20);
              uVar20 = 0;
              uVar17 = *(ulong *)(lVar22 + 0x18) & 0xffffffff;
              puVar21 = (undefined8 *)(lVar22 + 0x20);
              uVar15 = (ulong)uVar6 + (uVar15 & 0xffffffff);
              do {
                if (uVar17 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188ce0();
                }
                uVar17 = puVar21[3];
                lVar23 = puVar21[2];
                in_stack_000000c0 = *puVar21;
                in_stack_000000f0 = *(undefined4 *)(puVar21 + 6);
                uStack00000000000000c8 = (undefined4)puVar21[1];
                iStack00000000000000cc = (int)((ulong)puVar21[1] >> 0x20);
                iVar5 = iStack00000000000000cc;
                uStack00000000000000d0 = (undefined4)lVar23;
                iStack00000000000000d4 = (int)((ulong)lVar23 >> 0x20);
                iVar9 = iStack00000000000000d4;
                uStack00000000000000e8 = (undefined4)puVar21[5];
                iStack00000000000000ec = (int)((ulong)puVar21[5] >> 0x20);
                iVar12 = iStack00000000000000ec;
                iStack00000000000000e0 = (int)puVar21[4];
                iVar10 = iStack00000000000000e0;
                iStack00000000000000e4 = (int)((ulong)puVar21[4] >> 0x20);
                iVar11 = iStack00000000000000e4;
                lVar8 = CONCAT44(uStack00000000000000e8,iStack00000000000000e4);
                in_stack_000000d8 = uVar17;
                if (DAT_0755790b == '\0') {
                  FUN_03188a78(PTR_DAT_070f1458);
                  DAT_0755790b = '\x01';
                }
                if (((int)((ulong)((lVar23 << 0x20) + lVar8) >> 0x20) < (int)(uVar4 >> 0x20)) &&
                   (iVar5 + iVar11 < (int)uVar2)) {
                  uVar18 = *(ulong *)(*(long *)(*(long *)PTR_DAT_070f1458 + 0xb8) + 0xc);
                  if (((int)lVar14 < ((int)uVar17 + iVar11) - (int)uVar18) &&
                     ((((int)((ulong)lVar14 >> 0x20) <
                        (int)(((uVar17 & 0xffffffff00000000) + lVar8) -
                              (uVar18 & 0xffffffff00000000) >> 0x20) &&
                       (iVar9 + iVar12 < (int)uVar15)) &&
                      ((int)uVar6 <
                       (iVar10 + iVar12) -
                       *(int *)(*(long *)(*(long *)PTR_DAT_070f1458 + 0xb8) + 0x14))))) {
                    in_stack_00000090 = in_stack_00000090 & 0xffffffff00000000 | (ulong)uVar6;
                    in_stack_00000098 = in_stack_00000098 & 0xffffffff00000000 | uVar15 & 0xffffffff
                    ;
                    FUN_065fb1a4(in_stack_00000070,&stack0x000000c0,lVar14,in_stack_00000090,
                                 uVar4 & 0xffffffff00000000 | uVar2 & 0xffffffff,in_stack_00000098,
                                 uVar7,uVar13);
                  }
                }
                uVar17 = (ulong)*(uint *)(lVar22 + 0x18);
                uVar20 = uVar20 + 1;
                puVar21 = (undefined8 *)((long)puVar21 + 0x34);
              } while ((long)uVar20 < (long)(int)*(uint *)(lVar22 + 0x18));
            }
            iVar19 = iVar19 + 1;
            unaff_x21 = (long *)Oculus_Platform_Models_AchievementProgress_TypeInfo;
          } while (iVar19 != iVar3);
        }
        iVar19 = iVar3;
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(unaff_x20 + 0x18));
    }
    return;
  }
LAB_065fb898:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


