/*
FUNCTION_NAME: Oculus.Platform.Models.MatchmakingEnqueueResult$$.ctor
ENTRY_POINT: 0332a1b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Oculus_Platform_Models_MatchmakingEnqueueResult___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long lVar13;
  long unaff_x24;
  long *plVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  FUN_01c5d288();
  FUN_01c5d288(
              Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_get_Item__
              );
  FUN_01c5d288(
              Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_get_size__
              );
  FUN_01c5d288(Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_RemoveAt__);
  FUN_01c5d288(Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>__ctor__);
  FUN_01c5d288(Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Add__);
  FUN_01c5d288(
              Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_RemoveRange__
              );
  FUN_01c5d288(UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo);
  FUN_01c5d288(
              Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_AddRange__
              );
  FUN_01c5d288(PTR_DAT_04230910);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x20 + 0x26f) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if ((unaff_x24 == 0) && (unaff_x23 == 0)) {
    lVar13 = *(long *)(unaff_x19 + 0x40);
    if (lVar13 == 0) {
      lVar13 = FUN_03328d40();
      *(long *)(unaff_x19 + 0x40) = lVar13;
    }
    if (*(int *)(*(long *)
                  UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo + 0xe0
                ) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar4 = (long *)FUN_0330a020(lVar13,unaff_w21 & 1,unaff_w22 & 1,0);
    return plVar4;
  }
  lVar13 = *(long *)(unaff_x19 + 0x18);
  plVar4 = (long *)0x0;
  if (lVar13 != 0) {
    if (unaff_x24 == 0) {
      plVar4 = (long *)FUN_032185a8(lVar13,0);
    }
    else {
      uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                  VoxelBusters_EssentialKit_WebViewCore_NativeWebViewBase_<>c__DisplayClass36_0_TypeInfo
                                );
      FUN_0320d21c(uVar5,lVar13,0);
      plVar4 = (long *)(**(code **)(unaff_x24 + 0x18))
                                 (*(undefined8 *)(unaff_x24 + 0x40),uVar5,
                                  *(undefined8 *)(unaff_x24 + 0x28));
    }
    uVar6 = FUN_032188c8(plVar4,0,0);
    if ((uVar6 & 1) != 0) {
      if ((unaff_w21 & 1) == 0) {
        return (long *)0x0;
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar5 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_get_Item__);
      uVar7 = thunk_FUN_01c273e8(PTR_DAT_04234850);
      uVar5 = FUN_03152fb8(uVar5,uVar12,uVar7,0);
      thunk_FUN_01c273e8(System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
      uVar7 = thunk_FUN_01c496e0();
      FUN_03224ce8(uVar7,uVar5,0);
      goto LAB_0332a4bc;
    }
  }
  puVar2 = 
  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_AddRange__;
  plVar14 = *(long **)(unaff_x19 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_0332a8e8;
  lVar13 = *plVar14;
  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_AddRange__
         ) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0332a3c4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01c72498(plVar14,*(long *)
                                 Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_AddRange__
                        ,0);
LAB_0332a3c4:
  uVar5 = (*(code *)*puVar8)(plVar14,puVar8[1]);
  if (unaff_x23 == 0) {
    if (plVar4 == (long *)0x0) goto LAB_0332a8e8;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                               (plVar4,uVar5,0,unaff_w22 & 1,*(undefined8 *)(*plVar4 + 0x310));
  }
  else {
    plVar4 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (*(undefined8 *)(unaff_x23 + 0x40),plVar4,uVar5,unaff_w22 & 1,
                                *(undefined8 *)(unaff_x23 + 0x28));
  }
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar6 = FUN_032e935c(plVar4,0,0);
  if ((uVar6 & 1) != 0) {
    if ((unaff_w21 & 1) == 0) {
      return (long *)0x0;
    }
    plVar4 = *(long **)(unaff_x19 + 0x10);
LAB_0332a450:
    uVar7 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_set_Item__);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    uVar12 = thunk_FUN_01c273e8(PTR_DAT_04234850);
    uVar5 = FUN_03152fb8(uVar7,uVar5,uVar12,0);
    thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
    uVar7 = thunk_FUN_01c496e0();
    FUN_033144b8(uVar7,uVar5,0);
LAB_0332a4bc:
    uVar5 = thunk_FUN_01c273e8(Method_Photon_Voice_OpusCodec_Encoder<short>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,uVar5);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_02d50a3c(&stack0x00000008,*(long *)(unaff_x19 + 0x20),
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_get_size__
                );
    puVar3 = 
    Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_RemoveRange__;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar6 = FUN_029fd614(&stack0x00000040,*(undefined8 *)puVar3), plVar14 = in_stack_00000050
          , (uVar6 & 1) != 0) {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *in_stack_00000050;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0332a570;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01c72498(in_stack_00000050,*(long *)puVar2,0);
LAB_0332a570:
      uVar5 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(uVar5,uVar5);
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x798))
                                 (plVar4,uVar5,0x30,*(undefined8 *)(*plVar4 + 0x7a0));
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_032e935c(plVar4,0,0);
      if ((uVar6 & 1) != 0) {
        if ((unaff_w21 & 1) == 0) {
          FUN_029fd610(&stack0x00000040,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_Remove__
                      );
          return (long *)0x0;
        }
        uVar5 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_set_Item__);
        uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        uVar12 = thunk_FUN_01c273e8(PTR_DAT_04234850);
        uVar5 = FUN_03152fb8(uVar5,uVar7,uVar12,0);
        thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
        uVar7 = thunk_FUN_01c496e0();
        FUN_033144b8(uVar7,uVar5,0);
        uVar5 = thunk_FUN_01c273e8(Method_Photon_Voice_OpusCodec_Encoder<short>__ctor__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar5);
      }
    }
    FUN_029fd610(&stack0x00000040,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_Remove__
                );
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar14 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,
                                   *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar14 == (long *)0x0) goto LAB_0332a8e8;
    if (0 < (int)plVar14[3]) {
      uVar6 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar13 = FUN_02d4fd88(*(long *)(unaff_x19 + 0x28),uVar6 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Add__
                                 ), lVar13 == 0)) goto LAB_0332a8e8;
        lVar13 = FUN_0332a12c();
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar9 = FUN_032e935c(lVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if ((unaff_w21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar13 = *(long *)(unaff_x19 + 0x28);
          if (lVar13 == 0) goto LAB_0332a8e8;
          uVar5 = thunk_FUN_01c273e8(
                                    Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Add__
                                    );
          lVar13 = FUN_02d4fd88(lVar13,uVar6 & 0xffffffff,uVar5);
          if (lVar13 == 0) goto LAB_0332a8e8;
          plVar4 = *(long **)(lVar13 + 0x10);
          goto LAB_0332a450;
        }
        if ((lVar13 != 0) &&
           (lVar10 = thunk_FUN_01c495e4(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)) {
          uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar5,0);
        }
        uVar1 = *(uint *)(plVar14 + 3);
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar14[uVar6 + 4] = lVar13;
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
    if (plVar4 == (long *)0x0) goto LAB_0332a8e8;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x8f8))(plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x900))
    ;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_02d50a3c(&stack0x00000008,*(long *)(unaff_x19 + 0x30),
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_RemoveAt__
                );
    puVar3 = Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_RemoveRange__;
    puVar2 = Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Clear__;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar6 = FUN_029fd614(&stack0x00000020,*(undefined8 *)puVar2), plVar14 = in_stack_00000030
          , (uVar6 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *in_stack_00000030;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0332a7a0;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01c72498(in_stack_00000030,*(long *)puVar3,0);
LAB_0332a7a0:
      plVar4 = (long *)(*(code *)*puVar8)(plVar14,plVar4,puVar8[1]);
    }
    FUN_029fd610(&stack0x00000020,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_AddRange__
                );
  }
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    return plVar4;
  }
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x8e8))(plVar4,*(undefined8 *)(*plVar4 + 0x8f0));
    return plVar4;
  }
LAB_0332a8e8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


