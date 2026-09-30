/*
FUNCTION_NAME: OVRPlugin.Size3f$$.cctor
ENTRY_POINT: 033912f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Size3f___cctor(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  
  uVar7 = *param_1;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar2 = (long *)FUN_032e04b8(uVar7,0);
  puVar1 = PTR_DAT_04230910;
  plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
  if (plVar3 == (long *)0x0) {
LAB_033914d0:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar8 = *(long *)(unaff_x20 + 200);
  if ((lVar8 != 0) &&
     (lVar4 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_033914d8:
    uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,0);
  }
  uVar6 = *(uint *)(plVar3 + 3);
  if (uVar6 != 0) {
    plVar3[4] = lVar8;
    lVar8 = *(long *)(unaff_x20 + 0xd0);
    if (lVar8 != 0) {
      lVar4 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_033914d8;
      uVar6 = *(uint *)(plVar3 + 3);
    }
    if (1 < uVar6) {
      plVar3[5] = lVar8;
      if (plVar2 != (long *)0x0) {
        lVar8 = (**(code **)(*plVar2 + 0x8f8))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x900));
        *(long *)(unaff_x20 + 0xe8) = lVar8;
        plVar2 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,1);
        if (plVar2 != (long *)0x0) {
          lVar4 = *(long *)(unaff_x20 + 0xe0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
          goto LAB_033914d8;
          if ((int)plVar2[3] == 0) goto LAB_033914d4;
          plVar2[4] = lVar4;
          if (lVar8 != 0) {
            uVar7 = FUN_032eb758(lVar8,plVar2,0);
            if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
            }
            plVar2 = (long *)FUN_033a78fc(0);
            if (plVar2 != (long *)0x0) {
              lVar8 = (**(code **)(*plVar2 + 0x188))(plVar2,uVar7,*(undefined8 *)(*plVar2 + 400));
              *(long *)(unaff_x20 + 0xf0) = lVar8;
              lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
              if (lVar4 != 0) {
                if ((unaff_x19 != 0) && (lVar5 = thunk_FUN_01c495e4(), lVar5 == 0))
                goto LAB_033914d8;
                if (*(int *)(lVar4 + 0x18) == 0) goto LAB_033914d4;
                *(long *)(lVar4 + 0x20) = unaff_x19;
                if (lVar8 != 0) {
                  lVar8 = (**(code **)(lVar8 + 0x18))
                                    (*(undefined8 *)(lVar8 + 0x40),lVar4,
                                     *(undefined8 *)(lVar8 + 0x28));
                  if (lVar8 != 0) {
                    uVar7 = *(undefined8 *)
                             Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                    ;
                    lVar4 = thunk_FUN_01c495e4(lVar8,uVar7);
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(lVar8,uVar7);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_033914d0;
    }
  }
LAB_033914d4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


