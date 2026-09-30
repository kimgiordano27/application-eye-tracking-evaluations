/*
FUNCTION_NAME: OVRManager$$set_tiledMultiResLevel
ENTRY_POINT: 033aa070
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__set_tiledMultiResLevel(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  undefined *puVar9;
  
  FUN_01d7d918(StringLiteral_1175);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  *(undefined1 *)(unaff_x21 + 0x8ab) = 1;
  if (unaff_x19 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar7 = thunk_FUN_01de27b8();
    uVar11 = thunk_FUN_01dd295c(StringLiteral_1645);
    FUN_032870b8(uVar7,uVar11,0);
LAB_033aa2dc:
    uVar11 = thunk_FUN_01dd295c(StringLiteral_8477);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar7,uVar11);
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar4 & 1) == 0) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar7 = thunk_FUN_01de27b8();
    uVar11 = thunk_FUN_01dd295c(StringLiteral_8474);
    uVar8 = thunk_FUN_01dd295c(StringLiteral_8475);
    FUN_03287130(uVar7,uVar11,uVar8,0);
    goto LAB_033aa2dc;
  }
  plVar5 = (long *)thunk_FUN_01dfff04();
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
    if ((uVar4 & 1) != 0) {
      uVar4 = (**(code **)(*plVar5 + 0x868))(plVar5);
      lVar10 = *plVar5;
      if ((uVar4 & 1) == 0) {
        uVar11 = (**(code **)(lVar10 + 0x168))(plVar5,*(undefined8 *)(lVar10 + 0x170));
        uVar7 = (**(code **)(*unaff_x20 + 0x168))();
        puVar9 = StringLiteral_8479;
        goto LAB_033aa364;
      }
      plVar5 = (long *)(**(code **)(lVar10 + 0x878))(plVar5,*(undefined8 *)(lVar10 + 0x880));
    }
    puVar9 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    uVar11 = *(undefined8 *)StringLiteral_1175;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar6 = (long *)FUN_033a87c8(uVar11);
    if (plVar5 == plVar6) {
      (**(code **)(*unaff_x20 + 0x248))();
      uVar3 = FUN_02194140();
LAB_033aa20c:
      return ~uVar3 >> 0x1f;
    }
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar4 = FUN_033aa3c0(plVar5);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar7 = thunk_FUN_01de27b8();
      uVar11 = thunk_FUN_01dd295c(StringLiteral_8476);
      FUN_03393770(uVar7,uVar11,0);
      goto LAB_033aa2dc;
    }
    plVar6 = (long *)(**(code **)(*unaff_x20 + 0x878))();
    if (plVar6 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar6 + 0x818))(plVar6,*(undefined8 *)(*plVar6 + 0x820));
      if (plVar5 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar5 + 0x818))(plVar5,*(undefined8 *)(*plVar5 + 0x820));
        if (iVar1 != iVar2) {
          FUN_01a94b18(plVar5);
          uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          FUN_01a94b18(plVar6);
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          puVar9 = StringLiteral_8478;
LAB_033aa364:
          uVar8 = thunk_FUN_01dd295c(puVar9);
          uVar11 = FUN_0326b5e0(uVar8,uVar11,uVar7,0);
          thunk_FUN_01dd295c(StringLiteral_1149);
          uVar7 = thunk_FUN_01de27b8();
          FUN_0328dba4(uVar7,uVar11,0);
          uVar11 = thunk_FUN_01dd295c(StringLiteral_8477);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar7,uVar11);
        }
        FUN_033aaa34();
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar3 = FUN_033aa664(0);
        goto LAB_033aa20c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


