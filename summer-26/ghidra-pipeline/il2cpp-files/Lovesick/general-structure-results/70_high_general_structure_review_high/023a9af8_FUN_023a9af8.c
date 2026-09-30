/*
FUNCTION_NAME: FUN_023a9af8
ENTRY_POINT: 023a9af8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023a9cfc) */

int FUN_023a9af8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_03781f3e & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_Remove__
                      );
    DAT_03781f3e = 1;
  }
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
    puVar3 = StringLiteral_10310;
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar4 = iVar4 + 0x187;
      plVar6 = (long *)FUN_013619f8(*(long *)(param_1 + 0x48),
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_Remove__
                                   );
      puVar2 = 
      Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
      ;
      puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023a9bf4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar1,0);
LAB_023a9bf4:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return iVar4;
          }
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 == 0) goto LAB_023a9cac;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_023a9c94;
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023a9c50;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_023a9c50:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar5 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
        iVar4 = iVar5 + iVar4 * 0x17;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_023a9c94:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_023a9cc8;
    }
  }
LAB_023a9cac:
  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_023a9cc8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return iVar4;
}


