/*
FUNCTION_NAME: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology$$GetWindingFlags
ENTRY_POINT: 039d9300
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_7;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_ProBuilder_MeshOperations_SurfaceTopology__GetWindingFlags(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  
  FUN_01c5d288(PTR_DAT_0422fc38);
  FUN_01c5d288(Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__);
  FUN_01c5d288(Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__);
  FUN_01c5d288(Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__);
  *(undefined1 *)(unaff_x22 + 0x10a) = 1;
  plVar13 = *(long **)(unaff_x20 + 0x10);
  if (plVar13 == (long *)0x0) {
LAB_039d937c:
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042367c0);
    FUN_032ab88c(uVar5,0);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
LAB_039d939c:
    uVar7 = FUN_032188c8();
    if ((uVar7 & 1) != 0) {
      unaff_x21 = (long *)thunk_FUN_01c0568c(0);
    }
    uVar7 = FUN_032188c8(unaff_x21,0,0);
    if ((uVar7 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_039d97c8;
      uVar7 = (**(code **)(*unaff_x21 + 0x338))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x340));
      if ((uVar7 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x21 + 0x1c8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1d0));
        uVar5 = FUN_039d9218(uVar5,uVar5);
        if (*(int *)(*(long *)PTR_DAT_0422fc80 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fc80);
        }
        lVar10 = Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling(uVar5,0);
        uVar5 = FUN_03146988(lVar10,*(undefined8 *)
                                     Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__,0);
        lVar6 = (**(code **)(*unaff_x21 + 0x248))
                          (unaff_x21,uVar5,*(undefined8 *)(*unaff_x21 + 0x250));
        if (lVar6 == 0) {
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          plVar13 = (long *)FUN_03295500(0);
          if (plVar13 == (long *)0x0) goto LAB_039d97c8;
          plVar13 = (long *)(**(code **)(*plVar13 + 0x1f8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x200));
          lVar6 = (**(code **)(*unaff_x21 + 0x2a8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x2b0));
          if (lVar6 == 0) goto LAB_039d97c8;
          uVar15 = *(undefined8 *)(lVar6 + 0x10);
          lVar6 = (**(code **)(*unaff_x21 + 0x2d8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x2e0));
          if (lVar6 == 0) goto LAB_039d97c8;
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar7 = 0;
            uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar7) goto LAB_039d97cc;
              if (plVar13 == (long *)0x0) goto LAB_039d97c8;
              lVar8 = *(long *)(lVar6 + 0x20 + uVar7 * 8);
              iVar4 = (**(code **)(*plVar13 + 0x1a8))
                                (plVar13,lVar8,uVar5,1,*(undefined8 *)(*plVar13 + 0x1b0));
              if (iVar4 == 0) {
LAB_039d97a0:
                if ((lVar8 != 0) &&
                   (lVar6 = (**(code **)(*unaff_x21 + 0x248))
                                      (unaff_x21,lVar8,*(undefined8 *)(*unaff_x21 + 0x250)),
                   lVar6 != 0)) goto LAB_039d9580;
                break;
              }
              uVar11 = FUN_03146988(uVar15,*(undefined8 *)
                                            Method_System_Xml_XmlUtf8RawTextWriter_EncodeSurrogate__
                                    ,0);
              iVar4 = (**(code **)(*plVar13 + 0x1a8))
                                (plVar13,lVar8,uVar11,1,*(undefined8 *)(*plVar13 + 0x1b0));
              if (iVar4 == 0) goto LAB_039d97a0;
              uVar11 = FUN_03146988(uVar15,*(undefined8 *)
                                            Method_System_Xml_XmlUtf8RawTextWriter_ValidateContentChars__
                                    ,0);
              iVar4 = (**(code **)(*plVar13 + 0x1a8))
                                (plVar13,lVar8,uVar11,1,*(undefined8 *)(*plVar13 + 0x1b0));
              if (iVar4 == 0) goto LAB_039d97a0;
              uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
        }
        else {
LAB_039d9580:
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar5 = FUN_03295500(0);
          if (lVar10 == 0) goto LAB_039d97c8;
LAB_039d95e0:
          uVar5 = FUN_03156d1c(lVar10,uVar5,0);
          FUN_039d9998(lVar6,uVar5);
        }
      }
    }
    else {
      lVar6 = thunk_FUN_01c5be68(0);
      if ((lVar6 == 0) ||
         (lVar8 = FUN_03315fc8(lVar6,0),
         puVar3 = Method_System_Xml_XmlUtf8RawTextWriter_InvalidXmlChar__,
         puVar2 = System_ComponentModel_CollectionChangeEventArgs_TypeInfo, lVar8 == 0))
      goto LAB_039d97c8;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar14 = 0;
        do {
          if (uVar1 <= uVar14) {
LAB_039d97cc:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          plVar13 = *(long **)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_039d97c8;
          uVar7 = (**(code **)(*plVar13 + 0x338))(plVar13,*(undefined8 *)(*plVar13 + 0x340));
          if ((uVar7 & 1) == 0) {
            uVar5 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            uVar5 = FUN_039d9218(uVar5,uVar5);
            plVar9 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar2);
            FUN_03234cd0(plVar9,uVar5,0);
            if (plVar9 == (long *)0x0) goto LAB_039d97c8;
            lVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            uVar5 = FUN_03146988(lVar10,*(undefined8 *)puVar3,0);
            lVar6 = (**(code **)(*plVar13 + 0x248))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x250))
            ;
            if (lVar6 == 0) {
              uVar5 = FUN_03146988(lVar10,*(undefined8 *)puVar3,0);
              lVar6 = FUN_039d97d4(uVar5,plVar13,uVar5);
              if (lVar6 == 0) goto LAB_039d94d0;
            }
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar5 = FUN_03295500(0);
            if (lVar10 != 0) goto LAB_039d95e0;
            goto LAB_039d97c8;
          }
LAB_039d94d0:
          uVar1 = *(uint *)(lVar8 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar1);
      }
    }
    if (unaff_x19 == (long *)0x0) goto LAB_039d97c8;
    plVar13 = *(long **)(unaff_x20 + 0x10);
  }
  else {
    if (unaff_x19 == (long *)0x0) goto LAB_039d97c8;
    uVar5 = (**(code **)(*unaff_x19 + 0x2c8))();
    lVar6 = (**(code **)(*plVar13 + 0x308))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x310));
    plVar13 = *(long **)(unaff_x20 + 0x10);
    if (lVar6 == 0) {
      if (plVar13 == (long *)0x0) goto LAB_039d937c;
      goto LAB_039d939c;
    }
  }
  uVar5 = (**(code **)(*unaff_x19 + 0x2c8))();
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                (plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x310));
    if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    return;
  }
LAB_039d97c8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


