/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 057b23dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *plVar5;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    FUN_02fe9dc8(param_2,*(undefined8 *)(param_1 + 0x48));
    if (*(long *)(unaff_x29 + -0x10) == 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4();
      }
      if (*(uint *)(unaff_x20 + 3) <= unaff_x28) goto LAB_057b2664;
      FUN_02fe9dc8(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58),
                   unaff_x23,(long)unaff_x20 + unaff_x28 * *(uint *)(*unaff_x20 + 0x104) + 0x20,0,
                   unaff_x29 + -0x10);
      if (*(int *)(unaff_x29 + -0x10) == -1) {
        if (*(uint *)(unaff_x20 + 3) <= unaff_x28) {
LAB_057b2664:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar5 = *(long **)(unaff_x21 + 0x20);
        uVar2 = *(uint *)(unaff_x21 + 0x14);
        memcpy(*(void **)(unaff_x29 + -0x20),
               (void *)((long)unaff_x20 + unaff_x28 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
               *(size_t *)(unaff_x29 + -0x28));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(plVar5 + 3) <= uVar2) goto LAB_057b2664;
        memcpy((void *)((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)uVar2 + 0x20),
               *(void **)(unaff_x29 + -0x20),*(size_t *)(unaff_x29 + -0x28));
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4();
        }
        if (*(uint *)(plVar5 + 3) <= uVar2) goto LAB_057b2664;
        FUN_02fe920c(lVar3,(long)plVar5 +
                           (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)uVar2 + 0x20,
                     *(undefined8 *)(unaff_x29 + -0x20));
        iVar1 = *(int *)(unaff_x21 + 0x14);
        *(int *)(unaff_x21 + 0x14) = iVar1 + 1;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4();
        }
        if (*(uint *)(unaff_x20 + 3) <= unaff_x28) goto LAB_057b2664;
        uVar2 = *(uint *)(*unaff_x20 + 0x104);
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
        *(int *)(unaff_x29 + -0x14) = iVar1;
        *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x14;
        FUN_02fe9dc8(lVar3,uVar4,*(undefined8 *)(unaff_x29 + -0x30),
                     (long)unaff_x20 + unaff_x28 * uVar2 + 0x20,unaff_x29 + -0x10,unaff_x29 + -0x14)
        ;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4();
        }
        if (*(uint *)(unaff_x20 + 3) <= unaff_x28) goto LAB_057b2664;
        uVar2 = *(uint *)(*unaff_x20 + 0x104);
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
        *(long *)(unaff_x29 + -0x10) = unaff_x21;
        FUN_02fe9dc8(lVar3,uVar4,*(undefined8 *)(unaff_x29 + -0x38),
                     (long)unaff_x20 + unaff_x28 * uVar2 + 0x20,unaff_x29 + -0x10);
      }
      else {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068bd348(*(undefined8 *)PTR_DAT_06f9cf98,0);
      }
    }
    else {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_068bd958(*unaff_x24,0);
    }
    uVar2 = *(uint *)(unaff_x20 + 3);
    unaff_x28 = unaff_x28 + 1;
    if ((long)(int)uVar2 <= (long)unaff_x28) {
      *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x21 + 0x14);
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02feb2c4();
      uVar2 = *(uint *)(unaff_x20 + 3);
    }
    if (uVar2 <= unaff_x28) goto LAB_057b2664;
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  } while( true );
}


