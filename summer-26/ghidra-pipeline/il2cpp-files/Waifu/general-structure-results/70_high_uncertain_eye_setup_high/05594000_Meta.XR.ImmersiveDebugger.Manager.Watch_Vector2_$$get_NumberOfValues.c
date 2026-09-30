/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 05594000
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x400) = unaff_w24;
  if (unaff_x22 != (long *)0x0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*unaff_x22 == lVar2) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec();
      }
      uStack000000000000000c = *unaff_x21;
      lVar2 = unaff_x22[2];
      uVar1 = *(undefined4 *)((long)unaff_x22 + 0x14);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0338f618();
      }
      FUN_03398650(**(undefined8 **)(lVar3 + 0xc0),&stack0x0000000c);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      in_stack_00000008 = (int)lVar2;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0338f618(lVar3);
      }
      FUN_03398650(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000008);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar2 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_083cc888) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05594134;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c();
LAB_05594134:
      uVar6 = (*(code *)*puVar4)();
      if ((uVar6 & 1) != 0) {
        uStack000000000000000c = unaff_x21[1];
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0338f618();
        }
        FUN_03398650(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x0000000c);
        lVar2 = *(long *)(unaff_x20 + 0x20);
        in_stack_00000008 = uVar1;
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0338f618(lVar2);
        }
        FUN_03398650(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x00000008);
        lVar2 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_083cc888) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05594210;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c();
LAB_05594210:
                    /* WARNING: Could not recover jumptable at 0x05594234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)*puVar4)();
        return uVar5;
      }
    }
  }
  return 0;
}


