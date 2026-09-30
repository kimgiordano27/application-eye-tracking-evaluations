/*
FUNCTION_NAME: Oculus.Platform.Models.MatchmakingEnqueuedUser$$.ctor
ENTRY_POINT: 0332a4f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Oculus_Platform_Models_MatchmakingEnqueuedUser___ctor(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  ulong unaff_x21;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 uStack0000000000000040;
  long *plStack0000000000000050;
  
  puVar2 = 
  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_RemoveRange__;
  uStack0000000000000040 = param_2;
  plStack0000000000000050 = param_1;
  while (uVar4 = FUN_029fd614(&stack0x00000040,*(undefined8 *)puVar2),
        plVar7 = plStack0000000000000050, (uVar4 & 1) != 0) {
    if (plStack0000000000000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar12 = *plStack0000000000000050;
    uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar4 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0332a570;
        }
        uVar4 = uVar4 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plStack0000000000000050,*unaff_x28,0);
LAB_0332a570:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(uVar6,uVar6);
    }
    unaff_x27 = (long *)(**(code **)(*unaff_x27 + 0x798))
                                  (unaff_x27,uVar6,0x30,*(undefined8 *)(*unaff_x27 + 0x7a0));
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_032e935c(unaff_x27,0,0);
    if ((uVar4 & 1) != 0) {
      if ((unaff_x21 & 1) == 0) {
        FUN_029fd610(&stack0x00000040,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_Remove__
                    );
        return (long *)0x0;
      }
      uVar6 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_set_Item__);
      uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar11 = thunk_FUN_01c273e8(PTR_DAT_04234850);
      uVar6 = FUN_03152fb8(uVar6,uVar10,uVar11,0);
      thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
      uVar10 = thunk_FUN_01c496e0();
      FUN_033144b8(uVar10,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(Method_Photon_Voice_OpusCodec_Encoder<short>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar10,uVar6);
    }
  }
  FUN_029fd610(&stack0x00000040,
               *(undefined8 *)
                Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_BlendingCellInfo>_Remove__
              );
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,
                                  *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar7 == (long *)0x0) goto LAB_0332a8e8;
    if (0 < (int)plVar7[3]) {
      uVar4 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar12 = FUN_02d4fd88(*(long *)(unaff_x19 + 0x28),uVar4 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Add__
                                 ), lVar12 == 0)) goto LAB_0332a8e8;
        lVar12 = FUN_0332a12c();
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar8 = FUN_032e935c(lVar12,0,0);
        if ((uVar8 & 1) != 0) {
          if ((unaff_x21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar12 = *(long *)(unaff_x19 + 0x28);
          if (lVar12 != 0) {
            uVar6 = thunk_FUN_01c273e8(
                                      Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Add__
                                      );
            lVar12 = FUN_02d4fd88(lVar12,uVar4 & 0xffffffff,uVar6);
            if (lVar12 != 0) {
              plVar7 = *(long **)(lVar12 + 0x10);
              uVar10 = thunk_FUN_01c273e8(Method_Ara_ElasticArray<AraTrail_Point>_set_Item__);
              uVar6 = 0;
              if (plVar7 != (long *)0x0) {
                uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
              }
              uVar11 = thunk_FUN_01c273e8(PTR_DAT_04234850);
              uVar6 = FUN_03152fb8(uVar10,uVar6,uVar11,0);
              thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
              uVar10 = thunk_FUN_01c496e0();
              FUN_033144b8(uVar10,uVar6,0);
              uVar6 = thunk_FUN_01c273e8(Method_Photon_Voice_OpusCodec_Encoder<short>__ctor__);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar10,uVar6);
            }
          }
          goto LAB_0332a8e8;
        }
        if ((lVar12 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
          uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,0);
        }
        uVar1 = *(uint *)(plVar7 + 3);
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        plVar7[uVar4 + 4] = lVar12;
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    if (unaff_x27 == (long *)0x0) goto LAB_0332a8e8;
    unaff_x27 = (long *)(**(code **)(*unaff_x27 + 0x8f8))
                                  (unaff_x27,plVar7,*(undefined8 *)(*unaff_x27 + 0x900));
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
    while (uVar4 = FUN_029fd614(&stack0x00000020,*(undefined8 *)puVar2), plVar7 = in_stack_00000030,
          (uVar4 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar12 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0332a7a0;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(in_stack_00000030,*(long *)puVar3,0);
LAB_0332a7a0:
      unaff_x27 = (long *)(*(code *)*puVar5)(plVar7,unaff_x27,puVar5[1]);
    }
    FUN_029fd610(&stack0x00000020,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_AddRange__
                );
  }
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    if (unaff_x27 == (long *)0x0) {
LAB_0332a8e8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    unaff_x27 = (long *)(**(code **)(*unaff_x27 + 0x8e8))
                                  (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x8f0));
  }
  return unaff_x27;
}


