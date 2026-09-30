/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoDeserialize
ENTRY_POINT: 08452ea0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoDeserialize(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  int in_w8;
  undefined8 uVar4;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_07119344();
  if ((uVar1 & 1) == 0) {
    uVar4 = FUN_084539f8();
    FUN_0844bfc4();
  }
  else {
    plVar2 = (long *)thunk_FUN_03d12a58();
    uVar4 = *(undefined8 *)PTR_DAT_08f0f4a8;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
    uVar4 = FUN_06f683f8(uVar4,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar4,0);
    uVar4 = 0;
  }
  return uVar4;
}


