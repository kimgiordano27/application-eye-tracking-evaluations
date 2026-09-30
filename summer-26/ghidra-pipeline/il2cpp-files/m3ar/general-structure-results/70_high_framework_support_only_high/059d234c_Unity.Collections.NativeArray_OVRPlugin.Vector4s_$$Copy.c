/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 059d234c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059d2400) */
/* WARNING: Removing unreachable block (ram,0x059d23fc) */
/* WARNING: Removing unreachable block (ram,0x059d2444) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long *in_stack_000000a8;
  
  do {
    memcpy(param_1,param_2,param_3);
                    /* try { // try from 059d2358 to 05ad2367 has its CatchHandler @ 059d2368 */
                    /* catch() { ... } // from try @ 059d22d8 with catch @ 059d2368
                       catch() { ... } // from try @ 059d2358 with catch @ 059d2368 */
    FUN_059d1d08();
    plVar1 = in_stack_000000a8;
                    /* try { // try from 059d236c to 05ad236f has its CatchHandler @ 059d2378 */
                    /* try { // try from 059d2370 to 05ad237b has its CatchHandler @ 059d2200 */
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059d236c with catch @ 059d2378
                        */
      FUN_0403188c();
    }
    lVar3 = *in_stack_000000a8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_059d22ac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_000000a8,*unaff_x24,0);
LAB_059d22ac:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_000000a8;
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 059d237c to 05ad269f has its CatchHandler @ 059d237c
                       catch() { ... } // from try @ 059d237c with catch @ 059d237c
                       catch() { ... } // from try @ 059d2784 with catch @ 059d237c
                       catch() { ... } // from try @ 059d2848 with catch @ 059d237c
                       catch() { ... } // from try @ 059d289c with catch @ 059d237c */
      if (in_stack_000000a8 == (long *)0x0) goto LAB_059d23f0;
      lVar3 = *in_stack_000000a8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_059d23c8;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_059d2330;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar1,lVar3,0);
LAB_059d2330:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
    param_1 = &stack0x00000058;
    param_3 = 0x48;
    param_2 = (undefined1 *)register0x00000008;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
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


