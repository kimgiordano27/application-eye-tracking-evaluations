/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 05594f88
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


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings
          (ulong param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cc888,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0x405) = 1;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar1 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0338f618();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0338f618();
    }
    if (*unaff_x21 == lVar1) {
      lVar1 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0338f618();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0338f618(lVar1);
      }
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1fec();
      }
      uStack000000000000000c = *param_2;
      lVar1 = unaff_x21[2];
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618();
      }
      FUN_03398650(**(undefined8 **)(lVar2 + 0xc0),&stack0x0000000c);
      lVar2 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000008 = (int)lVar1;
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618(lVar2);
      }
      FUN_03398650(**(undefined8 **)(lVar2 + 0xc0),&stack0x00000008);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar1 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_083cc888) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_055950d8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c();
LAB_055950d8:
      uVar5 = (*(code *)*puVar3)();
      if ((uVar5 & 1) != 0) {
        lVar1 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083cc888) {
              puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_05595158;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c();
LAB_05595158:
                    /* WARNING: Could not recover jumptable at 0x05595178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)*puVar3)();
        return uVar4;
      }
    }
  }
  return 0;
}


