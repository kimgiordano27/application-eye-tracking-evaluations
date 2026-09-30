/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03ca69a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03ca6a78) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  uint in_w9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  uint unaff_w23;
  undefined1 auVar7 [16];
  long *in_stack_00000018;
  
  auVar7._8_8_ = param_3;
  auVar7._0_8_ = param_2;
code_r0x03ca69a4:
  if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  pauVar4 = (undefined1 (*) [16])(param_1 + (long)(int)in_w9 * 0x10 + 0x20);
  *pauVar4 = auVar7;
  LeanTween__value(pauVar4,0);
  in_w9 = unaff_w23;
  do {
    unaff_w23 = in_w9 + 1;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ca68ec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*unaff_x22,0);
LAB_03ca68ec:
    uVar5 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_03ca6a10;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ca6980;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,lVar2,0);
LAB_03ca6980:
    auVar7 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if (unaff_w23 != 0) break;
    *(undefined1 (*) [16])(unaff_x20 + 8) = auVar7;
    LeanTween__value(unaff_x20 + 8,0);
    in_w9 = unaff_w23;
  } while( true );
  param_1 = *(long *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  in_CY = *(uint *)(param_1 + 0x18) <= in_w9;
  goto code_r0x03ca69a4;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_03ca6a10:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03ca6a44;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor:
  puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*(long *)PTR_DAT_069fbff0,0);
LAB_03ca6a44:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


