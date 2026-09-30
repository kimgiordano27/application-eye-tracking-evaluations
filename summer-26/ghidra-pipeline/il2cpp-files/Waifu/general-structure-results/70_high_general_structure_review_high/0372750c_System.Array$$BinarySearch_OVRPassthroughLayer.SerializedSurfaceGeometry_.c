/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0372750c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__BinarySearch<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (float *param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float extraout_w1;
  code *pcVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 unaff_x28;
  long unaff_x29;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_s8;
  float unaff_s9;
  float fVar24;
  undefined4 unaff_s10;
  ulong unaff_d11;
  float fVar25;
  float fVar26;
  undefined4 uStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  ulong in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  
code_r0x0372750c:
  fVar25 = param_1[2];
  uVar10 = unaff_d11;
  do {
    fVar26 = *(float *)(unaff_x20 + 0xe);
    lVar9 = FUN_03398188(DAT_083c7c90,2);
    if (*(int *)(DAT_083cbf40 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cbf40);
    }
    if (lVar9 == 0) goto LAB_0372786c;
    uVar15 = *(uint *)(lVar9 + 0x18);
    if (uVar15 == 0) {
LAB_037278a0:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar16 = (undefined8 *)(lVar9 + 0x20);
    *puVar16 = *(undefined8 *)(*(long *)(DAT_083cbf40 + 0xb8) + 8);
    iVar4 = DAT_08908cd0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar16 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | unaff_x26 << ((ulong)puVar16 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar15 = *(uint *)(lVar9 + 0x18);
    }
    if (uVar15 < 2) goto LAB_037278a0;
    puVar16 = (undefined8 *)(lVar9 + 0x28);
    *puVar16 = *(undefined8 *)(*(long *)(DAT_083cbf40 + 0xb8) + 0x10);
    if (iVar4 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar16 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | unaff_x26 << ((ulong)puVar16 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar8 = FUN_07a0e6b0(lVar9,0);
    if (*(int *)(DAT_083cfcf8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cfcf8);
    }
    unaff_d11 = (ulong)(uint)(fVar26 + fVar26);
    fStack0000000000000060 = in_stack_00000018._4_4_;
    uStack000000000000005c = (undefined4)uVar10;
    uStack0000000000000058 = unaff_s10;
    fStack0000000000000064 = unaff_s8;
    fStack0000000000000068 = unaff_s9;
    fStack000000000000006c = fVar25;
    uVar10 = FUN_07a81234(uStack0000000000000010,&stack0x00000058,&stack0x00000070,uVar8,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = FUN_07a84c20(&stack0x00000070,0);
      if (lVar9 == 0) goto LAB_0372786c;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      uVar11 = (*DAT_086ef190)(lVar9);
      if ((unaff_x20[0x16] == 0) ||
         (lVar9 = FUN_0496a860(unaff_x20[0x16],unaff_w21,*(undefined8 *)(unaff_x29 + 0x160)),
         lVar9 == 0)) goto LAB_0372786c;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      uVar12 = (*DAT_086ef190)(lVar9);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870(DAT_083cf7d8);
      }
      uVar10 = FUN_07a119fc(uVar11,uVar12,0);
      unaff_x26 = 1;
      if ((uVar10 & 1) != 0) {
        if ((unaff_x20[0x16] == 0) ||
           (lVar9 = FUN_0496a860(unaff_x20[0x16],unaff_w21,*(undefined8 *)(unaff_x29 + 0x160)),
           lVar9 == 0)) goto LAB_0372786c;
        lVar9 = *(long *)(lVar9 + 0x28);
        if (DAT_086d7cc6 == '\0') {
          FUN_0335b6c8(&DAT_083d2c90,1);
          DataMemoryBarrier(2,3);
          DAT_086d7cc6 = '\x01';
        }
        if (lVar9 == 0) goto LAB_0372786c;
        puVar14 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
        FUN_07a84edc(*puVar14,puVar14[1],puVar14[2],lVar9,0);
        if ((unaff_x20[0x16] == 0) ||
           (lVar9 = FUN_0496a860(unaff_x20[0x16],unaff_w21,*(undefined8 *)(unaff_x29 + 0x160)),
           lVar9 == 0)) goto LAB_0372786c;
        lVar9 = *(long *)(lVar9 + 0x28);
        if (DAT_086d7cc6 == '\0') {
          FUN_0335b6c8(&DAT_083d2c90,1);
          DataMemoryBarrier(2,3);
          DAT_086d7cc6 = '\x01';
        }
        if (lVar9 == 0) goto LAB_0372786c;
        puVar14 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
        FUN_07a85014(*puVar14,puVar14[1],puVar14[2],lVar9,0);
        uVar7 = uStack0000000000000094;
        uVar6 = uStack0000000000000090;
        uVar5 = uStack000000000000008c;
        uVar8 = uStack0000000000000088;
        unaff_d11 = in_stack_00000080;
        uVar12 = in_stack_00000078;
        uVar11 = in_stack_00000070;
        if (unaff_x20[0x16] == 0) goto LAB_0372786c;
        FUN_0496a860(unaff_x20[0x16],unaff_w21,*(undefined8 *)(unaff_x29 + 0x160));
        param_4 = CONCAT44(uVar6,uVar5);
        in_stack_000000a8 = uVar12;
        in_stack_000000a0 = uVar11;
        in_stack_000000b8 = uVar8;
        in_stack_000000b0 = unaff_d11;
        uStack00000000000000c4 = uVar7;
        uStack00000000000000c0 = uVar6;
        (**(code **)(*unaff_x19 + 0x228))();
        (**(code **)(*unaff_x20 + 0x1c8))();
      }
    }
    do {
      fVar25 = (float)unaff_d11;
      fVar26 = (float)param_4;
      unaff_w21 = unaff_w21 + 1;
      if (unaff_x20[0x16] == 0) goto LAB_0372786c;
      if (*(int *)(unaff_x20[0x16] + 0x18) <= unaff_w21) {
        return;
      }
      if ((unaff_x19 == (long *)0x0) || (unaff_x19[6] == 0)) goto LAB_0372786c;
      fVar17 = (float)FUN_07a18d2c(unaff_x19[6],0);
      if (unaff_x19[6] == 0) goto LAB_0372786c;
      fVar23 = fVar26;
      fVar22 = fVar25;
      fVar18 = (float)FUN_07a194cc(unaff_x19[6],0);
      if (unaff_x20[0x16] == 0) goto LAB_0372786c;
      fVar24 = *(float *)(unaff_x20 + 0xe);
      fVar21 = fVar23;
      fVar20 = fVar22;
      lVar9 = FUN_0496a860(unaff_x20[0x16],unaff_w21,*(undefined8 *)(unaff_x29 + 0x160));
      if (lVar9 == 0) goto LAB_0372786c;
      pcVar13 = *(code **)(unaff_x24 + 0x188);
      if (pcVar13 == (code *)0x0) {
        pcVar13 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        *(code **)(unaff_x24 + 0x188) = pcVar13;
      }
      lVar9 = (*pcVar13)(lVar9);
      if (lVar9 == 0) goto LAB_0372786c;
      fVar19 = (float)FUN_07a18d2c(lVar9,0);
      cVar2 = (char)unaff_x26;
      if (*(char *)(unaff_x25 + 0xff6) == '\0') {
        FUN_0335b6c8(unaff_x28,1);
        DataMemoryBarrier(2,3);
        *(char *)(unaff_x25 + 0xff6) = cVar2;
      }
      if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (unaff_x20[0x16] == 0) goto LAB_0372786c;
      fVar19 = (fVar17 + fVar18 * fVar24) - fVar19;
      fVar20 = (fVar25 + fVar22 * fVar24) - fVar20;
      fVar21 = (fVar26 + fVar23 * fVar24) - fVar21;
      fVar21 = fVar21 * fVar21;
      param_4 = (ulong)(uint)fVar21;
      FUN_0496a860(unaff_x20[0x16],unaff_w21,*(undefined8 *)(unaff_x29 + 0x160));
      in_stack_00000018._4_4_ = (float)param_4;
      fVar25 = SQRT(fVar21 + fVar19 * fVar19 + fVar20 * fVar20) - extraout_w1;
      unaff_d11 = (ulong)(uint)fVar25;
    } while (*(float *)(unaff_x20 + 0xe) <= fVar25);
    if (unaff_x19[6] == 0) {
LAB_0372786c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    unaff_s10 = FUN_07a18d2c(unaff_x19[6],0);
    fVar26 = (float)unaff_d11;
    fVar25 = in_stack_00000018._4_4_;
    lVar9 = FUN_03724b44();
    if (lVar9 == 0) goto LAB_0372786c;
    pcVar13 = *(code **)(unaff_x23 + 0x250);
    if (pcVar13 == (code *)0x0) {
      pcVar13 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      *(code **)(unaff_x23 + 0x250) = pcVar13;
    }
    lVar9 = (*pcVar13)(lVar9);
    if (lVar9 == 0) goto LAB_0372786c;
    fVar17 = (float)FUN_07a18d2c(lVar9,0);
    if (unaff_x19[6] == 0) goto LAB_0372786c;
    fVar23 = fVar26;
    fVar22 = fVar25;
    fVar18 = (float)FUN_07a18d2c(unaff_x19[6],0);
    if (DAT_086d7cc3 == '\0') {
      FUN_0335b6c8(unaff_x28,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc3 = cVar2;
    }
    if (*(int *)(*(long *)(unaff_x22 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar17 = fVar17 - fVar18;
    fVar26 = fVar26 - fVar23;
    fVar25 = fVar25 - fVar22;
    param_4 = (ulong)(uint)fVar25;
    fVar23 = SQRT(fVar25 * fVar25 + fVar17 * fVar17 + fVar26 * fVar26);
    if (fVar23 <= fStack0000000000000014) break;
    unaff_s8 = fVar17 / fVar23;
    unaff_s9 = fVar26 / fVar23;
    fVar25 = fVar25 / fVar23;
    uVar10 = unaff_d11;
  } while( true );
  if (DAT_086d7cc6 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc6 = cVar2;
  }
  param_1 = *(float **)(DAT_083d2c90 + 0xb8);
  unaff_s8 = *param_1;
  unaff_s9 = param_1[1];
  goto code_r0x0372750c;
}


