/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03cb38a8
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

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  
code_r0x03cb38a8:
  puVar1 = (undefined8 *)FUN_02f421d0(param_1,param_2,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_03cb3a08;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c(lVar4);
    }
    lVar5 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cb3944;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000018,lVar4,0);
LAB_03cb3944:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = *(uint *)(unaff_x20 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_03cb21d0();
      uVar6 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined8 *)(lVar4 + (long)(int)uVar6 * 8 + 0x20) = uVar3;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *in_stack_00000018;
    param_2 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    param_1 = in_stack_00000018;
    unaff_x21 = in_stack_00000018;
    if (uVar2 == 0) goto code_r0x03cb38a8;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
      if (uVar2 == 0) goto code_r0x03cb38a8;
    }
    puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03cb3a24;
    }
  }
LAB_03cb3a08:
  puVar1 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb3a24:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


