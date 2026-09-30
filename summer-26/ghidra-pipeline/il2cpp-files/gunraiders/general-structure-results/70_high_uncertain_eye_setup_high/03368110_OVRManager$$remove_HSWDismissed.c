/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 03368110
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__remove_HSWDismissed(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_3;
  if ((DAT_0453353f & 1) == 0) {
    FUN_01c5d288(UnityEngine_ISubsystemDescriptor_TypeInfo);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__);
    FUN_01c5d288(System_Xml_Schema_XdrBuilder_ElementContent_TypeInfo);
    DAT_0453353f = 1;
  }
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 == 0) {
    lVar7 = FUN_0337b878(*(undefined8 *)(param_1 + 0x98),0x23,0);
    *(long *)(param_1 + 0x90) = lVar7;
    if (lVar7 == 0) goto LAB_03368274;
  }
  puVar3 = UnityEngine_ISubsystemDescriptor_TypeInfo;
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined2 *)(lVar7 + 0x20) = *(undefined2 *)(param_1 + 0x80);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (iVar1 == 0) {
      uVar6 = FUN_032b65f8(&stack0x00000010,0);
    }
    else {
      uVar6 = FUN_032b671c();
    }
    puVar4 = Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_MoveNext__;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_032b680c(&stack0x00000010,0);
    FUN_02f25b74();
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_03375ef0(lVar7,1,uVar6,0,0,2,uVar2,0);
    lVar7 = *(long *)(param_1 + 0x90);
    if (lVar7 == 0) {
LAB_03368274:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (uVar5 < *(uint *)(lVar7 + 0x18)) {
      *(undefined2 *)(lVar7 + (long)(int)uVar5 * 2 + 0x20) = *(undefined2 *)(param_1 + 0x80);
      return uVar5 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


