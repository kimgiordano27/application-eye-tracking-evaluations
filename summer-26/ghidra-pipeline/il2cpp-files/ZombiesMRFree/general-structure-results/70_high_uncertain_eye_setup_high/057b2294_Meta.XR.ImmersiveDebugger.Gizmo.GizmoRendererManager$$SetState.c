/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$SetState
ENTRY_POINT: 057b2294
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__SetState(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ushort in_w9;
  ulong uVar7;
  uint uVar8;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x24;
  long *plVar9;
  ulong uVar10;
  long unaff_x29;
  
  uVar8 = *(uint *)(param_1 + 0xfc);
  uVar10 = (ulong)uVar8;
  if ((in_w9 & 1) == 0) {
    lVar5 = FUN_02feb2c4(param_1);
    uVar8 = *(uint *)(lVar5 + 0xfc);
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    in_w9 = *(ushort *)(param_1 + 0x135);
  }
  lVar5 = (in_x11 - in_x10) - ((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x30) = lVar5;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02feb2c4(param_1);
  }
  lVar5 = lVar5 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x38) = lVar5;
  *(ulong *)(unaff_x29 + -0x20) = lVar5 - (uVar10 + 0xf & 0x1fffffff0);
  if ((unaff_x20 != (long *)0x0) && (*(long *)(unaff_x21 + 0x20) != 0)) {
    iVar1 = *(int *)(unaff_x21 + 0x14);
    uVar7 = unaff_x20[3];
    iVar2 = *(int *)(*(long *)(unaff_x21 + 0x20) + 0x18);
    *(undefined8 *)(unaff_x29 + -0x40) = unaff_x24;
    *(ulong *)(unaff_x29 + -0x28) = uVar10;
    if (iVar2 <= iVar1 + (int)uVar7) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50))();
      uVar7 = unaff_x20[3];
    }
    puVar4 = PTR_DAT_06f9cf88;
    puVar3 = PTR_DAT_06f6d668;
    uVar10 = uVar7 & 0xffffffff;
    if (0 < (int)uVar7) {
      uVar7 = 0;
      do {
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4();
          uVar10 = (ulong)*(uint *)(unaff_x20 + 3);
        }
        if (uVar10 <= uVar7) goto LAB_057b2664;
        FUN_02fe9dc8(lVar5,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48));
        if (*(long *)(unaff_x29 + -0x10) == 0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02feb2c4();
          }
          if (*(uint *)(unaff_x20 + 3) <= uVar7) goto LAB_057b2664;
          FUN_02fe9dc8(lVar5,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58),
                       in_x11 - in_x10,
                       (long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20,0,
                       unaff_x29 + -0x10);
          if (*(int *)(unaff_x29 + -0x10) == -1) {
            if (*(uint *)(unaff_x20 + 3) <= uVar7) {
LAB_057b2664:
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            plVar9 = *(long **)(unaff_x21 + 0x20);
            uVar8 = *(uint *)(unaff_x21 + 0x14);
            memcpy(*(void **)(unaff_x29 + -0x20),
                   (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
                   *(size_t *)(unaff_x29 + -0x28));
            if (plVar9 == (long *)0x0) goto LAB_057b2668;
            if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_057b2664;
            memcpy((void *)((long)plVar9 +
                           (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar8 + 0x20),
                   *(void **)(unaff_x29 + -0x20),*(size_t *)(unaff_x29 + -0x28));
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02feb2c4();
            }
            if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_057b2664;
            FUN_02fe920c(lVar5,(long)plVar9 +
                               (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar8 + 0x20,
                         *(undefined8 *)(unaff_x29 + -0x20));
            iVar1 = *(int *)(unaff_x21 + 0x14);
            *(int *)(unaff_x21 + 0x14) = iVar1 + 1;
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02feb2c4();
            }
            if (*(uint *)(unaff_x20 + 3) <= uVar7) goto LAB_057b2664;
            uVar8 = *(uint *)(*unaff_x20 + 0x104);
            uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
            *(int *)(unaff_x29 + -0x14) = iVar1;
            *(long *)(unaff_x29 + -0x10) = unaff_x29 + -0x14;
            FUN_02fe9dc8(lVar5,uVar6,*(undefined8 *)(unaff_x29 + -0x30),
                         (long)unaff_x20 + uVar7 * uVar8 + 0x20,unaff_x29 + -0x10,unaff_x29 + -0x14)
            ;
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02feb2c4();
            }
            if (*(uint *)(unaff_x20 + 3) <= uVar7) goto LAB_057b2664;
            uVar8 = *(uint *)(*unaff_x20 + 0x104);
            uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
            *(long *)(unaff_x29 + -0x10) = unaff_x21;
            FUN_02fe9dc8(lVar5,uVar6,*(undefined8 *)(unaff_x29 + -0x38),
                         (long)unaff_x20 + uVar7 * uVar8 + 0x20,unaff_x29 + -0x10);
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            FUN_068bd348(*(undefined8 *)PTR_DAT_06f9cf98,0);
          }
        }
        else {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          FUN_068bd958(*(undefined8 *)puVar4,0);
        }
        uVar10 = (ulong)*(uint *)(unaff_x20 + 3);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x20 + 3));
    }
    *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x21 + 0x14);
    if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_057b2668:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


