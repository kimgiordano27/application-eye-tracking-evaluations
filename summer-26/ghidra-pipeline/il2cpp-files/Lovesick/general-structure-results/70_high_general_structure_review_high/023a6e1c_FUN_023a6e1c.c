/*
FUNCTION_NAME: FUN_023a6e1c
ENTRY_POINT: 023a6e1c
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


/* WARNING: Removing unreachable block (ram,0x023a70c4) */

long FUN_023a6e1c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  if ((DAT_03781f2c & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f5d40);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(
                      Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_Remove__
                      );
    DAT_03781f2c = 1;
  }
  puVar1 = PTR_DAT_033f5d40;
  if (param_3 != (long *)0x0) {
    lVar7 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_033f5d40) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_023a6ee4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(param_3,*(long *)PTR_DAT_033f5d40,0);
LAB_023a6ee4:
    lVar7 = (*(code *)*puVar5)(param_3,puVar5[1]);
    puVar4 = StringLiteral_10310;
    if (lVar7 != 0) {
      plVar6 = (long *)FUN_013619f8(lVar7,*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_Remove__
                                   );
      puVar3 = 
      Method_System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_System_Xml_IValidationEventHandling_SendEvent__
      ;
      puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_023a6f70;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_023a6f70:
        uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          lVar7 = 0;
          iVar12 = 6;
          iVar11 = 6;
          goto joined_r0x023a7038;
        }
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_023a6fcc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,0);
LAB_023a6fcc:
        lVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar9 = thunk_FUN_015fe514(*(undefined8 *)(lVar7 + 0x38),param_2,0);
      } while (((uVar9 & 1) == 0) &&
              ((lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)puVar1), lVar7 == 0 ||
               (lVar7 = FUN_023a6e1c(param_1,param_2,lVar7), lVar7 == 0))));
      iVar12 = 5;
      iVar11 = 5;
joined_r0x023a7038:
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_023a7088;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,0);
LAB_023a7088:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
        iVar11 = iVar12;
      }
      if (iVar11 != 5) {
        lVar7 = 0;
      }
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


