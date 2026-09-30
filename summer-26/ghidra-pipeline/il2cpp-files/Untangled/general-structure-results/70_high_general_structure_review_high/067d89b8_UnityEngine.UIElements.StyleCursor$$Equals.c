/*
FUNCTION_NAME: UnityEngine.UIElements.StyleCursor$$Equals
ENTRY_POINT: 067d89b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


void UnityEngine_UIElements_StyleCursor__Equals(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  puVar2 = PTR_DAT_06d37148;
  if ((DAT_071d6579 & 1) == 0) {
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsDateConverter_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsDictionaryConverter_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsDirectConverter_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsDuplicateVersionNameException_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsEnumConverter_TypeInfo);
    FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsForwardConverter_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37148);
    DAT_071d6579 = 1;
  }
  lVar5 = *(long *)puVar2;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Unity_VisualScripting_FullSerializer_fsDictionaryConverter_TypeInfo;
  puVar3 = Unity_VisualScripting_FullSerializer_fsDateConverter_TypeInfo;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
  if (lVar5 != 0) {
    FUN_03fd16fc(&local_58,lVar5,
                 *(undefined8 *)Unity_VisualScripting_FullSerializer_fsEnumConverter_TypeInfo);
    uStack_38 = uStack_50;
    local_40 = local_58;
    local_30 = local_48;
LAB_067d8a90:
    uVar6 = FUN_04df6d30(&local_40,*(undefined8 *)puVar4);
    if ((uVar6 & 1) != 0) {
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(local_30 + 0x70) != 0) goto code_r0x067d8ab0;
      goto LAB_067d8ac0;
    }
    FUN_04df6d2c(&local_40,*(undefined8 *)puVar3);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05624da8(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
code_r0x067d8ab0:
  lVar5 = *(long *)(*(long *)(local_30 + 0x70) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_067d8ac0:
    FUN_0688bbe8(local_30,0);
  }
  goto LAB_067d8a90;
}


