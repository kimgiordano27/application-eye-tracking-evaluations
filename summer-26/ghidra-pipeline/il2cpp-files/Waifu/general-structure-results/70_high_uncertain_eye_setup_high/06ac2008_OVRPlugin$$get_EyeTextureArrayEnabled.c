/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 06ac2008
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_EyeTextureArrayEnabled
               (ulong param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               )

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *plVar16;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 unaff_d8;
  ulong unaff_d9;
  float unaff_s10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  long in_stack_00000058;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  while( true ) {
    uVar8 = FUN_06ac26a8(param_1,param_2,param_3,param_4,param_5,in_stack_00000040,unaff_d8,unaff_d9
                        );
    lVar13 = in_stack_00000058;
    uVar9 = FUN_03398a84(DAT_083c91f8);
    FUN_06ac2a20(uVar9,unaff_w23,unaff_x21 & 0xffffffff,lVar13,uVar8);
    lVar13 = DAT_083efe60;
    lVar10 = *(long *)(unaff_x19 + 0x68);
    if (lVar10 == 0) break;
    lVar11 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
      *puVar12 = uVar9;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar12 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      FUN_04ab0e54(lVar10,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_06ac2ab0();
        lVar13 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar13 != 0) {
          (**(code **)(lVar13 + 0x18))
                    (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
          return;
        }
        goto LAB_06ac2150;
      }
      lVar13 = *(long *)(unaff_x28 + 0xfd0);
      if (*(int *)(lVar13 + 0xe0) == 0) {
        FUN_033b9870();
        lVar13 = *(long *)(unaff_x28 + 0xfd0);
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
      if (lVar13 == 0) goto LAB_06ac2150;
      if (*(uint *)(lVar13 + 0x18) <= unaff_x21) goto LAB_06ac2154;
      unaff_w23 = *(uint *)(lVar13 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w23 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar16 = *(long **)(unaff_x19 + 0x38);
    if (plVar16 == (long *)0x0) break;
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)(unaff_x27 + 0xa30)) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_06ac1df8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_0338f71c(plVar16,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1df8:
    (*(code *)*puVar12)(plVar16,unaff_w23,&stack0x00000060,puVar12[1]);
    uVar14 = FUN_06ac2164();
    if ((uVar14 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
      in_stack_00000018 = in_stack_00000068;
      uStack0000000000000024 = uStack0000000000000074;
      uStack0000000000000020 = uStack0000000000000070;
      lVar13 = FUN_06ac22a4();
      plVar16 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000058 = lVar13;
      if (plVar16 == (long *)0x0) break;
      if ((lVar13 != 0) &&
         (lVar10 = FUN_0339898c(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0)) {
        uVar8 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar8,0);
      }
      if (*(uint *)(plVar16 + 3) <= unaff_w23) {
LAB_06ac2154:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar16 = plVar16 + (long)(int)unaff_w23 + 4;
      *plVar16 = lVar13;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar16 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar16 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    uStack000000000000000c = unaff_w23;
    uVar9 = FUN_03398650(*(undefined8 *)(unaff_x29 + 0xfc8),(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar7 = FUN_03398650(*(undefined8 *)(unaff_x29 + 0xfc8),&stack0x00000008);
    uVar8 = DAT_0845b310;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    FUN_0683f484(&stack0x000000a0,uVar9,uVar7,0);
    in_stack_00000088 = *(undefined8 *)(unaff_x22 + 0x28);
    in_stack_00000080 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
    FUN_0666f060(0,uVar8,&stack0x00000080);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    unaff_d8 = FUN_06ac25fc(*(long *)(unaff_x19 + 0x40),unaff_w23);
    plVar16 = *(long **)(unaff_x19 + 0x38);
    fVar6 = (float)unaff_d8;
    if (unaff_w23 != 0) {
      fVar6 = unaff_s10;
    }
    fVar5 = -(float)unaff_d8;
    if (unaff_x21 < 0x13) {
      fVar5 = fVar6;
    }
    unaff_d9 = (ulong)(uint)fVar5;
    if (plVar16 == (long *)0x0) break;
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)(unaff_x27 + 0xa30)) {
          puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_06ac1fb4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_0338f71c(plVar16,*(long *)(unaff_x27 + 0xa30),9);
LAB_06ac1fb4:
    (*(code *)*puVar12)(plVar16,unaff_x21 & 0xffffffff,&stack0x00000038,puVar12[1]);
    lVar13 = in_stack_00000058;
    if (in_stack_00000058 == 0) break;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    (*DAT_086ef188)(lVar13);
    param_1 = (ulong)uStack0000000000000060;
    param_2 = (ulong)uStack0000000000000064;
    param_3 = in_stack_00000068;
    param_4 = uStack0000000000000038;
    param_5 = uStack000000000000003c;
  }
LAB_06ac2150:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


