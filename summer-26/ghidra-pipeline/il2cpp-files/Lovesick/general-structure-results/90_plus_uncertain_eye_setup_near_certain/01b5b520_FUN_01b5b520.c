/*
FUNCTION_NAME: FUN_01b5b520
ENTRY_POINT: 01b5b520
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_01b5b520(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int local_38;
  float local_34;
  
  if ((DAT_0377e421 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString_TypeInfo
                      );
    thunk_FUN_00d48444(Method_OVRManager_<>c_<InitOVRManager>b__450_0__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476
                      );
    DAT_0377e421 = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar2 = FUN_0268cae8(*(long *)(param_1 + 0x30),0),
     puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo, (uVar2 & 1) == 0)) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01b5b790;
    plVar5 = *(long **)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    local_34 = (float)FUN_0268cbcc(*(long *)(param_1 + 0x30),0);
    local_34 = local_34 + DAT_028aa040;
    uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_34);
    uVar3 = FUN_015f6780(uVar6,uVar3,0);
    if (plVar5 == (long *)0x0) goto LAB_01b5b790;
    (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5f0));
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01b5b790;
    fVar7 = (float)FUN_0268cbcc(*(long *)(param_1 + 0x30),0);
    if (DAT_028aa3e0 <= fVar7) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_01b5b790;
      plVar5 = *(long **)(param_1 + 0x28);
      uVar3 = FUN_01601fc0(*(long *)(param_1 + 0x38),
                           *(undefined8 *)
                            Field_<PrivateImplementationDetails>_042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476
                           ,*(undefined8 *)Method_OVRManager_<>c_<InitOVRManager>b__450_0__,0);
      if (plVar5 == (long *)0x0) goto LAB_01b5b790;
      (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5f0));
      puVar1 = System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString_TypeInfo;
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 == (long *)0x0) goto LAB_01b5b790;
      uVar3 = (**(code **)(*plVar5 + 0x5d8))(plVar5,*(undefined8 *)(*plVar5 + 0x5e0));
      uVar3 = FUN_015f5b28(uVar3,*(undefined8 *)puVar1,0);
      (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5f0));
    }
  }
  FUN_01b5b794(param_1);
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  if (*(char *)(param_1 + 0x44) != '\0') {
    fVar7 = *(float *)(param_1 + 0x40);
    if (*(float *)(param_1 + 0x1c) <= fVar7) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar4 = FUN_0268fd4c(*(long *)(param_1 + 0x20),0), lVar4 == 0)) goto LAB_01b5b790;
      FUN_0268ace8(lVar4,0,0);
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    else {
      fVar8 = (float)FUN_02689110(0);
      fVar7 = fVar7 + fVar8;
      *(float *)(param_1 + 0x40) = fVar7;
      plVar5 = *(long **)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      fVar7 = *(float *)(param_1 + 0x1c) - fVar7;
      local_38 = -0x80000000;
      if (fVar7 != INFINITY) {
        local_38 = (int)fVar7;
      }
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_38);
      uVar3 = FUN_015f6780(uVar3,uVar6,0);
      if (plVar5 == (long *)0x0) {
LAB_01b5b790:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar5 + 0x5e8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5f0));
    }
  }
  return;
}


