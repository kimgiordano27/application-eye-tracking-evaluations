/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 04d4c82c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  uint uVar12;
  uint uVar13;
  
  lVar8 = FUN_02b3c908(**(undefined8 **)(param_1 + 0x2f8),0x100);
  *unaff_x21 = lVar8;
  thunk_FUN_02bb0e9c();
  lVar8 = *unaff_x21;
  if ((lVar8 != 0) && (plVar9 = *(long **)(unaff_x19 + 0x20), plVar9 != (long *)0x0)) {
    iVar5 = (**(code **)(*plVar9 + 0x338))(plVar9,1,*(undefined8 *)(*plVar9 + 0x340));
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = *(int *)(lVar8 + 0x18) / iVar5;
    }
    *(int *)(unaff_x19 + 0x40) = iVar6;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x38) + 0x18) < unaff_w22) {
        if (0 < (int)*(uint *)(unaff_x20 + 0x10)) {
          uVar12 = *(uint *)(unaff_x20 + 0x10);
          uVar13 = 0;
          do {
            uVar4 = *(uint *)(unaff_x19 + 0x40);
            uVar2 = uVar12;
            if ((int)uVar4 <= (int)uVar12) {
              uVar2 = uVar4;
            }
            if (((int)uVar13 < 0) || ((int)uVar4 < 0)) {
LAB_04d4c9d4:
              thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
              uVar10 = thunk_FUN_02b79644();
              uVar11 = thunk_FUN_02ba3594(PTR_DAT_0632a080);
              FUN_04cf60a0(uVar10,uVar11,0);
              uVar11 = thunk_FUN_02ba3594(PTR_DAT_06332808);
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar10,uVar11);
            }
            if ((ulong)uVar2 + (ulong)uVar13 >> 0x1f != 0) {
              uVar10 = FUN_02b3cad4();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar10,*(undefined8 *)PTR_DAT_06332808);
            }
            if (*(int *)(unaff_x20 + 0x10) < (int)(uVar2 + uVar13)) goto LAB_04d4c9d4;
            iVar6 = thunk_FUN_02b485d0(0);
            lVar8 = *unaff_x21;
            if (lVar8 == 0) goto LAB_04d4c9d0;
            plVar9 = *(long **)(unaff_x19 + 0x28);
            if (plVar9 == (long *)0x0) goto LAB_04d4c9d0;
            lVar3 = 0;
            if (*(int *)(lVar8 + 0x18) != 0) {
              lVar3 = lVar8 + 0x20;
            }
            uVar7 = (**(code **)(*plVar9 + 0x1b8))
                              (plVar9,unaff_x20 + (ulong)uVar13 * 2 + (long)iVar6,uVar2,lVar3,
                               *(int *)(lVar8 + 0x18),(int)uVar12 <= (int)uVar4,
                               *(undefined8 *)(*plVar9 + 0x1c0));
            plVar9 = *(long **)(unaff_x19 + 0x10);
            if (plVar9 == (long *)0x0) goto LAB_04d4c9d0;
            (**(code **)(*plVar9 + 0x368))
                      (plVar9,*unaff_x21,0,uVar7,*(undefined8 *)(*plVar9 + 0x370));
            uVar4 = uVar12 - uVar2;
            bVar1 = (int)uVar2 <= (int)uVar12;
            uVar12 = uVar4;
            uVar13 = uVar2 + uVar13;
          } while (uVar4 != 0 && bVar1);
        }
        return;
      }
      if (*(long **)(unaff_x19 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(unaff_x19 + 0x20) + 600))();
        plVar9 = *(long **)(unaff_x19 + 0x10);
        if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04d4c9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x368))
                    (plVar9,*unaff_x21,0,unaff_w22,*(undefined8 *)(*plVar9 + 0x370));
          return;
        }
      }
    }
  }
LAB_04d4c9d0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


