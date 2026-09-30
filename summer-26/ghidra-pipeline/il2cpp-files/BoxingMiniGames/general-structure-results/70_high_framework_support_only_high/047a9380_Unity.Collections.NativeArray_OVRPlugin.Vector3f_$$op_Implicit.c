/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Implicit
ENTRY_POINT: 047a9380
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Implicit
               (long param_1,undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 in_x9;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  uVar9 = param_2._8_8_;
  uVar8 = param_2._0_8_;
  do {
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = in_x9;
    thunk_FUN_036b7ad0(param_1 + 0x20,0);
    plVar7 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = *in_stack_00000058;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_047a9258;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000058,*unaff_x22,0);
LAB_047a9258:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    plVar7 = in_stack_00000058;
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)*in_stack_00000038;
      if (plVar7 == (long *)0x0) goto LAB_047a945c;
      lVar2 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_047a9434;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_047a92dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar7,lVar2,0);
LAB_047a92dc:
    (*(code *)*puVar1)(&stack0x00000018,plVar7,puVar1[1]);
    param_1 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(param_1 + 0x18)) {
      FUN_047a77d8();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    param_1 = param_1 + (long)(int)uVar4 * (long)unaff_w23;
    in_x9 = in_stack_00000050;
    uVar8 = in_stack_00000040;
    uVar9 = in_stack_00000048;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_047a9450;
    }
  }
LAB_047a9434:
  puVar1 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_047a9450:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
LAB_047a945c:
  if (in_stack_00000030 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
}


