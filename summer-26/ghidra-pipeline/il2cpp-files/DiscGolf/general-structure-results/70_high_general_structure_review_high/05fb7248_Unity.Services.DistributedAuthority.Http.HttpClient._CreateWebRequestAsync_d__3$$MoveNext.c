/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.Http.HttpClient.<CreateWebRequestAsync>d__3$$MoveNext
ENTRY_POINT: 05fb7248
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05fb73f4) */
/* WARNING: Removing unreachable block (ram,0x05fb73f8) */
/* WARNING: Removing unreachable block (ram,0x05fb74a8) */
/* WARNING: Removing unreachable block (ram,0x05fb7470) */
/* WARNING: Removing unreachable block (ram,0x05fb7474) */

void Unity_Services_DistributedAuthority_Http_HttpClient_<CreateWebRequestAsync>d__3__MoveNext
               (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  uint uStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  ulong in_stack_00000070;
  
  do {
    if (in_w8 == 0) {
      in_stack_00000008 = in_stack_00000008 + 1;
      if (in_stack_00000008 == 3) {
        FUN_05fb758c();
        return;
      }
      if ((*(long *)(unaff_x19 + 0xb8) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x10), lVar5 == 0)) {
LAB_05fb7560:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar5 + 0x18) <= in_stack_00000008) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05fb7560;
      unaff_x20 = *(long *)(lVar5 + in_stack_00000008 * 8 + 0x20);
      FUN_047cc6f4(*(long *)(unaff_x19 + 0x90),
                   *(undefined8 *)Method_UnityEngine_AndroidJNIHelper_CreateJNIArgArray__);
      if (unaff_x20 == 0) goto LAB_05fb7560;
      if (1 < *(int *)(unaff_x20 + 0x18)) {
        iVar8 = 1;
        do {
          lVar5 = FUN_05052fb4(unaff_x20,iVar8,*unaff_x25);
          if (*(int *)(lVar5 + 0x10) == 0) {
            if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05fb7560;
            FUN_047ccb88(*(long *)(unaff_x19 + 0x90),iVar8,*unaff_x26);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(unaff_x20 + 0x18));
      }
    }
    else {
      uVar2 = FUN_047ccae8(param_1,*(undefined8 *)Method_UnityEngine_AndroidJNISafe_CheckException__
                          );
      plVar3 = (long *)FUN_05052fb4(unaff_x20,uVar2,*unaff_x25);
      if (*plVar3 == 0) goto LAB_05fb7560;
      FUN_03fb4898(&stack0x00000010,*plVar3,*(undefined8 *)PTR_DAT_069fed38);
      in_stack_00000070 = in_stack_00000020;
                    /* try { // try from 05fb7294 to 060b729b has its CatchHandler @ 05fb73a8 */
      in_stack_00000038 = &stack0x00000060;
      in_stack_00000068 = in_stack_00000018;
      in_stack_00000060 = in_stack_00000010;
      in_stack_00000030 = 0;
      while (uVar4 = FUN_051434b8(&stack0x00000060,*unaff_x29), uVar7 = in_stack_00000070,
            lVar5 = in_stack_00000030, (uVar4 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x18);
                    /* try { // try from 05fb72bc to 060b72bf has its CatchHandler @ 05fb72e8 */
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
                    /* try { // try from 05fb72c0 to 060b72c3 has its CatchHandler @ 05fb72e0 */
                    /* try { // try from 05fb72c4 to 060b72cb has its CatchHandler @ 05fb72dc */
                    /* catch() { ... } // from try @ 05fb6df4 with catch @ 05fb72cc
                       try { // try from 05fb72cc to 060b7323 has its CatchHandler @ 05fb69a0 */
        lVar5 = FUN_050522c4(lVar5,in_stack_00000070 & 0xffffffff,*unaff_x24);
                    /* catch() { ... } // from try @ 05fb6cc8 with catch @ 05fb72d8 */
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
                    /* catch() { ... } // from try @ 05fb72c4 with catch @ 05fb72dc */
                    /* catch() { ... } // from try @ 05fb72c0 with catch @ 05fb72e0 */
                    /* catch() { ... } // from try @ 05fb6da0 with catch @ 05fb72e4 */
        lVar6 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x38),uVar7 & 0xffffffff,*unaff_x27);
                    /* catch() { ... } // from try @ 05fb72bc with catch @ 05fb72e8 */
                    /* catch() { ... } // from try @ 05fb6ebc with catch @ 05fb72ec */
        iVar8 = *(int *)(lVar5 + 0x30) + -1;
                    /* catch() { ... } // from try @ 05fb6e9c with catch @ 05fb72f0 */
        *(int *)(lVar5 + 0x30) = iVar8;
                    /* catch() { ... } // from try @ 05fb6ca8 with catch @ 05fb72f4 */
        if (((iVar8 == 0) && (*(char *)(lVar5 + 0x41) == '\0')) && (*(char *)(lVar5 + 0x3d) != '\0')
           ) {
          *(undefined1 *)(lVar5 + 0x3f) = 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar5 = *(long *)(lVar6 + 0xa8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
                    /* try { // try from 05fb7324 to 060b7327 has its CatchHandler @ 05fb732c */
          if (*(uint *)(lVar5 + 0x18) <= in_stack_00000008) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
                    /* catch() { ... } // from try @ 05fb7324 with catch @ 05fb732c */
                    /* try { // try from 05fb7330 to 060b7337 has its CatchHandler @ 05fb73a8 */
          lVar5 = *(long *)(lVar5 + in_stack_00000008 * 8 + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
                    /* try { // try from 05fb7338 to 060b7357 has its CatchHandler @ 05fb69a0 */
                    /* catch() { ... } // from try @ 05fb6e7c with catch @ 05fb733c */
          FUN_04042130(&stack0x00000010,lVar5,
                       *(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
          in_stack_00000040 = in_stack_00000010;
          in_stack_00000010 = 0;
                    /* try { // try from 05fb7358 to 060b735b has its CatchHandler @ 05fb7394 */
          in_stack_00000048 = in_stack_00000018;
          in_stack_00000058 = in_stack_00000028;
          _uStack0000000000000050 = in_stack_00000020;
          in_stack_00000018 = &stack0x00000040;
                    /* try { // try from 05fb735c to 060b7397 has its CatchHandler @ 05fb69a0 */
          while (uVar7 = FUN_0515e9d0(&stack0x00000040,*unaff_x28), (uVar7 & 1) != 0) {
            uVar1 = uStack0000000000000050;
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar5 = FUN_05052fb4(unaff_x20,uVar1 & 0xffff,*unaff_x25);
                    /* catch() { ... } // from try @ 05fb7358 with catch @ 05fb7394 */
            iVar8 = *(int *)(lVar5 + 0x10) + -1;
                    /* try { // try from 05fb7398 to 060b739f has its CatchHandler @ 05fb73a8 */
            *(int *)(lVar5 + 0x10) = iVar8;
            if (iVar8 == 0) {
                    /* try { // try from 05fb73a0 to 060b73ab has its CatchHandler @ 05fb69a0 */
              lVar5 = *(long *)(unaff_x19 + 0x90);
                    /* catch() { ... } // from try @ 05fb7294 with catch @ 05fb73a8
                       catch() { ... } // from try @ 05fb7330 with catch @ 05fb73a8
                       catch() { ... } // from try @ 05fb7398 with catch @ 05fb73a8 */
                    /* try { // try from 05fb73ac to 060b7537 has its CatchHandler @ 05fb73ac
                       catch() { ... } // from try @ 05fb73ac with catch @ 05fb73ac
                       catch() { ... } // from try @ 05fb75d4 with catch @ 05fb73ac
                       catch() { ... } // from try @ 05fb7600 with catch @ 05fb73ac
                       catch() { ... } // from try @ 05fb762c with catch @ 05fb73ac
                       catch() { ... } // from try @ 05fb7650 with catch @ 05fb73ac */
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_047ccb88(lVar5,uVar1 & 0xffff,*unaff_x26);
            }
          }
          FUN_0515e9cc(&stack0x00000040,
                       *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        }
      }
      FUN_051434b4(in_stack_00000038,*(undefined8 *)PTR_DAT_069fed00);
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar5);
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x90);
    if (param_1 == 0) goto LAB_05fb7560;
    in_w8 = *(int *)(param_1 + 0x18);
  } while( true );
}


