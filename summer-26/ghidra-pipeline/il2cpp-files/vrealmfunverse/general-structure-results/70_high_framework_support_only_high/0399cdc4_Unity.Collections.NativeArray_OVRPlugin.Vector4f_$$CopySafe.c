/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 0399cdc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  uint uVar7;
  long in_stack_00000368;
  undefined8 *in_stack_00000370;
  long *in_stack_00000528;
  
code_r0x0399cdc4:
  puVar1 = (undefined8 *)FUN_02b7654c(param_1,param_2,param_3);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      plVar6 = (long *)*in_stack_00000370;
      if (plVar6 == (long *)0x0) goto LAB_0399cfdc;
      lVar3 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_0399cfb4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_0399cf9c;
    }
    if (in_stack_00000528 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *in_stack_00000528;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0399ce5c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000528,lVar3,0);
LAB_0399ce5c:
    (*(code *)*puVar1)(&stack0x000001b8,in_stack_00000528,puVar1[1]);
    memcpy(&stack0x00000378,&stack0x000001b8,0x1b0);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar7 = *(uint *)(unaff_x20 + 0x18);
    if (uVar7 == *(uint *)(lVar3 + 0x18)) {
      FUN_0399b264();
      uVar7 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
      memcpy(&stack0x00000008,&stack0x00000378,0x1b0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
      memcpy(&stack0x00000008,&stack0x00000378,0x1b0);
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = lVar3 + (long)(int)uVar7 * (long)unaff_w23;
    memcpy((void *)(lVar3 + 0x20),&stack0x00000008,0x1b0);
    thunk_FUN_02bb0e9c(lVar3 + 0x20,0);
    if (in_stack_00000528 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *in_stack_00000528;
    param_2 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x21 = in_stack_00000528;
    if (uVar2 == 0) break;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto LAB_0399cdbc;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
LAB_0399cdbc:
  param_3 = 0;
  param_1 = in_stack_00000528;
  goto code_r0x0399cdc4;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_0399cf9c:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0399cfd0;
    }
  }
LAB_0399cfb4:
  puVar1 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06312f78,0);
LAB_0399cfd0:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
LAB_0399cfdc:
  if (in_stack_00000368 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


