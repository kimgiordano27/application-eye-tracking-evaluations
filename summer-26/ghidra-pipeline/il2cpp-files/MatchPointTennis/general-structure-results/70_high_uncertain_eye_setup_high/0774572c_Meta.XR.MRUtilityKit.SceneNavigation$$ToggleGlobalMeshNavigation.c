/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ToggleGlobalMeshNavigation
ENTRY_POINT: 0774572c
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


void Meta_XR_MRUtilityKit_SceneNavigation__ToggleGlobalMeshNavigation(ulong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined1 in_ZR;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong in_x9;
  long lVar12;
  ulong uVar13;
  ulong in_x10;
  uint *puVar14;
  long in_x11;
  undefined4 in_w12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  undefined8 uVar15;
  long unaff_x24;
  long unaff_x25;
  ulong uVar16;
  long unaff_x28;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  long in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000058;
  uint uStack000000000000005c;
  int in_stack_000000c8;
  long in_stack_000000d0;
  
  lVar5 = in_stack_000000d0;
  iVar4 = in_stack_000000c8;
  while (!(bool)in_ZR) {
    if (param_1 <= in_x9) goto LAB_07745b6c;
    *(undefined4 *)(in_x11 + in_x9 * 4) = in_w12;
    in_x9 = in_x9 + 1;
    in_ZR = in_x10 == in_x9;
  }
  if (((unaff_x28 != 0) && (unaff_x19 != 0)) && (lVar10 = *(long *)(unaff_x19 + 0x80), lVar10 != 0))
  {
    iStack0000000000000058 = *(int *)(unaff_x28 + 0x1c);
    bVar3 = 0;
    uVar16 = 0;
    do {
      if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar16) {
        if ((1 < iVar4) && (!(bool)(bVar3 ^ 1))) {
          uVar7 = FUN_078a7764(*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c33b0(uVar7,0);
        }
        if (4 < iVar4) {
          in_stack_00000040 =
               CONCAT44(in_stack_00000040._4_4_,(int)*(undefined8 *)(unaff_x24 + 0x18));
          uVar7 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
          uVar7 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar7,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar7,0);
        }
        return;
      }
      lVar10 = *(long *)(unaff_x19 + 0xd0);
      if (lVar10 == 0) {
        if (in_stack_00000020 == 0) break;
        lVar10 = FUN_094f934c(in_stack_00000020,uVar16 & 0xffffffff,0);
      }
      else {
        if (*(uint *)(lVar10 + 0x18) <= uVar16) {
LAB_07745b6c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar10 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
        if (lVar10 == 0) break;
        lVar10 = *(long *)(lVar10 + 0x10);
      }
      lVar11 = *(long *)(unaff_x19 + 0xa8);
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_07745b6c;
      lVar12 = *(long *)(unaff_x19 + 0x80);
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_07745b6c;
      iVar22 = *(int *)(lVar11 + uVar16 * 4 + 0x20);
      uVar2 = *(undefined4 *)(lVar12 + uVar16 * 4 + 0x20);
      if (4 < iVar4) {
        uVar15 = *(undefined8 *)(unaff_x19 + 0x20);
        uStack000000000000005c = (uint)uVar16;
        uVar7 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                   (long)&stack0x00000058 + 4);
        lVar11 = *(long *)(unaff_x19 + 0x90);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_07745b6c;
        lVar11 = lVar11 + uVar16 * 0x10;
        in_stack_00000048 = *(undefined8 *)(lVar11 + 0x28);
        in_stack_00000040 = *(undefined8 *)(lVar11 + 0x20);
        uVar8 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000040);
        uVar7 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar15,uVar7,uVar8,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c652c(uVar7,0);
      }
      lVar11 = *(long *)(unaff_x19 + 0xb0);
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_07745b6c;
      if (lVar5 == 0) break;
      uVar6 = FUN_0771314c(lVar5,uVar2,*(undefined8 *)(lVar11 + uVar16 * 8 + 0x20),0);
      lVar11 = *(long *)(unaff_x19 + 0x88);
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_07745b6c;
      lVar11 = lVar11 + uVar16 * 0x10;
      fVar18 = *(float *)(lVar11 + 0x24);
      fVar19 = *(float *)(lVar11 + 0x28);
      fVar20 = *(float *)(lVar11 + 0x2c);
      if (((*(long *)(unaff_x19 + 0xa0) != 0) &&
          (uVar13 = *(ulong *)(*(long *)(unaff_x19 + 0xa0) + 0x18), uVar13 != 0)) &&
         ((uVar13 & 0xffffffff) <= uVar16)) goto LAB_07745b6c;
      if (*(long *)(unaff_x19 + 0x98) == 0) break;
      if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= uVar16) goto LAB_07745b6c;
      if (*(long *)(unaff_x19 + 0x90) == 0) break;
      if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= uVar16) goto LAB_07745b6c;
      fVar17 = (float)FUN_077702c4(*(undefined4 *)(lVar11 + 0x20),uVar6 & 1,0);
      if (lVar10 == 0) break;
      uVar6 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar6) {
        uVar9 = 0;
        do {
          if (uVar6 <= uVar9) goto LAB_07745b6c;
          uVar6 = *(uint *)(lVar10 + (long)(int)uVar9 * 4 + 0x20);
          if (*(uint *)(unaff_x25 + 0x18) <= uVar6) goto LAB_07745b6c;
          puVar14 = (uint *)(unaff_x25 + (long)(int)uVar6 * 4 + 0x20);
          if (*puVar14 == 0xffffffff) {
            *puVar14 = (uint)uVar16;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar6) goto LAB_07745b6c;
            if (unaff_x21 == 0) goto LAB_07745a84;
            uVar1 = uVar6 + unaff_w23;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_07745b6c;
            lVar11 = unaff_x24 + (long)(int)uVar6 * 8;
            fVar21 = *(float *)(lVar11 + 0x24);
            lVar12 = unaff_x21 + (long)(int)uVar1 * 8;
            *(float *)(lVar12 + 0x20) = fVar17 + fVar19 * *(float *)(lVar11 + 0x20);
            *(float *)(lVar12 + 0x24) = fVar18 + fVar20 * fVar21;
            if (iStack0000000000000058 == 1) {
              if (unaff_x20 == 0) goto LAB_07745a84;
              if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_07745b6c;
              *(float *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20) = (float)iVar22;
            }
          }
          if (*(uint *)(unaff_x25 + 0x18) <= uVar6) goto LAB_07745b6c;
          uVar6 = *(uint *)(lVar10 + 0x18);
          uVar9 = uVar9 + 1;
          bVar3 = bVar3 | uVar16 != *puVar14;
        } while ((int)uVar9 < (int)uVar6);
      }
      lVar10 = *(long *)(unaff_x19 + 0x80);
      uVar16 = uVar16 + 1;
      if (lVar10 == 0) break;
    } while( true );
  }
LAB_07745a84:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


