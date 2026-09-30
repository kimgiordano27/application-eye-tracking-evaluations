/*
FUNCTION_NAME: UnityEngine.ProBuilder.SelectionPickerRenderer$$RenderSelectionPickerTexture
ENTRY_POINT: 03993c40
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
UnityEngine_ProBuilder_SelectionPickerRenderer__RenderSelectionPickerTexture(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  uint unaff_w23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  
  do {
    if ((param_1 != 0) &&
       (lVar2 = thunk_FUN_01c495e4(param_1,*(undefined8 *)(*unaff_x28 + 0x40)), lVar2 == 0)) {
LAB_03993d54:
      uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,0);
    }
    if (*(uint *)(unaff_x28 + 3) <= unaff_w23) {
LAB_03993d50:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    unaff_x28[unaff_x27 + 4] = param_1;
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) goto LAB_03993d24;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w23) goto LAB_03993d50;
    uVar3 = FUN_032e935c(*(undefined8 *)(lVar2 + unaff_x27 * 8 + 0x20),0,0);
    if ((uVar3 & 1) != 0) {
      if (unaff_x21 == 0) {
        uVar6 = thunk_FUN_01c273e8(Method_System_Xml_Linq_XObject_Annotation<LineInfoAnnotation>__);
        uVar6 = FUN_03131f18(uVar6,unaff_x20,0);
        thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
        uVar7 = thunk_FUN_01c496e0();
        FUN_033144b8(uVar7,uVar6,0);
        uVar6 = thunk_FUN_01c273e8(Method_System_Xml_Linq_XObject_Annotation<BaseUriAnnotation>__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar6);
      }
      plVar4 = (long *)FUN_032185a8(unaff_x21,0);
      uVar3 = FUN_03218548(plVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (plVar4 == (long *)0x0) {
LAB_03993d24:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar8 = *(long **)(unaff_x19 + 0x10);
        lVar2 = (**(code **)(*plVar4 + 0x278))(plVar4,unaff_x20,1,*(undefined8 *)(*plVar4 + 0x280));
        if (plVar8 == (long *)0x0) goto LAB_03993d24;
        if ((lVar2 != 0) &&
           (lVar5 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar8 + 0x40)), lVar5 == 0))
        goto LAB_03993d54;
        if (*(uint *)(plVar8 + 3) <= unaff_w23) goto LAB_03993d50;
        plVar8[unaff_x27 + 4] = lVar2;
      }
    }
    lVar2 = *(long *)(unaff_x19 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    if (lVar2 == 0) goto LAB_03993d24;
    if ((int)*(uint *)(lVar2 + 0x18) <= (int)unaff_w23) {
      return *(undefined8 *)(unaff_x19 + 0x10);
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w23) goto LAB_03993d50;
    unaff_x27 = (long)(int)unaff_w23;
    lVar2 = *(long *)(lVar2 + unaff_x27 * 8 + 0x20);
    if (lVar2 == 0) goto LAB_03993d24;
    iVar1 = FUN_031572ac(lVar2,0x2c,0);
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 == 0) goto LAB_03993d24;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w23) goto LAB_03993d50;
    unaff_x20 = *(long *)(lVar2 + unaff_x27 * 8 + 0x20);
    if (iVar1 == -1) {
      unaff_x21 = 0;
    }
    else {
      if ((unaff_x20 == 0) || (lVar2 = FUN_031548e4(unaff_x20,0,iVar1,0), lVar2 == 0))
      goto LAB_03993d24;
      unaff_x20 = FUN_03156e1c(lVar2,0);
      lVar2 = *(long *)(unaff_x19 + 0x18);
      if (lVar2 == 0) goto LAB_03993d24;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w23) goto LAB_03993d50;
      lVar2 = *(long *)(lVar2 + unaff_x27 * 8 + 0x20);
      if ((lVar2 == 0) ||
         (lVar2 = System_IO_BufferedStream_<DisposeAsync>d__34__MoveNext(lVar2,iVar1 + 1,0),
         lVar2 == 0)) goto LAB_03993d24;
      unaff_x21 = FUN_03156e1c(lVar2,0);
    }
    unaff_x28 = *(long **)(unaff_x19 + 0x10);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    param_1 = FUN_01c5d624(unaff_x20,0,*unaff_x25,*unaff_x26);
    if (unaff_x28 == (long *)0x0) goto LAB_03993d24;
  } while( true );
}


