/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XCommentWrapper$$.ctor
ENTRY_POINT: 05125a78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05125b8c) */

void Newtonsoft_Json_Converters_XCommentWrapper___ctor(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  long *in_stack_00000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = param_1;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar2 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
  if (0x1000 < lVar2) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar4 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(
                              UnityEngine_XR_OpenXR_Features_Meta_SingleEraseAnchor_EraseRequest_var
                              );
    FUN_0510bee0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleLoadAnchor_LoadRequest_var)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar5);
  }
  lVar2 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320);
  *(long *)(unaff_x19 + 0x20) = lVar2;
  if ((lVar2 == 0) || (in_stack_00000018 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar1 = (**(code **)(*in_stack_00000018 + 0x338))
                    (in_stack_00000018,lVar2,0,*(undefined4 *)(lVar2 + 0x18),
                     *(undefined8 *)(*in_stack_00000018 + 0x340));
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (iVar1 != *(int *)(*(long *)(unaff_x19 + 0x20) + 0x18)) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar4 = thunk_FUN_02f45270();
    uVar5 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleSaveAnchor_SaveRequest_var)
    ;
    FUN_0510bee0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02f6ef30(UnityEngine_XR_OpenXR_Features_Meta_SingleLoadAnchor_LoadRequest_var)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar5);
  }
  FUN_0512b53c();
  FUN_0512b5fc();
  if (in_stack_00000018 != (long *)0x0) {
    lVar2 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05125b68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)PTR_DAT_067c91b0,0);
LAB_05125b68:
    (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
  }
  return;
}


