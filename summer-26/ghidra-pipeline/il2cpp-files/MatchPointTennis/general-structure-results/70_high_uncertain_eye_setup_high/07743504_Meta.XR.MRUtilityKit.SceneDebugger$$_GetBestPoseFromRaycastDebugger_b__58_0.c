/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetBestPoseFromRaycastDebugger>b__58_0
ENTRY_POINT: 07743504
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__<GetBestPoseFromRaycastDebugger>b__58_0(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *in_stack_00000020;
  undefined8 in_stack_00000028;
  uint in_stack_00000038;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  long in_stack_00000048;
  
  do {
    if (unaff_x28 == 0) {
LAB_077435c4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = FUN_07742eb0();
    if ((uVar1 & 1) != 0) {
      if (in_stack_00000048 == 0) goto LAB_077435c4;
      if (*(uint *)(in_stack_00000048 + 0x18) <= in_stack_00000038) goto LAB_077439d0;
      lVar6 = in_stack_00000048 + unaff_x27 * 0x18;
      uVar9 = *(undefined4 *)(lVar6 + 0x24);
      uVar10 = *(undefined4 *)(lVar6 + 0x28);
      uVar11 = *(undefined4 *)(lVar6 + 0x2c);
      uVar1 = FUN_077142ec(*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(unaff_x28 + 0x70),
                           in_stack_00000028._4_4_,0);
      if ((uVar1 & 1) != 0) {
        if (4 < in_stack_00000028._4_4_) {
          uVar7 = *(undefined8 *)PTR_DAT_09f31d90;
          uVar4 = (**(code **)(*unaff_x24 + 0x168))();
          uVar5 = FUN_07a3b850((long)&stack0x00000040 + 4,0);
          uVar4 = FUN_078b56f4(uVar7,uVar4,*(undefined8 *)PTR_DAT_09f31d70,uVar5,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar4,0);
          unaff_w26 = uStack0000000000000044;
        }
        lVar6 = *(long *)(unaff_x20 + 0x28);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_077439d0;
          lVar6 = *(long *)(lVar6 + (long)(int)unaff_w26 * 8 + 0x20);
          if (lVar6 != 0) {
            uVar4 = *(undefined8 *)(lVar6 + 0x18);
            unaff_x19[1] = *(undefined8 *)(lVar6 + 0x20);
            *unaff_x19 = uVar4;
            *unaff_x21 = *(undefined4 *)(lVar6 + 0x70);
            uVar8 = FUN_07712f2c(lVar6,0);
            *(undefined4 *)unaff_x29 = uVar8;
            *(undefined4 *)((long)unaff_x29 + 4) = uVar9;
            *(undefined4 *)(unaff_x29 + 1) = uVar10;
            *(undefined4 *)((long)unaff_x29 + 0xc) = uVar11;
            uVar8 = FUN_07712f6c(lVar6,0);
            *(undefined4 *)unaff_x25 = uVar8;
            *(undefined4 *)((long)unaff_x25 + 4) = uVar9;
            *(undefined4 *)(unaff_x25 + 1) = uVar10;
            *(undefined4 *)((long)unaff_x25 + 0xc) = uVar11;
            *in_stack_00000020 = *(undefined4 *)(lVar6 + 0x30);
            return 1;
          }
        }
        goto LAB_077435c4;
      }
    }
    unaff_w26 = unaff_w26 + 1;
    lVar6 = *(long *)(unaff_x20 + 0x28);
    uStack0000000000000044 = unaff_w26;
    if (lVar6 == 0) goto LAB_077435c4;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)unaff_w26) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      *unaff_x29 = 0;
      unaff_x29[1] = 0;
      *unaff_x25 = 0;
      unaff_x25[1] = 0;
      *in_stack_00000020 = 0xffffffff;
      plVar2 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,4);
      lVar6 = thunk_FUN_0952ff6c();
      if (plVar2 == (long *)0x0) goto LAB_077435c4;
      if ((lVar6 != 0) &&
         (lVar3 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_077439d4:
        uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar4,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar6;
        thunk_FUN_044bb4b4(plVar2 + 4,lVar6);
        if ((unaff_x23 != 0) && (lVar6 = thunk_FUN_04485110(), lVar6 == 0)) goto LAB_077439d4;
        if (1 < *(uint *)(plVar2 + 3)) {
          plVar2[5] = unaff_x23;
          thunk_FUN_044bb4b4();
          uStack0000000000000040 = in_stack_00000038;
          lVar6 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
          if ((lVar6 != 0) &&
             (lVar3 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_077439d4;
          if (2 < *(uint *)(plVar2 + 3)) {
            plVar2[6] = lVar6;
            thunk_FUN_044bb4b4(plVar2 + 6,lVar6);
            if (in_stack_00000048 == 0) goto LAB_077435c4;
            if (in_stack_00000038 < *(uint *)(in_stack_00000048 + 0x18)) {
              lVar6 = FUN_094cc6fc(in_stack_00000048 + unaff_x27 * 0x18 + 0x20,0,0,0);
              if ((lVar6 != 0) &&
                 (lVar3 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
              goto LAB_077439d4;
              if (3 < *(uint *)(plVar2 + 3)) {
                plVar2[7] = lVar6;
                thunk_FUN_044bb4b4(plVar2 + 7,lVar6);
                uVar4 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f31da8,plVar2,0);
                *unaff_x22 = uVar4;
                thunk_FUN_044bb4b4();
                return 0;
              }
            }
          }
        }
      }
LAB_077439d0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_077439d0;
    unaff_x28 = *(long *)(lVar6 + (long)(int)unaff_w26 * 8 + 0x20);
  } while( true );
}


