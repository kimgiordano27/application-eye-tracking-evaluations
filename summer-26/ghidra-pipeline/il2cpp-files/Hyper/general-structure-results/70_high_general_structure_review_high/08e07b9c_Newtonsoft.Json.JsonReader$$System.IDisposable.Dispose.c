/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose
ENTRY_POINT: 08e07b9c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__System_IDisposable_Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long *unaff_x22;
  long *unaff_x24;
  
  plVar6 = (long *)(**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (plVar6 != (long *)0x0) {
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac6a228) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
          goto LAB_08e07c14;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac6a228,4);
LAB_08e07c14:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((unaff_x20 != 0) && (uVar8 = FUN_072569ec(), unaff_x19 != 0)) {
      *(undefined8 *)(unaff_x19 + 0x48) = uVar8;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x48),uVar8);
      puVar5 = PTR_DAT_0ac37268;
      puVar4 = PTR_DAT_0ac09ea8;
      puVar3 = PTR_DAT_0ac09e20;
      puVar2 = PTR_DAT_0ac09d30;
      puVar1 = PTR_DAT_0ac09cd0;
      plVar6 = *(long **)(unaff_x19 + 0x40);
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x22) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_08e07cdc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x22,1);
LAB_08e07cdc:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar9 = FUN_0a178414();
        uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_05f878c4(uVar10,uVar9,*(undefined8 *)puVar5,0);
        uVar8 = FUN_05d0896c(uVar8,uVar10,*(undefined8 *)puVar4);
        uVar9 = FUN_08aa1c24();
        FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar3);
        lVar11 = *(long *)(unaff_x19 + 0x28);
        uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_08cc3ad0();
        if (lVar11 != 0) {
          FUN_05291894(lVar11,uVar8,0);
          lVar11 = *(long *)(unaff_x19 + 0x30);
          uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
          FUN_08cc3ad0();
          if (lVar11 != 0) {
            FUN_05291894(lVar11,uVar8,0);
            lVar11 = *unaff_x24;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              lVar11 = *unaff_x24;
            }
            puVar1 = PTR_DAT_0ac0a0f8;
            puVar7 = *(undefined8 **)(lVar11 + 0xb8);
            lVar14 = puVar7[2];
            if (lVar14 == 0) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_049a583c();
                puVar7 = *(undefined8 **)(*unaff_x24 + 0xb8);
              }
              uVar8 = *puVar7;
              lVar14 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
              FUN_08cc3ad0(lVar14,uVar8,*(undefined8 *)PTR_DAT_0ac6a358,0);
              plVar6 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
              *plVar6 = lVar14;
              thunk_FUN_049ee3d8(plVar6,lVar14);
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar8 = FUN_09b8bbb0(lVar14,0);
            uVar9 = FUN_08aa1c24();
            FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


