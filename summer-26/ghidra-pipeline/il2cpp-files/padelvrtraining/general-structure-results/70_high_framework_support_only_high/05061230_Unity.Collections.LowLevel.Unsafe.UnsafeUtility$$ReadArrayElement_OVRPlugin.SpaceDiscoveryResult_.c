/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 05061230
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05061478) */
/* WARNING: Removing unreachable block (ram,0x05061504) */
/* WARNING: Removing unreachable block (ram,0x05061508) */

int Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
              (void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x22;
  int unaff_w24;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  iVar12 = 0;
  if (unaff_w24 != 0) {
    uVar6 = FUN_07ddd5d8(2,0);
    FUN_05de8668(&stack0x00000048,unaff_w24,uVar6,*(undefined8 *)PTR_DAT_091fa810);
    puVar4 = PTR_DAT_091a7798;
    if ((int)unaff_x20[1] < 1) {
      iVar12 = 0;
    }
    else {
      lVar14 = 0;
      lVar15 = 0;
      iVar12 = 0;
      piVar1 = (int *)(in_stack_00000018 + 0x94);
      if (in_stack_00000010._4_4_ != 4) {
        piVar1 = (int *)(in_stack_00000018 + 0x90);
      }
      do {
        uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar13 = FUN_07186ef4(uVar13,0);
        uVar10 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49745_091fa7b8,0);
        uVar11 = FUN_0719124c(uVar13,uVar10,0);
        if ((uVar11 & 1) == 0) {
          iVar7 = 0;
LAB_0506134c:
          uVar11 = FUN_05de8a14(&stack0x00000048,iVar7,*(undefined8 *)PTR_DAT_091fa800);
          if ((uVar11 & 1) == 0) {
            FUN_05de897c(&stack0x00000048,iVar7,*(undefined8 *)PTR_DAT_091fa7f8);
            iVar2 = *piVar1;
            iVar3 = *(int *)(in_stack_00000018 + 0x90);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            puVar5 = PTR_DAT_091fa7f0;
            iVar8 = FUN_04f506c4(*(undefined8 *)PTR_DAT_091fa7f0);
            iVar9 = FUN_04f506c4(*(undefined8 *)puVar5);
            FUN_08082a64(&stack0x00000040,iVar3 - iVar8,2,iVar2 - iVar9,0);
            FUN_08051cb8(unaff_x22,in_stack_00000040,iVar7,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x38));
            in_stack_00000028 = unaff_x20[1];
            in_stack_00000020 = *unaff_x20;
            in_stack_00000038 =
                 thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),
                                    &stack0x00000020);
            iVar7 = FUN_0506ddc8(in_stack_00000018,&stack0x00000040,iVar2,unaff_x22,
                                 in_stack_00000010._4_4_,&stack0x00000038,iVar7,
                                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x40));
            if (iVar7 <= iVar12) {
              iVar7 = iVar12;
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            FUN_08082b08(&stack0x00000040,0);
            iVar12 = iVar7;
          }
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uVar13 = FUN_07186ef4(uVar13,0);
          iVar7 = FUN_0805c3f8(in_stack_00000018,uVar13,*(undefined8 *)(lVar14 + *unaff_x20),0,0);
          if (-1 < iVar7) goto LAB_0506134c;
        }
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar15 < (int)unaff_x20[1]);
    }
    FUN_05de8814(&stack0x00000048,*(undefined8 *)PTR_DAT_091fa808);
  }
  return iVar12;
}


