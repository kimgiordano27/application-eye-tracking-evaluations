/*
FUNCTION_NAME: TMPro.TMP_TextUtilities$$GetCursorIndexFromPosition
ENTRY_POINT: 034badfc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


void TMPro_TMP_TextUtilities__GetCursorIndexFromPosition(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *plVar16;
  undefined8 uVar17;
  undefined8 unaff_x29;
  undefined8 uVar18;
  float fVar19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  int in_stack_00000118;
  uint uStack000000000000011c;
  
  uVar11 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000356_PostfixBurstDelegate__EndInvoke
                     (param_1,0);
  if (((uVar11 & 1) != 0) && (*(char *)(unaff_x23 + 0x246) != '\0')) {
    FUN_03747fe0();
  }
  puVar6 = PTR_DAT_03cb67e0;
  uVar12 = FUN_03518e50(unaff_x20 + 8,0);
  uStack000000000000011c = FUN_034bd03c(uVar12,uVar12);
  if ((uStack000000000000011c & 1) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(unaff_x21 + 0x1ac) | *(char *)(unaff_x23 + 0x246) << 1;
    FUN_034a5fe0();
    FUN_034a60d8();
    FUN_034a6168();
    FUN_034c0864();
  }
  puVar7 = PTR_DAT_03cdab70;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  FUN_033f3328();
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  lVar13 = FUN_03492cbc();
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = thunk_FUN_0347bd34(lVar13,*(undefined1 *)(unaff_x21 + 0x1e0),0);
    uVar9 = uVar9 & 1;
  }
  if (*(char *)(unaff_x23 + 0x24b) != '\0') {
    if (*(long **)(unaff_x21 + 0x1d8) == (long *)0x0) goto LAB_034bb5ec;
    uVar12 = (**(code **)(**(long **)(unaff_x21 + 0x1d8) + 0x1d8))();
    *(undefined8 *)(unaff_x23 + 0xf0) = uVar12;
    thunk_FUN_01cc8040();
  }
  if (*(int *)(unaff_x21 + 0x170) == 1) {
    bVar8 = *(int *)(unaff_x21 + 0x174) == 2;
  }
  else {
    bVar8 = false;
  }
  in_stack_00000118 = (uint)*(byte *)(unaff_x21 + 0x18c) << 1;
  uVar12 = *(undefined8 *)(unaff_x23 + 0xf0);
  iVar2 = *(int *)(unaff_x21 + 0x1cc);
  uVar11 = FUN_034a647c();
  plVar16 = (long *)PTR_DAT_03cda830;
  if (((uVar11 & 1) == 0) || (*(float *)(unaff_x21 + 0x224) <= 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = (bool)(bVar8 ^ 1);
  }
  if (*(int *)(unaff_x21 + 0x170) == 0) {
    if (iVar2 == 1) {
      FUN_03747fe0();
    }
    goto joined_r0x034bb5e4;
  }
  in_stack_000000d0 = *(undefined4 *)(unaff_x21 + 0x128);
  in_stack_000000b0 = *(undefined8 *)(unaff_x21 + 0x108);
  in_stack_000000c8 = *(undefined8 *)(unaff_x21 + 0x120);
  in_stack_000000c0 = *(undefined8 *)(unaff_x21 + 0x118);
  in_stack_000000a0 = *(undefined8 *)(unaff_x21 + 0xf8);
  cVar3 = *(char *)(unaff_x21 + 399);
  bVar1 = bVar8;
  if (iVar2 == 1) {
    bVar1 = true;
  }
  in_stack_000000a8 = CONCAT44((int)((ulong)*(undefined8 *)(unaff_x21 + 0x100) >> 0x20),1);
  in_stack_000000b8 = *(ulong *)(unaff_x21 + 0x110) & 0xffffffff;
  if ((uStack000000000000011c & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cb75c0 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar10 = FUN_035172a0(0);
    FUN_03759ab8(&stack0x000000a0,uVar10,0);
  }
  if ((*(long *)(unaff_x23 + 0x1a0) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1a0) + 0x68), lVar14 == 0)) goto LAB_034bb5ec;
  thunk_FUN_037493a0(lVar14,0,0);
  if (bVar1) {
    if ((uStack000000000000011c & 1) != 0) {
      FUN_034a5fe0();
      FUN_034a60d8();
      if (*(long *)(unaff_x23 + 0x1a0) == 0) goto LAB_034bb5ec;
      FUN_034a6168();
      FUN_034c0864();
    }
    puVar6 = PTR_DAT_03cda830;
    if (iVar2 == 1) {
      if ((*(long *)(unaff_x23 + 0x1a0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1a0) + 0x68), lVar14 == 0)) goto LAB_034bb5ec;
      FUN_03747fe0(lVar14,*(undefined8 *)PTR_DAT_03cdbf38,0);
    }
    if (bVar8) {
      if ((*(long *)(unaff_x23 + 0x1a0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1a0) + 0x68), lVar14 == 0)) goto LAB_034bb5ec;
      puVar15 = (undefined8 *)PTR_DAT_03cdbf30;
      if ((bVar4 & 2) != 0) {
        puVar15 = (undefined8 *)PTR_DAT_03cdbf60;
      }
      FUN_03747fe0(lVar14,*puVar15,0);
    }
    if (cVar3 != '\0') {
      if ((*(long *)(unaff_x23 + 0x1a0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1a0) + 0x68), lVar14 == 0)) goto LAB_034bb5ec;
      FUN_03747fe0(lVar14,*(undefined8 *)PTR_DAT_03cdbf48,0);
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    FUN_034e8a54(0,(undefined8 *)(unaff_x23 + 0x250),&stack0x000000a0,0,1,1,
                 *(undefined8 *)PTR_DAT_03cdbf68,0);
    if (*(long *)(unaff_x23 + 0x1a0) == 0) goto LAB_034bb5ec;
    uVar17 = *(undefined8 *)(unaff_x23 + 0xf0);
    uVar18 = *(undefined8 *)(unaff_x23 + 0x250);
    uVar12 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1a0) + 0x68);
    if (*(int *)(*(long *)PTR_DAT_03cd5180 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    FUN_033ed87c(unaff_x29,uVar17,uVar18,in_stack_00000118,0,uVar12,0,0);
    uVar12 = *(undefined8 *)(unaff_x23 + 0x250);
  }
  plVar16 = (long *)PTR_DAT_03cda830;
  if (*(int *)(unaff_x21 + 0x170) != 2) {
    if (*(int *)(unaff_x21 + 0x170) == 1) {
      if (*(int *)(unaff_x21 + 0x174) != 1) {
        if (*(int *)(unaff_x21 + 0x174) == 2) {
          if ((*(long *)(unaff_x23 + 0x1a0) == 0) ||
             (lVar14 = *(long *)(*(long *)(unaff_x23 + 0x1a0) + 0x70), lVar14 == 0))
          goto LAB_034bb5ec;
          thunk_FUN_037493a0(lVar14,0,0);
          in_stack_00000070 = *(undefined8 *)(unaff_x21 + 0x108);
          in_stack_00000090 = *(undefined4 *)(unaff_x21 + 0x128);
          in_stack_00000088 = *(undefined8 *)(unaff_x21 + 0x120);
          in_stack_00000080 = *(undefined8 *)(unaff_x21 + 0x118);
          in_stack_00000060 = *(undefined8 *)(unaff_x21 + 0x160);
          in_stack_00000068 = CONCAT44((int)((ulong)*(undefined8 *)(unaff_x21 + 0x100) >> 0x20),1);
          in_stack_00000078 = *(ulong *)(unaff_x21 + 0x110) & 0xffffffff;
          if (*(int *)(*plVar16 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          FUN_034e8a54(0,(undefined8 *)(unaff_x23 + 600),&stack0x00000060,0,1,1,
                       *(undefined8 *)PTR_DAT_03cdbf50,0);
          FUN_033f40a8((float)*(int *)(unaff_x21 + 0xf8),(float)*(int *)(unaff_x21 + 0xfc),
                       (float)*(int *)(unaff_x21 + 0xf8),(float)*(int *)(unaff_x21 + 0xfc),
                       (float)*(int *)(unaff_x21 + 0x160),(float)*(int *)(unaff_x21 + 0x164),
                       unaff_x29,0);
          if (cVar3 != '\0') {
            if (*(long *)(unaff_x23 + 0x1a0) == 0) goto LAB_034bb5ec;
            uVar17 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1a0) + 0x70);
            if (*(int *)(*(long *)PTR_DAT_03cb67e0 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            FUN_033f3328(uVar17,*(undefined8 *)PTR_DAT_03cdbf48,1,0);
          }
          if (*(long *)(unaff_x23 + 0x1a0) == 0) goto LAB_034bb5ec;
          uVar18 = *(undefined8 *)(unaff_x23 + 600);
          uVar17 = *(undefined8 *)(*(long *)(unaff_x23 + 0x1a0) + 0x70);
          if (*(int *)(*(long *)PTR_DAT_03cd5180 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          FUN_033ed87c(unaff_x29,uVar12,uVar18,in_stack_00000118,0,uVar17,0,0);
          if (0.0 < *(float *)(unaff_x21 + 0x17c)) {
            fVar19 = DAT_00b460a8;
            if (*(char *)(unaff_x21 + 0x178) != '\0') {
              fVar19 = *(float *)(unaff_x21 + 0x17c);
            }
            FUN_03747fe0();
            FUN_033f42e4(fVar19,unaff_x29,0);
          }
          uVar12 = *(undefined8 *)(unaff_x23 + 600);
          FUN_034cfb6c(unaff_x29,uVar12,0);
          plVar16 = (long *)PTR_DAT_03cda830;
        }
        goto joined_r0x034bb5e4;
      }
      if (!bVar5) {
        FUN_03747fe0();
        goto LAB_034bb47c;
      }
    }
    else {
joined_r0x034bb5e4:
      if (!bVar5) goto LAB_034bb47c;
    }
    FUN_03747fe0();
    FUN_033f42e4(*(undefined4 *)(unaff_x21 + 0x224),unaff_x29,0);
  }
LAB_034bb47c:
  if (*(int *)(*plVar16 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  FUN_034e79ac(&stack0x000000e0);
  if (uVar9 == 0) {
    in_stack_00000038 = in_stack_000000e8;
    in_stack_00000030 = in_stack_000000e0;
    in_stack_00000048 = in_stack_000000f8;
    in_stack_00000040 = in_stack_000000f0;
    in_stack_00000050 = in_stack_00000100;
    FUN_033ddf10(&stack0x00000030,0);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    FUN_034e5c40(unaff_x29);
    return;
  }
  if (lVar13 != 0) {
    puVar15 = (undefined8 *)FUN_0347bd1c(lVar13,0);
    uVar17 = *puVar15;
    if (*(int *)(*(long *)PTR_DAT_03cd5180 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    FUN_033ed87c(unaff_x29,uVar12,uVar17,0,0);
    lVar14 = *(long *)(unaff_x21 + 0x1d8);
    puVar15 = (undefined8 *)FUN_0347bd1c(lVar13,0);
    uVar12 = *puVar15;
    puVar15 = (undefined8 *)FUN_0347bd24(lVar13,0);
    if (lVar14 != 0) {
      FUN_0349a24c(lVar14,uVar12,*puVar15,0);
      return;
    }
  }
LAB_034bb5ec:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


