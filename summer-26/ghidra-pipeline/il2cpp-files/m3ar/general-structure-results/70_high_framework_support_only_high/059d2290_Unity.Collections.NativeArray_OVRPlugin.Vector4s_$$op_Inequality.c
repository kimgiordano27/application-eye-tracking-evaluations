/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Inequality
ENTRY_POINT: 059d2290
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059d2400) */
/* WARNING: Removing unreachable block (ram,0x059d23fc) */
/* WARNING: Removing unreachable block (ram,0x059d2444) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Inequality
               (undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_000000a8;
  
code_r0x059d2290:
  puVar2 = (undefined8 *)FUN_0406ae20(unaff_x23,param_2,0);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    plVar1 = in_stack_000000a8;
    if ((uVar3 & 1) == 0) {
      if (in_stack_000000a8 == (long *)0x0) goto LAB_059d23f0;
      lVar4 = *in_stack_000000a8;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_059d23c8;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 059d2250 with catch @ 059d22c0
                       try { // try from 059d22c0 to 05ad22d7 has its CatchHandler @ 059d2200 */
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* try { // try from 059d22d8 to 05ad22ef has its CatchHandler @ 059d2368 */
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec(lVar4);
    }
    lVar5 = *plVar1;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_059d2330;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar4,0);
LAB_059d2330:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
    memcpy(&stack0x00000058,&stack0x00000000,0x48);
    FUN_059d1d08();
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_000000a8;
    param_2 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    unaff_x23 = in_stack_000000a8;
    if (uVar3 == 0) goto code_r0x059d2290;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
      if (uVar3 == 0) goto code_r0x059d2290;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_059d23e4;
    }
  }
LAB_059d23c8:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_000000a8,*(long *)PTR_DAT_08f65868,0);
LAB_059d23e4:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_059d23f0:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


