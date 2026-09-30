/*
FUNCTION_NAME: FUN_059b8820
ENTRY_POINT: 059b8820
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059b9114) */
/* WARNING: Removing unreachable block (ram,0x059b9124) */

void FUN_059b8820(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined4 param_11,byte param_12,byte param_13)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined1 auVar19 [12];
  long local_308;
  long *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [304];
  undefined1 auStack_198 [216];
  undefined1 auStack_c0 [88];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_2f8 = param_9;
  uStack_2f0 = param_10;
  local_2e8 = param_6;
  uStack_2e0 = param_7;
  local_2d8 = param_4;
  uStack_2d0 = param_5;
  if ((DAT_066d3a64 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_AudioClip_SetData__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
    FUN_02b3c81c(Method_System_Array_Resize<object>__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_UnityEngine_Audio_AudioClipPlayable__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__);
    FUN_02b3c81c(Method_UnityEngine_Audio_AudioClipPlayable_SetSpatialBlend__);
    FUN_02b3c81c(Method_UnityEngine_Audio_AudioClipPlayable_SetStereoPan__);
    FUN_02b3c81c(Method_UnityEngine_Audio_AudioClipPlayable_SetVolume__);
    FUN_02b3c81c(Method_VRBeats_AudioManager_<BlendAudioMixerPitch>b__5_0__);
    DAT_066d3a64 = 1;
  }
  local_308 = 0;
  local_300 = (long *)0x0;
  memset(auStack_198,0,0x130);
  puVar5 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__;
  puVar4 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__;
  if (param_3 != 0) {
    uVar7 = FUN_0590661c(param_3,*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__
                        );
    lVar8 = FUN_0590661c(param_3,*(undefined8 *)puVar4);
    uVar9 = FUN_0590661c(param_3,*(undefined8 *)puVar5);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = FUN_0590759c(param_1,0);
    if (param_2 != 0) {
      plVar11 = (long *)FUN_032fa71c(param_2,uVar18,&local_308,uVar10,
                                     *(undefined8 *)
                                      Method_VRBeats_AudioManager_<BlendAudioMixerPitch>b__5_0__,
                                     0xc4,*(undefined8 *)
                                           Method_UnityEngine_Audio_AudioClipPlayable_SetSpatialBlend__
                                    );
      uVar18 = uStack_2d0;
      uVar10 = local_2d8;
      local_300 = plVar11;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      *(undefined8 *)(local_308 + 0x28) = uStack_2d0;
      *(undefined8 *)(local_308 + 0x20) = local_2d8;
      puVar4 = Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__;
      if (plVar11 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_059b8a38;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02b7654c(plVar11,*(long *)
                                      Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                             ,0);
LAB_059b8a38:
      (*(code *)*puVar12)(plVar11,uVar10,uVar18,0,2,puVar12[1]);
      uVar18 = uStack_2e0;
      uVar10 = local_2e8;
      plVar11 = local_300;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      *(undefined8 *)(local_308 + 0x18) = uStack_2e0;
      *(undefined8 *)(local_308 + 0x10) = local_2e8;
      if (local_300 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      lVar15 = *local_300;
      lVar14 = *(long *)puVar4;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto 
            UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ClimbTeleportDestinationIndicator__OnInteractorHoverEntered
            ;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_02b7654c(local_300,lVar14,4);

      UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ClimbTeleportDestinationIndicator__OnInteractorHoverEntered
      :
      (*(code *)*puVar12)(plVar11,uVar10,uVar18,2,puVar12[1]);
      uVar18 = uStack_2f0;
      uVar10 = local_2f8;
      plVar11 = local_300;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      cVar2 = *(char *)(param_1 + 0xd8);
      *(char *)(local_308 + 0x30) = cVar2;
      if (cVar2 != '\0') {
        if (local_300 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059b9358;
        }
        lVar15 = *local_300;
        lVar14 = *(long *)puVar4;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_059b8b44;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_02b7654c(local_300,lVar14,0);
LAB_059b8b44:
        (*(code *)*puVar12)(plVar11,uVar10,uVar18,1,2,puVar12[1]);
        if (local_308 == 0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059b9358;
        }
        *(undefined4 *)(local_308 + 0x34) = *(undefined4 *)(param_1 + 0xdc);
      }
      FUN_059b85b4(auStack_2c8,param_1,uVar7,lVar8,uVar9);
      memcpy(auStack_198,auStack_2c8,0x130);
      FUN_05cc3b60(auStack_c0,param_11,0);
      lVar14 = local_308;
      auVar19 = FUN_05882028(param_2,auStack_198,0);
      plVar11 = local_300;
      lVar15 = local_308;
      if (lVar14 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      *(undefined1 (*) [12])(lVar14 + 0x38) = auVar19;
      puVar4 = Method_Unity_Collections_NativeArray<Plane>_GetSubArray__;
      if (local_308 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      if (local_300 == (long *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      lVar14 = *local_300;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 9) * 0x10 + 0x138);
            goto LAB_059b8c38;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02b7654c(local_300,
                             *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,9);
LAB_059b8c38:
      (*(code *)*puVar12)(plVar11,lVar15 + 0x38,puVar12[1]);
      if (lVar8 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      if (*(long *)(lVar8 + 0x1a0) == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059b9358;
      }
      uVar16 = FUN_057ec748(*(long *)(lVar8 + 0x1a0),0);
      plVar11 = local_300;
      if ((uVar16 & 1) == 0) {
LAB_059b8d00:
        plVar11 = local_300;
        puVar5 = Method_System_Array_Resize<object>__;
        if ((param_13 & 1) != 0) {
          lVar8 = *(long *)Method_System_Array_Resize<object>__;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar8 = *(long *)puVar5;
          }
          if (plVar11 == (long *)0x0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_059b9358;
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x24);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_059b8d84;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar4,3);
LAB_059b8d84:
          (*(code *)*puVar12)(plVar11,&local_2d8,uVar1,puVar12[1]);
          plVar11 = local_300;
          if (local_308 == 0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_059b9358;
          }
          if (*(char *)(local_308 + 0x30) != '\0') {
            lVar8 = *(long *)puVar5;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar8 = *(long *)puVar5;
            }
            if (plVar11 == (long *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              goto LAB_059b9358;
            }
            lVar14 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x28);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_059b8e1c;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar4,3);
LAB_059b8e1c:
            (*(code *)*puVar12)(plVar11,&local_2f8,uVar1,puVar12[1]);
          }
        }
        plVar11 = local_300;
        puVar5 = Method_System_Array_Resize<object>__;
        if ((param_12 & 1) != 0) {
          lVar8 = *(long *)Method_System_Array_Resize<object>__;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar8 = *(long *)puVar5;
          }
          if (plVar11 == (long *)0x0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_059b9358;
          }
          lVar14 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x20);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_059b8eb4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar4,3);
LAB_059b8eb4:
          (*(code *)*puVar12)(plVar11,&local_2e8,uVar1,puVar12[1]);
        }
        plVar11 = local_300;
        if (local_300 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059b9358;
        }
        lVar8 = *local_300;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar8 + (long)(*piVar17 + 0xc) * 0x10 + 0x138);
              goto LAB_059b8f20;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_02b7654c(local_300,*(long *)puVar4,0xc);
LAB_059b8f20:
        (*(code *)*puVar12)(plVar11,1,puVar12[1]);
        plVar11 = local_300;
        puVar4 = Method_UnityEngine_Audio_AudioClipPlayable_SetVolume__;
        lVar8 = *(long *)Method_UnityEngine_Audio_AudioClipPlayable_SetVolume__;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar8 = *(long *)puVar4;
        }
        puVar12 = *(undefined8 **)(lVar8 + 0xb8);
        lVar14 = puVar12[1];
        if (lVar14 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar7 = *puVar12;
          lVar14 = thunk_FUN_02b79644(*(undefined8 *)Method_UnityEngine_AudioClip_SetData__);
          FUN_03e02810(lVar14,uVar7,
                       *(undefined8 *)Method_UnityEngine_Audio_AudioClipPlayable_SetStereoPan__,0);
          plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          *plVar13 = lVar14;
          thunk_FUN_02bb0e9c(plVar13,lVar14);
        }
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          lVar15 = *(long *)Method_UnityEngine_Audio_AudioClipPlayable__ctor__;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar8 = lVar8 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_059b9014;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          lVar8 = FUN_02b7654c(plVar11);
LAB_059b9014:
          lVar8 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar8 + 8),lVar15);
          (**(code **)(lVar8 + 8))(plVar11,lVar14,lVar8);
          plVar11 = local_300;
          if (local_300 != (long *)0x0) {
            lVar8 = *local_300;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06312f78) {
                  puVar12 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_059b9098;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)FUN_02b7654c(local_300,*(long *)PTR_DAT_06312f78,0);
LAB_059b9098:
            (*(code *)*puVar12)(plVar11,puVar12[1]);
          }
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
          goto LAB_059b9358;
        }
      }
      else {
        if (*(long *)(lVar8 + 0x1a0) == 0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059b9358;
        }
        uVar16 = FUN_057f0790(*(long *)(lVar8 + 0x1a0),0);
        if ((uVar16 & 1) == 0) {
          bVar6 = false;
        }
        else {
          lVar8 = FUN_059254f4(lVar8,0);
          if (lVar8 == 0) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_059b9358;
          }
          bVar6 = *(char *)(lVar8 + 0x747) != '\0';
        }
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar8 + (long)(*piVar17 + 0xd) * 0x10 + 0x138);
                goto LAB_059b8cf0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar4,0xd);
LAB_059b8cf0:
          (*(code *)*puVar12)(plVar11,bVar6,puVar12[1]);
          goto LAB_059b8d00;
        }
      }
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_059b9358;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_059b9358:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


