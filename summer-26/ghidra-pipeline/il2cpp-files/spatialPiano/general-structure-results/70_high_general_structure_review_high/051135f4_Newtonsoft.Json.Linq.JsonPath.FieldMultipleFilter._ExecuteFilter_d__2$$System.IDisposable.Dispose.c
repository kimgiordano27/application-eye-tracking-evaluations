/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 051135f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051139a8) */
/* WARNING: Removing unreachable block (ram,0x051139ac) */

undefined8
Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (void)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  int unaff_w21;
  long *unaff_x23;
  ulong unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x29;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  
  do {
    uVar5 = FUN_0510dc34(unaff_x29,unaff_w25,3,unaff_x27);
    plVar8 = unaff_x23;
    if (((uVar5 & 1) != 0) &&
       (uVar5 = FUN_05016ec0(unaff_x23,0,0), plVar8 = unaff_x29, (uVar5 & 1) == 0)) {
      if (unaff_x26 == 0) {
        unaff_x26 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d8678);
        FUN_03abf17c(unaff_x26,*(undefined4 *)(unaff_x20 + 0x18),
                     *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberFlatList_var);
        if (unaff_x26 == 0) goto LAB_05113c54;
        lVar6 = *(long *)(unaff_x26 + 0x10);
        lVar11 = *(long *)PTR_DAT_067d8660;
        *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_05113c54;
        uVar2 = *(uint *)(unaff_x26 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x26 + 0x18) = uVar2 + 1;
          *(long **)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = unaff_x23;
        }
        else {
          FUN_03abf904(unaff_x26,unaff_x23,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar6 = *(long *)(unaff_x26 + 0x10);
      lVar11 = *(long *)PTR_DAT_067d8660;
      *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
      if (lVar6 == 0) {
LAB_05113c54:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar2 = *(uint *)(unaff_x26 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x26 + 0x18) = uVar2 + 1;
        *(long **)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = unaff_x29;
        plVar8 = unaff_x23;
      }
      else {
        FUN_03abf904(unaff_x26,unaff_x29,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        plVar8 = unaff_x23;
      }
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x24) {
        if (unaff_x26 != 0) {
          in_stack_00000020 =
               (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067da148,
                                    *(undefined4 *)(unaff_x26 + 0x18));
          FUN_03abfdc4(unaff_x26,in_stack_00000020,
                       *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberElement_var);
        }
        uVar5 = FUN_05016eec(plVar8,0,0);
        if ((uVar5 & 1) == 0) goto LAB_05113acc;
        if ((in_stack_00000020 == (long *)0x0) && (in_stack_00000058._4_4_ == 0)) {
          if ((plVar8 == (long *)0x0) ||
             (lVar6 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0)),
             lVar6 == 0)) goto LAB_05113c54;
          if ((*(long *)(lVar6 + 0x18) == 0) && ((unaff_w25 >> 0x12 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0511383c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (**(code **)(*plVar8 + 0x348))(plVar8);
            return uVar7;
          }
LAB_05113844:
          in_stack_00000020 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067da148,1);
          if (in_stack_00000020 == (long *)0x0) goto LAB_05113c54;
          if ((plVar8 != (long *)0x0) &&
             (lVar6 = thunk_FUN_02f45174(plVar8,*(undefined8 *)(*in_stack_00000020 + 0x40)),
             lVar6 == 0)) {
            uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar7,0);
          }
          if ((int)in_stack_00000020[3] == 0) {
LAB_05113c58:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          in_stack_00000020[4] = (long)plVar8;
        }
        else if (in_stack_00000020 == (long *)0x0) goto LAB_05113844;
        if (in_stack_00000030 == 0) {
          lVar11 = *(long *)PTR_DAT_067cc9c8;
          lVar6 = *(long *)(lVar11 + 0x38);
          if (lVar6 == 0) {
            FUN_02f41ef8(lVar11);
            lVar6 = *(long *)(lVar11 + 0x38);
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          in_stack_00000078 = **(undefined8 **)(lVar6 + 0xb8);
        }
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar8 = (long *)(**(code **)(*in_stack_00000028 + 0x188))
                                   (in_stack_00000028,unaff_w25,in_stack_00000020,&stack0x00000078,
                                    in_stack_00000040);
        uVar5 = FUN_05015fd8(plVar8,0,0);
        if ((uVar5 & 1) != 0) {
LAB_05113acc:
          uVar7 = (**(code **)(*in_stack_00000048 + 0x2d8))
                            (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x2e0));
          thunk_FUN_02f6ef30(PTR_DAT_067c9a38);
          uVar9 = thunk_FUN_02f45270();
          FUN_050d7908(uVar9,uVar7,in_stack_00000038,0);
          uVar7 = thunk_FUN_02f6ef30(UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar9,uVar7);
        }
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          bVar1 = *(byte *)(*(long *)PTR_DAT_067cf988 + 0x130);
          if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_067cf988
             )) {
            uVar7 = (**(code **)(lVar6 + 0x348))(plVar8);
            return uVar7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar8);
        }
        goto LAB_05113c54;
      }
      bVar3 = *(uint *)(unaff_x20 + 0x18) <= unaff_x24;
      if (unaff_w21 == 0) {
        if (bVar3) goto LAB_05113c58;
        plVar4 = *(long **)(unaff_x19 + unaff_x24 * 8);
        if (plVar4 == (long *)0x0) goto LAB_05113c54;
        pcVar10 = *(code **)(*plVar4 + 0x298);
        uVar7 = *(undefined8 *)(*plVar4 + 0x2a0);
      }
      else {
        if (bVar3) goto LAB_05113c58;
        plVar4 = *(long **)(unaff_x19 + unaff_x24 * 8);
        if (plVar4 == (long *)0x0) goto LAB_05113c54;
        pcVar10 = *(code **)(*plVar4 + 0x2c8);
        uVar7 = *(undefined8 *)(*plVar4 + 0x2d0);
      }
      unaff_x29 = (long *)(*pcVar10)(plVar4,1,uVar7);
      uVar5 = FUN_05016ec0(unaff_x29,0,0);
    } while ((uVar5 & 1) != 0);
    unaff_x27 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,in_stack_00000058._4_4_);
    if (*(int *)(*(long *)PTR_DAT_067c9a28 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9a28);
    }
    unaff_x23 = plVar8;
    if (unaff_x29 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_067d8550 + 0x130);
      if ((*(byte *)(*unaff_x29 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_067d8550)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(unaff_x29);
      }
    }
  } while( true );
}


