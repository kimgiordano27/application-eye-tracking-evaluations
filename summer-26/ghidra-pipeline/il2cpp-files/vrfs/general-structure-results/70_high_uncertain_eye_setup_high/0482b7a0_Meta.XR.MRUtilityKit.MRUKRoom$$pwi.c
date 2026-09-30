/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$pwi
ENTRY_POINT: 0482b7a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_MRUKRoom__pwi(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined2 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  uint unaff_w29;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s10;
  undefined8 unaff_d11;
  float fVar20;
  ulong unaff_d12;
  ulong unaff_d13;
  float fVar21;
  ulong unaff_d14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  undefined1 uStack0000000000000090;
  undefined2 uStack0000000000000094;
  undefined1 uStack0000000000000096;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  undefined1 in_stack_000000d8;
  uint uStack00000000000000dc;
  
code_r0x0482b7a0:
  if (in_w8 == 0) {
    thunk_FUN_016466fc();
  }
  uVar5 = FUN_051d2ac0(unaff_x28,0,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(unaff_x27 + 0x80) == 0) ||
       (lVar6 = FUN_047c1520(*(long *)(unaff_x27 + 0x80),0), lVar6 == 0)) {
LAB_0482b810:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(char *)(lVar6 + 0x74) != '\0') goto LAB_0482b4a0;
  }
  bVar3 = false;
LAB_0482b52c:
  fVar8 = (float)param_2;
  fVar11 = (float)FUN_049abdc8(unaff_x25,0);
  if ((bVar3) && (0.0 < fStack0000000000000088)) {
    fVar20 = (float)param_3;
    param_3 = (ulong)(uint)(fVar20 * fVar20);
    fVar19 = fVar20 * fVar20 + fVar11 * fVar11 + fVar8 * fVar8;
    if (DAT_0536a2e0 < fVar19) {
      fVar17 = SQRT(fVar19);
      fVar12 = -fStack0000000000000088;
      fVar9 = (float)unaff_d11;
      fVar13 = (float)FUN_049ac010(unaff_x25,0);
      fVar14 = (float)FUN_049ac6f8(unaff_x25,0);
      fVar15 = (float)FUN_051dd33c(0);
      fVar16 = fVar15 * (((((fVar11 / fVar17) * fVar12) / fVar9) / fVar13) / fVar14);
      fVar18 = fVar15 * (((((fVar8 / fVar17) * fVar12) / fVar9) / fVar13) / fVar14);
      fVar15 = fVar15 * (((((fVar20 / fVar17) * fVar12) / fVar9) / fVar13) / fVar14);
      if (fVar19 < fVar15 * fVar15 + fVar16 * fVar16 + fVar18 * fVar18) {
        fVar16 = -fVar11;
        fVar18 = -fVar8;
        fVar15 = -fVar20;
      }
      param_3 = (ulong)(uint)fVar15;
      FUN_049ad1bc(fVar16,fVar18,unaff_x25,2,0);
    }
  }
  uVar1 = (int)unaff_w29 >> 0x10;
  if (((uVar1 != 0) &&
      (uVar2 = in_stack_00000070._4_4_ & ((unaff_w29 | uVar1) ^ 0xffffffff), uVar2 != 0)) &&
     (lVar6 = *(long *)(unaff_x19 + 0x18), lVar6 != 0)) {
    if (lVar6 == 0) goto LAB_0482b810;
    (**(code **)(lVar6 + 0x18))
              (unaff_d11,*(undefined8 *)(lVar6 + 0x40),unaff_x25,uVar1,uVar2,
               *(undefined8 *)(lVar6 + 0x28));
  }
  if ((unaff_x26 & 1) == 0) {
    fVar11 = (float)FUN_051dd24c(0);
    fStack0000000000000060 = fStack0000000000000060 + fVar11;
  }
  else {
    fStack0000000000000060 = 0.0;
  }
  lVar6 = *(long *)(unaff_x19 + 0x78);
  if (lVar6 != 0) {
    param_2 = (ulong)(uint)fStack000000000000006c;
    uVar7 = *(undefined8 *)PTR_DAT_06e62df8;
    fStack00000000000000c8 = fStack0000000000000064;
    fStack00000000000000cc = fStack000000000000006c;
    fStack00000000000000d0 = fStack0000000000000068;
    in_stack_000000d8 = uStack0000000000000090;
    *(undefined1 *)(unaff_x24 + 1) = uStack0000000000000096;
    *unaff_x24 = uStack0000000000000094;
    uStack00000000000000dc = in_stack_00000070._4_4_;
    fStack00000000000000d4 = fStack0000000000000060;
    FUN_0281f4d8(lVar6,unaff_w21,&stack0x000000c8,uVar7);
    puVar4 = PTR_DAT_06d9fd78;
    do {
      unaff_w21 = unaff_w21 + -1;
      if (unaff_w21 < 0) {
        return;
      }
      if (*unaff_x20 == 0) break;
      unaff_x25 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                            (*unaff_x20,unaff_w21,*unaff_x22);
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar6);
      }
      uVar5 = FUN_051d94d4(unaff_x25,0,0);
      if ((uVar5 & 1) == 0) {
        if (unaff_x25 == 0) break;
        uVar5 = FUN_049ac1ec(unaff_x25,0);
        fStack000000000000006c = (float)param_2;
        if ((uVar5 & 1) == 0) {
          FUN_049ac8b0(unaff_x25,0);
          uVar7 = FUN_051e8050(in_stack_00000058,0);
          fStack0000000000000064 = (float)uVar7;
          fStack0000000000000068 = (float)param_3;
          uVar5 = param_3;
          fVar11 = fStack000000000000006c;
          FUN_049abc90(unaff_x25,0);
          fVar19 = (float)uVar5;
          fVar8 = (float)FUN_051e80a8(in_stack_00000058,0);
          if (*(long *)(unaff_x19 + 0x88) == 0) break;
          unaff_d11 = FUN_0281c704(*(long *)(unaff_x19 + 0x88),unaff_w21,*unaff_x23);
          if (*(long *)(unaff_x19 + 0x78) == 0) break;
          FUN_0281f470(&stack0x000000c8,*(long *)(unaff_x19 + 0x78),unaff_w21,
                       *(undefined8 *)PTR_DAT_06dab078);
          unaff_w29 = uStack00000000000000dc;
          fVar14 = fStack00000000000000d4;
          fVar13 = fStack00000000000000d0;
          fVar12 = fStack00000000000000cc;
          fVar20 = fStack00000000000000c8;
          uStack0000000000000094 = *unaff_x24;
          uStack0000000000000096 = *(undefined1 *)(unaff_x24 + 1);
          fStack0000000000000060 = fStack00000000000000d4;
          uVar5 = FUN_0482ba44(uVar7,fStack000000000000006c,param_3,unaff_d11);
          fVar21 = (float)param_3;
          unaff_x26 = uVar5 & 0xffffffff;
          fVar17 = (float)FUN_049ac010(unaff_x25,0);
          fVar18 = (float)FUN_0482baa8(unaff_d11);
          fVar15 = fVar17;
          fVar16 = fVar21;
          fVar9 = (float)FUN_049ac010(unaff_x25,0);
          fVar10 = (float)FUN_049a7ae8(0);
          fVar16 = fStack000000000000008c * fVar9 * fVar16;
          param_3 = (ulong)(uint)fVar16;
          fVar18 = fVar18 - fStack000000000000008c * fVar9 * fVar10;
          unaff_d12 = (ulong)(uint)fVar18;
          fVar17 = fVar17 - fStack000000000000008c * fVar9 * fVar15;
          unaff_d13 = (ulong)(uint)fVar17;
          fVar21 = fVar21 - fVar16;
          unaff_d14 = (ulong)(uint)fVar21;
          param_2 = (ulong)(uint)(fVar21 * fVar21);
          unaff_s10 = fVar21 * fVar21 + fVar18 * fVar18 + fVar17 * fVar17;
          if ((uVar5 & 1) != 0) goto LAB_0482b44c;
          if ((unaff_s10 != 0.0) &&
             (param_2 = (ulong)(uint)fVar14, fVar14 <= *(float *)(unaff_x19 + 0x34))) {
            fVar11 = (fVar19 * fVar19 + fVar8 * fVar8 + fVar11 * fVar11) * 4.0;
            param_3 = (ulong)(uint)in_stack_00000020._4_4_;
            if (fVar11 <= in_stack_00000020._4_4_) {
              fVar11 = in_stack_00000020._4_4_;
            }
            fVar8 = (fVar20 - fStack0000000000000064) * (fVar20 - fStack0000000000000064) +
                    (fVar12 - fStack000000000000006c) * (fVar12 - fStack000000000000006c) +
                    (fVar13 - fStack0000000000000068) * (fVar13 - fStack0000000000000068);
            param_2 = (ulong)(uint)fVar8;
            if (fVar8 <= fVar11) goto LAB_0482b44c;
          }
        }
      }
      FUN_0482b85c();
    } while( true );
  }
  goto LAB_0482b810;
LAB_0482b44c:
  if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0482b810;
  unaff_x27 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (*(long *)(unaff_x19 + 0x80),unaff_w21,*(undefined8 *)PTR_DAT_06e153a0);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar6);
  }
  uVar5 = FUN_051d94d4(unaff_x27,0,0);
  if ((uVar5 & 1) == 0) {
    if (unaff_x27 == 0) goto LAB_0482b810;
    if (*(char *)(unaff_x27 + 0x191) == '\0') goto LAB_0482b78c;
  }
LAB_0482b4a0:
  param_2 = (ulong)(uint)fStack000000000000007c;
  param_3 = (ulong)(uint)in_stack_00000080;
  if (in_stack_00000030._4_4_ <=
      (in_stack_00000080 - fStack0000000000000068) * (in_stack_00000080 - fStack0000000000000068) +
      (fStack0000000000000078 - fStack0000000000000064) *
      (fStack0000000000000078 - fStack0000000000000064) +
      (fStack000000000000007c - fStack000000000000006c) *
      (fStack000000000000007c - fStack000000000000006c)) {
    FUN_051e8050(in_stack_00000038,0);
    FUN_049acc60(unaff_x25,0);
  }
  if (_DAT_0535a8ec <= unaff_s10) {
    FUN_051e80a8(unaff_d12,in_stack_00000038,0);
    FUN_049ad0e4(unaff_x25,0);
    param_2 = unaff_d13;
    param_3 = unaff_d14;
  }
  bVar3 = true;
  goto LAB_0482b52c;
LAB_0482b78c:
  unaff_x28 = *(undefined8 *)(unaff_x27 + 0x80);
  in_w8 = *(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0);
  goto code_r0x0482b7a0;
}


