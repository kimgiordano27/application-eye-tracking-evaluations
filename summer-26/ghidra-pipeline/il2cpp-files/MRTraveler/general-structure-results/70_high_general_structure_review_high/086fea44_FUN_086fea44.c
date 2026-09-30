/*
FUNCTION_NAME: FUN_086fea44
ENTRY_POINT: 086fea44
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_086fea44(long param_1,long param_2,uint param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ushort local_44 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0943c7c0 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69670);
    FUN_03c8f898(System_Xml_XmlTextReaderImpl_ParsingState_var);
    FUN_03c8f898(System_Xml_Schema_XmlAtomicValue_Union_var);
    FUN_03c8f898(Unity_VisualScripting_FullSerializer_fsAotCompilationManager_AotCompilation_var);
    FUN_03c8f898(UnityEngine_UI_GraphicRaycaster_BlockingObjects_var);
    DAT_0943c7c0 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_44[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (param_2 != 0) {
    uVar6 = *(uint *)(param_2 + 0x1c);
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_085a4d38(param_3 <= uVar6,0);
    if (*(int *)(param_2 + 0x58) == *(int *)(param_1 + 0x60)) {
      if ((*(long *)(param_2 + 0x50) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar7 == 0)) goto LAB_086fec08;
      auVar9 = FUN_047230e4(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                            *(undefined4 *)(param_2 + 0x18),param_3,
                            *(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
      *param_4 = auVar9;
    }
    else {
      if ((*(long *)(param_2 + 0x50) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar7 == 0)) goto LAB_086fec08;
      iVar1 = *(int *)(param_2 + 0x18);
      FUN_056750ec(&local_40,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                   *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                   *(undefined8 *)System_Xml_Schema_XmlAtomicValue_Union_var);
      FUN_086fec0c(param_1,param_2,param_3,*(undefined4 *)(param_2 + 0x34),param_4,&local_58,
                   local_44,&local_b0,0);
      puVar4 = Unity_VisualScripting_FullSerializer_fsAotCompilationManager_AotCompilation_var;
      puVar3 = UnityEngine_UI_GraphicRaycaster_BlockingObjects_var;
      iVar2 = *(int *)(param_2 + 0x34);
      if (0 < iVar2) {
        iVar8 = 0;
        uVar6 = (uint)local_44[0];
        do {
          iVar5 = FUN_05675140(&local_40,iVar8,*(undefined8 *)puVar4);
          FUN_05675180(&local_58,iVar8,(uVar6 - iVar1) + iVar5,*(undefined8 *)puVar3);
          iVar8 = iVar8 + 1;
        } while (iVar2 != iVar8);
      }
    }
    return;
  }
LAB_086fec08:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


