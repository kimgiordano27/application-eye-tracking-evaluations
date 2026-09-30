/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsReadOnly
ENTRY_POINT: 059cf608
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


/* WARNING: Removing unreachable block (ram,0x059cf6fc) */
/* WARNING: Removing unreachable block (ram,0x059cf6f8) */
/* WARNING: Removing unreachable block (ram,0x059cf740) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsReadOnly
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000058;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_059cf634;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_0406ae20(unaff_x23,param_3,0);
LAB_059cf634:
        (*(code *)*puVar1)(unaff_x23,puVar1[1]);
                    /* try { // try from 059cf65c to 05acf6ab has its CatchHandler @ 059cf65c
                       catch() { ... } // from try @ 059cf65c with catch @ 059cf65c
                       catch() { ... } // from try @ 059cf724 with catch @ 059cf65c
                       catch() { ... } // from try @ 059cf754 with catch @ 059cf65c
                       catch() { ... } // from try @ 059cf7d4 with catch @ 059cf65c */
        FUN_059cf01c();
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar2 = *in_stack_00000058;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_059cf5b0;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000058,*unaff_x24,0);
LAB_059cf5b0:
        uVar3 = (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
        if ((uVar3 & 1) == 0) {
          if (in_stack_00000058 == (long *)0x0) goto LAB_059cf6ec;
          lVar2 = *in_stack_00000058;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 == 0) goto LAB_059cf6c4;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_059cf6ac;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_0406aaec(param_3);
        }
        param_1 = *in_stack_00000058;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x23 = in_stack_00000058;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_059cf6ac:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_059cf6e0;
    }
  }
LAB_059cf6c4:
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000058,*(long *)PTR_DAT_08f65868,0);
LAB_059cf6e0:
  (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
LAB_059cf6ec:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


