/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 057b98a4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int in_w8;
  undefined8 *puVar6;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x28;
  long unaff_x29;
  
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  if (-1 < in_w8) {
    unaff_x25 = (void *)(unaff_x29 + -0x40);
  }
  memcpy(unaff_x24,unaff_x25,unaff_x22);
  puVar5 = *(undefined8 **)(*(long *)(unaff_x28 + 0xc0) + 0x50);
  uVar3 = *puVar5;
  puVar6 = unaff_x24;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x28 + 0xc0) + 0x38) + 0x28)) {
    puVar6 = (undefined8 *)*unaff_x24;
  }
  *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x19 + 0x14);
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar7;
  *(undefined8 **)(unaff_x29 + -0x30) = puVar6;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x38,unaff_x29 + -0x14);
  uVar1 = *(uint *)(unaff_x29 + -0x14);
  if ((int)uVar1 < 0) {
LAB_057b9a64:
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return ~uVar1 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  plVar8 = *(long **)(unaff_x19 + 0x20);
  uVar2 = *(int *)(unaff_x19 + 0x14) - 1;
  *(uint *)(unaff_x19 + 0x14) = uVar2;
  if (plVar8 != (long *)0x0) {
    if (uVar2 < *(uint *)(plVar8 + 3)) {
      memcpy(unaff_x24,
             (void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar2 + 0x20),
             unaff_x22);
      if (uVar1 < *(uint *)(plVar8 + 3)) {
        memcpy((void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (ulong)uVar1 + 0x20),
               unaff_x24,unaff_x22);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4();
        }
        if (uVar1 < *(uint *)(plVar8 + 3)) {
          FUN_02fe920c(lVar4,(long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (ulong)uVar1 + 0x20)
          ;
          plVar8 = *(long **)(unaff_x19 + 0x20);
          uVar2 = *(uint *)(unaff_x19 + 0x14);
          memset(unaff_x23,0,unaff_x22);
          memcpy(unaff_x20,unaff_x23,unaff_x22);
          if (plVar8 == (long *)0x0) goto LAB_057b9aa0;
          if (uVar2 < *(uint *)(plVar8 + 3)) {
            memcpy((void *)((long)plVar8 +
                           (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar2 + 0x20),unaff_x20,
                   unaff_x22);
            lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02feb2c4();
            }
            if (uVar2 < *(uint *)(plVar8 + 3)) {
              FUN_02fe920c(lVar4,(long)plVar8 +
                                 (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar2 + 0x20);
              *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x19 + 0x14);
              goto LAB_057b9a64;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
LAB_057b9aa0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


