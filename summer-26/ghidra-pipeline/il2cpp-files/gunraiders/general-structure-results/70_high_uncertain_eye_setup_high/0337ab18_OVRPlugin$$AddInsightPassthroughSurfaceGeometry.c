/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 0337ab18
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


undefined8 OVRPlugin__AddInsightPassthroughSurfaceGeometry(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  puVar1 = PTR_DAT_04230910;
  lVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
  if (lVar2 == 0) goto LAB_0337ac8c;
  if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_01c495e4(), lVar3 == 0)) goto LAB_0337ac94;
  uVar6 = *(uint *)(lVar2 + 0x18);
  if (uVar6 != 0) {
    *(long *)(lVar2 + 0x20) = unaff_x21;
    if (unaff_x20 != 0) {
      lVar3 = thunk_FUN_01c495e4();
      if (lVar3 == 0) goto LAB_0337ac94;
      uVar6 = *(uint *)(lVar2 + 0x18);
    }
    if (1 < uVar6) {
      *(long *)(lVar2 + 0x28) = unaff_x20;
      if (unaff_x23 != (long *)0x0) {
        uVar4 = (**(code **)(*unaff_x23 + 0x8f8))();
        *unaff_x22 = uVar4;
        lVar2 = FUN_01c5d2fc(*(undefined8 *)puVar1,2);
        if (lVar2 != 0) {
          if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_01c495e4(), lVar3 == 0)) {
LAB_0337ac94:
            uVar4 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar4,0);
          }
          uVar6 = *(uint *)(lVar2 + 0x18);
          if (uVar6 == 0) goto LAB_0337ac90;
          *(long *)(lVar2 + 0x20) = unaff_x21;
          if (unaff_x20 != 0) {
            lVar3 = thunk_FUN_01c495e4();
            if (lVar3 == 0) goto LAB_0337ac94;
            uVar6 = *(uint *)(lVar2 + 0x18);
          }
          if (uVar6 < 2) goto LAB_0337ac90;
          *(long *)(lVar2 + 0x28) = unaff_x20;
          if (unaff_x24 != (long *)0x0) {
            uVar4 = (**(code **)(*unaff_x24 + 0x3d8))();
            if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
            }
            plVar5 = (long *)FUN_033a78fc(0);
            if (plVar5 != (long *)0x0) {
              uVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 400));
              *unaff_x19 = uVar4;
              return 1;
            }
          }
        }
      }
LAB_0337ac8c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
LAB_0337ac90:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


