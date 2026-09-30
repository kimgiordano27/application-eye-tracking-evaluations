/*
FUNCTION_NAME: FUN_03993aa4
ENTRY_POINT: 03993aa4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_03993aa4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  
  if ((DAT_04539e7d & 1) == 0) {
    FUN_01c5d288(Method_System_Xml_Linq_XObject_Annotation<BaseUriAnnotation>__);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_04539e7d = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar6 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,
                           *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
      lVar5 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      puVar3 = Method_System_Xml_Linq_XObject_Annotation<BaseUriAnnotation>__;
      puVar2 = UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo;
      puVar1 = PTR_DAT_0422fb28;
      if (lVar5 != 0) {
        uVar13 = 0;
        do {
          if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar13) {
            return *(long *)(param_1 + 0x10);
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar13) {
LAB_03993d50:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          lVar14 = (long)(int)uVar13;
          lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
          if (lVar5 == 0) break;
          iVar4 = FUN_031572ac(lVar5,0x2c,0);
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_03993d50;
          lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
          if (iVar4 == -1) {
            lVar11 = 0;
          }
          else {
            if ((lVar5 == 0) || (lVar5 = FUN_031548e4(lVar5,0,iVar4,0), lVar5 == 0)) break;
            lVar5 = FUN_03156e1c(lVar5,0);
            lVar11 = *(long *)(param_1 + 0x18);
            if (lVar11 == 0) break;
            if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_03993d50;
            lVar11 = *(long *)(lVar11 + lVar14 * 8 + 0x20);
            if ((lVar11 == 0) ||
               (lVar11 = System_IO_BufferedStream_<DisposeAsync>d__34__MoveNext(lVar11,iVar4 + 1,0),
               lVar11 == 0)) break;
            lVar11 = FUN_03156e1c(lVar11,0);
          }
          plVar15 = *(long **)(param_1 + 0x10);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar7 = FUN_01c5d624(lVar5,0,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
          if (plVar15 == (long *)0x0) break;
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0)) {
LAB_03993d54:
            uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar6,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar13) goto LAB_03993d50;
          plVar15[lVar14 + 4] = lVar7;
          lVar7 = *(long *)(param_1 + 0x10);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_03993d50;
          uVar9 = FUN_032e935c(*(undefined8 *)(lVar7 + lVar14 * 8 + 0x20),0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar11 == 0) {
              uVar6 = thunk_FUN_01c273e8(
                                        Method_System_Xml_Linq_XObject_Annotation<LineInfoAnnotation>__
                                        );
              uVar6 = FUN_03131f18(uVar6,lVar5,0);
              thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
              uVar10 = thunk_FUN_01c496e0();
              FUN_033144b8(uVar10,uVar6,0);
              uVar6 = thunk_FUN_01c273e8(
                                        Method_System_Xml_Linq_XObject_Annotation<BaseUriAnnotation>__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar10,uVar6);
            }
            plVar15 = (long *)FUN_032185a8(lVar11,0);
            uVar9 = FUN_03218548(plVar15,0,0);
            if ((uVar9 & 1) != 0) {
              if (plVar15 == (long *)0x0) break;
              plVar12 = *(long **)(param_1 + 0x10);
              lVar5 = (**(code **)(*plVar15 + 0x278))
                                (plVar15,lVar5,1,*(undefined8 *)(*plVar15 + 0x280));
              if (plVar12 == (long *)0x0) break;
              if ((lVar5 != 0) &&
                 (lVar11 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0))
              goto LAB_03993d54;
              if (*(uint *)(plVar12 + 3) <= uVar13) goto LAB_03993d50;
              plVar12[lVar14 + 4] = lVar5;
            }
          }
          lVar5 = *(long *)(param_1 + 0x18);
          uVar13 = uVar13 + 1;
        } while (lVar5 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar5 = 0;
  }
  return lVar5;
}


