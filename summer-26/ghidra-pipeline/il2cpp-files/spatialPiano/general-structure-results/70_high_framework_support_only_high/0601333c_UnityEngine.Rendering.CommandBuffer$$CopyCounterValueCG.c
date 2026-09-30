/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$CopyCounterValueCG
ENTRY_POINT: 0601333c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Rendering_CommandBuffer__CopyCounterValueCG(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint in_w8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  
  if (2 < in_w8) {
    unaff_x21[6] = unaff_x22;
    if (*(long *)(unaff_x20 + 0x1e0) != 0) {
      puVar2 = (undefined4 *)FUN_037c4e24(*(long *)(unaff_x20 + 0x1e0),*unaff_x26);
      in_stack_00000040 = *puVar2;
      lVar3 = thunk_FUN_02f44ec4(*(undefined8 *)(unaff_x27 + 0x78),&stack0x00000040);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar4 == 0))
      goto LAB_06013624;
      puVar1 = Method_OVRPlugin_<>c_<_cctor>b__837_100__;
      if ((*(uint *)(unaff_x21 + 3) & 0xfffffffc) == 0) goto LAB_06013620;
      unaff_x21[7] = lVar3;
      FUN_04f700a0(*(undefined8 *)puVar1);
      FUN_04f79730();
      if (*(long *)(unaff_x20 + 0x1e8) != 0) {
        puVar5 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x1e8),*unaff_x24);
        in_stack_00000038 = *puVar5;
        uVar6 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000038);
        if (*(long *)(unaff_x20 + 0x1f0) != 0) {
          puVar5 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x1f0),*unaff_x24);
          in_stack_00000030 = *puVar5;
          uVar7 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000030);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__837_103__;
          if (*(long *)(unaff_x20 + 0x1f8) != 0) {
            puVar2 = (undefined4 *)FUN_037c4e24(*(long *)(unaff_x20 + 0x1f8),*unaff_x26);
            in_stack_00000028._4_4_ = *puVar2;
            uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(unaff_x27 + 0x78),(long)&stack0x00000028 + 4)
            ;
            FUN_04f7005c(*(undefined8 *)puVar1,uVar6,uVar7,uVar8,0);
            FUN_04f79730();
            plVar9 = (long *)FUN_02f0880c(*unaff_x25,4);
            if (*(long *)(unaff_x20 + 0x200) != 0) {
              puVar5 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x200),*unaff_x24);
              in_stack_00000020 = *puVar5;
              lVar3 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000020);
              if (plVar9 != (long *)0x0) {
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0))
                {
LAB_06013624:
                  uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                  FUN_02f0888c(uVar6,0);
                }
                if ((int)plVar9[3] != 0) {
                  plVar9[4] = lVar3;
                  if (*(long *)(unaff_x20 + 0x208) == 0) goto LAB_0601361c;
                  puVar5 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x208),*unaff_x24);
                  in_stack_00000018 = *puVar5;
                  lVar3 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000018);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)
                     ) goto LAB_06013624;
                  if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
                    plVar9[5] = lVar3;
                    if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_0601361c;
                    puVar5 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x210),*unaff_x24);
                    in_stack_00000010 = *puVar5;
                    lVar3 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000010);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar4 == 0)) goto LAB_06013624;
                    if (2 < *(uint *)(plVar9 + 3)) {
                      plVar9[6] = lVar3;
                      if (*(long *)(unaff_x20 + 0x218) == 0) goto LAB_0601361c;
                      puVar5 = (undefined8 *)FUN_037c8858(*(long *)(unaff_x20 + 0x218),*unaff_x24);
                      in_stack_00000008 = *puVar5;
                      lVar3 = thunk_FUN_02f44ec4(*unaff_x23,&stack0x00000008);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar4 == 0)) goto LAB_06013624;
                      puVar1 = Method_OVRPlugin_<>c_<_cctor>b__837_102__;
                      if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                        plVar9[7] = lVar3;
                        FUN_04f700a0(*(undefined8 *)puVar1,plVar9,0);
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
LAB_0601361c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_06013620:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


