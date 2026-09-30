/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 047a9134
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(ulong param_1,long param_2)

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
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079f49a8);
    *(undefined1 *)(unaff_x22 + 0x894) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_047a91e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_047a91e0:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_079f49a8;
  in_stack_00000038 = &stack0x00000058;
  in_stack_00000030 = 0;
  do {
    in_stack_00000058 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_047a9258;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)puVar1,0);
LAB_047a9258:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_00000058;
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)*in_stack_00000038;
      if (plVar3 == (long *)0x0) goto LAB_047a945c;
      lVar4 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_047a9434;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_047a92dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar3,lVar4,0);
LAB_047a92dc:
    (*(code *)*puVar2)(&stack0x00000018,plVar3,puVar2[1]);
    lVar4 = *(long *)(param_2 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = *(uint *)(param_2 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_047a77d8(param_2,uVar6 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
      uVar6 = *(uint *)(param_2 + 0x18);
      lVar4 = *(long *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    else {
      *(uint *)(param_2 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000050;
    thunk_FUN_036b7ad0(lVar4 + 0x20,0);
    plVar3 = in_stack_00000058;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_047a9450;
    }
  }
LAB_047a9434:
  puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079f4598,0);
LAB_047a9450:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_047a945c:
  if (in_stack_00000030 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
}


