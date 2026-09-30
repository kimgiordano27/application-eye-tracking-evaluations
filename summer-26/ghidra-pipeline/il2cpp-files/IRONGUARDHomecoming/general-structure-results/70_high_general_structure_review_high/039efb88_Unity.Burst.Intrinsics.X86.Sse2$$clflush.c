/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse2$$clflush
ENTRY_POINT: 039efb88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void Unity_Burst_Intrinsics_X86_Sse2__clflush(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar14;
  long lVar15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  thunk_FUN_01f51358();
  uVar5 = FUN_03a30de4();
  puVar1 = StringLiteral_6256;
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_03a30ed8();
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_03a34e2c(uVar7,uVar6,0);
    unaff_x20[6] = uVar7;
    thunk_FUN_01f51358(unaff_x20 + 6,uVar7);
    lVar8 = FUN_03a3197c();
    if (lVar8 == 0) {
LAB_039f0178:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_03a31d74(lVar8,0);
    unaff_x20[7] = uVar6;
    uVar6 = FUN_03a31d74(lVar8,0);
    unaff_x20[8] = uVar6;
    uVar5 = FUN_03a30de4(lVar8,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = FUN_03a30ed8();
      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_03a34e2c(uVar7,uVar6,0);
      unaff_x20[9] = uVar7;
      thunk_FUN_01f51358(unaff_x20 + 9,uVar7);
      uVar6 = FUN_03a30ed8();
      puVar11 = unaff_x20 + 1;
      *puVar11 = uVar6;
      thunk_FUN_01f51358(puVar11);
      uVar6 = *puVar11;
      lVar8 = thunk_FUN_01f117cc(*unaff_x19);
      FUN_03a30bf0(lVar8,uVar6,0);
      if ((lVar8 == 0) || (lVar9 = FUN_03a3197c(lVar8,0), lVar9 == 0)) goto LAB_039f0178;
      uVar6 = FUN_03a31460(lVar9,0);
      unaff_x20[10] = uVar6;
      thunk_FUN_01f51358(unaff_x20 + 10,uVar6);
      uVar5 = FUN_03a30de4(lVar9,0);
      if ((uVar5 & 1) == 0) {
        lVar12 = *(long *)Method_Unity_VisualScripting_OptimizedReflection_GetMethodInvoker__;
        lVar15 = *(long *)(lVar12 + 0x38);
        if (lVar15 == 0) {
          FUN_01ecafa0(lVar12);
          lVar15 = *(long *)(lVar12 + 0x38);
        }
        lVar15 = *(long *)(lVar15 + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar15 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44();
        }
        uVar6 = **(undefined8 **)(lVar15 + 0xb8);
      }
      else {
        uVar6 = FUN_03a30ed8(lVar9,0);
      }
      unaff_x20[0xb] = uVar6;
      thunk_FUN_01f51358();
      uVar5 = FUN_03a30de4(lVar9,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_03a31300(lVar8,0);
        unaff_x20[0xc] = uVar6;
        thunk_FUN_01f51358();
        uVar5 = FUN_03a30de4(lVar8,0);
        if ((uVar5 & 1) == 0) {
          if (((*(int *)(unaff_x20 + 2) < 1) || (uVar5 = FUN_03a30de4(), (uVar5 & 1) == 0)) ||
             (cVar3 = FUN_03a30df4(), cVar3 != -0x5f)) {
            unaff_x20[0xd] = 0;
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_03a31300();
            unaff_x20[0xd] = uVar6;
          }
          thunk_FUN_01f51358(unaff_x20 + 0xd,uVar6);
          puVar2 = StringLiteral_6255;
          puVar1 = StringLiteral_6254;
          if (((*(int *)(unaff_x20 + 2) < 1) || (uVar5 = FUN_03a30de4(), (uVar5 & 1) == 0)) ||
             (cVar3 = FUN_03a30df4(), cVar3 != -0x5e)) {
            unaff_x20[0xe] = 0;
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_03a31300();
            unaff_x20[0xe] = uVar6;
          }
          thunk_FUN_01f51358(unaff_x20 + 0xe,uVar6);
          lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_030f2380(lVar8,*(undefined8 *)puVar1);
          plVar14 = unaff_x20 + 0xf;
          *plVar14 = lVar8;
          thunk_FUN_01f51358(plVar14,lVar8);
          if (((*(int *)(unaff_x20 + 2) < 2) || (uVar5 = FUN_03a30de4(), (uVar5 & 1) == 0)) ||
             (cVar3 = FUN_03a30df4(), cVar3 != -0x5d)) {
LAB_039f0040:
            uVar5 = FUN_03a30de4();
            if ((uVar5 & 1) == 0) {
              lVar8 = FUN_03a3197c(in_stack_00000000,0);
              if (lVar8 == 0) goto LAB_039f0178;
              uVar6 = FUN_03a31460(lVar8,0);
              unaff_x20[0x10] = uVar6;
              thunk_FUN_01f51358(unaff_x20 + 0x10,uVar6);
              uVar5 = FUN_03a30de4(lVar8,0);
              if ((uVar5 & 1) == 0) {
                lVar15 = *(long *)
                          Method_Unity_VisualScripting_OptimizedReflection_GetMethodInvoker__;
                lVar9 = *(long *)(lVar15 + 0x38);
                if (lVar9 == 0) {
                  FUN_01ecafa0(lVar15);
                  lVar9 = *(long *)(lVar15 + 0x38);
                }
                lVar9 = *(long *)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01ecaf44();
                }
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01ecaf44();
                }
                uVar6 = **(undefined8 **)(lVar9 + 0xb8);
              }
              else {
                uVar6 = FUN_03a30ed8(lVar8,0);
              }
              unaff_x20[0x11] = uVar6;
              thunk_FUN_01f51358();
              uVar5 = FUN_03a30de4(lVar8,0);
              if ((uVar5 & 1) == 0) {
                uVar6 = FUN_03a31300(in_stack_00000000,0);
                unaff_x20[0x12] = uVar6;
                thunk_FUN_01f51358();
                uVar5 = FUN_03a30de4(in_stack_00000000,0);
                if ((uVar5 & 1) == 0) {
                  *unaff_x20 = in_stack_00000008;
                  thunk_FUN_01f51358();
                  return;
                }
              }
            }
          }
          else {
            lVar8 = FUN_03a3197c();
            if ((lVar8 == 0) ||
               (lVar8 = FUN_03a3197c(lVar8,0), puVar1 = StringLiteral_6253, lVar8 == 0))
            goto LAB_039f0178;
            do {
              uVar5 = FUN_03a30de4(lVar8,0);
              if ((uVar5 & 1) == 0) goto LAB_039f0040;
              lVar9 = FUN_03a3197c(lVar8,0);
              if (lVar9 == 0) goto LAB_039f0178;
              uVar6 = FUN_03a31460(lVar9,0);
              cVar3 = FUN_03a30df4(lVar9,0);
              if (cVar3 == '\x01') {
                uVar4 = FUN_03a310b4(lVar9,0);
              }
              else {
                uVar4 = 0;
              }
              uVar7 = FUN_03a31444(lVar9,0);
              lVar15 = *plVar14;
              uVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_6257);
              FUN_03a41f68(uVar10,uVar6,uVar7,uVar4 & 1,0);
              if (lVar15 == 0) goto LAB_039f0178;
              lVar12 = *(long *)(lVar15 + 0x10);
              lVar13 = *(long *)puVar1;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_039f0178;
              uVar4 = *(uint *)(lVar15 + 0x18);
              if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar4 + 1;
                puVar11 = (undefined8 *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
                *puVar11 = uVar10;
                thunk_FUN_01f51358(puVar11,uVar10);
              }
              else {
                FUN_030f2bb4(lVar15,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              uVar5 = FUN_03a30de4(lVar9,0);
            } while ((uVar5 & 1) == 0);
          }
        }
      }
    }
  }
  thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
  uVar6 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(StringLiteral_6258);
  FUN_03437810(uVar6,uVar7,0);
  uVar7 = thunk_FUN_01efb3a4(StringLiteral_6259);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


