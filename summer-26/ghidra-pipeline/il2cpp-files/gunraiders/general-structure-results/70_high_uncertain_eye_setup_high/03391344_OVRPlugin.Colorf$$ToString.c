/*
FUNCTION_NAME: OVRPlugin.Colorf$$ToString
ENTRY_POINT: 03391344
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


void OVRPlugin_Colorf__ToString(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  lVar1 = thunk_FUN_01c495e4();
  if (lVar1 == 0) {
LAB_033914d8:
    uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,0);
  }
  uVar6 = *(uint *)(unaff_x22 + 3);
  if (uVar6 != 0) {
    unaff_x22[4] = unaff_x23;
    lVar1 = *(long *)(unaff_x20 + 0xd0);
    if (lVar1 != 0) {
      lVar2 = thunk_FUN_01c495e4(lVar1,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar2 == 0) goto LAB_033914d8;
      uVar6 = *(uint *)(unaff_x22 + 3);
    }
    if (1 < uVar6) {
      unaff_x22[5] = lVar1;
      if (unaff_x21 != (long *)0x0) {
        lVar1 = (**(code **)(*unaff_x21 + 0x8f8))();
        *(long *)(unaff_x20 + 0xe8) = lVar1;
        plVar3 = (long *)FUN_01c5d2fc(*unaff_x24,1);
        if (plVar3 != (long *)0x0) {
          lVar2 = *(long *)(unaff_x20 + 0xe0);
          if ((lVar2 != 0) &&
             (lVar4 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_033914d8;
          if ((int)plVar3[3] == 0) goto LAB_033914d4;
          plVar3[4] = lVar2;
          if (lVar1 != 0) {
            uVar5 = FUN_032eb758(lVar1,plVar3,0);
            if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
            }
            plVar3 = (long *)FUN_033a78fc(0);
            if (plVar3 != (long *)0x0) {
              lVar1 = (**(code **)(*plVar3 + 0x188))(plVar3,uVar5,*(undefined8 *)(*plVar3 + 400));
              *(long *)(unaff_x20 + 0xf0) = lVar1;
              lVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
              if (lVar2 != 0) {
                if ((unaff_x19 != 0) && (lVar4 = thunk_FUN_01c495e4(), lVar4 == 0))
                goto LAB_033914d8;
                if (*(int *)(lVar2 + 0x18) == 0) goto LAB_033914d4;
                *(long *)(lVar2 + 0x20) = unaff_x19;
                if (lVar1 != 0) {
                  lVar1 = (**(code **)(lVar1 + 0x18))
                                    (*(undefined8 *)(lVar1 + 0x40),lVar2,
                                     *(undefined8 *)(lVar1 + 0x28));
                  if (lVar1 != 0) {
                    uVar5 = *(undefined8 *)
                             Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                    ;
                    lVar2 = thunk_FUN_01c495e4(lVar1,uVar5);
                    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(lVar1,uVar5);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
LAB_033914d4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


