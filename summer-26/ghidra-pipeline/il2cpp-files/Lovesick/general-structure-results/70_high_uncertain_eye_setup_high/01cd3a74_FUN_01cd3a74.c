/*
FUNCTION_NAME: FUN_01cd3a74
ENTRY_POINT: 01cd3a74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01cd3a74(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0377f041 & 1) == 0) {
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB_IMeshBakerSettings_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2030);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<User>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_SimpleTuple<ProBuilderMesh,_Face>_get_item2__);
    DAT_0377f041 = 1;
  }
  puVar5 = Method_UnityEngine_ProBuilder_SimpleTuple<ProBuilderMesh,_Face>_get_item2__;
  puVar4 = Method_System_Collections_Generic_List<User>__ctor__;
  puVar3 = DigitalOpus_MB_Core_MB_IMeshBakerSettings_TypeInfo;
  puVar2 = PTR_DAT_033f2030;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lVar9 = param_2;
  if (param_2 == 0) {
    FUN_01cd3cf0(param_1,0);
  }
  else {
    do {
      uVar6 = FUN_01cd3c90(lVar9,*(undefined8 *)(param_1 + 0x10));
      if ((uVar6 & 1) != 0) {
        lVar9 = *(long *)(param_1 + 0x10);
        FUN_00ac2be8(lVar9);
        uVar8 = FUN_01cb2794(*(undefined8 *)(lVar9 + 0x10),0);
        goto LAB_01cd3bdc;
      }
      plVar1 = (long *)(lVar9 + 0x20);
      lVar9 = *plVar1;
    } while (*plVar1 != 0);
    FUN_01cd3cf0(param_1,param_2);
    if (param_2 != 0) {
      FUN_01cd3e18(param_2,*(undefined8 *)(param_1 + 0x10),param_1);
      if ((*(long *)(param_1 + 0x20) == 0) || (uVar6 = FUN_01cd3ec8(param_1), (uVar6 & 1) != 0)) {
        if (*(char *)(param_1 + 0x30) != '\0') {
          lVar9 = *(long *)(param_1 + 0x10);
          FUN_00ac2be8(lVar9);
          uVar8 = FUN_01cb2aac(*(undefined8 *)(lVar9 + 0x10),0);
LAB_01cd3bdc:
          uVar7 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_36__);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar8,uVar7);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_01cd3c04;
        FUN_01323390(*(long *)(param_1 + 0x28),&local_58,*(undefined8 *)puVar5);
        while (uVar6 = FUN_012b894c(&local_58,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          uVar8 = FUN_00c3df90(&local_58,*(undefined8 *)puVar4);
          FUN_01cd37dc(param_1,uVar8);
        }
        FUN_012b8948(&local_58,*(undefined8 *)puVar3);
      }
      return;
    }
  }
LAB_01cd3c04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


