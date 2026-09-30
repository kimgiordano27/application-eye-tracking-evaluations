/*
FUNCTION_NAME: FUN_068c60c8
ENTRY_POINT: 068c60c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068c60c8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  if ((DAT_075591ed & 1) == 0) {
    FUN_03188a78(System_IO_Path_<>c_TypeInfo);
    FUN_03188a78(System_Net_PathList_PathListComparer_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_19_0_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
    FUN_03188a78(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_PassData_TypeInfo);
    DAT_075591ed = 1;
  }
  local_f4 = 0;
  local_128 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_104 = 0;
  uStack_110 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x398) != 0) {
      FUN_05255340(*(long *)(param_1 + 0x398),
                   *(undefined8 *)System_Net_PathList_PathListComparer_TypeInfo);
      uVar7 = FUN_069d3398(param_1,0);
      if ((uVar7 & 1) != 0) {
        if ((0 < *(int *)(param_1 + 0x3c8)) &&
           (uVar5 = FUN_068c4628(param_1,&local_f0,&local_f4), uVar15 = local_f0, iVar1 = local_f4,
           puVar3 = 
           Oculus_Interaction_Samples_OneGrabScaleTransformer_OneGrabScaleConstraints_TypeInfo,
           puVar2 = PTR_DAT_070c1b68, 0 < *(int *)(param_1 + 0x3c8))) {
          fVar4 = (float)local_e0;
          uVar7 = 0;
          lVar16 = 0x20;
          do {
            lVar12 = *(long *)(param_1 + 0x3c0);
            if (lVar12 == 0) goto LAB_068c6528;
            if (*(uint *)(lVar12 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            puVar11 = (undefined8 *)(lVar12 + lVar16);
            uStack_118 = puVar11[1];
            local_120 = *puVar11;
            uStack_110 = puVar11[2];
            uStack_f8 = *(undefined4 *)(puVar11 + 5);
            uStack_100 = (undefined4)puVar11[4];
            uStack_fc = (undefined4)((ulong)puVar11[4] >> 0x20);
            uStack_108 = (undefined4)puVar11[3];
            local_104 = (undefined4)((ulong)puVar11[3] >> 0x20);
            lVar12 = FUN_06a634a0(&local_120,0);
            if (lVar12 == 0) goto LAB_068c6528;
            uVar8 = FUN_069d3b50(lVar12,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)puVar2);
            }
            uVar6 = FUN_069d69b8(uVar15,uVar8,0);
            if ((((uVar5 & uVar6 & 1) != 0) && (0 < iVar1)) &&
               ((iVar1 < *(int *)(param_1 + 0x3e4) ||
                ((iVar1 == *(int *)(param_1 + 0x3e4) &&
                 (fVar17 = (float)FUN_06a6357c(&local_120,0), fVar4 <= fVar17)))))) break;
            lVar12 = *(long *)(param_1 + 0x30);
            uVar8 = FUN_06a634a0(&local_120,0);
            if (lVar12 == 0) goto LAB_068c6528;
            uVar9 = FUN_06858f90(lVar12,uVar8,&local_128,0);
            if ((uVar9 & 1) == 0) break;
            uVar9 = FUN_042e4df8(param_2,local_128,*(undefined8 *)puVar3);
            if ((uVar9 & 1) == 0) {
              lVar12 = *(long *)(param_2 + 0x10);
              lVar13 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_068c6528;
              uVar6 = *(uint *)(param_2 + 0x18);
              if (uVar6 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar6 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = local_128;
              }
              else {
                FUN_042e4a64(param_2,local_128,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(param_1 + 0x398) == 0) goto LAB_068c6528;
              uStack_7c = CONCAT44(uStack_f8,uStack_fc);
              uStack_98 = uStack_118;
              local_a0 = local_120;
              uStack_88 = uStack_108;
              uStack_90 = uStack_110;
              local_84 = local_104;
              uStack_80 = uStack_100;
              FUN_052550dc(*(long *)(param_1 + 0x398),local_128,&local_a0,
                           *(undefined8 *)System_IO_Path_<>c_TypeInfo);
              if (*(char *)(param_1 + 0x2e0) != '\0') break;
            }
            uVar7 = uVar7 + 1;
            lVar16 = lVar16 + 0x2c;
          } while ((long)uVar7 < (long)*(int *)(param_1 + 0x3c8));
        }
        plVar10 = (long *)FUN_068b3948(param_1);
        puVar2 = OVRPlugin_OVRP_1_19_0_TypeInfo;
        if (plVar10 != (long *)0x0) {
          lVar16 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_068c6424;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068c6424:
          uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          puVar3 = UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_PassData_TypeInfo;
          if ((uVar7 & 1) != 0) {
            lVar16 = *(long *)
                      UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_PassData_TypeInfo;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar16 = *(long *)puVar3;
            }
            lVar12 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            uVar15 = **(undefined8 **)(lVar16 + 0xb8);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                  goto LAB_068c64a8;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,3);
LAB_068c64a8:
            (*(code *)*puVar11)(plVar10,param_1,param_2,uVar15,puVar11[1]);
            iVar1 = *(int *)(param_2 + 0x18);
            *(undefined4 *)(param_2 + 0x18) = 0;
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_0595236c(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
            }
            FUN_042e4c6c(param_2,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                         *(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo
                        );
          }
        }
      }
      return;
    }
  }
LAB_068c6528:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


