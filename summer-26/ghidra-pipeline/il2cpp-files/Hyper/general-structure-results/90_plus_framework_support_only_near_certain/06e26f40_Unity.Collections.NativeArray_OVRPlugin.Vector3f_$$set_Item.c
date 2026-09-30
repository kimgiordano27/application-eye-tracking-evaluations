/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$set_Item
ENTRY_POINT: 06e26f40
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  ulong in_x9;
  int *in_x10;
  int *piVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  long *unaff_x21;
  long lVar5;
  long *unaff_x22;
  int unaff_w23;
  uint uVar6;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long *in_stack_000000e8;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_06e26f6c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
                    /* try { // try from 06e26f58 to 06f26f5b has its CatchHandler @ 06e26fe4 */
        puVar1 = (undefined8 *)FUN_04980e68(unaff_x21,param_3,0);
                    /* try { // try from 06e26f5c to 06f26f87 has its CatchHandler @ 06e26f1c */
LAB_06e26f6c:
        (*(code *)*puVar1)(&stack0x00000048,unaff_x21,puVar1[1]);
                    /* try { // try from 06e26f88 to 06f26f97 has its CatchHandler @ 06e26fe8 */
        memcpy(&stack0x000000a0,&stack0x00000048,0x48);
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        uVar6 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 06e26f98 to 06f26fb3 has its CatchHandler @ 06e26f1c */
        if (uVar6 == *(uint *)(lVar5 + 0x18)) {
          Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
                    ();
          uVar6 = *(uint *)(unaff_x20 + 0x18);
          lVar5 = *(long *)(unaff_x20 + 0x10);
          *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
          memcpy(&stack0x00000000,&stack0x000000a0,0x48);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
        }
        else {
          *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
          memcpy(&stack0x00000000,&stack0x000000a0,0x48);
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar5 = lVar5 + (long)(int)uVar6 * (long)unaff_w23;
        memcpy((void *)(lVar5 + 0x20),&stack0x00000000,0x48);
        thunk_FUN_049ee3d8(lVar5 + 0x20,0);
        plVar4 = in_stack_000000e8;
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar5 = *in_stack_000000e8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar3 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar3 + -2) == *unaff_x22) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar3 * 0x10 + 0x138);
              goto LAB_06e26ee8;
            }
            uVar2 = uVar2 - 1;
            piVar3 = piVar3 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_04980e68(in_stack_000000e8,*unaff_x22,0);
LAB_06e26ee8:
        uVar2 = (*(code *)*puVar1)(plVar4,puVar1[1]);
        unaff_x21 = in_stack_000000e8;
        if ((uVar2 & 1) == 0) {
          plVar4 = (long *)*in_stack_00000098;
          if (plVar4 == (long *)0x0) goto LAB_06e270ec;
          lVar5 = *plVar4;
          uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar2 == 0) goto LAB_06e270c4;
          piVar3 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_06e270ac;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_04980b34(param_3);
        }
        param_1 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar3 = piVar3 + 4;
    if (uVar2 == 0) break;
LAB_06e270ac:
    if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_06e270e0;
    }
  }
LAB_06e270c4:
  puVar1 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e270e0:
  (*(code *)*puVar1)(plVar4,puVar1[1]);
LAB_06e270ec:
  if (in_stack_00000090 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


