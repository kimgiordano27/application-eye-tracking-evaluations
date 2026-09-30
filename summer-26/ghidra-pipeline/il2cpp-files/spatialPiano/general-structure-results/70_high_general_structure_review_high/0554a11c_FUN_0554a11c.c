/*
FUNCTION_NAME: FUN_0554a11c
ENTRY_POINT: 0554a11c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0554abc8) */

void FUN_0554a11c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
                 ,uint param_6)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 local_88;
  long **pplStack_80;
  long **local_78;
  long *local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_067c9fd8;
  if ((DAT_06bbf77e & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ddbb0);
    FUN_02f08768(PTR_DAT_067d4730);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_BurstDirectCall_TypeInfo
                );
    DAT_06bbf77e = 1;
  }
  puVar7 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_BurstDirectCall_TypeInfo
  ;
  puVar6 = PTR_DAT_067ddbb0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar8 = FUN_050656a0(0);
  puVar5 = PTR_DAT_067c9338;
  local_88 = CONCAT44(local_88._4_4_,param_5);
  uVar9 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_88);
  uVar8 = FUN_04f70148(uVar8,*(undefined8 *)puVar7,uVar9,0);
  uVar9 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(puVar5 + 0xe0));
  }
  uVar9 = FUN_050e4454(uVar9,0);
  if ((param_2 == 0) ||
     (plVar10 = (long *)FUN_04feade0(param_2,uVar8,uVar9,0), plVar14 = (long *)PTR_DAT_067d4730,
     plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar22 = *plVar10;
  bVar3 = *(byte *)(*(long *)PTR_DAT_067d4730 + 0x130);
  if ((*(byte *)(lVar22 + 0x130) < bVar3) ||
     (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_067d4730)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  plVar10 = (long *)(**(code **)(lVar22 + 0x388))(plVar10,*(undefined8 *)(lVar22 + 0x390));
  pplStack_80 = &local_68;
  local_88 = 0;
  local_78 = &local_70;
  plVar12 = (long *)PTR_DAT_067c91b8;
  do {
    local_68 = plVar10;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar22 = *plVar10;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *plVar12) {
          puVar11 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_0554a344;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*plVar12,0);
LAB_0554a344:
    uVar25 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    plVar10 = local_68;
    puVar6 = PTR_DAT_067c91b0;
    if ((uVar25 & 1) == 0) {
      plVar14 = (long *)thunk_FUN_02f45174(local_68,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar14 == (long *)0x0) {
        return;
      }
      lVar22 = *plVar14;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      local_70 = plVar14;
      if (uVar25 == 0) goto LAB_0554aa5c;
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      break;
    }
    if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar22 = *local_68;
    uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == *plVar12) {
          puVar11 = (undefined8 *)(lVar22 + (long)(*piVar26 + 1) * 0x10 + 0x138);
          goto LAB_0554a3ac;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(local_68,*plVar12,1);
LAB_0554a3ac:
    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar22 = *plVar10;
    bVar3 = *(byte *)(*plVar14 + 0x130);
    if ((*(byte *)(lVar22 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar22 + 200) + (ulong)bVar3 * 8 + -8) != *plVar14)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar10);
    }
    plVar12 = (long *)(**(code **)(lVar22 + 0x2e8))(plVar10,0,*(undefined8 *)(lVar22 + 0x2f0));
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*plVar12 != *(long *)(puVar5 + 0x90)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    uVar25 = FUN_04f6d65c(plVar12,*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001217_PostfixBurstDelegate_TypeInfo
                          ,0);
    pcVar23 = *(code **)(*plVar10 + 0x2e8);
    if ((uVar25 & 1) == 0) {
      plVar14 = (long *)(*pcVar23)(plVar10,1,*(undefined8 *)(*plVar10 + 0x2f0));
      if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)(puVar5 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar14);
      }
      lVar22 = (**(code **)(*plVar10 + 0x2e8))(plVar10,2,*(undefined8 *)(*plVar10 + 0x2f0));
      if (lVar22 == 0) {
        lVar13 = 0;
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_067cb890;
        lVar13 = thunk_FUN_02f45174(lVar22,uVar8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar22,uVar8);
        }
      }
      lVar22 = (**(code **)(*plVar10 + 0x2e8))(plVar10,3,*(undefined8 *)(*plVar10 + 0x2f0));
      if (lVar22 == 0) {
        lVar17 = 0;
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_067cb890;
        lVar17 = thunk_FUN_02f45174(lVar22,uVar8);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar22,uVar8);
        }
      }
      lVar22 = (**(code **)(*plVar10 + 0x2e8))(plVar10,4,*(undefined8 *)(*plVar10 + 0x2f0));
      if (lVar22 == 0) {
        lVar18 = 0;
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_067cb890;
        lVar18 = thunk_FUN_02f45174(lVar22,uVar8);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar22,uVar8);
        }
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))(plVar10,5,*(undefined8 *)(*plVar10 + 0x2f0))
      ;
      if (plVar10 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)
                           UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar10);
        }
      }
      if ((param_6 & 1) == 0) {
        lVar22 = param_1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar22 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar22 = FUN_0558c44c(lVar22,*(undefined4 *)(lVar13 + 0x20),0);
      }
      plVar12 = (long *)FUN_02f0880c(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                     ,*(int *)(lVar13 + 0x18) + -1);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (0 < (int)plVar12[3]) {
        uVar25 = 0;
        do {
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar24 = uVar25 + 1;
          if (*(uint *)(lVar13 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (*(long *)(lVar22 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar19 = FUN_0557e298(*(long *)(lVar22 + 0x40),*(undefined4 *)(lVar13 + 0x24 + uVar25 * 4)
                                ,0);
          if ((lVar19 != 0) &&
             (lVar20 = thunk_FUN_02f45174(lVar19,*(undefined8 *)(*plVar12 + 0x40)), lVar20 == 0)) {
            uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar8,0);
          }
          uVar2 = *(uint *)(plVar12 + 3);
          if (uVar2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar12[uVar25 + 4] = lVar19;
          uVar25 = uVar24;
        } while ((long)uVar24 < (long)(int)uVar2);
      }
      if ((param_6 & 1) == 0) {
        lVar22 = param_1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar22 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar22 = FUN_0558c44c(lVar22,*(undefined4 *)(lVar17 + 0x20),0);
      }
      plVar15 = (long *)FUN_02f0880c(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                     ,*(int *)(lVar17 + 0x18) + -1);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (0 < (int)plVar15[3]) {
        uVar25 = 0;
        do {
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar24 = uVar25 + 1;
          if (*(uint *)(lVar17 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (*(long *)(lVar22 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar13 = FUN_0557e298(*(long *)(lVar22 + 0x40),*(undefined4 *)(lVar17 + 0x24 + uVar25 * 4)
                                ,0);
          if ((lVar13 != 0) &&
             (lVar19 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0)) {
            uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar8,0);
          }
          uVar2 = *(uint *)(plVar15 + 3);
          if (uVar2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          plVar15[uVar25 + 4] = lVar13;
          uVar25 = uVar24;
        } while ((long)uVar24 < (long)(int)uVar2);
      }
      plVar21 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                                          );
      FUN_055a2550(plVar21,plVar14,plVar12,plVar15,0);
      plVar14 = (long *)PTR_DAT_067d4730;
      puVar5 = PTR_DAT_067c9338;
      plVar12 = (long *)PTR_DAT_067c91b8;
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar21 + 0x288))
                (plVar21,*(undefined4 *)(lVar18 + 0x20),*(undefined8 *)(*plVar21 + 0x290));
      if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      (**(code **)(*plVar21 + 0x2e8))
                (plVar21,*(undefined4 *)(lVar18 + 0x24),*(undefined8 *)(*plVar21 + 0x2f0));
      if (*(uint *)(lVar18 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      (**(code **)(*plVar21 + 0x2a8))
                (plVar21,*(undefined4 *)(lVar18 + 0x28),*(undefined8 *)(*plVar21 + 0x2b0));
      plVar21[6] = (long)plVar10;
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0557b654(*(long *)(param_1 + 0x48),plVar21,0,0);
      plVar10 = local_68;
    }
    else {
      plVar12 = (long *)(*pcVar23)(plVar10,1);
      if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)(puVar5 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar12);
      }
      lVar22 = (**(code **)(*plVar10 + 0x2e8))(plVar10,2,*(undefined8 *)(*plVar10 + 0x2f0));
      if (lVar22 == 0) {
        lVar13 = 0;
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_067cb890;
        lVar13 = thunk_FUN_02f45174(lVar22,uVar8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(lVar22,uVar8);
        }
      }
      plVar15 = (long *)(**(code **)(*plVar10 + 0x2e8))(plVar10,3,*(undefined8 *)(*plVar10 + 0x2f0))
      ;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(long *)(*plVar15 + 0x40) != *(long *)(*(long *)(puVar5 + 0x28) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
      pcVar16 = (char *)thunk_FUN_02f453b8();
      cVar4 = *pcVar16;
      plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))(plVar10,4,*(undefined8 *)(*plVar10 + 0x2f0))
      ;
      if (plVar10 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)
                           UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                         0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar10);
        }
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar15 = (long *)FUN_02f0880c(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_BurstDirectCall_TypeInfo
                                     ,*(undefined4 *)(lVar13 + 0x18));
      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
        uVar24 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        uVar25 = 0;
        do {
          if (uVar24 <= uVar25) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar22 = FUN_0557e298(*(long *)(param_1 + 0x40),
                                *(undefined4 *)(lVar13 + 0x20 + uVar25 * 4),0);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if ((lVar22 != 0) &&
             (lVar17 = thunk_FUN_02f45174(lVar22,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0)) {
            uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar8,0);
          }
          if (*(uint *)(plVar15 + 3) <= uVar25) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar1 = uVar25 + 1;
          plVar15[uVar25 + 4] = lVar22;
          uVar24 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar25 = uVar1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar13 + 0x18));
      }
      lVar22 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                                 );
      FUN_055aeee4(lVar22,plVar12,plVar15,cVar4 != '\0',0);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(long **)(lVar22 + 0x30) = plVar10;
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0557b64c(*(long *)(param_1 + 0x48),lVar22,0);
      plVar10 = local_68;
      plVar12 = (long *)PTR_DAT_067c91b8;
    }
  } while( true );
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar26 = piVar26 + 4;
    if (uVar25 == 0) break;
    if (*(long *)(piVar26 + -2) == *(long *)puVar6) {
      puVar11 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_0554aa78;
    }
  }
LAB_0554aa5c:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar6,0);
LAB_0554aa78:
  (*(code *)*puVar11)(plVar14,puVar11[1]);
  return;
}


