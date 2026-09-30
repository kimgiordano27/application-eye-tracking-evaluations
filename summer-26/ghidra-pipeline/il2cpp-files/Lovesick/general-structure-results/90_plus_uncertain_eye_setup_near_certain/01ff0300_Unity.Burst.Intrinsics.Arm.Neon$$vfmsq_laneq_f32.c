/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vfmsq_laneq_f32
ENTRY_POINT: 01ff0300
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01ff0768) */
/* WARNING: Removing unreachable block (ram,0x01ff0758) */

long Unity_Burst_Intrinsics_Arm_Neon__vfmsq_laneq_f32(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  char cStack000000000000000c;
  
  thunk_FUN_00d48444(StringLiteral_3919);
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  *(undefined1 *)(unaff_x22 + 0x821) = 1;
  puVar4 = StringLiteral_3919;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  cStack000000000000000c = '\0';
  if (unaff_x21 != 0) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01ff5160(uVar11);
    lVar5 = FUN_01ff6d7c();
    FUN_01ff6800();
    lVar6 = FUN_01ff6d7c();
    if (lVar5 != lVar6) {
      if (lVar6 == 0) goto LAB_01ff0754;
      uVar11 = FUN_01ff6858();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar7 = FUN_0178a8c4(uVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_01ff0754;
        uVar7 = (**(code **)(*unaff_x20 + 0x2c8))();
        if ((uVar7 & 1) != 0) {
          uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar5 = FUN_01feec2c(uVar11,uVar10);
          return lVar5;
        }
      }
    }
  }
  cStack000000000000000c = '\0';
  FUN_017d75a8();
  if (0 < *(int *)(unaff_x19 + 0x48)) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x40);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar11 = *(undefined8 *)(lVar5 + uVar7 * 8 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01789ac0(uVar11);
      if ((uVar8 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x38);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar5 + 0x18) <= (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar5 = *(long *)(lVar5 + uVar7 * 8 + 0x20);
        iVar12 = 6;
        goto LAB_01ff04c4;
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x48));
  }
  lVar5 = 0;
  iVar12 = 7;
LAB_01ff04c4:
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00d56f10();
  }
  if ((iVar12 != 7) && (iVar12 != 0)) {
    return lVar5;
  }
  uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01ff5160(uVar11);
  lVar5 = FUN_01ff6d7c();
  if (lVar5 == 0) {
LAB_01ff0590:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_01ff0878();
    if (lVar5 == 0) {
      return 0;
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_01ff5918(lVar5,uVar11);
    if (lVar5 == 0) {
      return 0;
    }
    if (unaff_x20 == (long *)0x0) {
LAB_01ff0754:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = (**(code **)(*unaff_x20 + 0x8b8))();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar11 = FUN_01ff6858();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar7 = FUN_0178a8c4(uVar11,0,0);
    if ((uVar7 & 1) == 0) goto LAB_01ff0590;
    if (unaff_x20 == (long *)0x0) goto LAB_01ff0754;
    uVar7 = (**(code **)(*unaff_x20 + 0x2c8))();
    if ((uVar7 & 1) == 0) goto LAB_01ff0590;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_01feec2c(uVar11,uVar10);
    if (lVar5 == 0) goto LAB_01ff0590;
  }
  cStack000000000000000c = '\0';
  FUN_017d75a8();
  if (*(long *)(unaff_x19 + 0x40) == 0) {
    iVar12 = 4;
  }
  else {
    if (*(int *)(unaff_x19 + 0x48) != *(int *)(*(long *)(unaff_x19 + 0x40) + 0x18))
    goto LAB_01ff0718;
    iVar12 = *(int *)(unaff_x19 + 0x48) << 1;
  }
  lVar6 = FUN_00da4fb8(*(undefined8 *)
                        Method_System_Collections_Generic_List<PropertyInfo>_get_Item__,iVar12);
  uVar11 = FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,iVar12);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_017953b8(*(long *)(unaff_x19 + 0x40),lVar6,0,0);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017953b8(*(long *)(unaff_x19 + 0x38),uVar11,0,0);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar11;
  *(long *)(unaff_x19 + 0x40) = lVar6;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x48);
  lVar9 = thunk_FUN_00d6225c();
  if (lVar9 == 0) {
    uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,0);
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  *(long **)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
  uVar1 = *(uint *)(unaff_x19 + 0x48);
  plVar13 = *(long **)(unaff_x19 + 0x38);
  *(uint *)(unaff_x19 + 0x48) = uVar1 + 1;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0)) {
    uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,0);
  }
  if (*(uint *)(plVar13 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar13[(long)(int)uVar1 + 4] = lVar5;
LAB_01ff0718:
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00d56f10();
  }
  return lVar5;
}


