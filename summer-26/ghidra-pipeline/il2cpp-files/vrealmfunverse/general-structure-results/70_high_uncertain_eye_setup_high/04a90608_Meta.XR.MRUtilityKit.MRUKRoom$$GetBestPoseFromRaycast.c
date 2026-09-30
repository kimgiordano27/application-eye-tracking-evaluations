/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 04a90608
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a9080c) */

uint Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 in_ZR;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000058;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_04a9062c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_02b7654c();
LAB_04a9062c:
  puVar2 = PTR_DAT_06312f90;
  puVar1 = PTR_DAT_06312f78;
  in_stack_00000058 = (long *)(*(code *)*puVar5)();
  do {
    plVar3 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = *in_stack_00000058;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a906a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000058,*(long *)puVar2,0);
LAB_04a906a8:
    uVar4 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    plVar3 = in_stack_00000058;
    if ((uVar4 & 1) == 0) break;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a90730;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar3,lVar6,0);
LAB_04a90730:
    (*(code *)*puVar5)(&stack0x00000030,plVar3,puVar5[1]);
    uVar8 = FUN_04a8dd90();
  } while ((uVar8 & 1) != 0);
  plVar3 = in_stack_00000058;
  if (in_stack_00000058 != (long *)0x0) {
    lVar6 = *in_stack_00000058;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a907d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000058,*(long *)puVar1,0);
LAB_04a907d4:
    (*(code *)*puVar5)(plVar3,puVar5[1]);
  }
  return (uVar4 ^ 1) & 1;
}


