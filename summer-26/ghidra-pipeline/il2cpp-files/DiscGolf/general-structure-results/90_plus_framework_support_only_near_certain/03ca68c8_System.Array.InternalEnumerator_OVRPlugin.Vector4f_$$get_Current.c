/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 03ca68c8
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

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined1 auVar7 [16];
  long *in_stack_00000018;
  
code_r0x03ca68c8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_03ca68b8;
LAB_03ca68d0:
  puVar1 = (undefined8 *)FUN_02dd004c(unaff_x21,param_3,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar4 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ca6980;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,lVar3,0);
LAB_03ca6980:
    auVar7 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if (unaff_w23 == 0) {
      *(undefined1 (*) [16])(unaff_x20 + 8) = auVar7;
      LeanTween__value(unaff_x20 + 8,0);
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_w23 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      pauVar5 = (undefined1 (*) [16])(lVar3 + (long)(int)(unaff_w23 - 1U) * 0x10 + 0x20);
      *pauVar5 = auVar7;
      LeanTween__value(pauVar5,0);
    }
    unaff_w23 = unaff_w23 + 1;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_1 = *in_stack_00000018;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000018;
    if (in_x9 == 0) goto LAB_03ca68d0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03ca68b8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x03ca68c8;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03ca6a44;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor:
  puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*(long *)PTR_DAT_069fbff0,0);
LAB_03ca6a44:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


