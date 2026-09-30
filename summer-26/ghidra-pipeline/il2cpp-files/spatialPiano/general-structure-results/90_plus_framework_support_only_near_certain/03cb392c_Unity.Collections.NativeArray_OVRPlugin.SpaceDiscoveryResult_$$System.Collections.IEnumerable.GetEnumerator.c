/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03cb392c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb3a5c) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  
code_r0x03cb392c:
  puVar1 = (undefined8 *)FUN_02f421d0(param_1,param_2,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      FUN_03cb21d0();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined8 *)(lVar3 + (long)(int)uVar4 * 8 + 0x20) = uVar2;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03cb38c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*unaff_x22,0);
LAB_03cb38c0:
    uVar5 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_03cb3a08;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02f41e9c(param_2);
    }
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    param_1 = in_stack_00000018;
    unaff_x21 = in_stack_00000018;
    if (uVar5 == 0) goto code_r0x03cb392c;
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto code_r0x03cb392c;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03cb3a24;
    }
  }
LAB_03cb3a08:
  puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb3a24:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


