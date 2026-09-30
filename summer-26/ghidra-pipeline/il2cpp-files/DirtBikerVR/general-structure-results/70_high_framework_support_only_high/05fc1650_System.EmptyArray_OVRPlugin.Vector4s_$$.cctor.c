/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector4s>$$.cctor
ENTRY_POINT: 05fc1650
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_Vector4s>___cctor(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  iVar4 = FUN_06769a04();
  if ((int)(iVar4 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_0677195c(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    FUN_03ac4090(lVar8);
  }
  lVar8 = thunk_FUN_03ac73c0();
  if (lVar8 != 0) {
    FUN_05fbfcb0();
    return;
  }
  lVar8 = thunk_FUN_03ac73c0();
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_03ac73c0();
    if (plVar6 == (long *)0x0) {
      FUN_067721fc();
    }
    uVar3 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar11 = 0;
      puVar12 = (undefined4 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        if (-1 < (int)puVar12[-4]) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_04bda7ec(&stack0x00000010,*(undefined8 *)(puVar12 + -2),*puVar12,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
          lVar10 = thunk_FUN_03ac70f4(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_03ac73c0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar5 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar5,0);
          }
          if (*(uint *)(plVar6 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar6[(long)(int)unaff_w20 + 4] = lVar10;
          thunk_FUN_03afed3c(plVar6 + (long)(int)unaff_w20 + 4,lVar10);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 6;
      } while (uVar3 != uVar11);
    }
  }
  else {
    iVar4 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar4) {
      lVar10 = *(long *)(unaff_x21 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar11 = 0;
      lVar7 = lVar10 + 0x30;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_05fc18ac:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        if (-1 < *(int *)(lVar7 + -0x10)) {
          uVar9 = *(undefined8 *)(lVar7 + -8);
          uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_066eba2c(&stack0x00000010,uVar9,uVar5,0);
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_05fc18ac;
          lVar2 = lVar8 + (long)(int)unaff_w20 * 0x10;
          lVar1 = (long)(int)unaff_w20;
          unaff_w20 = unaff_w20 + 1;
          *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
          *(undefined8 *)(lVar2 + 0x20) = in_stack_00000010;
          thunk_FUN_03afed3c(lVar8 + 0x20 + lVar1 * 0x10,0);
          iVar4 = *(int *)(unaff_x21 + 0x20);
        }
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((long)uVar11 < (long)iVar4);
    }
  }
  return;
}


