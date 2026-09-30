/*
FUNCTION_NAME: Unity.Mathematics.math$$hashwide
ENTRY_POINT: 03b3c8e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b3c9ec) */
/* WARNING: Removing unreachable block (ram,0x03b3ca30) */

undefined8 Unity_Mathematics_math__hashwide(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        uVar6 = unaff_x21;
        goto LAB_03b3c91c;
      }
      in_x9 = in_x9 - 1;
                    /* try { // try from 03b3c8f8 to 03c3c907 has its CatchHandler @ 03b3c90c */
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
                    /* try { // try from 03b3c908 to 03c3c927 has its CatchHandler @ 03b3c828 */
      puVar1 = (undefined8 *)FUN_01ecb238();
      uVar6 = unaff_x21;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b3c8f8 with catch @ 03b3c90c
                        */
LAB_03b3c91c:
                    /* try { // try from 03b3c928 to 03c3c93b has its CatchHandler @ 03b3c9bc */
      (*(code *)*puVar1)(&stack0x00000008);
      uVar2 = FUN_03b1c12c(in_stack_00000008,0);
                    /* try { // try from 03b3c940 to 03c3c943 has its CatchHandler @ 03b3c9c0 */
      uVar3 = FUN_0340eec4(uVar2,0);
                    /* try { // try from 03b3c944 to 03c3c9ab has its CatchHandler @ 03b3c828 */
      unaff_x21 = uVar6;
      if (((uVar3 & 1) == 0) && (uVar3 = FUN_0340eec4(uVar6,0), unaff_x21 = uVar2, (uVar3 & 1) == 0)
         ) {
        unaff_x21 = FUN_0340ebc0(uVar6,*unaff_x26,uVar2,0);
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03b3c8c0;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b3c8c0:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_03b3c9e0;
        lVar4 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 == 0) goto LAB_03b3c9b8;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_03b3c9a0;
      }
      param_1 = *unaff_x20;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
                    /* try { // try from 03b3c9ac to 03c3c9bb has its CatchHandler @ 03b3c9c8 */
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
LAB_03b3c9a0:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03b3c9d4;
    }
  }
LAB_03b3c9b8:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b3c928 with catch @ 03b3c9bc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b3c940 with catch @ 03b3c9c0
                        */
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b3c9d4:
  (*(code *)*puVar1)();
LAB_03b3c9e0:
  uVar3 = FUN_0340eec4(unaff_x21,0);
  if ((uVar3 & 1) == 0) {
    unaff_x19 = FUN_0340ebc0(unaff_x21,*(undefined8 *)Method_System_DateTimeParse_ParseExact__);
  }
  return unaff_x19;
}


