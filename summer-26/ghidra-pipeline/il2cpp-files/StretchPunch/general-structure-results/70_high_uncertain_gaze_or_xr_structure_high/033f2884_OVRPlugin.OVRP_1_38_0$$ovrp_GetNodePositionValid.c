/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 033f2884
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1,long param_2)

{
  uint uVar1;
  long in_x9;
  long lVar2;
  uint in_w10;
  uint uVar3;
  int iVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar5;
  long *unaff_x24;
  uint unaff_w27;
  long lVar6;
  uint in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  uint in_stack_00000020;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 uStack000000000000003c;
  uint in_stack_00000040;
  long in_stack_00000058;
  
code_r0x033f2884:
  if (in_w10 <= (uint)in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  uVar3 = *(uint *)(param_1 + in_x9 * 4 + 0x20);
  lVar2 = unaff_x21;
  do {
    uVar5 = (ulong)uStack0000000000000038;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = uVar5 * uVar3;
    uStack0000000000000038 = (uint)uVar5;
    if (unaff_w27 != 0) {
      iVar4 = 2;
      lVar6 = 1;
      do {
        uVar1 = *(uint *)(unaff_x22 + lVar6 * 4);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar5 = (uVar5 >> 0x20) + (ulong)uVar1 * (ulong)uVar3;
        *(int *)(unaff_x22 + lVar6 * 4) = (int)uVar5;
        lVar6 = (long)iVar4;
        iVar4 = iVar4 + 1;
      } while (lVar6 <= (long)(ulong)unaff_w27);
    }
    if (uVar5 >> 0x1f != 0) {
      unaff_w27 = unaff_w27 + 1;
      *(int *)(unaff_x22 + (ulong)unaff_w27 * 4) = (int)(uVar5 >> 0x20);
    }
    unaff_x21 = lVar2 + 9;
    if (-10 < lVar2) {
      uVar3 = in_stack_00000020 & 0x3f;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        iVar4 = *(int *)(unaff_x20 + 4);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar2 = *(long *)(unaff_x20 + 8);
      }
      else {
        lVar2 = *(long *)(unaff_x20 + 8);
        iVar4 = *(int *)(unaff_x20 + 4);
      }
      lVar2 = lVar2 << uVar3;
      if (iVar4 == 0) {
        if (unaff_w27 == 4) {
LAB_033f2aa4:
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_033f1268(unaff_x22 + 8,lVar2);
        }
        else {
          if (unaff_w27 == 5) {
LAB_033f2a80:
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            FUN_033f1268(&stack0x00000044,lVar2);
            goto LAB_033f2aa4;
          }
          if (unaff_w27 == 6) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            FUN_033f1268(&stack0x00000048,lVar2);
            goto LAB_033f2a80;
          }
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f1268((ulong)&stack0x00000038 | 4,lVar2);
        FUN_033f1268(&stack0x00000038,lVar2);
        uVar1 = 0;
        *(ulong *)(in_stack_00000018 + 8) =
             CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar3;
        goto FUN_033f2b04;
      }
      in_stack_00000030 =
           (undefined4)
           (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >>
           (in_stack_00000008 & 0x3f));
      in_stack_00000028 = lVar2;
      if (unaff_w27 == 4) {
LAB_033f29b4:
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f135c((ulong)&stack0x00000038 | 4,&stack0x00000028);
      }
      else {
        if (unaff_w27 == 5) {
LAB_033f2998:
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_033f135c(unaff_x22 + 8,&stack0x00000028);
          goto LAB_033f29b4;
        }
        if (unaff_w27 == 6) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_033f135c(&stack0x00000044,&stack0x00000028);
          goto LAB_033f2998;
        }
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f135c(&stack0x00000038,&stack0x00000028);
      *(ulong *)(in_stack_00000018 + 8) =
           (CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar3) +
           (((ulong)in_stack_00000040 << (in_stack_00000008 & 0x3f)) << 0x20);
      uVar1 = in_stack_00000040 >> (ulong)(in_stack_00000020 & 0x1f);
FUN_033f2b04:
      *(uint *)(in_stack_00000018 + 4) = uVar1;
      if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    param_2 = *unaff_x24;
    if (-9 < unaff_x21) break;
    uVar3 = 1000000000;
    lVar2 = unaff_x21;
  } while( true );
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    param_2 = *unaff_x24;
  }
  param_1 = **(long **)(param_2 + 0xb8);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  in_w10 = *(uint *)(param_1 + 0x18);
  in_x9 = -unaff_x21;
  goto code_r0x033f2884;
}


