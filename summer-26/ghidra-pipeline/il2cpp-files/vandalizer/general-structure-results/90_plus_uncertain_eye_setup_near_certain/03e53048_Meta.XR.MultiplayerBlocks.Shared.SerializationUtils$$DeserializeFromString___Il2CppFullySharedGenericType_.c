/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03e53048
PROGRAM: vandalizer-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (void)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  void *pvVar6;
  long unaff_x29;
  
  if (7 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x22;
    thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x58));
    lVar5 = *(long *)(unaff_x20 + 0x38);
    pvVar6 = *(void **)(unaff_x29 + -0xf8);
    plVar4 = *(long **)(unaff_x21 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0xe8);
    if (-1 < *(int *)(*(long *)(lVar5 + 0x40) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + 0x68);
    }
    memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0xf0));
    lVar5 = thunk_FUN_0322ed78(*(undefined8 *)(lVar5 + 0x40),pvVar6);
    if (plVar4 == (long *)0x0) {
LAB_03e53354:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
LAB_03e5335c:
      uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar3,0);
    }
    if (8 < *(uint *)(plVar4 + 3)) {
      plVar4[0xc] = lVar5;
      thunk_FUN_0329bf60(plVar4 + 0xc,lVar5);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      plVar4 = *(long **)(unaff_x21 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x100);
      if (-1 < *(int *)(*(long *)(lVar5 + 0x48) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + 0x70);
      }
      pvVar6 = *(void **)(unaff_x29 + -0x110);
      memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x108));
      lVar5 = thunk_FUN_0322ed78(*(undefined8 *)(lVar5 + 0x48),pvVar6);
      if (plVar4 == (long *)0x0) goto LAB_03e53354;
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_03e5335c;
      if (9 < *(uint *)(plVar4 + 3)) {
        plVar4[0xd] = lVar5;
        thunk_FUN_0329bf60(plVar4 + 0xd,lVar5);
        lVar5 = *(long *)(unaff_x20 + 0x38);
        plVar4 = *(long **)(unaff_x21 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x118);
        if (-1 < *(int *)(*(long *)(lVar5 + 0x50) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + 0x78);
        }
        pvVar6 = *(void **)(unaff_x29 + -0x128);
        memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x120));
        lVar5 = thunk_FUN_0322ed78(*(undefined8 *)(lVar5 + 0x50),pvVar6);
        if (plVar4 == (long *)0x0) goto LAB_03e53354;
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
        goto LAB_03e5335c;
        if (10 < *(uint *)(plVar4 + 3)) {
          plVar4[0xe] = lVar5;
          thunk_FUN_0329bf60(plVar4 + 0xe,lVar5);
          lVar5 = *(long *)(unaff_x20 + 0x38);
          plVar4 = *(long **)(unaff_x21 + 0x38);
          pvVar1 = *(void **)(unaff_x29 + -0x130);
          if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
            pvVar1 = (void *)(unaff_x29 + 0x80);
          }
          pvVar6 = *(void **)(unaff_x29 + -0x140);
          memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x138));
          lVar5 = thunk_FUN_0322ed78(*(undefined8 *)(lVar5 + 0x58),pvVar6);
          if (plVar4 == (long *)0x0) goto LAB_03e53354;
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
          goto LAB_03e5335c;
          if (0xb < *(uint *)(plVar4 + 3)) {
            plVar4[0xf] = lVar5;
            thunk_FUN_0329bf60(plVar4 + 0xf,lVar5);
            lVar5 = *(long *)(unaff_x20 + 0x38);
            plVar4 = *(long **)(unaff_x21 + 0x38);
            pvVar1 = *(void **)(unaff_x29 + -0x148);
            if (-1 < *(int *)(*(long *)(lVar5 + 0x60) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + 0x88);
            }
            pvVar6 = *(void **)(unaff_x29 + -0x158);
            memcpy(pvVar6,pvVar1,*(size_t *)(unaff_x29 + -0x150));
            lVar5 = thunk_FUN_0322ed78(*(undefined8 *)(lVar5 + 0x60),pvVar6);
            if (plVar4 == (long *)0x0) goto LAB_03e53354;
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_0322f04c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
            goto LAB_03e5335c;
            if (0xc < *(uint *)(plVar4 + 3)) {
              plVar4[0x10] = lVar5;
              thunk_FUN_0329bf60(plVar4 + 0x10,lVar5);
              FUN_062db728();
              lVar5 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2390();
              }
              FUN_062dc04c(lVar5);
              FUN_062db7a4();
              if (*(long *)(*(long *)(unaff_x29 + -0x160) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


