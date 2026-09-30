/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaCollectionNode$$set_NamespaceURI
ENTRY_POINT: 036f51b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Xml_Schema_XmlSchemaCollectionNode__set_NamespaceURI(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x28;
  
  uVar6 = FUN_036867f8(param_1,0);
  plVar9 = (long *)*unaff_x28;
  if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
  lVar10 = *plVar9;
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(lVar10 + 0x328))(plVar9,*(undefined8 *)(lVar10 + 0x330));
    if ((uVar6 & 1) != 0) {
      plVar9 = (long *)*unaff_x28;
      if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
      iVar4 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
      puVar2 = PTR_DAT_04230940;
      if (unaff_w21 < iVar4) {
        plVar9 = (long *)*unaff_x28;
        while (plVar9 != (long *)0x0) {
          iVar4 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
          plVar9 = (long *)*unaff_x28;
          if (plVar9 == (long *)0x0) break;
          lVar10 = *plVar9;
          if (iVar4 <= unaff_w21) {
            (**(code **)(lVar10 + 0x328))(plVar9,*(undefined8 *)(lVar10 + 0x330));
            goto LAB_036f57c4;
          }
          iVar4 = (**(code **)(lVar10 + 0x198))(plVar9,*(undefined8 *)(lVar10 + 0x1a0));
          switch(iVar4) {
          case 1:
            uVar6 = FUN_036f3fe4();
            if ((uVar6 & 1) == 0) {
              uVar12 = *(undefined8 *)(unaff_x23 + 0x60);
              lVar10 = *(long *)(unaff_x23 + 0x18);
              uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
              uVar5 = FUN_036f1ad4();
              if (lVar10 == 0) goto thunk_FUN_01c5d4a4;
              plVar9 = (long *)FUN_036f4eec(lVar10,uVar8,uVar12,uVar5 & 1);
              if (plVar9 == (long *)0x0) {
LAB_036f53b8:
                uVar8 = *(undefined8 *)(unaff_x23 + 0x60);
                lVar10 = *(long *)(unaff_x23 + 0x18);
                uVar5 = FUN_036f1ad4();
                if (lVar10 == 0) goto thunk_FUN_01c5d4a4;
                lVar10 = FUN_036f3f24(lVar10,uVar8,uVar5 & 1);
                if (lVar10 == 0) goto switchD_036f52d8_caseD_2;
              }
              else {
                lVar10 = *plVar9;
                bVar1 = *(byte *)(*(long *)Method_System_Lazy<VolumeManager>_get_Value__ + 0x130);
                if ((bVar1 <= *(byte *)(lVar10 + 0x130)) &&
                   (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)Method_System_Lazy<VolumeManager>_get_Value__)) {
                  if (unaff_x19 != (long *)0x0) {
                    if (*(uint *)((long)plVar9 + 100) < *(uint *)(unaff_x19 + 3)) {
                      if (unaff_x19[(long)(int)*(uint *)((long)plVar9 + 100) + 4] != 0)
                      goto switchD_036f52d8_caseD_2;
                      FUN_036f5018();
                      break;
                    }
                    goto LAB_036f5908;
                  }
                  goto thunk_FUN_01c5d4a4;
                }
                bVar1 = *(byte *)(*(long *)
                                   Method_System_Lazy<NonValidatingCertificateHandler>__ctor__ +
                                 0x130);
                if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)Method_System_Lazy<NonValidatingCertificateHandler>__ctor__))
                goto LAB_036f53b8;
              }
              FUN_036f41f8();
            }
            break;
          case 2:
            goto switchD_036f52d8_caseD_2;
          case 3:
          case 4:
switchD_036f52d8_caseD_3:
            if ((unaff_x24 == 0) || (plVar9 = (long *)*unaff_x28, plVar9 == (long *)0x0))
            goto thunk_FUN_01c5d4a4;
            lVar10 = *plVar9;
            if (*(int *)(unaff_x24 + 0x10) == 0) {
              unaff_x24 = (**(code **)(lVar10 + 0x1e8))(plVar9,*(undefined8 *)(lVar10 + 0x1f0));
              plVar9 = (long *)*unaff_x28;
              if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
              plVar11 = (long *)0x0;
              while (uVar6 = (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330))
                    , (uVar6 & 1) != 0) {
                plVar9 = (long *)*unaff_x28;
                if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
                iVar4 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
                if (iVar4 <= unaff_w21) break;
                plVar9 = (long *)*unaff_x28;
                if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
                uVar6 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
                uVar6 = FUN_036f142c(uVar6,uVar6 & 0xffffffff);
                if ((uVar6 & 1) == 0) break;
                if (plVar11 == (long *)0x0) {
                  plVar11 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                  FUN_03160c7c(plVar11,unaff_x24,0);
                }
                plVar9 = (long *)*unaff_x28;
                if ((plVar9 == (long *)0x0) ||
                   (uVar8 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0)),
                   plVar11 == (long *)0x0)) goto thunk_FUN_01c5d4a4;
                FUN_0315ab48(plVar11,uVar8,0);
                plVar9 = (long *)*unaff_x28;
                if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
              }
              if (plVar11 != (long *)0x0) {
                unaff_x24 = (**(code **)(*plVar11 + 0x168))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x170));
              }
            }
            else {
              (**(code **)(lVar10 + 0x3d8))(plVar9,*(undefined8 *)(lVar10 + 0x3e0));
            }
            break;
          case 5:
            uVar8 = FUN_0368cc98(0);
            uVar12 = thunk_FUN_01c273e8(Method_System_Exception_GetObjectData__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar8,uVar12);
          default:
            if (iVar4 - 0xdU < 2) goto switchD_036f52d8_caseD_3;
switchD_036f52d8_caseD_2:
            plVar9 = (long *)*unaff_x28;
            if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
            (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
          }
          plVar9 = (long *)*unaff_x28;
        }
        goto thunk_FUN_01c5d4a4;
      }
    }
LAB_036f57c4:
    if (unaff_x24 == 0) goto thunk_FUN_01c5d4a4;
    if ((unaff_x22 != 0) && (*(int *)(unaff_x24 + 0x10) == 0)) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0)
          == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_03893b28();
      puVar2 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if ((uVar6 & 1) != 0) {
        uVar5 = *(uint *)(unaff_x20 + 100);
        lVar10 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar10 = *(long *)puVar2;
        }
        if (unaff_x19 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        lVar10 = **(long **)(lVar10 + 0xb8);
        goto joined_r0x036f5828;
      }
    }
    uVar5 = *(uint *)(unaff_x20 + 100);
    lVar10 = FUN_036871c8();
    if (unaff_x19 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    goto joined_r0x036f5828;
  }
  iVar4 = (**(code **)(lVar10 + 0x288))(plVar9,*(undefined8 *)(lVar10 + 0x290));
  if (iVar4 < 1) {
    lVar7 = 0;
    lVar10 = 0;
  }
  else {
    plVar9 = (long *)*unaff_x28;
    if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    lVar10 = (**(code **)(*plVar9 + 0x2a8))
                       (plVar9,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,*unaff_x25,
                        *(undefined8 *)(*plVar9 + 0x2b0));
    plVar9 = (long *)*unaff_x28;
    if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    lVar7 = (**(code **)(*plVar9 + 0x2a8))
                      (plVar9,*(undefined8 *)
                               Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                       *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                       *(undefined8 *)(*plVar9 + 0x2b0));
  }
  if (*(char *)(unaff_x20 + 0x94) == '\0') {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar12 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_032e04b8(uVar12,0);
    uVar6 = FUN_032e935c(uVar8,uVar12,0);
    bVar3 = false;
    if ((lVar7 == 0) && ((uVar6 & 1) == 0)) {
      bVar3 = lVar10 == 0;
    }
  }
  else {
    bVar3 = false;
  }
  if (unaff_x22 == 0) {
LAB_036f56d0:
    if (*(long *)(unaff_x20 + 0x78) == 0) goto thunk_FUN_01c5d4a4;
    lVar10 = *(long *)(*(long *)(unaff_x20 + 0x78) + 0x20);
    if ((lVar10 == 0) || (*(char *)(lVar10 + 0x8d) == '\0')) {
      if (bVar3) {
        uVar8 = FUN_03682ebc();
        lVar10 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vector4>__)
        ;
        FUN_038b3a88(lVar10,uVar8,0);
        uVar8 = FUN_03684aec();
        if (lVar10 == 0) goto thunk_FUN_01c5d4a4;
        *(undefined8 *)(lVar10 + 0x28) = uVar8;
      }
      lVar10 = FUN_03687204();
    }
    else {
      plVar9 = (long *)*unaff_x28;
      if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
      (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
      if (bVar3) {
        plVar9 = (long *)*unaff_x28;
        if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        lVar10 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vector4>__)
        ;
        FUN_038b3a88(lVar10,uVar8,0);
        plVar9 = (long *)*unaff_x28;
        if ((plVar9 == (long *)0x0) ||
           (uVar8 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0)),
           lVar10 == 0)) goto thunk_FUN_01c5d4a4;
        *(undefined8 *)(lVar10 + 0x28) = uVar8;
      }
      lVar10 = FUN_03687204();
      plVar9 = (long *)*unaff_x28;
      if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
      (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0) ==
        0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_03893b28();
    if ((uVar6 & 1) == 0) goto LAB_036f56d0;
    if (((lVar7 == 0) || (bVar3)) || (*(int *)(lVar7 + 0x10) < 1)) {
LAB_036f5638:
      puVar2 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      lVar10 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar10 = *(long *)puVar2;
      }
      lVar10 = **(long **)(lVar10 + 0xb8);
    }
    else {
      if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_037309d0(lVar7,0);
      if (*(int *)(*(long *)Method_System_Data_DataColumn_CheckNotAllowNull__ + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)Method_System_Data_DataColumn_CheckNotAllowNull__);
      }
      lVar10 = FUN_037562e8(uVar8,0);
      if (lVar10 == 0) goto LAB_036f5638;
    }
    plVar9 = (long *)*unaff_x28;
    if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    uVar6 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if ((uVar6 & 1) == 0) {
      do {
        plVar9 = (long *)*unaff_x28;
        if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        uVar6 = (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
        if ((uVar6 & 1) == 0) break;
        plVar9 = (long *)*unaff_x28;
        if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        iVar4 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
      } while (unaff_w21 < iVar4);
    }
    plVar9 = (long *)*unaff_x28;
    if (plVar9 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
  }
  if (unaff_x19 != (long *)0x0) {
    uVar5 = *(uint *)(unaff_x20 + 100);
joined_r0x036f5828:
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar7 == 0)) {
      uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar8,0);
    }
    if (uVar5 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[(long)(int)uVar5 + 4] = lVar10;
      return;
    }
LAB_036f5908:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
thunk_FUN_01c5d4a4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


