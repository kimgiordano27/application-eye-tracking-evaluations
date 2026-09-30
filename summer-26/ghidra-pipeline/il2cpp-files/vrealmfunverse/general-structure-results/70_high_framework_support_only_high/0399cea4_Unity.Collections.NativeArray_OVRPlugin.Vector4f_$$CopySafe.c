/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 0399cea4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  int unaff_w23;
  uint uVar7;
  long in_stack_00000368;
  undefined8 *in_stack_00000370;
  long *in_stack_00000528;
  
code_r0x0399cea4:
  FUN_0399b264();
  uVar7 = *(uint *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
  memcpy(&stack0x00000008,&stack0x00000378,0x1b0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  do {
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar6 = lVar6 + (long)(int)uVar7 * (long)unaff_w23;
    memcpy((void *)(lVar6 + 0x20),&stack0x00000008,0x1b0);
    thunk_FUN_02bb0e9c(lVar6 + 0x20,0);
    if (in_stack_00000528 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = *in_stack_00000528;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0399cdd8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000528,*unaff_x22,0);
LAB_0399cdd8:
    uVar3 = (*(code *)*puVar1)(in_stack_00000528,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      plVar5 = (long *)*in_stack_00000370;
      if (plVar5 == (long *)0x0) goto LAB_0399cfdc;
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 == 0) goto LAB_0399cfb4;
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000528 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    lVar2 = *in_stack_00000528;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar6) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0399ce5c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000528,lVar6,0);
LAB_0399ce5c:
    (*(code *)*puVar1)(&stack0x000001b8,in_stack_00000528,puVar1[1]);
    memcpy(&stack0x00000378,&stack0x000001b8,0x1b0);
    lVar6 = *(long *)(unaff_x20 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar7 = *(uint *)(unaff_x20 + 0x18);
    if (uVar7 == *(uint *)(lVar6 + 0x18)) goto code_r0x0399cea4;
    *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
    memcpy(&stack0x00000008,&stack0x00000378,0x1b0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0399cfd0;
    }
  }
LAB_0399cfb4:
  puVar1 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06312f78,0);
LAB_0399cfd0:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
LAB_0399cfdc:
  if (in_stack_00000368 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  return;
}


