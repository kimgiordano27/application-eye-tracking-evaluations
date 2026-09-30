/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnly
ENTRY_POINT: 047a9298
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnly
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_047a92dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(unaff_x21,param_3,0);
LAB_047a92dc:
    (*(code *)*puVar1)(&stack0x00000018,unaff_x21,puVar1[1]);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 == *(uint *)(lVar2 + 0x18)) {
      FUN_047a77d8();
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar2 = lVar2 + (long)(int)uVar3 * (long)unaff_w23;
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000050;
    thunk_FUN_036b7ad0(lVar2 + 0x20,0);
    plVar6 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = *in_stack_00000058;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_047a9258;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000058,*unaff_x22,0);
LAB_047a9258:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    unaff_x21 = in_stack_00000058;
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)*in_stack_00000038;
      if (plVar6 == (long *)0x0) goto LAB_047a945c;
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_047a9434;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_0367c9fc(param_3);
    }
    param_1 = *unaff_x21;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_047a9450;
    }
  }
LAB_047a9434:
  puVar1 = (undefined8 *)FUN_0367cd30(plVar6,*(long *)PTR_DAT_079f4598,0);
LAB_047a9450:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
LAB_047a945c:
  if (in_stack_00000030 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
}


