/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetHashCode
ENTRY_POINT: 059d0010
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059d02e8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetHashCode(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000078;
  
  FUN_0403162c(PTR_DAT_08f65868);
  FUN_0403162c(PTR_DAT_08f65880);
  *(undefined1 *)(unaff_x22 + 0x40e) = 1;
  in_stack_00000078 = (long *)0x0;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0406aaec(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_059d00b8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_059d00b8:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_08f65880;
  in_stack_00000048 = &stack0x00000078;
  in_stack_00000040 = 0;
  do {
    in_stack_00000078 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059d012c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar3,*(long *)puVar1,0);
LAB_059d012c:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_00000078;
    if ((uVar7 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000078;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_059d0294;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec(lVar4);
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059d01b0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar3,lVar4,0);
LAB_059d01b0:
    (*(code *)*puVar2)(&stack0x00000020,plVar3,puVar2[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar6 = *(uint *)(unaff_x20 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_059ce7b4();
      uVar6 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x20;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000058;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000068;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000060;
    plVar3 = in_stack_00000078;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059d02b0;
    }
  }
LAB_059d0294:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000078,*(long *)PTR_DAT_08f65868,0);
LAB_059d02b0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


