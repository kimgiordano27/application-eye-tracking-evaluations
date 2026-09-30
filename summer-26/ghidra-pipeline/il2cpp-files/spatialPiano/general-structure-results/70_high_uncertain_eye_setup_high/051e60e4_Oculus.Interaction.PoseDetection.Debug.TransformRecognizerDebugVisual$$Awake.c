/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.Debug.TransformRecognizerDebugVisual$$Awake
ENTRY_POINT: 051e60e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051e654c) */
/* WARNING: Removing unreachable block (ram,0x051e63b0) */

ulong Oculus_Interaction_PoseDetection_Debug_TransformRecognizerDebugVisual__Awake
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  
  iVar4 = (**(code **)(param_1 + 0x228))(param_2,*(undefined8 *)(param_1 + 0x230));
  if (iVar4 == 8) {
    if (*(int *)(*(long *)PTR_DAT_067ca180 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_052042b8();
    uVar5 = FUN_051e7ae0();
    in_stack_00000028 = 0;
    FUN_03e1bd20(&stack0x00000028,uVar5,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    return in_stack_00000028;
  }
  if (iVar4 != 2) {
    FUN_02a7da48();
    FUN_051ff9d0();
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar8 = FUN_050656a0(0);
    FUN_02a7da48();
    uVar5 = (**(code **)(*unaff_x19 + 0x228))();
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar5);
    uVar9 = thunk_FUN_02f6ef30(System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_TypeInfo
                              );
    uVar9 = thunk_FUN_02f44ec4(uVar9,&stack0x00000008);
    uVar10 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Type>_TypeInfo);
    FUN_051b937c(uVar10,uVar8,uVar9,0);
    uVar8 = FUN_0515e14c();
    uVar9 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Transform>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar8,uVar9);
  }
  FUN_03e1bd20(&stack0x00000020,0,
               *(undefined8 *)
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
              );
                    /* try { // try from 051e611c to 052e6137 has its CatchHandler @ 051e6204 */
  lVar12 = *unaff_x19;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_051e61b4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
                    /* try { // try from 051e6150 to 052e6153 has its CatchHandler @ 051e61fc */
                    /* try { // try from 051e6154 to 052e61f3 has its CatchHandler @ 051e6088 */
  puVar6 = (undefined8 *)FUN_02f421d0();
LAB_051e61b4:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar3 = PTR_DAT_067ccba8;
  puVar2 = PTR_DAT_067ca180;
  puVar1 = PTR_DAT_067c91b8;
  in_stack_00000010 = &stack0x00000018;
  in_stack_00000008 = 0;
  do {
    in_stack_00000018 = plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_051e6238;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,0);
LAB_051e6238:
    uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    plVar7 = in_stack_00000018;
    if ((uVar13 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return in_stack_00000020;
      }
      lVar12 = *in_stack_00000018;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_051e637c;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *in_stack_00000018;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_051e629c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)puVar3,0);
LAB_051e629c:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    uVar13 = in_stack_00000020;
    if (iVar4 != 8) {
      uVar8 = FUN_051ff9d0(plVar7,0);
      lVar12 = thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050656a0(0);
      (**(code **)(*unaff_x19 + 0x228))();
      thunk_FUN_02f6ef30(System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_TypeInfo);
      uVar10 = thunk_FUN_02f44ec4();
      uVar11 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Task>_TypeInfo);
      uVar9 = FUN_051b937c(uVar11,uVar9,uVar10,0);
      uVar8 = FUN_0515e14c(plVar7,uVar8,uVar9,0);
      uVar9 = thunk_FUN_02f6ef30(System_Collections_Generic_IList<Transform>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,uVar9);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_052042b8(plVar7,0);
    FUN_051e7ae0();
    if ((uVar13 & 0xff) != 0) {
      FUN_03e1bd20();
    }
    in_stack_00000020 = 0;
    plVar7 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_051e6398;
    }
  }
LAB_051e637c:
  puVar6 = (undefined8 *)FUN_02f421d0(in_stack_00000018,*(long *)PTR_DAT_067c91b0,0);
LAB_051e6398:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return in_stack_00000020;
}


