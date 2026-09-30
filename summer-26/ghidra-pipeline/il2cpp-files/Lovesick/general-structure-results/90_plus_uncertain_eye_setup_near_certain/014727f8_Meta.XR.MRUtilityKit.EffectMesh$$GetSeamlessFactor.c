/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$GetSeamlessFactor
ENTRY_POINT: 014727f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__GetSeamlessFactor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  uint uVar8;
  long unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long *plVar9;
  long *plVar10;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x014727f8:
  uVar4 = (**(code **)(*unaff_x22 + 0x168))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x170));
  do {
    uVar4 = FUN_015f5b28(unaff_x23,uVar4,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(uVar4,0);
    while( true ) {
      uVar2 = FUN_012b894c(&stack0x00000030,*unaff_x25);
      if ((uVar2 & 1) == 0) {
        FUN_012b8948(&stack0x00000030,
                     *(undefined8 *)
                      Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                    );
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__
                                  );
        if ((lVar3 == 0) || (FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_1982), unaff_x20 == 0))
        goto LAB_01472a80;
        plVar10 = *(long **)(in_stack_00000010 + 0x18);
        if (*(int *)(unaff_x20 + 0x18) < 1) goto LAB_014729ec;
        plVar9 = (long *)0x0;
        uVar8 = 0;
        goto LAB_014728a8;
      }
      lVar3 = FUN_00ac2bf8(&stack0x00000030,*unaff_x29);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_010e58e8(lVar3,&stack0x00000018,*unaff_x28);
      lVar3 = in_stack_00000018;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) break;
      uVar2 = 0;
      uVar7 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      while( true ) {
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar4 = *(undefined8 *)(unaff_x21 + uVar2 * 8);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_0268b4e0(lVar3,uVar4,0);
        uVar2 = uVar2 + 1;
        if ((uVar7 & 1) != 0) break;
        uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
        if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)uVar2) goto LAB_014727b0;
      }
    }
LAB_014727b0:
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = FUN_0268fd4c(lVar3,0);
    FUN_00ac8520(in_stack_00000008,uVar4,*(undefined8 *)StringLiteral_1415);
    unaff_x22 = (long *)FUN_0268fd4c(lVar3,0);
    unaff_x23 = *unaff_x27;
    if (unaff_x22 != (long *)0x0) break;
    uVar4 = 0;
  } while( true );
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  goto code_r0x014727f8;
  while( true ) {
    uVar8 = uVar8 + 1;
    plVar10 = *(long **)(in_stack_00000010 + 0x18);
    if (*(int *)(unaff_x20 + 0x18) <= (int)uVar8) break;
LAB_014728a8:
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0))
       , plVar10 == (long *)0x0)) goto LAB_01472a80;
    lVar5 = (**(code **)(*plVar10 + 0x818))(plVar10,*(undefined8 *)(*plVar10 + 0x820));
    if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_01472a84;
    plVar10 = (long *)(unaff_x20 + (long)(int)uVar8 * 8 + 0x20);
    if ((*plVar10 == 0) || (uVar4 = FUN_0268fd4c(*plVar10,0), lVar5 == 0)) goto LAB_01472a80;
    uVar2 = FUN_01322618(lVar5,uVar4,
                         *(undefined8 *)
                          Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__)
    ;
    if ((uVar2 & 1) == 0) {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar8) {
LAB_01472a84:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*plVar10 == 0) goto LAB_01472a80;
      uVar4 = FUN_0268fd4c(*plVar10,0);
      FUN_00ac8520(lVar3,uVar4,*(undefined8 *)StringLiteral_1415);
      if (*(uint *)(unaff_x20 + 0x18) <= uVar8) goto LAB_01472a84;
      if (*plVar10 == 0) goto LAB_01472a80;
      plVar10 = (long *)FUN_0268fd4c(*plVar10,0);
      if (plVar10 != (long *)0x0) {
        plVar9 = plVar10;
      }
      uVar4 = *(undefined8 *)StringLiteral_3987;
      if (plVar10 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        if (plVar9 == (long *)0x0) goto LAB_01472a80;
        uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      }
      uVar4 = FUN_015f5b28(uVar4,uVar6,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar4,0);
    }
  }
LAB_014729ec:
  puVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo;
  uVar4 = FUN_01325140(lVar3,*(undefined8 *)
                              Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                      );
  uVar6 = FUN_01325140(in_stack_00000008,*(undefined8 *)puVar1);
  if (plVar10 == (long *)0x0) {
LAB_01472a80:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = (**(code **)(*plVar10 + 0x228))(plVar10,uVar4,uVar6,1,*(undefined8 *)(*plVar10 + 0x230));
  if ((uVar2 & 1) != 0) {
    plVar10 = *(long **)(in_stack_00000010 + 0x18);
    if (plVar10 == (long *)0x0) goto LAB_01472a80;
    (**(code **)(*plVar10 + 0x248))(plVar10,0,*(undefined8 *)(*plVar10 + 0x250));
  }
  return;
}


