/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldFilter.<ExecuteFilter>d__2$$<>m__Finally2
ENTRY_POINT: 05113208
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


undefined8 Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__<>m__Finally2(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  int unaff_w20;
  uint unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long *plVar15;
  long unaff_x24;
  uint unaff_w25;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 unaff_x28;
  int iStack0000000000000014;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (unaff_w20 != 0 || unaff_w21 >> 0xd != 0) {
    puVar3 = System_ComponentModel_AttributeCollection_AttributeEntry_var;
    uVar2 = unaff_w21;
    if ((unaff_w25 >> 0xc & 1) == 0) {
      puVar3 = UnityEngine_Accessibility_AccessibilityManager_NotificationContext_var;
      uVar2 = unaff_w25 >> 8 & 1;
    }
    if (uVar2 != 0) {
      uVar8 = thunk_FUN_02f6ef30(puVar3);
      uVar8 = FUN_05116b30(uVar8,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
      uVar9 = thunk_FUN_02f45270();
      uVar10 = thunk_FUN_02f6ef30(Unity_AppUI_UI_AvatarGroup_UxmlSerializedData_var);
      FUN_0504ee88(uVar9,uVar8,uVar10,0);
      goto LAB_05113de0;
    }
  }
  if ((unaff_w25 >> 8 & 1) == 0) {
    plVar15 = (long *)0x0;
    plVar16 = (long *)0x0;
  }
  else {
    uVar8 = (**(code **)(*in_stack_00000048 + 0x6f8))
                      (in_stack_00000048,in_stack_00000038,8,unaff_w25,
                       *(undefined8 *)(*in_stack_00000048 + 0x700));
    lVar6 = thunk_FUN_02f45174(uVar8,*(undefined8 *)PTR_DAT_067da148);
    puVar4 = PTR_DAT_067ca1a8;
    puVar3 = PTR_DAT_067c9a28;
    if (lVar6 == 0) goto LAB_05113c54;
    iStack0000000000000014 = unaff_w20;
    if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
      plVar15 = (long *)0x0;
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      uVar5 = 0;
      uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      plVar16 = (long *)0x0;
      do {
        if (uVar11 <= uVar5) goto LAB_05113c58;
        plVar17 = *(long **)(lVar6 + 0x20 + uVar5 * 8);
        uVar8 = FUN_02f0880c(*(undefined8 *)puVar4,in_stack_00000058._4_4_);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar3);
        }
        if (plVar17 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_067d8550 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_067d8550)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar17);
          }
        }
        uVar11 = FUN_0510dc34(plVar17,unaff_w25,3,uVar8);
        plVar15 = plVar16;
        if (((uVar11 & 1) != 0) &&
           (uVar11 = FUN_05016ec0(plVar16,0,0), plVar15 = plVar17, (uVar11 & 1) == 0)) {
          if (lVar18 == 0) {
            lVar18 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d8678);
            FUN_03abf17c(lVar18,*(undefined4 *)(lVar6 + 0x18),
                         *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberFlatList_var);
            if (lVar18 == 0) goto LAB_05113c54;
            lVar12 = *(long *)(lVar18 + 0x10);
            lVar14 = *(long *)PTR_DAT_067d8660;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_05113c54;
            uVar2 = *(uint *)(lVar18 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar2 + 1;
              *(long **)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = plVar16;
            }
            else {
              FUN_03abf904(lVar18,plVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar12 = *(long *)(lVar18 + 0x10);
          lVar14 = *(long *)PTR_DAT_067d8660;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_05113c54;
          uVar2 = *(uint *)(lVar18 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar2 + 1;
            *(long **)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = plVar17;
            plVar15 = plVar16;
          }
          else {
            FUN_03abf904(lVar18,plVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            plVar15 = plVar16;
          }
        }
        uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
        plVar16 = plVar15;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    if (lVar18 == 0) {
      plVar16 = (long *)0x0;
      unaff_w20 = iStack0000000000000014;
    }
    else {
      plVar16 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067da148,*(undefined4 *)(lVar18 + 0x18))
      ;
      FUN_03abfdc4(lVar18,plVar16,
                   *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberElement_var);
      unaff_w20 = iStack0000000000000014;
    }
  }
  uVar5 = FUN_05016ec0(plVar15,0,0);
  if ((uVar5 & 1) == 0) {
    unaff_w20 = 0;
  }
  if (unaff_w20 != 0 || (unaff_w25 >> 0xd & 1) != 0) {
    uVar8 = (**(code **)(*in_stack_00000048 + 0x6f8))
                      (in_stack_00000048,in_stack_00000038,0x10,unaff_w25,
                       *(undefined8 *)(*in_stack_00000048 + 0x700));
    lVar6 = thunk_FUN_02f45174(uVar8,*(undefined8 *)PTR_DAT_067da150);
    if (lVar6 == 0) goto LAB_05113c54;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      lVar18 = 0;
      uVar5 = 0;
      uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      plVar17 = plVar15;
      do {
        if (unaff_w21 == 0) {
          if (uVar11 <= uVar5) goto LAB_05113c58;
          plVar15 = *(long **)(lVar6 + 0x20 + uVar5 * 8);
          if (plVar15 == (long *)0x0) goto LAB_05113c54;
          pcVar13 = *(code **)(*plVar15 + 0x298);
          uVar8 = *(undefined8 *)(*plVar15 + 0x2a0);
        }
        else {
          if (uVar11 <= uVar5) goto LAB_05113c58;
          plVar15 = *(long **)(lVar6 + 0x20 + uVar5 * 8);
          if (plVar15 == (long *)0x0) goto LAB_05113c54;
          pcVar13 = *(code **)(*plVar15 + 0x2c8);
          uVar8 = *(undefined8 *)(*plVar15 + 0x2d0);
        }
        plVar7 = (long *)(*pcVar13)(plVar15,1,uVar8);
        uVar11 = FUN_05016ec0(plVar7,0,0);
        plVar15 = plVar17;
        if ((uVar11 & 1) == 0) {
          uVar8 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,in_stack_00000058._4_4_);
          if (*(int *)(*(long *)PTR_DAT_067c9a28 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9a28);
          }
          if (plVar7 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_067d8550 + 0x130);
            if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_067d8550)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar7);
            }
          }
          uVar11 = FUN_0510dc34(plVar7,unaff_w25,3,uVar8);
          if (((uVar11 & 1) != 0) &&
             (uVar11 = FUN_05016ec0(plVar17,0,0), plVar15 = plVar7, (uVar11 & 1) == 0)) {
            if (lVar18 == 0) {
              lVar18 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d8678);
              FUN_03abf17c(lVar18,*(undefined4 *)(lVar6 + 0x18),
                           *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberFlatList_var);
              if (lVar18 == 0) goto LAB_05113c54;
              lVar12 = *(long *)(lVar18 + 0x10);
              lVar14 = *(long *)PTR_DAT_067d8660;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_05113c54;
              uVar2 = *(uint *)(lVar18 + 0x18);
              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar2 + 1;
                *(long **)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = plVar17;
              }
              else {
                FUN_03abf904(lVar18,plVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar12 = *(long *)(lVar18 + 0x10);
            lVar14 = *(long *)PTR_DAT_067d8660;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_05113c54;
            uVar2 = *(uint *)(lVar18 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar2 + 1;
              *(long **)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = plVar7;
              plVar15 = plVar17;
            }
            else {
              FUN_03abf904(lVar18,plVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              plVar15 = plVar17;
            }
          }
        }
        uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
        plVar17 = plVar15;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
      if (lVar18 != 0) {
        plVar16 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067da148,
                                       *(undefined4 *)(lVar18 + 0x18));
        FUN_03abfdc4(lVar18,plVar16,
                     *(undefined8 *)System_Xml_Serialization_XmlTypeMapMemberElement_var);
      }
    }
  }
  uVar5 = FUN_05016eec(plVar15,0,0);
  if ((uVar5 & 1) != 0) {
    if ((plVar16 == (long *)0x0) && (in_stack_00000058._4_4_ == 0)) {
      if ((plVar15 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar15 + 0x3b8))(plVar15,*(undefined8 *)(*plVar15 + 0x3c0)),
         lVar6 == 0)) goto LAB_05113c54;
      if ((*(long *)(lVar6 + 0x18) == 0) && ((unaff_w25 >> 0x12 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0511383c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (**(code **)(*plVar15 + 0x348))
                          (plVar15,unaff_x22,unaff_w25,unaff_x23,unaff_x24,unaff_x28,
                           *(undefined8 *)(*plVar15 + 0x350));
        return uVar8;
      }
LAB_05113844:
      plVar16 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067da148,1);
      if (plVar16 == (long *)0x0) goto LAB_05113c54;
      if ((plVar15 != (long *)0x0) &&
         (lVar6 = thunk_FUN_02f45174(plVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar6 == 0)) {
        uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar8,0);
      }
      if ((int)plVar16[3] == 0) {
LAB_05113c58:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar16[4] = (long)plVar15;
    }
    else if (plVar16 == (long *)0x0) goto LAB_05113844;
    if (unaff_x24 == 0) {
      lVar18 = *(long *)PTR_DAT_067cc9c8;
      lVar6 = *(long *)(lVar18 + 0x38);
      if (lVar6 == 0) {
        FUN_02f41ef8(lVar18);
        lVar6 = *(long *)(lVar18 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar6 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      in_stack_00000078 = **(undefined8 **)(lVar6 + 0xb8);
    }
    in_stack_00000070 = 0;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar15 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                (unaff_x23,unaff_w25,plVar16,&stack0x00000078,in_stack_00000040,
                                 unaff_x28,in_stack_00000050,&stack0x00000070);
    uVar5 = FUN_05015fd8(plVar15,0,0);
    if ((uVar5 & 1) == 0) {
      if (plVar15 != (long *)0x0) {
        lVar6 = *plVar15;
        bVar1 = *(byte *)(*(long *)PTR_DAT_067cf988 + 0x130);
        if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067cf988))
        {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar15);
        }
        uVar8 = (**(code **)(lVar6 + 0x348))
                          (plVar15,unaff_x22,unaff_w25,unaff_x23,in_stack_00000078,unaff_x28,
                           *(undefined8 *)(lVar6 + 0x350));
        if (in_stack_00000070 != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_05113c54;
          (**(code **)(*unaff_x23 + 0x1a8))
                    (unaff_x23,&stack0x00000078,in_stack_00000070,
                     *(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        return uVar8;
      }
LAB_05113c54:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  uVar8 = (**(code **)(*in_stack_00000048 + 0x2d8))
                    (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x2e0));
  thunk_FUN_02f6ef30(PTR_DAT_067c9a38);
  uVar9 = thunk_FUN_02f45270();
  FUN_050d7908(uVar9,uVar8,in_stack_00000038,0);
LAB_05113de0:
  uVar8 = thunk_FUN_02f6ef30(UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar9,uVar8);
}


