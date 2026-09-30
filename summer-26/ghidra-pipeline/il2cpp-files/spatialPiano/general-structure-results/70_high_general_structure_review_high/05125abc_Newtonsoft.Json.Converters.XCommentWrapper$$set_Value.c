/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XCommentWrapper$$set_Value
ENTRY_POINT: 05125abc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05125b8c) */

void Newtonsoft_Json_Converters_XCommentWrapper__set_Value(long *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *in_stack_00000018;
  
  iVar1 = (**(code **)(*param_1 + 0x338))
                    (param_1,param_2,0,*(undefined4 *)(param_2 + 0x18),
                     *(undefined8 *)(*param_1 + 0x340));
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (iVar1 != *(int *)(*(long *)(unaff_x19 + 0x20) + 0x18)) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar3 = thunk_FUN_02f45270();
    uVar4 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleSaveAnchor_SaveRequest_var)
    ;
    FUN_0510bee0(uVar3,uVar4,0);
    uVar4 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleLoadAnchor_LoadRequest_var)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,uVar4);
  }
  FUN_0512b53c();
  FUN_0512b5fc();
  if (in_stack_00000018 != (long *)0x0) {
    lVar5 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05125b68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)PTR_DAT_067c91b0,0);
LAB_05125b68:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


