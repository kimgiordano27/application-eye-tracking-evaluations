/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0410ffdc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041101bc) */

void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000078;
  
code_r0x0410ffdc:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_0410ffcc;
LAB_0410ffe4:
  puVar2 = (undefined8 *)FUN_02dd004c(unaff_x21,param_3,0);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
    plVar1 = in_stack_00000078;
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000078;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_04110168;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar5 = *plVar1;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04110084;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar1,lVar4,0);
LAB_04110084:
    (*(code *)*puVar2)(&stack0x00000020,plVar1,puVar2[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = *(uint *)(unaff_x20 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_0410e870();
      uVar6 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x20;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000058;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000068;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000060;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_1 = *in_stack_00000078;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000078;
    if (in_x9 == 0) goto LAB_0410ffe4;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0410ffcc:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x0410ffdc;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04110184;
    }
  }
LAB_04110168:
  puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000078,*(long *)PTR_DAT_069fbff0,0);
LAB_04110184:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


