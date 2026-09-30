/*
FUNCTION_NAME: Oculus.Platform.Models.RoomList$$.ctor
ENTRY_POINT: 0332a2e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Oculus_Platform_Models_RoomList___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
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
  
  plVar4 = (long *)FUN_032185a8();
  uVar5 = FUN_032188c8(plVar4,0,0);
  puVar2 = 
  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_AddRange__;
  if ((uVar5 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar6 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_get_Item__);
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_04234850);
    uVar6 = FUN_03152fb8(uVar6,uVar13,uVar7,0);
    thunk_FUN_01c273e8(System_Func<BackgroundSize,_BackgroundSize,_bool>_TypeInfo);
    uVar7 = thunk_FUN_01c496e0();
    FUN_03224ce8(uVar7,uVar6,0);
LAB_0332a4bc:
    uVar6 = thunk_FUN_01c273e8(Method_Photon_Voice_OpusCodec_Encoder<short>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,uVar6);
  }
  plVar14 = *(long **)(unaff_x19 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_0332a8e8;
  lVar11 = *plVar14;
  uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar5 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_AddRange__
         ) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0332a3c4;
      }
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01c72498(plVar14,*(long *)
                                 Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_AddRange__
                        ,0);
LAB_0332a3c4:
  uVar6 = (*(code *)*puVar8)(plVar14,puVar8[1]);
  if (unaff_x23 == 0) {
    if (plVar4 == (long *)0x0) goto LAB_0332a8e8;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                               (plVar4,uVar6,0,unaff_w22 & 1,*(undefined8 *)(*plVar4 + 0x310));
  }
  else {
    plVar4 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (*(undefined8 *)(unaff_x23 + 0x40),plVar4,uVar6,unaff_w22 & 1,
                                *(undefined8 *)(unaff_x23 + 0x28));
  }
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_032e935c(plVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    plVar4 = *(long **)(unaff_x19 + 0x10);
LAB_0332a450:
    uVar7 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_set_Item__);
    uVar6 = 0;
    if (plVar4 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    uVar13 = thunk_FUN_01c273e8(PTR_DAT_04234850);
    uVar6 = FUN_03152fb8(uVar7,uVar6,uVar13,0);
    thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
    uVar7 = thunk_FUN_01c496e0();
    FUN_033144b8(uVar7,uVar6,0);
    goto LAB_0332a4bc;
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
    while (uVar5 = FUN_029fd614(&stack0x00000040,*(undefined8 *)puVar3), plVar14 = in_stack_00000050
          , (uVar5 & 1) != 0) {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *in_stack_00000050;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0332a570;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_01c72498(in_stack_00000050,*(long *)puVar2,0);
LAB_0332a570:
      uVar6 = (*(code *)*puVar8)(plVar14,puVar8[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(uVar6,uVar6);
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x798))
                                 (plVar4,uVar6,0x30,*(undefined8 *)(*plVar4 + 0x7a0));
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_032e935c(plVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((unaff_x21 & 1) == 0) {
          FUN_029fd610(&stack0x00000040,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_Remove__
                      );
          return (long *)0x0;
        }
        uVar6 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_set_Item__);
        uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        uVar13 = thunk_FUN_01c273e8(PTR_DAT_04234850);
        uVar6 = FUN_03152fb8(uVar6,uVar7,uVar13,0);
        thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
        uVar7 = thunk_FUN_01c496e0();
        FUN_033144b8(uVar7,uVar6,0);
        uVar6 = thunk_FUN_01c273e8(Method_Photon_Voice_OpusCodec_Encoder<short>__ctor__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar6);
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
      uVar5 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar11 = FUN_02d4fd88(*(long *)(unaff_x19 + 0x28),uVar5 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Add__
                                 ), lVar11 == 0)) goto LAB_0332a8e8;
        lVar11 = FUN_0332a12c();
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar9 = FUN_032e935c(lVar11,0,0);
        if ((uVar9 & 1) != 0) {
          if ((unaff_x21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar11 = *(long *)(unaff_x19 + 0x28);
          if (lVar11 == 0) goto LAB_0332a8e8;
          uVar6 = thunk_FUN_01c273e8(
                                    Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Add__
                                    );
          lVar11 = FUN_02d4fd88(lVar11,uVar5 & 0xffffffff,uVar6);
          if (lVar11 == 0) goto LAB_0332a8e8;
          plVar4 = *(long **)(lVar11 + 0x10);
          goto LAB_0332a450;
        }
        if ((lVar11 != 0) &&
           (lVar10 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar10 == 0)) {
          uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,0);
        }
        uVar1 = *(uint *)(plVar14 + 3);
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar14[uVar5 + 4] = lVar11;
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar1);
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
    while (uVar5 = FUN_029fd614(&stack0x00000020,*(undefined8 *)puVar2), plVar14 = in_stack_00000030
          , (uVar5 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *in_stack_00000030;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0332a7a0;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
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


