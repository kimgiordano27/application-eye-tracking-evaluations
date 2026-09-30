/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.BoneCapsule>
ENTRY_POINT: 02e113ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e11478) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_BoneCapsule>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  
code_r0x02e113ac:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_02e1139c;
  do {
    puVar2 = (undefined8 *)FUN_02b7654c();
    while( true ) {
      (*(code *)*puVar2)();
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar1 = FUN_02e1163c();
      if ((uVar1 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000018;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 == 0) goto LAB_02e11428;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_02e11410;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_02e1152c();
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      param_1 = *unaff_x19;
      param_3 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02e1139c:
      if (*(long *)(in_x10 + -2) != param_3) {
        in_x9 = in_x9 - 1;
        in_ZR = in_x9 == 0;
        goto code_r0x02e113ac;
      }
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
    }
  } while( true );
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar4 = piVar4 + 4;
    if (uVar1 == 0) break;
LAB_02e11410:
    if (*(long *)(piVar4 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_02e11444;
    }
  }
LAB_02e11428:
  puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x22,0);
LAB_02e11444:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  return;
}


