/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedDataRegistry$$.cctor
ENTRY_POINT: 06d7a308
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d7a738) */
/* WARNING: Removing unreachable block (ram,0x06d7a748) */
/* WARNING: Removing unreachable block (ram,0x06d7a750) */
/* WARNING: Removing unreachable block (ram,0x06d7a804) */
/* WARNING: Removing unreachable block (ram,0x06d7a88c) */
/* WARNING: Removing unreachable block (ram,0x06d7a898) */
/* WARNING: Removing unreachable block (ram,0x06d7a8a0) */
/* WARNING: Removing unreachable block (ram,0x06d7a90c) */
/* WARNING: Removing unreachable block (ram,0x06d7a914) */
/* WARNING: Removing unreachable block (ram,0x06d7a920) */
/* WARNING: Removing unreachable block (ram,0x06d7a948) */

void Meta_XR_ImmersiveDebugger_InspectedDataRegistry___cctor
               (long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 (*pauVar15) [12];
  undefined1 uVar16;
  ulong uVar17;
  int *piVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined4 uStack0000000000000048;
  char cStack000000000000004c;
  char cStack0000000000000050;
  char cStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int in_stack_00000078;
  char cStack000000000000007c;
  
  if ((DAT_094199e3 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e71528);
    FUN_03c8f898(PTR_DAT_08e71508);
    FUN_03c8f898(PTR_DAT_08e8f4e8);
    FUN_03c8f898(PTR_DAT_08e8f4f0);
    DAT_094199e3 = 1;
  }
  puVar7 = PTR_DAT_08e8f4f0;
  puVar6 = PTR_DAT_08e71508;
  in_stack_00000078 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000058 = 0;
  cStack000000000000007c = '\0';
  if (param_3 == (long *)0x0) {
Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar20 = 0;
  plVar21 = (long *)PTR_DAT_08e71528;
  do {
    lVar12 = *param_3;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *plVar21) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06d7a3fc;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03cf1348(param_3,*plVar21,0);
LAB_06d7a3fc:
    iVar9 = (*(code *)*puVar10)(param_3,puVar10[1]);
    if ((long)iVar9 <= (long)uVar20) {
      return;
    }
    lVar12 = *param_3;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06d7a45c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03cf1348(param_3,*(long *)puVar6,0);
LAB_06d7a45c:
    auVar31 = (*(code *)*puVar10)(param_3,uVar20 & 0xffffffff,puVar10[1]);
    lVar12 = auVar31._0_8_;
    lVar13 = *(long *)(param_1 + 0x58);
    if (lVar13 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
    if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_06d7a980;
    uVar1 = *(uint *)(lVar13 + uVar20 * 4 + 0x20);
    lVar13 = (long)(int)uVar1;
    if (uVar1 != 0xffffffff) {
      lVar14 = *(long *)(param_1 + 200);
      if (lVar14 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) {
LAB_06d7a980:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(undefined1 *)(lVar14 + lVar13 + 0x20) = 0;
      if (cStack000000000000007c == '\0') {
        in_stack_00000078 = 0x37;
        if (DAT_0940fffc == '\0') {
          auVar31 = FUN_03c8f898(PTR_DAT_08e69f40);
          DAT_0940fffc = '\x01';
        }
        in_stack_00000068 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
        in_stack_00000060 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
        uVar17 = FUN_06d7a1a8(auVar31._0_8_,auVar31._8_8_,lVar12,param_2,&stack0x00000078,
                              &stack0x00000060);
        iVar9 = in_stack_00000078;
        if ((uVar17 & 1) != 0) {
          if (in_stack_00000078 == 0) {
            *(undefined8 *)(param_1 + 0xac) = in_stack_00000068;
            *(undefined8 *)(param_1 + 0xa4) = in_stack_00000060;
          }
          in_stack_00000058 = 0;
          uVar17 = FUN_06d7b438(uVar17,uVar20 & 0xffffffff,param_2,in_stack_00000078,
                                &stack0x0000007c,&stack0x00000058);
          if ((cStack000000000000007c == '\0') && ((uVar17 & 1) != 0)) {
            cStack0000000000000054 = '\0';
            cStack0000000000000050 = '\0';
            cStack000000000000004c = '\0';
            uStack0000000000000048 = 9;
            uVar11 = FUN_06d7b598(uVar17,param_2,iVar9,(long)&stack0x00000050 + 4,&stack0x00000050,
                                  &stack0x00000048,(long)&stack0x00000048 + 4);
            if (DAT_0940fff5 == '\0') {
              uVar11 = FUN_03c8f898(PTR_DAT_08e68e18);
              DAT_0940fff5 = '\x01';
            }
            cVar8 = cStack0000000000000054;
            uVar22 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
            uVar23 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
            FUN_06d7b634(uVar11,param_2,iVar9);
            if (cStack0000000000000050 != '\0') {
              lVar14 = thunk_FUN_03cf5234(*(undefined8 *)puVar7);
              FUN_07145224(lVar14,0);
              if (lVar14 == 0)
              goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
              *(undefined8 *)(lVar14 + 0x10) = in_stack_00000058;
              thunk_FUN_03d233cc();
              if (lVar12 == 0)
              goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
              *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
              thunk_FUN_03d233cc();
              *(undefined8 *)(lVar14 + 0x28) = in_stack_00000068;
              *(undefined8 *)(lVar14 + 0x20) = in_stack_00000060;
              *(undefined8 *)(lVar14 + 0x30) = 0;
              thunk_FUN_03d233cc();
              plVar21 = (long *)(param_1 + 0xb8);
              if (iVar9 != 0xb) {
                plVar21 = (long *)(param_1 + 0xc0);
              }
              *plVar21 = lVar14;
              thunk_FUN_03d233cc(plVar21,lVar14);
              plVar21 = (long *)PTR_DAT_08e71528;
            }
            if ((param_2 == 0) || (*(long *)(param_2 + 0x160) == 0))
            goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
            fVar28 = *(float *)(param_1 + 0x18);
            fVar29 = *(float *)(*(long *)(param_2 + 0x160) + 0x20);
            if (DAT_0940fffc == '\0') {
              FUN_03c8f898(PTR_DAT_08e69f40);
              DAT_0940fffc = '\x01';
            }
            pauVar15 = *(undefined1 (**) [12])(*(long *)PTR_DAT_08e69f40 + 0xb8);
            uVar3 = *(undefined8 *)(*pauVar15 + 8);
            uVar30 = (undefined4)((ulong)uVar3 >> 0x20);
            uVar11 = *(undefined8 *)*pauVar15;
            auVar5 = *pauVar15;
            if (DAT_0940fff5 == '\0') {
              FUN_03c8f898(PTR_DAT_08e68e18);
              DAT_0940fff5 = '\x01';
            }
            fVar28 = fVar28 * fVar29;
            uVar25 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
            uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
            auVar27._8_8_ = in_stack_00000068;
            auVar27._0_8_ = in_stack_00000060;
            auVar4._8_8_ = in_stack_00000068;
            auVar4._0_8_ = in_stack_00000060;
            auVar26[0] = -(cVar8 == '\0');
            auVar26[1] = auVar26[0];
            auVar26[2] = auVar26[0];
            auVar26[3] = auVar26[0];
            auVar26[4] = auVar26[0];
            auVar26[5] = auVar26[0];
            auVar26[6] = auVar26[0];
            auVar26[7] = auVar26[0];
            auVar26[8] = auVar26[0];
            auVar26[9] = auVar26[0];
            auVar26[10] = auVar26[0];
            auVar26[0xb] = auVar26[0];
            auVar26[0xc] = auVar26[0];
            auVar26[0xd] = auVar26[0];
            auVar26[0xe] = auVar26[0];
            auVar26[0xf] = auVar26[0];
            auVar31._12_4_ = uVar30;
            auVar31._0_12_ = auVar5;
            auVar27 = auVar27 ^ (auVar4 ^ auVar31) & auVar26;
            uVar2 = NEON_rev64(uVar25,4);
            fVar29 = fVar28;
            if (*(char *)(param_1 + 0x24) == '\0') {
              uVar16 = 0;
              uVar22 = uVar25;
              uVar23 = uVar24;
            }
            else {
              if (cStack000000000000004c != '\0') {
                fVar29 = fVar28 * *(float *)(param_1 + 0x2c);
              }
              lVar12 = *(long *)(param_1 + 200);
              if (lVar12 == 0)
              goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
              if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_06d7a980;
              uVar16 = 1;
              *(undefined1 *)(lVar12 + lVar13 + 0x20) = 1;
            }
            uVar2 = NEON_rev64(uVar2,4);
            puVar19 = (undefined1 *)(*(long *)(param_1 + 0x48) + lVar13 * 0x50);
            *puVar19 = 1;
            *(undefined2 *)(puVar19 + 1) = 0;
            puVar19[3] = 0;
            *(int *)(puVar19 + 4) = iVar9;
            *(float *)(puVar19 + 8) = fVar29;
            *(float *)(puVar19 + 0xc) = fVar28;
            puVar19[0x10] = uVar16;
            puVar19[0x11] = cVar8 != '\0';
            *(undefined2 *)(puVar19 + 0x12) = 0;
            *(long *)(puVar19 + 0x1c) = auVar27._8_8_;
            *(long *)(puVar19 + 0x14) = auVar27._0_8_;
            *(undefined8 *)(puVar19 + 0x24) = uVar2;
            *(undefined4 *)(puVar19 + 0x2c) = uVar24;
            *(undefined8 *)(puVar19 + 0x30) = uVar22;
            *(undefined4 *)(puVar19 + 0x38) = uVar23;
            *(int *)(puVar19 + 0x3c) = (int)uVar11;
            *(int *)(puVar19 + 0x40) = (int)((ulong)uVar11 >> 0x20);
            *(int *)(puVar19 + 0x44) = (int)uVar3;
            *(undefined4 *)(puVar19 + 0x48) = uVar30;
            puVar19[0x4c] = cVar8;
            puVar19[0x4f] = 0;
            *(undefined2 *)(puVar19 + 0x4d) = 0;
            goto LAB_06d7a784;
          }
        }
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar13 * 0x50);
        *(undefined4 *)puVar10 = 0;
        *(int *)((long)puVar10 + 4) = iVar9;
      }
      else {
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar13 * 0x50);
        *puVar10 = DAT_018af920;
      }
      puVar10[2] = 0;
      puVar10[1] = 0;
      puVar10[4] = 0;
      puVar10[3] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[8] = 0;
      puVar10[7] = 0;
      puVar10[9] = 0;
    }
LAB_06d7a784:
    uVar20 = uVar20 + 1;
  } while( true );
}


