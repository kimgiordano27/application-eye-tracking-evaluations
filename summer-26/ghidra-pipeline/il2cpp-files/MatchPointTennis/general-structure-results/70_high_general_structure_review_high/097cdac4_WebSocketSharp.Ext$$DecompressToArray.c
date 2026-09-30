/*
FUNCTION_NAME: WebSocketSharp.Ext$$DecompressToArray
ENTRY_POINT: 097cdac4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x097cde60) */
/* WARNING: Removing unreachable block (ram,0x097cdb30) */
/* WARNING: Removing unreachable block (ram,0x097cdb40) */
/* WARNING: Removing unreachable block (ram,0x097cde58) */
/* WARNING: Removing unreachable block (ram,0x097cdd20) */

void WebSocketSharp_Ext__DecompressToArray(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fStack0000000000000008;
  float fStack000000000000000c;
  int in_stack_0000024c;
  int in_stack_00000258;
  long in_stack_00000260;
  undefined8 in_stack_00000268;
  
  plVar8 = *(long **)(unaff_x22 + 0xfb0);
  lVar3 = *plVar8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *plVar8;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x148);
  if (lVar3 != 0) {
    FUN_094b42ac(lVar3,0);
  }
  (**(code **)(unaff_x21 + 0x18))
            (*(undefined8 *)(unaff_x21 + 0x40),*(undefined8 *)(unaff_x21 + 0x28));
  if (lVar3 != 0) {
    FUN_094b4334(lVar3,0);
  }
  FUN_09585d68(&stack0x00000248,0);
  FUN_0443fd58(&stack0x00000060);
  if (in_stack_00000260 == 0) goto LAB_097cde54;
  iVar2 = FUN_0957fb74(in_stack_00000260,0);
  if (iVar2 == 8) {
    fVar9 = (float)FUN_097cc65c(in_stack_00000268);
    if (DAT_0a51c24f == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a51c24f = '\x01';
    }
    puVar1 = PTR_DAT_09f1f580;
    fVar12 = DAT_01c762f8;
    fVar10 = ABS(fStack000000000000000c);
    if (ABS(fStack000000000000000c) <= ABS(fVar9)) {
      fVar10 = ABS(fVar9);
    }
    fVar13 = **(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8);
    fVar11 = fVar10 * DAT_01c762f8;
    if (fVar10 * DAT_01c762f8 <= fVar13 * 8.0) {
      fVar11 = fVar13 * 8.0;
    }
    fVar9 = ABS(fVar9 - fStack000000000000000c);
    if (fVar9 < fVar11) {
      fVar9 = (float)FUN_097cc684(in_stack_00000268);
      if (DAT_0a51c24f == '\0') {
        FUN_04447ba8(PTR_DAT_09f1f580);
        DAT_0a51c24f = '\x01';
      }
      fVar13 = 8.0;
      fVar10 = ABS(fStack0000000000000008);
      if (ABS(fStack0000000000000008) <= ABS(fVar9)) {
        fVar10 = ABS(fVar9);
      }
      fStack000000000000000c = **(float **)(*(long *)puVar1 + 0xb8);
      fVar11 = fVar10 * fVar12;
      if (fVar10 * fVar12 <= fStack000000000000000c * 8.0) {
        fVar11 = fStack000000000000000c * 8.0;
      }
      fVar9 = ABS(fVar9 - fStack0000000000000008);
      if (fVar9 < fVar11) goto LAB_097cdd40;
    }
    if (((((unaff_x19 & 1) == 0) || (fVar12 = (float)FUN_094cc0d8(0), unaff_s11 != fVar12)) ||
        (unaff_s10 != fStack000000000000000c)) || ((unaff_s9 != fVar9 || (unaff_s8 != fVar13)))) {
      FUN_0968e4c0(in_stack_00000268,8,0);
    }
    else {
      plVar8 = (long *)FUN_0969bc7c(in_stack_00000268,0);
      uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
      FUN_0799ce68(uVar4,in_stack_00000268,*(undefined8 *)System_Func<int,_List<int>>_TypeInfo,0);
      if (plVar8 == (long *)0x0) goto LAB_097cde54;
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f25bf0) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_097cdde8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f25bf0,1);
LAB_097cdde8:
      (*(code *)*puVar5)(plVar8,uVar4,puVar5[1]);
    }
  }
LAB_097cdd40:
  if (in_stack_00000260 == 0) goto LAB_097cde54;
  iVar2 = FUN_0957fb74(in_stack_00000260,0);
  if (iVar2 != 0xb) {
    if (in_stack_00000260 == 0) goto LAB_097cde54;
    iVar2 = FUN_0957fb74(in_stack_00000260,0);
    if (iVar2 != 0xc) {
      if (in_stack_00000258 < in_stack_0000024c) {
        puVar5 = (undefined8 *)System_Func<int,_List<Vertex>>_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          puVar5 = (undefined8 *)System_Func<int,_List<Vertex>>_TypeInfo;
        }
      }
      else {
        if (in_stack_00000258 <= in_stack_0000024c) goto LAB_097cddfc;
        puVar5 = (undefined8 *)System_Func<int,_Task<HttpClientResponse>>_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          puVar5 = (undefined8 *)System_Func<int,_Task<HttpClientResponse>>_TypeInfo;
        }
      }
      FUN_094c6b48(*puVar5,0);
    }
  }
LAB_097cddfc:
  if (in_stack_00000260 != 0) {
    iVar2 = FUN_0957fb74(in_stack_00000260,0);
    if (iVar2 == 0xc) {
      FUN_0968e4c0(in_stack_00000268,0x800,0);
    }
    return;
  }
LAB_097cde54:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


