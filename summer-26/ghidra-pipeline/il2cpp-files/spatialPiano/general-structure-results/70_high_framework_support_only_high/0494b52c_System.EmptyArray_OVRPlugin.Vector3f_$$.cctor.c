/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 0494b52c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_Vector3f>___cctor(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(3,0);
  }
                    /* try { // try from 0494b534 to 04a4b807 has its CatchHandler @ 0494b534
                       catch() { ... } // from try @ 0494b534 with catch @ 0494b534
                       catch() { ... } // from try @ 0494b8e4 with catch @ 0494b534
                       catch() { ... } // from try @ 0494b97c with catch @ 0494b534
                       catch() { ... } // from try @ 0494b9e8 with catch @ 0494b534 */
  iVar2 = thunk_FUN_02f177cc();
  if (iVar2 != 1) {
    FUN_050f5b58(7,0);
  }
  iVar2 = thunk_FUN_02f1778c();
  if (iVar2 != 0) {
    FUN_050f5b58(6,0);
  }
  uVar3 = Newtonsoft_Json_Linq_JArray__FromObject();
  if (uVar3 < unaff_w20) {
    FUN_050f63c0(0);
  }
  iVar2 = Newtonsoft_Json_Linq_JArray__FromObject();
  if ((int)(iVar2 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_050f5b58(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  lVar8 = thunk_FUN_02f45174();
  if (lVar8 != 0) {
    System_EmptyArray<XrCompositionLayerProjectionView>___cctor();
    return;
  }
  lVar8 = thunk_FUN_02f45174();
  if (lVar8 == 0) {
    plVar5 = (long *)thunk_FUN_02f45174();
    if (plVar5 == (long *)0x0) {
      FUN_050f63f8();
    }
    uVar3 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar8 + 0x34);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (-1 < (int)puVar11[-5]) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_03942940(puVar11[-1],*puVar11,&stack0x00000010,*(undefined8 *)(puVar11 + -3),
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
          lVar9 = thunk_FUN_02f44ec4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if ((lVar9 != 0) &&
             (lVar6 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar7,0);
          }
          if (*(uint *)(plVar5 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar6 = (long)(int)unaff_w20;
          unaff_w20 = unaff_w20 + 1;
          plVar5[lVar6 + 4] = lVar9;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (uVar3 != uVar10);
    }
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar2) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar10 = 0;
      lVar6 = lVar9 + 0x30;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_0494b7c4:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (-1 < *(int *)(lVar6 + -0x10)) {
          uVar7 = *(undefined8 *)(lVar6 + -8);
          uVar4 = thunk_FUN_02f44ec4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_05077ff4(&stack0x00000010,uVar7,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_0494b7c4;
          lVar1 = lVar8 + (long)(int)unaff_w20 * 0x10;
          unaff_w20 = unaff_w20 + 1;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
          *(undefined8 *)(lVar1 + 0x20) = in_stack_00000010;
          iVar2 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        lVar6 = lVar6 + 0x18;
      } while ((long)uVar10 < (long)iVar2);
    }
  }
  return;
}


