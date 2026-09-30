/*
FUNCTION_NAME: OVRPlugin$$CreateInsightTriangleMesh
ENTRY_POINT: 0337a970
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__CreateInsightTriangleMesh(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x24;
  long lVar9;
  undefined8 uVar10;
  
  FUN_02b67c90();
  lVar2 = FUN_02345c18();
  if (lVar2 != 0) {
    plVar3 = (long *)(**(code **)(*unaff_x24 + 0x2e8))();
    if (plVar3 == (long *)0x0) {
LAB_0337ac8c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x288))
                               (plVar3,*(undefined8 *)(lVar2 + 0x18),
                                *(undefined8 *)(*plVar3 + 0x290));
    plVar4 = (long *)(**(code **)(*unaff_x24 + 0x2e8))();
    if (plVar4 == (long *)0x0) goto LAB_0337ac8c;
    lVar2 = (**(code **)(*plVar4 + 0x288))
                      (plVar4,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(*plVar4 + 0x290));
    puVar1 = PTR_DAT_0422fb28;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
    }
    uVar5 = FUN_032ea0d4(plVar3,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_032ea0d4(lVar2,0,0);
      if ((uVar5 & 1) != 0) {
        if (lVar2 == 0) goto LAB_0337ac8c;
        uVar6 = FUN_032ebb74(lVar2,0);
        puVar1 = 
        Method_System_Collections_Generic_Dictionary_Enumerator<int,_PointerEventData>_get_Current__
        ;
        lVar2 = *(long *)
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_PointerEventData>_get_Current__
        ;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar2);
          lVar2 = *(long *)puVar1;
        }
        lVar9 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
        if (lVar9 == 0) {
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar2);
            lVar2 = *(long *)puVar1;
          }
          uVar10 = **(undefined8 **)(lVar2 + 0xb8);
          lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_Dispose__
                                    );
          FUN_02b67c90(lVar9,uVar10,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_PointerEventData>_Dispose__
                       ,0);
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar9;
        }
        plVar4 = (long *)FUN_02345c18(uVar6,lVar9,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<int,_Panel>_MoveNext__
                                     );
        uVar5 = FUN_03210910(plVar4,0,0);
        puVar1 = PTR_DAT_04230910;
        if ((uVar5 & 1) != 0) {
          lVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
          if (lVar2 == 0) goto LAB_0337ac8c;
          if ((unaff_x21 != 0) && (lVar9 = thunk_FUN_01c495e4(), lVar9 == 0)) goto LAB_0337ac94;
          uVar7 = *(uint *)(lVar2 + 0x18);
          if (uVar7 == 0) {
LAB_0337ac90:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          *(long *)(lVar2 + 0x20) = unaff_x21;
          if (unaff_x20 != 0) {
            lVar9 = thunk_FUN_01c495e4();
            if (lVar9 == 0) goto LAB_0337ac94;
            uVar7 = *(uint *)(lVar2 + 0x18);
          }
          if (uVar7 < 2) goto LAB_0337ac90;
          *(long *)(lVar2 + 0x28) = unaff_x20;
          if (plVar3 == (long *)0x0) goto LAB_0337ac8c;
          uVar6 = (**(code **)(*plVar3 + 0x8f8))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x900));
          *unaff_x22 = uVar6;
          lVar2 = FUN_01c5d2fc(*(undefined8 *)puVar1,2);
          if (lVar2 == 0) goto LAB_0337ac8c;
          if ((unaff_x21 != 0) && (lVar9 = thunk_FUN_01c495e4(), lVar9 == 0)) {
LAB_0337ac94:
            uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar6,0);
          }
          uVar7 = *(uint *)(lVar2 + 0x18);
          if (uVar7 == 0) goto LAB_0337ac90;
          *(long *)(lVar2 + 0x20) = unaff_x21;
          if (unaff_x20 != 0) {
            lVar9 = thunk_FUN_01c495e4();
            if (lVar9 == 0) goto LAB_0337ac94;
            uVar7 = *(uint *)(lVar2 + 0x18);
          }
          if (uVar7 < 2) goto LAB_0337ac90;
          *(long *)(lVar2 + 0x28) = unaff_x20;
          if (plVar4 == (long *)0x0) goto LAB_0337ac8c;
          uVar6 = (**(code **)(*plVar4 + 0x3d8))(plVar4,lVar2,*(undefined8 *)(*plVar4 + 0x3e0));
          if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
          }
          plVar3 = (long *)FUN_033a78fc(0);
          if (plVar3 == (long *)0x0) goto LAB_0337ac8c;
          uVar6 = (**(code **)(*plVar3 + 0x188))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 400));
          uVar8 = 1;
          goto LAB_0337ac6c;
        }
      }
    }
  }
  uVar6 = 0;
  uVar8 = 0;
  *unaff_x22 = 0;
LAB_0337ac6c:
  *unaff_x19 = uVar6;
  return uVar8;
}


