/*
FUNCTION_NAME: FUN_0583d8f0
ENTRY_POINT: 0583d8f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;ray_or_cast_sink_hits_6;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0583ded4) */
/* WARNING: Removing unreachable block (ram,0x0583e140) */
/* WARNING: Removing unreachable block (ram,0x0583e0dc) */

long * FUN_0583d8f0(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
                    /* try { // try from 0583d918 to 0593d943 has its CatchHandler @ 0583e7fc */
  if ((DAT_06bc0f6b & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067cbc10);
    FUN_02f08768(Method_System_Collections_Generic_EqualityComparer<Texture2D>_get_Default__);
    FUN_02f08768(Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_SetCreateFunction__);
    FUN_02f08768(
                System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                );
                    /* try { // try from 0583d978 to 0593d987 has its CatchHandler @ 0583e77c */
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_TryGetValue__
                );
    FUN_02f08768(System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<IXRInteractor,_VisualElement>_set_Item__
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
                );
    DAT_06bc0f6b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_05825804(param_2,0,0);
  if ((uVar7 & 1) != 0) {
    param_2 = FUN_0583c6f4(param_1);
  }
  if (param_2 != 0) {
    uVar16 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_EqualityComparer<Texture2D>_get_Default__ + 0xe4
                ) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar8 = FUN_058306ac(uVar16,0);
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x20) != 1)) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      plVar13 = (long *)FUN_0583bcf8(param_1);
      if (plVar13 != (long *)0x0) {
        plVar13 = (long *)(**(code **)(*plVar13 + 0x608))
                                    (plVar13,*(undefined8 *)(param_1 + 0x18),
                                     *(undefined8 *)(*plVar13 + 0x610));
        if ((param_3 & 1) != 0) {
          FUN_0583f560(param_1,plVar13,0,0);
        }
        if ((plVar13 != (long *)0x0) &&
           (plVar9 = (long *)(**(code **)(*plVar13 + 0x1f8))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x200)),
           plVar9 != (long *)0x0)) {
          iVar5 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
          if (iVar5 == 0) {
            plVar9 = (long *)(**(code **)(*plVar13 + 0x228))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x230));
            if (plVar9 == (long *)0x0) goto LAB_0583e0e4;
            iVar5 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
            if (iVar5 == 0) {
              plVar13 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbc10);
              FUN_05116b38(plVar13,0);
              return plVar13;
            }
          }
          lVar8 = *plVar13;
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                           + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
             )) {
            plVar9 = (long *)FUN_02f0880c(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_TryGetValue__
                                          ,1);
            if (plVar9 != (long *)0x0) {
              lVar8 = thunk_FUN_02f45174(plVar13,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar8 == 0) {
                uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar16,0);
              }
              if ((int)plVar9[3] != 0) {
                plVar9[4] = (long)plVar13;
                return plVar9;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          else {
            plVar9 = (long *)(**(code **)(lVar8 + 0x228))(plVar13,*(undefined8 *)(lVar8 + 0x230));
            if (plVar9 != (long *)0x0) {
              iVar5 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
              plVar9 = (long *)(**(code **)(*plVar13 + 0x1f8))
                                         (plVar13,*(undefined8 *)(*plVar13 + 0x200));
              if (plVar9 != (long *)0x0) {
                iVar6 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                plVar9 = (long *)FUN_02f0880c(*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_TryGetValue__
                                              ,iVar6 + iVar5);
                plVar10 = (long *)(**(code **)(*plVar13 + 0x228))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x230));
                if (plVar10 != (long *)0x0) {
                  plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                              (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                  puVar4 = System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo;
                  puVar3 = PTR_DAT_067c91b8;
                  if (plVar10 != (long *)0x0) {
                    uVar18 = 0;
                    do {
                      lVar14 = *plVar10;
                      lVar8 = *(long *)puVar3;
                      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar7 != 0) {
                        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == lVar8) {
                            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                            goto LAB_0583dd0c;
                          }
                          uVar7 = uVar7 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar8,0);
LAB_0583dd0c:
                      uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                      puVar2 = PTR_DAT_067c91b0;
                      if ((uVar7 & 1) == 0) {
                        plVar10 = (long *)thunk_FUN_02f45174(plVar10,*(undefined8 *)PTR_DAT_067c91b0
                                                            );
                        if (plVar10 == (long *)0x0) goto LAB_0583dec8;
                        lVar8 = *plVar10;
                        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                        if (uVar7 == 0) goto LAB_0583de60;
                        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        goto LAB_0583de48;
                      }
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      lVar14 = *plVar10;
                      lVar8 = *(long *)puVar3;
                      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar7 != 0) {
                        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == lVar8) {
                            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                            goto LAB_0583dd74;
                          }
                          uVar7 = uVar7 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar8,1);
LAB_0583dd74:
                      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
                      if (plVar12 == (long *)0x0) {
                        if (plVar9 == (long *)0x0) goto System_Net_HttpWebRequest__get_ServicePoint;
                      }
                      else {
                        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f08d48(plVar12);
                        }
                        if (plVar9 == (long *)0x0) {
System_Net_HttpWebRequest__get_ServicePoint:
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        lVar8 = thunk_FUN_02f45174(plVar12,*(undefined8 *)(*plVar9 + 0x40));
                        if (lVar8 == 0) {
                          uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                          FUN_02f0888c(uVar16,0);
                        }
                      }
                      if (*(uint *)(plVar9 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                      plVar9[(long)(int)uVar18 + 4] = (long)plVar12;
                      uVar18 = uVar18 + 1;
                    } while (plVar10 != (long *)0x0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar16 = *(undefined8 *)(lVar8 + 0x10);
      uVar17 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<IXRInteractor,_VisualElement>_set_Item__
      ;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar17 = FUN_050e4454(uVar17,0);
      uVar7 = FUN_050ed374(uVar16,uVar17,0);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_0583ceb8(param_1);
        if ((uVar7 & 1) != 0) {
          return (long *)0x0;
        }
        plVar13 = (long *)FUN_0583cb1c(param_1);
        return plVar13;
      }
      plVar13 = *(long **)(param_1 + 0x18);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      if (plVar13 != (long *)0x0) {
        uVar16 = (**(code **)(*plVar13 + 0x558))(plVar13,*(undefined8 *)(*plVar13 + 0x560));
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_SetCreateFunction__ +
                    0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)
                              Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_SetCreateFunction__
                            );
        }
        plVar13 = (long *)FUN_0583335c(lVar8,uVar16);
        return plVar13;
      }
    }
  }
  goto LAB_0583e0e4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_0583e098:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0583e0cc;
    }
  }
LAB_0583e0b0:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,0);
LAB_0583e0cc:
  (*(code *)*puVar11)(plVar13,puVar11[1]);
  return plVar9;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_0583de48:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0583debc;
    }
  }
LAB_0583de60:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,0);
LAB_0583debc:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0583dec8:
  plVar13 = (long *)(**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
    puVar4 = System_Collections_Generic_List<TextureBlitter_BlitInfo>_TypeInfo;
    puVar3 = PTR_DAT_067c91b8;
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar14 = *plVar13;
      lVar8 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0583df70;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_02f421d0(plVar13,lVar8,0);
LAB_0583df70:
      uVar7 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if ((uVar7 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_02f45174(plVar13,*(undefined8 *)puVar2);
        if (plVar13 == (long *)0x0) {
          return plVar9;
        }
        lVar8 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 == 0) goto LAB_0583e0b0;
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0583e098;
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar14 = *plVar13;
      lVar8 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar8) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0583dfd8;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_02f421d0(plVar13,lVar8,1);
LAB_0583dfd8:
      plVar10 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
      if (plVar10 == (long *)0x0) {
        if (plVar9 == (long *)0x0) goto System_Net_HttpWebRequest__get_TransferEncoding;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar10);
        }
        if (plVar9 == (long *)0x0) {
System_Net_HttpWebRequest__get_TransferEncoding:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar8 = thunk_FUN_02f45174(plVar10,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar8 == 0) {
          uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar16,0);
        }
      }
      if (*(uint *)(plVar9 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar8 = (long)(int)uVar18;
      uVar18 = uVar18 + 1;
      plVar9[lVar8 + 4] = (long)plVar10;
    } while( true );
  }
LAB_0583e0e4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


