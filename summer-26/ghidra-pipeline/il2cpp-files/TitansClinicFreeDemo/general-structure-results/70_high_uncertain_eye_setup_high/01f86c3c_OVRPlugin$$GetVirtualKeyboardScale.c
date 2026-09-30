/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 01f86c3c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__GetVirtualKeyboardScale(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *in_x4;
  undefined8 in_x6;
  undefined8 in_x7;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar15;
  ulong unaff_x24;
  undefined *unaff_x25;
  uint uVar16;
  uint uVar17;
  ulong *unaff_x28;
  undefined1 auVar18 [16];
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  code *pcVar19;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0x450));
  thunk_FUN_01279b34(PTR_DAT_027c1458);
  *(undefined1 *)(unaff_x22 + 0xea2) = 1;
  uVar14 = *unaff_x28;
  uVar13 = 0x2e;
  in_stack_00000000 = 0;
  in_stack_00000008 = 0;
  uVar8 = FUN_01f63964();
  puVar3 = PTR_DAT_027ba9f8;
  if ((int)uVar8 < 0) {
LAB_01f86d44:
    if ((unaff_w19 & 1) != 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar13 = thunk_FUN_0124bba8();
      uVar10 = thunk_FUN_01279b34(PTR_DAT_027c14b0);
      uVar11 = thunk_FUN_01279b34(PTR_DAT_027bdea8);
      FUN_01e7598c(uVar13,uVar10,uVar11,0);
      uVar10 = thunk_FUN_01279b34(PTR_DAT_027c14b8);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar13,uVar10);
    }
    return 0;
  }
  uVar15 = (ulong)uVar8;
  if (unaff_w20 <= uVar8) goto LAB_01f87008;
  iVar1 = uVar8 + 1;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_027ba9f8 + 0x20) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  uVar14 = *unaff_x28;
  unaff_x24 = (ulong)(unaff_w20 - iVar1);
  unaff_x22 = unaff_x21 + (long)iVar1 * 2;
  uVar13 = 0x2e;
  iVar9 = FUN_01f63964(unaff_x22,unaff_x24,0x2e);
  unaff_x25 = puVar3;
  if (iVar9 == -1) {
    uVar17 = 0xffffffff;
LAB_01f86da8:
    uVar16 = 0xffffffff;
  }
  else {
    uVar17 = iVar9 + iVar1;
    uVar16 = uVar17 + 1;
    if (unaff_w20 < uVar16) goto LAB_01f87008;
    if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    uVar14 = *unaff_x28;
    uVar13 = 0x2e;
    iVar9 = FUN_01f63964(unaff_x21 + (long)(int)uVar16 * 2,unaff_w20 - uVar16,0x2e);
    if (iVar9 == -1) goto LAB_01f86da8;
    uVar16 = iVar9 + uVar16;
    uVar2 = uVar16 + 1;
    if (unaff_w20 < uVar2) goto LAB_01f87008;
    if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    uVar14 = *unaff_x28;
    uVar13 = 0x2e;
    iVar9 = FUN_01f63964(unaff_x21 + (long)(int)uVar2 * 2,unaff_w20 - uVar2,0x2e);
    if (iVar9 != -1) goto LAB_01f86d44;
  }
  puVar4 = PTR_DAT_027ba778;
  if (uVar8 <= unaff_w20) {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_027ba778 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    puVar5 = PTR_DAT_027bdea8;
    uVar14 = (ulong)(unaff_w19 & 1);
    uVar13 = *(undefined8 *)PTR_DAT_027bdea8;
    in_x4 = (uint *)register0x00000008;
    uVar15 = FUN_01f8700c();
    if ((uVar15 & 1) != 0) {
      if (uVar17 != 0xffffffff) {
        uVar8 = uVar17 + ~uVar8;
        uVar15 = (ulong)uVar8;
        if (uVar8 <= unaff_w20 - iVar1) {
          if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          uVar13 = *(undefined8 *)puVar5;
          uVar14 = (ulong)(unaff_w19 & 1);
          in_x4 = (uint *)((long)&stack0x00000008 + 4);
          uVar12 = FUN_01f8700c(unaff_x22,uVar8,uVar13);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          uVar8 = uVar17 + 1;
          unaff_x22 = (ulong)uVar8;
          if (uVar16 == 0xffffffff) {
            if (uVar17 < unaff_w20) {
              if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                FUN_0122e748();
              }
              uVar12 = FUN_01f8700c(unaff_x21 + (long)(int)uVar8 * 2,unaff_w20 - uVar8,
                                    *(undefined8 *)PTR_DAT_027c1450,unaff_w19 & 1,&stack0x00000008);
              uVar15 = in_stack_00000008;
              uVar14 = in_stack_00000000;
              if ((uVar12 & 1) != 0) {
                uVar6 = in_stack_00000008._4_4_;
                uVar12 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bcf80);
                FUN_01f861b0(uVar12,uVar14 & 0xffffffff,uVar6,uVar15 & 0xffffffff);
                return uVar12;
              }
              return 0;
            }
          }
          else if (uVar17 < unaff_w20) {
            uVar17 = uVar16 + ~uVar17;
            uVar15 = (ulong)uVar17;
            if (uVar17 <= unaff_w20 - uVar8) {
              if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
                FUN_0122e748();
              }
              uVar14 = (ulong)(unaff_w19 & 1);
              uVar13 = *(undefined8 *)PTR_DAT_027c1450;
              in_x4 = (uint *)&stack0x00000008;
              uVar12 = FUN_01f8700c(unaff_x21 + (long)(int)uVar8 * 2,uVar17,uVar13);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
              if (uVar16 < unaff_w20) {
                if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0122e748();
                }
                uVar12 = FUN_01f8700c(unaff_x21 + (long)(int)(uVar16 + 1) * 2,
                                      unaff_w20 - (uVar16 + 1),*(undefined8 *)PTR_DAT_027c1458,
                                      unaff_w19 & 1,(long)&stack0x00000000 + 4);
                uVar15 = in_stack_00000008;
                uVar14 = in_stack_00000000;
                if ((uVar12 & 1) != 0) {
                  uVar6 = in_stack_00000000._4_4_;
                  uVar7 = in_stack_00000008._4_4_;
                  uVar12 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bcf80);
                  FUN_01f8609c(uVar12,uVar14 & 0xffffffff,uVar7,uVar15 & 0xffffffff,uVar6);
                  return uVar12;
                }
                return 0;
              }
            }
          }
        }
        goto LAB_01f87008;
      }
      if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      uVar15 = FUN_01f8700c(unaff_x22,unaff_x24,*(undefined8 *)puVar5,unaff_w19 & 1,
                            (long)&stack0x00000008 + 4);
      uVar14 = in_stack_00000000;
      if ((uVar15 & 1) != 0) {
        uVar6 = in_stack_00000008._4_4_;
        uVar15 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bcf80);
        FUN_01f8629c(uVar15,uVar14 & 0xffffffff,uVar6);
        return uVar15;
      }
    }
    return 0;
  }
LAB_01f87008:
  auVar18 = FUN_01f877a8();
  puVar3 = PTR_DAT_027b3108;
  pcVar19 = FUN_01f8700c;
  if ((DAT_0293dea3 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3108);
    DAT_0293dea3 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar10 = FUN_01f410f4(0);
  if ((uVar14 & 1) == 0) {
    uVar14 = FUN_01f670bc(auVar18._0_8_,auVar18._8_8_,7,uVar10,in_x4,0,in_x6,in_x7,pcVar19,unaff_x25
                          ,unaff_x24,uVar15,unaff_x22);
    if ((uVar14 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulong)(~*in_x4 >> 0x1f);
    }
  }
  else {
    uVar8 = FUN_01f66c54();
    *in_x4 = uVar8;
    if ((int)uVar8 < 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3fa8);
      uVar10 = thunk_FUN_0124bba8();
      uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1460);
      FUN_01e79c88(uVar10,uVar13,uVar11,0);
      uVar13 = thunk_FUN_01279b34(PTR_DAT_027c14c0);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar10,uVar13);
    }
    uVar14 = 1;
  }
  return uVar14;
}


