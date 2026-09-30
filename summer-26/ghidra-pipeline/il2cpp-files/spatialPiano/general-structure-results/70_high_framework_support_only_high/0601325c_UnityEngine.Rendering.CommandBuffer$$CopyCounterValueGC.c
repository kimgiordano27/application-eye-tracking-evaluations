/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$CopyCounterValueGC
ENTRY_POINT: 0601325c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_19;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Rendering_CommandBuffer__CopyCounterValueGC(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000050 = param_1;
  lVar4 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000050);
  if (unaff_x21 != (long *)0x0) {
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0)) {
LAB_06013624:
      uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,0);
    }
    if ((int)unaff_x21[3] == 0) {
LAB_06013620:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    unaff_x21[4] = lVar4;
    if (*(long *)(unaff_x20 + 0x1d0) != 0) {
      puVar6 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x1d0),*unaff_x24);
      in_stack_00000048 = *puVar6;
      lVar4 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000048);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
      goto LAB_06013624;
      if ((*(uint *)(unaff_x21 + 3) & 0xfffffffe) == 0) goto LAB_06013620;
      unaff_x21[5] = lVar4;
      puVar2 = Method_UnityEngine_XR_ARFoundation_ARPlaneMeshGenerator_TryGenerateMesh__;
      if (*(long *)(unaff_x20 + 0x1d8) != 0) {
        puVar7 = (undefined4 *)
                 FUN_037c4e24(*(long *)(unaff_x20 + 0x1d8),
                              *(undefined8 *)
                               Method_UnityEngine_XR_ARFoundation_ARPlaneMeshGenerator_TryGenerateMesh__
                             );
        puVar1 = PTR_DAT_067c9338;
        uStack0000000000000044 = *puVar7;
        lVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x78),
                                   (long)&stack0x00000040 + 4);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
        goto LAB_06013624;
        if (*(uint *)(unaff_x21 + 3) < 3) goto LAB_06013620;
        unaff_x21[6] = lVar4;
        if (*(long *)(unaff_x20 + 0x1e0) != 0) {
          puVar7 = (undefined4 *)FUN_037c4e24(*(long *)(unaff_x20 + 0x1e0),*(undefined8 *)puVar2);
          uStack0000000000000040 = *puVar7;
          lVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000040);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
          goto LAB_06013624;
          puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_100__;
          if ((*(uint *)(unaff_x21 + 3) & 0xfffffffc) == 0) goto LAB_06013620;
          unaff_x21[7] = lVar4;
          FUN_04f700a0(*(undefined8 *)puVar3);
          FUN_04f79730();
          if (*(long *)(unaff_x20 + 0x1e8) != 0) {
            puVar6 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x1e8),*unaff_x24);
            in_stack_00000038 = *puVar6;
            uVar8 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000038);
            if (*(long *)(unaff_x20 + 0x1f0) != 0) {
              puVar6 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x1f0),*unaff_x24);
              in_stack_00000030 = *puVar6;
              uVar9 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000030);
              puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_103__;
              if (*(long *)(unaff_x20 + 0x1f8) != 0) {
                puVar7 = (undefined4 *)
                         FUN_037c4e24(*(long *)(unaff_x20 + 0x1f8),*(undefined8 *)puVar2);
                in_stack_00000028._4_4_ = *puVar7;
                uVar10 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x78),
                                            (long)&stack0x00000028 + 4);
                FUN_04f7005c(*(undefined8 *)puVar3,uVar8,uVar9,uVar10,0);
                FUN_04f79730();
                plVar11 = (long *)FUN_02f0880c(*unaff_x25,4);
                if (*(long *)(unaff_x20 + 0x200) != 0) {
                  puVar6 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x200),*unaff_x24);
                  in_stack_00000020 = *puVar6;
                  lVar4 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000020);
                  if (plVar11 != (long *)0x0) {
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar5 == 0)) goto LAB_06013624;
                    if ((int)plVar11[3] != 0) {
                      plVar11[4] = lVar4;
                      if (*(long *)(unaff_x20 + 0x208) == 0) goto LAB_0601361c;
                      puVar6 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x208),*unaff_x24);
                      in_stack_00000018 = *puVar6;
                      lVar4 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000018);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar5 == 0)) goto LAB_06013624;
                      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                        plVar11[5] = lVar4;
                        if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_0601361c;
                        puVar6 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x210),*unaff_x24)
                        ;
                        in_stack_00000010 = *puVar6;
                        lVar4 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000010);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar5 == 0)) goto LAB_06013624;
                        if (2 < *(uint *)(plVar11 + 3)) {
                          plVar11[6] = lVar4;
                          if (*(long *)(unaff_x20 + 0x218) == 0) goto LAB_0601361c;
                          puVar6 = (undefined8 *)
                                   FUN_037c8858(*(long *)(unaff_x20 + 0x218),*unaff_x24);
                          in_stack_00000008 = *puVar6;
                          lVar4 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000008);
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar11 + 0x40)),
                             lVar5 == 0)) goto LAB_06013624;
                          puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_102__;
                          if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                            plVar11[7] = lVar4;
                            FUN_04f700a0(*(undefined8 *)puVar2,plVar11,0);
                            FUN_04f79730();
                            (**(code **)(*unaff_x19 + 0x168))();
                            return;
                          }
                        }
                      }
                    }
                    goto LAB_06013620;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0601361c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


