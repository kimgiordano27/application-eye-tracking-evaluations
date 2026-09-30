/*
FUNCTION_NAME: FUN_0567a600
ENTRY_POINT: 0567a600
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


long FUN_0567a600(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>__ctor__
  ;
  if ((DAT_06bc01b3 & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>__ctor__
                );
    FUN_02f08768(Unity_AppUI_UI_Canvas_UxmlSerializedData_var);
    FUN_02f08768(Unity_AppUI_UI_Checkbox_UxmlSerializedData_var);
    FUN_02f08768(PTR_DAT_067ca1a8);
    DAT_06bc01b3 = 1;
  }
  if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
    return **(long **)(*(long *)puVar2 + 0xb8);
  }
  plVar3 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,2);
  uVar6 = *(undefined8 *)Unity_AppUI_UI_Canvas_UxmlSerializedData_var;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  lVar4 = FUN_050e4454(uVar6,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0567a744:
    uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar6,0);
  }
  puVar1 = Unity_AppUI_UI_Checkbox_UxmlSerializedData_var;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    lVar4 = FUN_050e4454(*(undefined8 *)puVar1,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0567a744;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      **(long **)(*(long *)puVar2 + 0xb8) = (long)plVar3;
      return **(long **)(*(long *)puVar2 + 0xb8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


