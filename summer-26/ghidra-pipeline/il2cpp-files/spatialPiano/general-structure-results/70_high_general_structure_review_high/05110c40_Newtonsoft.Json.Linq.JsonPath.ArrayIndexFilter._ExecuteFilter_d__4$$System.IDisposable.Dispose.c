/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter.<ExecuteFilter>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 05110c40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__System_IDisposable_Dispose
               (undefined8 param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 unaff_w19;
  long unaff_x22;
  long *unaff_x24;
  ulong uVar10;
  long *unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  while( true ) {
    lVar4 = thunk_FUN_02f45270(param_1);
    FUN_03abf17c(lVar4,2,*unaff_x28);
    if (lVar4 == 0) break;
    do {
      lVar7 = *(long *)(lVar4 + 0x10);
      lVar9 = *unaff_x29;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05110da4;
      uVar3 = *(uint *)(lVar4 + 0x18);
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar3 + 1;
        *(long **)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = unaff_x24;
      }
      else {
        FUN_03abf904(lVar4,unaff_x24,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      do {
        unaff_w26 = unaff_w26 + 1;
        if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w26) {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            lVar7 = FUN_03ac12f8(lVar4,*(undefined8 *)System_Xml_XmlNode_var);
            if (lVar7 == 0) goto LAB_05110da4;
            if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
              lVar4 = 0;
            }
            else {
              lVar4 = 0;
              uVar10 = 0;
              uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              do {
                if (uVar8 <= uVar10) {
LAB_05110da8:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                lVar9 = *(long *)(lVar7 + 0x20 + uVar10 * 8);
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar8 = FUN_0510db1c(lVar9,unaff_w19);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  bVar1 = lVar4 != 0;
                  lVar4 = lVar9;
                  if (bVar1) {
                    uVar5 = thunk_FUN_02f6ef30(PTR_DAT_067d9b28);
                    uVar5 = FUN_05116b30(uVar5,0);
                    thunk_FUN_02f6ef30(PTR_DAT_067d94b0);
                    uVar6 = thunk_FUN_02f45270();
                    FUN_050147b4(uVar6,uVar5,0);
                    uVar5 = thunk_FUN_02f6ef30(
                                              System_Runtime_Serialization_XmlObjectSerializerWriteContext_var
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_02f0888c(uVar6,uVar5);
                  }
                }
                uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
                uVar10 = uVar10 + 1;
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
            }
          }
          return lVar4;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_w26) goto LAB_05110da8;
        unaff_x24 = *(long **)(unaff_x22 + (long)(int)unaff_w26 * 8 + 0x20);
        if (unaff_x24 == (long *)0x0) goto LAB_05110da4;
        lVar7 = *unaff_x24;
        bVar2 = *(byte *)(*unaff_x25 + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x24);
        }
        (**(code **)(lVar7 + 0x1b8))(unaff_x24,*(undefined8 *)(lVar7 + 0x1c0));
        uVar10 = FUN_04f6d990();
      } while ((uVar10 & 1) == 0);
    } while (lVar4 != 0);
    param_1 = *unaff_x27;
  }
LAB_05110da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


