/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ResizeNavMeshFromRoomBounds
ENTRY_POINT: 077459c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__ResizeNavMeshFromRoomBounds
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_w8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long in_x9;
  uint *puVar9;
  int in_w14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  int unaff_w23;
  undefined8 uVar10;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  float fVar11;
  int iVar12;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  int in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  while (uVar3 = (uint)in_x9, uVar3 < *(uint *)(unaff_x25 + 0x18)) {
    puVar9 = (uint *)(unaff_x25 + in_x9 * 4 + 0x20);
    if (*puVar9 == 0xffffffff) {
      *puVar9 = (uint)unaff_x26;
      if (*(uint *)(unaff_x24 + 0x18) <= uVar3) break;
      if (unaff_x21 == 0) {
LAB_07745a84:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = uVar3 + unaff_w23;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar1) break;
      lVar6 = unaff_x24 + in_x9 * 8;
      fVar11 = *(float *)(lVar6 + 0x24);
      lVar7 = unaff_x21 + (long)(int)uVar1 * 8;
      *(float *)(lVar7 + 0x20) = param_1 + param_3 * *(float *)(lVar6 + 0x20);
      *(float *)(lVar7 + 0x24) = param_2 + param_4 * fVar11;
      if (in_w14 == 1) {
        if (unaff_x20 == 0) goto LAB_07745a84;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar1) break;
        *(float *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20) = param_5;
      }
    }
    if (*(uint *)(unaff_x25 + 0x18) <= uVar3) break;
    uVar3 = *(uint *)(unaff_x28 + 0x18);
    in_w8 = in_w8 + 1;
    unaff_w22 = unaff_w22 | unaff_x26 != *puVar9;
    if ((int)uVar3 <= (int)in_w8) {
      do {
        unaff_x26 = unaff_x26 + 1;
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_07745a84;
        if ((long)*(int *)(*(long *)(unaff_x19 + 0x80) + 0x18) <= (long)unaff_x26) {
          if ((1 < unaff_w27) && (((unaff_w22 ^ 1) & 1) == 0)) {
            uVar4 = FUN_078a7764(*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0
                                );
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c33b0(uVar4,0);
          }
          if (4 < unaff_w27) {
            in_stack_00000040 =
                 CONCAT44(in_stack_00000040._4_4_,(int)*(undefined8 *)(unaff_x24 + 0x18));
            uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
            uVar4 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar4,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar4,0);
          }
          return;
        }
        lVar6 = *(long *)(unaff_x19 + 0xd0);
        if (lVar6 == 0) {
          if (in_stack_00000020 == 0) goto LAB_07745a84;
          unaff_x28 = FUN_094f934c(in_stack_00000020,unaff_x26 & 0xffffffff,0);
        }
        else {
          if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
          lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_07745a84;
          unaff_x28 = *(long *)(lVar6 + 0x10);
        }
        lVar6 = *(long *)(unaff_x19 + 0xa8);
        if (lVar6 == 0) goto LAB_07745a84;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
        lVar7 = *(long *)(unaff_x19 + 0x80);
        if (lVar7 == 0) goto LAB_07745a84;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_07745b6c;
        iVar12 = *(int *)(lVar6 + unaff_x26 * 4 + 0x20);
        uVar2 = *(undefined4 *)(lVar7 + unaff_x26 * 4 + 0x20);
        if (4 < unaff_w27) {
          uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
          uStack000000000000005c = (undefined4)unaff_x26;
          uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                     (long)&stack0x00000058 + 4);
          lVar6 = *(long *)(unaff_x19 + 0x90);
          if (lVar6 == 0) goto LAB_07745a84;
          if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
          lVar6 = lVar6 + unaff_x26 * 0x10;
          in_stack_00000048 = *(undefined8 *)(lVar6 + 0x28);
          in_stack_00000040 = *(undefined8 *)(lVar6 + 0x20);
          uVar5 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000040);
          uVar4 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar10,uVar4,uVar5,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar4,0);
          unaff_x20 = in_stack_00000030;
          unaff_x29 = in_stack_00000028;
          unaff_w27 = in_stack_00000038;
        }
        lVar6 = *(long *)(unaff_x19 + 0xb0);
        if (lVar6 == 0) goto LAB_07745a84;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
        if (unaff_x29 == 0) goto LAB_07745a84;
        uVar3 = FUN_0771314c(unaff_x29,uVar2,*(undefined8 *)(lVar6 + unaff_x26 * 8 + 0x20),0);
        lVar6 = *(long *)(unaff_x19 + 0x88);
        if (lVar6 == 0) goto LAB_07745a84;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
        lVar6 = lVar6 + unaff_x26 * 0x10;
        param_2 = *(float *)(lVar6 + 0x24);
        param_3 = *(float *)(lVar6 + 0x28);
        param_4 = *(float *)(lVar6 + 0x2c);
        if (((*(long *)(unaff_x19 + 0xa0) != 0) &&
            (uVar8 = *(ulong *)(*(long *)(unaff_x19 + 0xa0) + 0x18), uVar8 != 0)) &&
           ((uVar8 & 0xffffffff) <= unaff_x26)) goto LAB_07745b6c;
        if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_07745a84;
        if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= unaff_x26) goto LAB_07745b6c;
        if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_07745a84;
        if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= unaff_x26) goto LAB_07745b6c;
        param_1 = (float)FUN_077702c4(*(undefined4 *)(lVar6 + 0x20),uVar3 & 1,0);
        if (unaff_x28 == 0) goto LAB_07745a84;
        uVar3 = *(uint *)(unaff_x28 + 0x18);
      } while ((int)uVar3 < 1);
      in_w8 = 0;
      param_5 = (float)iVar12;
      in_w14 = iStack0000000000000058;
    }
    if (uVar3 <= in_w8) break;
    in_x9 = (long)*(int *)(unaff_x28 + (long)(int)in_w8 * 4 + 0x20);
  }
LAB_07745b6c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


