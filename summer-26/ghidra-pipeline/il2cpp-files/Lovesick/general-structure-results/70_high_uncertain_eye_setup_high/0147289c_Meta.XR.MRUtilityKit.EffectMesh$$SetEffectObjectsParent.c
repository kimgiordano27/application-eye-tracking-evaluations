/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$SetEffectObjectsParent
ENTRY_POINT: 0147289c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__SetEffectObjectsParent(void)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  uint uVar7;
  long *plVar8;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  if (in_NG == in_OV) {
    plVar8 = (long *)0x0;
    uVar7 = 0;
    do {
      if (unaff_x24 == (long *)0x0) goto LAB_01472a80;
      plVar2 = (long *)(**(code **)(*unaff_x24 + 0x1b8))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
      if (plVar2 == (long *)0x0) goto LAB_01472a80;
      lVar3 = (**(code **)(*plVar2 + 0x818))(plVar2,*(undefined8 *)(*plVar2 + 0x820));
      if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_01472a84;
      plVar2 = (long *)(unaff_x20 + (long)(int)uVar7 * 8 + 0x20);
      if ((*plVar2 == 0) || (uVar4 = FUN_0268fd4c(*plVar2,0), lVar3 == 0)) goto LAB_01472a80;
      uVar5 = FUN_01322618(lVar3,uVar4,
                           *(undefined8 *)
                            Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                          );
      if ((uVar5 & 1) == 0) {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar7) {
LAB_01472a84:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (*plVar2 == 0) goto LAB_01472a80;
        FUN_0268fd4c(*plVar2,0);
        FUN_00ac8520();
        if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_01472a84;
        if (*plVar2 == 0) goto LAB_01472a80;
        plVar2 = (long *)FUN_0268fd4c(*plVar2,0);
        if (plVar2 != (long *)0x0) {
          plVar8 = plVar2;
        }
        uVar4 = *(undefined8 *)StringLiteral_3987;
        if (plVar2 == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          if (plVar8 == (long *)0x0) goto LAB_01472a80;
          uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        }
        uVar4 = FUN_015f5b28(uVar4,uVar6,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar4,0);
      }
      uVar7 = uVar7 + 1;
      unaff_x24 = *(long **)(in_stack_00000010 + 0x18);
    } while ((int)uVar7 < *(int *)(unaff_x20 + 0x18));
  }
  puVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo;
  uVar4 = FUN_01325140();
  uVar6 = FUN_01325140(in_stack_00000008,*(undefined8 *)puVar1);
  if (unaff_x24 != (long *)0x0) {
    uVar5 = (**(code **)(*unaff_x24 + 0x228))
                      (unaff_x24,uVar4,uVar6,1,*(undefined8 *)(*unaff_x24 + 0x230));
    if ((uVar5 & 1) != 0) {
      plVar8 = *(long **)(in_stack_00000010 + 0x18);
      if (plVar8 == (long *)0x0) goto LAB_01472a80;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
    }
    return;
  }
LAB_01472a80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


