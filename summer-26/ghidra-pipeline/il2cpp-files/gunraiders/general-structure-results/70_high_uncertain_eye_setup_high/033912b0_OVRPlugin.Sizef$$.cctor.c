/*
FUNCTION_NAME: OVRPlugin.Sizef$$.cctor
ENTRY_POINT: 033912b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizef___cctor(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  
  FUN_01c5d288(PTR_DAT_042305b8);
  FUN_01c5d288(PTR_DAT_04230910);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x21 + 0x689) = 1;
  lVar7 = *(long *)(unaff_x20 + 0xf0);
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)Method_FastList<string>_get_Count__;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar2 = (long *)FUN_032e04b8(uVar8,0);
    puVar1 = PTR_DAT_04230910;
    plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
    if (plVar3 == (long *)0x0) goto LAB_033914d0;
    lVar7 = *(long *)(unaff_x20 + 200);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_033914d8;
    uVar6 = *(uint *)(plVar3 + 3);
    if (uVar6 == 0) goto LAB_033914d4;
    plVar3[4] = lVar7;
    lVar7 = *(long *)(unaff_x20 + 0xd0);
    if (lVar7 != 0) {
      lVar4 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_033914d8;
      uVar6 = *(uint *)(plVar3 + 3);
    }
    if (uVar6 < 2) goto LAB_033914d4;
    plVar3[5] = lVar7;
    if (plVar2 == (long *)0x0) goto LAB_033914d0;
    lVar7 = (**(code **)(*plVar2 + 0x8f8))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x900));
    *(long *)(unaff_x20 + 0xe8) = lVar7;
    plVar2 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,1);
    if (plVar2 == (long *)0x0) goto LAB_033914d0;
    lVar4 = *(long *)(unaff_x20 + 0xe0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_033914d8;
    if ((int)plVar2[3] == 0) goto LAB_033914d4;
    plVar2[4] = lVar4;
    if (lVar7 == 0) goto LAB_033914d0;
    uVar8 = FUN_032eb758(lVar7,plVar2,0);
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
    }
    plVar2 = (long *)FUN_033a78fc(0);
    if (plVar2 == (long *)0x0) goto LAB_033914d0;
    lVar7 = (**(code **)(*plVar2 + 0x188))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 400));
    *(long *)(unaff_x20 + 0xf0) = lVar7;
  }
  lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
  if (lVar4 != 0) {
    if ((unaff_x19 != 0) && (lVar5 = thunk_FUN_01c495e4(), lVar5 == 0)) {
LAB_033914d8:
      uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar8,0);
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_033914d4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(long *)(lVar4 + 0x20) = unaff_x19;
    if (lVar7 != 0) {
      lVar7 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),lVar4,*(undefined8 *)(lVar7 + 0x28));
      if (lVar7 != 0) {
        uVar8 = *(undefined8 *)
                 Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
        ;
        lVar4 = thunk_FUN_01c495e4(lVar7,uVar8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar7,uVar8);
        }
      }
      return;
    }
  }
LAB_033914d0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


