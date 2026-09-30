/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 01ac2a00
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_ToDisplayStringsDelegate(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar7;
  long *unaff_x24;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_0103c244();
  }
  if (unaff_x22 != (long *)0x0) {
    lVar3 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01ac2a60;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0103c348();
LAB_01ac2a60:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(unaff_x20 + 0x3dc) = in_stack_00000018;
    }
    plVar2 = (long *)FUN_0216a4d8();
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar3);
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x60);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01ac2b30;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0103c348(plVar2,*unaff_x24,0);
LAB_01ac2b30:
      uVar5 = (*(code *)*puVar1)(plVar2,uVar7,(long)&stack0x00000008 + 4,puVar1[1]);
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)(unaff_x20 + 0x3e0) = uStack000000000000000c;
      }
      plVar2 = (long *)FUN_0216a4d8();
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar3);
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x68);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_01ac2c00;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0103c348(plVar2,*unaff_x24,0);
LAB_01ac2c00:
        uVar5 = (*(code *)*puVar1)(plVar2,uVar7,&stack0x00000008,puVar1[1]);
        if ((uVar5 & 1) != 0) {
          *(undefined4 *)(unaff_x20 + 0x3e4) = uStack0000000000000008;
        }
        FUN_01ac2c60();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


