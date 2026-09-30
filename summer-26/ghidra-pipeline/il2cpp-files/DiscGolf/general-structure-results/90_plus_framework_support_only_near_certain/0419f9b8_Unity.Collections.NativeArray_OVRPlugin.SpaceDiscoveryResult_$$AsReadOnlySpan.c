/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 0419f9b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419fab0) */
/* WARNING: Removing unreachable block (ram,0x0419faac) */
/* WARNING: Removing unreachable block (ram,0x0419faf8) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
  do {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0419f91c;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_02dd004c(unaff_x23,param_3,0);
LAB_0419f91c:
      (*(code *)*puVar1)(unaff_x23,puVar1[1]);
      FUN_0419f3ec();
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0419f970;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*unaff_x24,0);
LAB_0419f970:
      uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      if ((uVar3 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) goto LAB_0419faa0;
        lVar2 = *in_stack_00000018;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_0419fa78;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0419fa60;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_02dcfd18(param_3);
      }
      param_1 = *in_stack_00000018;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x23 = in_stack_00000018;
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_0419fa60:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0419fa94;
    }
  }
LAB_0419fa78:
  puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*(long *)PTR_DAT_069fbff0,0);
LAB_0419fa94:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
LAB_0419faa0:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


