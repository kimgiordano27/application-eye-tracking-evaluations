/*
FUNCTION_NAME: FUN_036f5018
ENTRY_POINT: 036f5018
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_17;ui_or_gameplay_sink_hits_10;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_036f5018(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  
  puVar2 = PTR_DAT_0422fc38;
  if ((DAT_04538874 & 1) == 0) {
    FUN_01c5d288(Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo);
    FUN_01c5d288(Method_System_Lazy<VolumeManager>_get_Value__);
    FUN_01c5d288(Method_System_Reflection_CustomAttributeTypedArgument__ctor__);
    FUN_01c5d288(Method_System_Lazy<NonValidatingCertificateHandler>__ctor__);
    FUN_01c5d288(System_MonoCustomAttrs_TypeInfo);
    FUN_01c5d288(Method_System_Data_DataColumn_CheckNotAllowNull__);
    FUN_01c5d288(PTR_DAT_04230940);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Collections_Generic_List<Action<Texture>>__ctor__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Vector4>__);
    FUN_01c5d288(PTR_DAT_0423a830);
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__);
    DAT_04538874 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
  plVar15 = (long *)(param_1 + 0x60);
  plVar7 = (long *)*plVar15;
  if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
  iVar4 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
  puVar2 = Method_System_Linq_Enumerable_ToArray<Volume>__;
  plVar7 = (long *)*plVar15;
  if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
  iVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,*(undefined8 *)(*plVar7 + 0x290));
  if (iVar5 < 1) {
    lVar8 = 0;
  }
  else {
    plVar7 = (long *)*plVar15;
    if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    lVar8 = (**(code **)(*plVar7 + 0x2a8))
                      (plVar7,*(undefined8 *)PTR_DAT_0423a830,*(undefined8 *)puVar2,
                       *(undefined8 *)(*plVar7 + 0x2b0));
  }
  if (param_2 == 0) goto thunk_FUN_01c5d4a4;
  uVar9 = FUN_036867f8(param_2,0);
  plVar7 = (long *)*plVar15;
  if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
  lVar11 = *plVar7;
  if ((uVar9 & 1) == 0) {
    uVar9 = (**(code **)(lVar11 + 0x328))(plVar7,*(undefined8 *)(lVar11 + 0x330));
    if ((uVar9 & 1) != 0) {
      plVar7 = (long *)*plVar15;
      if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
      iVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
      puVar2 = PTR_DAT_04230940;
      if (iVar4 < iVar5) {
        plVar7 = (long *)*plVar15;
        while (plVar7 != (long *)0x0) {
          iVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
          plVar7 = (long *)*plVar15;
          if (plVar7 == (long *)0x0) break;
          lVar11 = *plVar7;
          if (iVar5 <= iVar4) {
            (**(code **)(lVar11 + 0x328))(plVar7,*(undefined8 *)(lVar11 + 0x330));
            goto LAB_036f57c4;
          }
          iVar5 = (**(code **)(lVar11 + 0x198))(plVar7,*(undefined8 *)(lVar11 + 0x1a0));
          switch(iVar5) {
          case 1:
            uVar9 = FUN_036f3fe4(param_1);
            if ((uVar9 & 1) == 0) {
              uVar14 = *(undefined8 *)(param_1 + 0x60);
              lVar11 = *(long *)(param_1 + 0x18);
              uVar10 = *(undefined8 *)(param_2 + 0x78);
              uVar6 = FUN_036f1ad4(param_1,uVar14);
              if (lVar11 == 0) goto thunk_FUN_01c5d4a4;
              plVar7 = (long *)FUN_036f4eec(lVar11,uVar10,uVar14,uVar6 & 1);
              if (plVar7 == (long *)0x0) {
LAB_036f53b8:
                uVar10 = *(undefined8 *)(param_1 + 0x60);
                lVar11 = *(long *)(param_1 + 0x18);
                uVar6 = FUN_036f1ad4(param_1,uVar10);
                if (lVar11 == 0) goto thunk_FUN_01c5d4a4;
                plVar7 = (long *)FUN_036f3f24(lVar11,uVar10,uVar6 & 1);
                if (plVar7 == (long *)0x0) goto switchD_036f52d8_caseD_2;
                uVar10 = 0;
              }
              else {
                lVar11 = *plVar7;
                bVar1 = *(byte *)(*(long *)Method_System_Lazy<VolumeManager>_get_Value__ + 0x130);
                if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
                   (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)Method_System_Lazy<VolumeManager>_get_Value__)) {
                  if (param_3 != (long *)0x0) {
                    if (*(uint *)((long)plVar7 + 100) < *(uint *)(param_3 + 3)) {
                      if (param_3[(long)(int)*(uint *)((long)plVar7 + 100) + 4] != 0)
                      goto switchD_036f52d8_caseD_2;
                      FUN_036f5018(param_1);
                      break;
                    }
                    goto LAB_036f5908;
                  }
                  goto thunk_FUN_01c5d4a4;
                }
                bVar1 = *(byte *)(*(long *)
                                   Method_System_Lazy<NonValidatingCertificateHandler>__ctor__ +
                                 0x130);
                if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)Method_System_Lazy<NonValidatingCertificateHandler>__ctor__))
                goto LAB_036f53b8;
                uVar10 = 1;
              }
              FUN_036f41f8(param_1,plVar7,uVar10);
            }
            break;
          case 2:
            goto switchD_036f52d8_caseD_2;
          case 3:
          case 4:
switchD_036f52d8_caseD_3:
            if ((lVar12 == 0) || (plVar7 = (long *)*plVar15, plVar7 == (long *)0x0))
            goto thunk_FUN_01c5d4a4;
            lVar11 = *plVar7;
            if (*(int *)(lVar12 + 0x10) == 0) {
              lVar12 = (**(code **)(lVar11 + 0x1e8))(plVar7,*(undefined8 *)(lVar11 + 0x1f0));
              plVar7 = (long *)*plVar15;
              if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
              plVar13 = (long *)0x0;
              while (uVar9 = (**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330))
                    , (uVar9 & 1) != 0) {
                plVar7 = (long *)*plVar15;
                if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
                iVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
                if (iVar5 <= iVar4) break;
                plVar7 = (long *)*plVar15;
                if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
                uVar9 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                uVar9 = FUN_036f142c(uVar9,uVar9 & 0xffffffff);
                if ((uVar9 & 1) == 0) break;
                if (plVar13 == (long *)0x0) {
                  plVar13 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                  FUN_03160c7c(plVar13,lVar12,0);
                }
                plVar7 = (long *)*plVar15;
                if ((plVar7 == (long *)0x0) ||
                   (uVar10 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0))
                   , plVar13 == (long *)0x0)) goto thunk_FUN_01c5d4a4;
                FUN_0315ab48(plVar13,uVar10,0);
                plVar7 = (long *)*plVar15;
                if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
              }
              if (plVar13 != (long *)0x0) {
                lVar12 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
              }
            }
            else {
              (**(code **)(lVar11 + 0x3d8))(plVar7,*(undefined8 *)(lVar11 + 0x3e0));
            }
            break;
          case 5:
            uVar10 = FUN_0368cc98(0);
            uVar14 = thunk_FUN_01c273e8(Method_System_Exception_GetObjectData__);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar10,uVar14);
          default:
            if (iVar5 - 0xdU < 2) goto switchD_036f52d8_caseD_3;
switchD_036f52d8_caseD_2:
            plVar7 = (long *)*plVar15;
            if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
            (**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
          }
          plVar7 = (long *)*plVar15;
        }
        goto thunk_FUN_01c5d4a4;
      }
    }
LAB_036f57c4:
    if (lVar12 == 0) goto thunk_FUN_01c5d4a4;
    if ((lVar8 != 0) && (*(int *)(lVar12 + 0x10) == 0)) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0)
          == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_03893b28(lVar8,0);
      puVar2 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if ((uVar9 & 1) != 0) {
        uVar6 = *(uint *)(param_2 + 100);
        lVar12 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar12 = *(long *)puVar2;
        }
        if (param_3 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        lVar12 = **(long **)(lVar12 + 0xb8);
        goto joined_r0x036f5828;
      }
    }
    uVar6 = *(uint *)(param_2 + 100);
    lVar12 = FUN_036871c8(param_2,lVar12,0);
    if (param_3 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    goto joined_r0x036f5828;
  }
  iVar5 = (**(code **)(lVar11 + 0x288))(plVar7,*(undefined8 *)(lVar11 + 0x290));
  if (iVar5 < 1) {
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    plVar7 = (long *)*plVar15;
    if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    lVar12 = (**(code **)(*plVar7 + 0x2a8))
                       (plVar7,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,
                        *(undefined8 *)puVar2,*(undefined8 *)(*plVar7 + 0x2b0));
    plVar7 = (long *)*plVar15;
    if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    lVar11 = (**(code **)(*plVar7 + 0x2a8))
                       (plVar7,*(undefined8 *)
                                Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                        *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                        *(undefined8 *)(*plVar7 + 0x2b0));
  }
  if (*(char *)(param_2 + 0x94) == '\0') {
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    uVar14 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar14 = FUN_032e04b8(uVar14,0);
    uVar9 = FUN_032e935c(uVar10,uVar14,0);
    bVar3 = false;
    if ((lVar11 == 0) && ((uVar9 & 1) == 0)) {
      bVar3 = lVar12 == 0;
    }
  }
  else {
    bVar3 = false;
  }
  if (lVar8 == 0) {
LAB_036f56d0:
    if (*(long *)(param_2 + 0x78) == 0) goto thunk_FUN_01c5d4a4;
    lVar12 = *(long *)(*(long *)(param_2 + 0x78) + 0x20);
    if ((lVar12 == 0) || (*(char *)(lVar12 + 0x8d) == '\0')) {
      if (bVar3) {
        uVar10 = FUN_03682ebc(param_2,0);
        lVar12 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vector4>__)
        ;
        FUN_038b3a88(lVar12,uVar10,0);
        uVar10 = FUN_03684aec(param_2,0);
        if (lVar12 == 0) goto thunk_FUN_01c5d4a4;
        *(undefined8 *)(lVar12 + 0x28) = uVar10;
      }
      else {
        lVar12 = 0;
      }
      lVar12 = FUN_03687204(param_2,*plVar15,lVar12,0);
    }
    else {
      plVar7 = (long *)*plVar15;
      if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
      (**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
      if (bVar3) {
        plVar7 = (long *)*plVar15;
        if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        lVar12 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Vector4>__)
        ;
        FUN_038b3a88(lVar12,uVar10,0);
        plVar7 = (long *)*plVar15;
        if ((plVar7 == (long *)0x0) ||
           (uVar10 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0)),
           lVar12 == 0)) goto thunk_FUN_01c5d4a4;
        *(undefined8 *)(lVar12 + 0x28) = uVar10;
      }
      else {
        lVar12 = 0;
      }
      lVar12 = FUN_03687204(param_2,*plVar15,lVar12,0);
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto thunk_FUN_01c5d4a4;
      (**(code **)(*plVar15 + 0x328))(plVar15,*(undefined8 *)(*plVar15 + 0x330));
    }
  }
  else {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0) ==
        0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_03893b28(lVar8,0);
    if ((uVar9 & 1) == 0) goto LAB_036f56d0;
    if (((lVar11 == 0) || (bVar3)) || (*(int *)(lVar11 + 0x10) < 1)) {
LAB_036f5638:
      puVar2 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      lVar12 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar2;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
    }
    else {
      if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_037309d0(lVar11,0);
      if (*(int *)(*(long *)Method_System_Data_DataColumn_CheckNotAllowNull__ + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)Method_System_Data_DataColumn_CheckNotAllowNull__);
      }
      lVar12 = FUN_037562e8(uVar10,0);
      if (lVar12 == 0) goto LAB_036f5638;
    }
    plVar7 = (long *)*plVar15;
    if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    uVar9 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
    if ((uVar9 & 1) == 0) {
      do {
        plVar7 = (long *)*plVar15;
        if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        uVar9 = (**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
        if ((uVar9 & 1) == 0) break;
        plVar7 = (long *)*plVar15;
        if (plVar7 == (long *)0x0) goto thunk_FUN_01c5d4a4;
        iVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
      } while (iVar4 < iVar5);
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) goto thunk_FUN_01c5d4a4;
    (**(code **)(*plVar15 + 0x328))(plVar15,*(undefined8 *)(*plVar15 + 0x330));
  }
  if (param_3 != (long *)0x0) {
    uVar6 = *(uint *)(param_2 + 100);
joined_r0x036f5828:
    if ((lVar12 != 0) &&
       (lVar8 = thunk_FUN_01c495e4(lVar12,*(undefined8 *)(*param_3 + 0x40)), lVar8 == 0)) {
      uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar10,0);
    }
    if (uVar6 < *(uint *)(param_3 + 3)) {
      param_3[(long)(int)uVar6 + 4] = lVar12;
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


