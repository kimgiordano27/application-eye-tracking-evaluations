/*
FUNCTION_NAME: FUN_023ac8ec
ENTRY_POINT: 023ac8ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023acad8) */

void FUN_023ac8ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_03781f64 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_Remove__
                      );
    DAT_03781f64 = 1;
  }
  puVar3 = StringLiteral_10310;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar4 = (long *)FUN_013619f8(*(long *)(param_1 + 0x28),
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_Remove__
                                 );
    puVar2 = 
    Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
    ;
    puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_023ac9c4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar1,0);
LAB_023ac9c4:
      uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_023acaa0;
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 == 0) goto LAB_023aca78;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_023aca60;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_023aca20;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar2,0);
LAB_023aca20:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    } while( true );
  }
  goto LAB_023acad0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_023aca60:
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_023aca94;
    }
  }
LAB_023aca78:
  puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar3,0);
LAB_023aca94:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_023acaa0:
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023acac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),param_1,*(undefined8 *)(lVar7 + 0x28))
    ;
    return;
  }
LAB_023acad0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


