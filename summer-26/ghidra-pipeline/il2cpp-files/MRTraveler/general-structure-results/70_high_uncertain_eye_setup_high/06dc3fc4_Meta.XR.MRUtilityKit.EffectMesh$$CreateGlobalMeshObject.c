/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$CreateGlobalMeshObject
ENTRY_POINT: 06dc3fc4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__CreateGlobalMeshObject(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x21;
  undefined8 uVar7;
  undefined4 uStack000000000000000c;
  
  if ((*(byte *)(unaff_x21 + 0xc31) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e699d0);
    FUN_03c8f898(PTR_DAT_08e85ce8);
    FUN_03c8f898(PTR_DAT_08e90b20);
    FUN_03c8f898(PTR_DAT_08e7e970);
    FUN_03c8f898(PTR_DAT_08e90b30);
    FUN_03c8f898(PTR_DAT_08e90b38);
    *(undefined1 *)(unaff_x21 + 0xc31) = 1;
  }
  puVar3 = PTR_DAT_08e90b38;
  puVar2 = PTR_DAT_08e90b30;
  puVar1 = PTR_DAT_08e7e970;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x48) != 0)) {
    uStack000000000000000c = *(undefined4 *)(*(long *)(param_2 + 0x48) + 0x10);
    uVar4 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x0000000c);
    uVar4 = FUN_06f6be0c(*(undefined8 *)puVar3,uVar4,0);
    if (*(long *)(param_2 + 0x48) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x18);
    }
    uVar5 = FUN_06f74e30(*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,uVar7,0);
    (**(code **)(*param_1 + 0x288))(param_1,param_2,uVar5,1,*(undefined8 *)(*param_1 + 0x290));
    lVar6 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x98) != 0)) {
      FUN_05d6ca54(*(long *)(lVar6 + 0x98),uVar4,uVar7,*(undefined8 *)PTR_DAT_08e85ce8);
    }
    lVar6 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
      FUN_085f3110(*(long *)(lVar6 + 0xa0),0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


