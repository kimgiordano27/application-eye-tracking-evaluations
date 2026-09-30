/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 033aa0c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_gpuUtilSupported(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *in_x9;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  undefined *puVar8;
  
  uVar4 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x5a0));
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 033aa0d8 to 034aa0f7 has its CatchHandler @ 033aa35c */
    uVar4 = (**(code **)(*unaff_x21 + 0x868))();
    if ((uVar4 & 1) == 0) {
      uVar9 = (**(code **)(*unaff_x21 + 0x168))();
      uVar6 = (**(code **)(*unaff_x20 + 0x168))();
      puVar8 = StringLiteral_8479;
      goto LAB_033aa364;
    }
    unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x878))();
  }
  puVar8 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
                    /* try { // try from 033aa110 to 034aa113 has its CatchHandler @ 033aa28c */
                    /* try { // try from 033aa114 to 034aa15f has its CatchHandler @ 033aa050 */
  uVar9 = *(undefined8 *)StringLiteral_1175;
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  plVar5 = (long *)FUN_033a87c8(uVar9);
  if (unaff_x21 != plVar5) {
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar4 = FUN_033aa3c0(unaff_x21);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar9 = thunk_FUN_01de27b8();
      uVar6 = thunk_FUN_01dd295c(StringLiteral_8476);
      FUN_03393770(uVar9,uVar6,0);
      uVar6 = thunk_FUN_01dd295c(StringLiteral_8477);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar9,uVar6);
    }
    plVar5 = (long *)(**(code **)(*unaff_x20 + 0x878))();
    if (plVar5 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar5 + 0x818))(plVar5,*(undefined8 *)(*plVar5 + 0x820));
      if (unaff_x21 != (long *)0x0) {
        iVar2 = (**(code **)(*unaff_x21 + 0x818))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x820));
        if (iVar1 != iVar2) {
          FUN_01a94b18(unaff_x21);
          uVar9 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
          FUN_01a94b18(plVar5);
          uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          puVar8 = StringLiteral_8478;
LAB_033aa364:
          uVar7 = thunk_FUN_01dd295c(puVar8);
          uVar9 = FUN_0326b5e0(uVar7,uVar9,uVar6,0);
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar6 = thunk_FUN_01de27b8();
          FUN_0328dba4(uVar6,uVar9,0);
          uVar9 = thunk_FUN_01dd295c(StringLiteral_8477);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar6,uVar9);
        }
        FUN_033aaa34();
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar3 = FUN_033aa664(0);
        goto LAB_033aa20c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  (**(code **)(*unaff_x20 + 0x248))();
  uVar3 = FUN_02194140();
LAB_033aa20c:
  return ~uVar3 >> 0x1f;
}


