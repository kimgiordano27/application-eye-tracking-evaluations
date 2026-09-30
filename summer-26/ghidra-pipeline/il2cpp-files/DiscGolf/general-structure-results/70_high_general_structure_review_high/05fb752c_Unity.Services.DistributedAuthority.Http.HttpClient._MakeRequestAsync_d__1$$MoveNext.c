/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.Http.HttpClient.<MakeRequestAsync>d__1$$MoveNext
ENTRY_POINT: 05fb752c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05fb73f4) */
/* WARNING: Removing unreachable block (ram,0x05fb73f8) */
/* WARNING: Removing unreachable block (ram,0x05fb74a8) */
/* WARNING: Removing unreachable block (ram,0x05fb7470) */
/* WARNING: Removing unreachable block (ram,0x05fb7474) */

void Unity_Services_DistributedAuthority_Http_HttpClient_<MakeRequestAsync>d__1__MoveNext(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong in_x10;
  long unaff_x19;
  int iVar9;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
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
  
  while( true ) {
    in_x10 = in_x10 + 1;
    if (in_x10 == 3) {
                    /* try { // try from 05fb7538 to 060b753f has its CatchHandler @ 05fb7608 */
      FUN_05fb758c();
      return;
    }
    if ((*(long *)(unaff_x19 + 0xb8) == 0) ||
       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x10), lVar8 == 0)) break;
    if (*(uint *)(lVar8 + 0x18) <= in_x10) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (*(long *)(unaff_x19 + 0x90) == 0) break;
    lVar8 = *(long *)(lVar8 + in_x10 * 8 + 0x20);
    FUN_047cc6f4(*(long *)(unaff_x19 + 0x90),
                 *(undefined8 *)Method_UnityEngine_AndroidJNIHelper_CreateJNIArgArray__);
    if (lVar8 == 0) break;
    if (1 < *(int *)(lVar8 + 0x18)) {
      iVar9 = 1;
      do {
        lVar3 = FUN_05052fb4(lVar8,iVar9,*unaff_x25);
        if (*(int *)(lVar3 + 0x10) == 0) {
          if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05fb7560;
          FUN_047ccb88(*(long *)(unaff_x19 + 0x90),iVar9,*unaff_x26);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar8 + 0x18));
    }
    while( true ) {
      lVar3 = *(long *)(unaff_x19 + 0x90);
      if (lVar3 == 0) goto LAB_05fb7560;
      if (*(int *)(lVar3 + 0x18) == 0) break;
      uVar2 = FUN_047ccae8(lVar3,*(undefined8 *)Method_UnityEngine_AndroidJNISafe_CheckException__);
      plVar4 = (long *)FUN_05052fb4(lVar8,uVar2,*unaff_x25);
      if (*plVar4 == 0) goto LAB_05fb7560;
      FUN_03fb4898(&stack0x00000010,*plVar4,*(undefined8 *)PTR_DAT_069fed38);
      in_stack_00000070 = in_stack_00000020;
      in_stack_00000038 = &stack0x00000060;
      in_stack_00000068 = in_stack_00000018;
      in_stack_00000060 = in_stack_00000010;
      in_stack_00000030 = 0;
      while (uVar5 = FUN_051434b8(&stack0x00000060,*unaff_x29), uVar7 = in_stack_00000070,
            lVar3 = in_stack_00000030, (uVar5 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x18);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar3 = FUN_050522c4(lVar3,in_stack_00000070 & 0xffffffff,*unaff_x24);
        if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x38),uVar7 & 0xffffffff,*unaff_x27);
        iVar9 = *(int *)(lVar3 + 0x30) + -1;
        *(int *)(lVar3 + 0x30) = iVar9;
        if (((iVar9 == 0) && (*(char *)(lVar3 + 0x41) == '\0')) && (*(char *)(lVar3 + 0x3d) != '\0')
           ) {
          *(undefined1 *)(lVar3 + 0x3f) = 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar3 = *(long *)(lVar6 + 0xa8);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar3 + 0x18) <= in_x10) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar3 = *(long *)(lVar3 + in_x10 * 8 + 0x20);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04042130(&stack0x00000010,lVar3,
                       *(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
          in_stack_00000040 = in_stack_00000010;
          in_stack_00000010 = 0;
          in_stack_00000048 = in_stack_00000018;
          in_stack_00000058 = in_stack_00000028;
          _uStack0000000000000050 = in_stack_00000020;
          in_stack_00000018 = &stack0x00000040;
          while (uVar7 = FUN_0515e9d0(&stack0x00000040,*unaff_x28), (uVar7 & 1) != 0) {
            uVar1 = uStack0000000000000050;
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar3 = FUN_05052fb4(lVar8,uVar1 & 0xffff,*unaff_x25);
            iVar9 = *(int *)(lVar3 + 0x10) + -1;
            *(int *)(lVar3 + 0x10) = iVar9;
            if (iVar9 == 0) {
              lVar3 = *(long *)(unaff_x19 + 0x90);
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_047ccb88(lVar3,uVar1 & 0xffff,*unaff_x26);
            }
          }
          FUN_0515e9cc(&stack0x00000040,
                       *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        }
      }
      FUN_051434b4(in_stack_00000038,*(undefined8 *)PTR_DAT_069fed00);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar3);
      }
    }
  }
LAB_05fb7560:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05fb7560 to 060b75d3 has its CatchHandler @ 05fb760c */
  FUN_02d96860();
}


