/*
FUNCTION_NAME: FUN_038cec84
ENTRY_POINT: 038cec84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_3
*/


void FUN_038cec84(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  
  if ((DAT_045396ab & 1) == 0) {
    FUN_01c5d288(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_01c5d288(Method_MQTTnet_Formatter_MqttPacketFormatterAdapter_ThrowIfFormatterNotSet__);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_ProBuilderMesh_set_textures__);
    FUN_01c5d288(Method_MQTTnet_Diagnostics_MqttNetSourceLoggerExtensions_Warning<string>__);
    DAT_045396ab = 1;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    lVar6 = thunk_FUN_01c273e8(PTR_DAT_0422fc38);
    param_2 = **(long **)(lVar6 + 0xb8);
    thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
    uVar8 = thunk_FUN_01c496e0();
    puVar12 = Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<float>__;
LAB_038cf3ec:
    uVar11 = thunk_FUN_01c273e8(puVar12);
    FUN_037f036c(uVar8,uVar11,param_2,0);
    uVar11 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<Vector3>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar8,uVar11);
  }
  lVar6 = FUN_031551a8(param_2,0x7c,0,0);
  puVar2 = Method_MQTTnet_Formatter_MqttPacketFormatterAdapter_ThrowIfFormatterNotSet__;
  puVar12 = System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo;
  if (lVar6 != 0) {
    plVar7 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                         System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo
                                       );
    FUN_032a7c38(plVar7,*(undefined4 *)(lVar6 + 0x18),0);
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar12);
    FUN_032a7c38(uVar8,*(undefined4 *)(lVar6 + 0x18),0);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    puVar12 = Method_MQTTnet_Diagnostics_MqttNetSourceLoggerExtensions_Warning<string>__;
    if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
      if (plVar7 == (long *)0x0) goto LAB_038cf1d0;
    }
    else {
      uVar17 = 0;
      uVar14 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        uVar8 = *(undefined8 *)(lVar6 + 0x20 + uVar17 * 8);
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar9 = (long *)FUN_03840bbc(uVar8,0);
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar9);
          }
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        (**(code **)(*plVar7 + 0x308))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x310));
        uVar14 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    iVar4 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
    puVar12 = Method_UnityEngine_ProBuilder_ProBuilderMesh_set_textures__;
    if (iVar4 < 1) {
      return;
    }
    iVar4 = 0;
LAB_038cee34:
    plVar9 = (long *)(**(code **)(*plVar7 + 0x2e8))(plVar7,iVar4,*(undefined8 *)(*plVar7 + 0x2f0));
    if (plVar9 == (long *)0x0) {
LAB_038cf3d0:
      thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
      uVar8 = thunk_FUN_01c496e0();
      puVar12 = Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<ushort>__;
    }
    else {
      lVar6 = *(long *)puVar2;
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar9);
      }
      plVar10 = plVar9;
      plVar15 = plVar9;
      plVar18 = plVar9;
      if (((int)plVar9[2] != 2) || ((int)plVar9[6] != 2)) {
LAB_038ceef4:
        do {
          iVar5 = (int)plVar18[2];
          plVar3 = plVar18;
          if (iVar5 == 0xc) {
            if ((int)plVar18[6] != 9) goto LAB_038cef94;
            if (*(char *)((long)plVar18 + 0x34) == '\0') {
              if (plVar15 == (long *)0x0) goto LAB_038cf1d0;
              plVar15[3] = 0;
              goto LAB_038cf3d0;
            }
            if (plVar9 != plVar18) {
              if (plVar15 == (long *)0x0) goto LAB_038cf1d0;
              plVar15[3] = plVar18[3];
              plVar3 = plVar15;
            }
          }
          else {
            if ((iVar5 != 3) || ((int)plVar18[6] != 1)) {
LAB_038cef94:
              if (plVar15 == (long *)0x0) goto LAB_038cf1d0;
              plVar15[3] = 0;
              if ((((iVar5 != 5) || ((int)plVar18[6] != 9)) ||
                  (*(char *)((long)plVar18 + 0x34) == '\0')) ||
                 (plVar10 = (long *)plVar18[3], plVar10 == (long *)0x0)) goto LAB_038cf3d0;
              bVar1 = *(byte *)(lVar6 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748();
              }
              if ((((int)plVar10[2] != 0xc) || ((int)plVar10[6] != 9)) ||
                 ((*(char *)((long)plVar10 + 0x34) == '\0' || (plVar10[3] != 0))))
              goto LAB_038cf3d0;
              if (((((int)plVar9[2] != 0xc) || ((int)plVar9[6] != 9)) ||
                  (*(char *)((long)plVar9 + 0x34) == '\0')) || ((long *)plVar9[3] == (long *)0x0)) {
                plVar10 = *(long **)(param_1 + 0x10);
                uVar11 = FUN_038ce9e8(plVar9);
                uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar12);
                uVar13 = 1;
                goto LAB_038cf168;
              }
              lVar16 = *(long *)plVar9[3];
              if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar16 + 200) + ((ulong)bVar1 - 1) * 8) != lVar6))
              goto LAB_038cf220;
              plVar10 = *(long **)(param_1 + 0x10);
              uVar11 = FUN_038ce9e8();
              uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar12);
              uVar13 = 1;
              goto LAB_038cf128;
            }
            plVar10 = (long *)FUN_038cf4c4(plVar10,plVar18,param_4);
          }
          plVar15 = plVar3;
          plVar18 = (long *)plVar18[3];
          lVar6 = *(long *)puVar2;
          if (plVar18 == (long *)0x0) goto LAB_038cf0ac;
          if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
              lVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar18);
          }
        } while( true );
      }
      if ((param_3 & 1) != 0) {
        plVar10 = (long *)FUN_038cf4c4(plVar9,plVar9,param_4);
        plVar18 = (long *)plVar9[3];
        lVar6 = *(long *)puVar2;
        if (plVar18 != (long *)0x0) {
          if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
              lVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar18);
          }
        }
        if (plVar18 != (long *)0x0) goto LAB_038ceef4;
        goto LAB_038cf0b0;
      }
      thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
      uVar8 = thunk_FUN_01c496e0();
      puVar12 = Method_UnityEngine_Rendering_ProbeVolumeAsset_GetSubArray<byte>__;
    }
    goto LAB_038cf3ec;
  }
LAB_038cf1d0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
LAB_038cf0ac:
  if (plVar15 == (long *)0x0) goto LAB_038cf1d0;
LAB_038cf0b0:
  plVar15[3] = 0;
  if (((((int)plVar9[2] == 0xc) && ((int)plVar9[6] == 9)) &&
      (*(char *)((long)plVar9 + 0x34) != '\0')) && ((long *)plVar9[3] != (long *)0x0)) {
    lVar16 = *(long *)plVar9[3];
    if ((*(byte *)(lVar16 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(lVar16 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_038cf220:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    plVar10 = *(long **)(param_1 + 0x10);
    uVar11 = FUN_038ce9e8();
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar12);
    uVar13 = 0;
LAB_038cf128:
    FUN_038cead0(uVar8,uVar11,uVar13);
    if (plVar10 == (long *)0x0) goto LAB_038cf1d0;
    lVar6 = *plVar10;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    uVar11 = FUN_038ce9e8(plVar9);
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar12);
    uVar13 = 0;
LAB_038cf168:
    FUN_038cead0(uVar8,uVar11,uVar13);
    if (plVar10 == (long *)0x0) goto LAB_038cf1d0;
    lVar6 = *plVar10;
  }
  (**(code **)(lVar6 + 0x308))(plVar10,uVar8,*(undefined8 *)(lVar6 + 0x310));
  iVar4 = iVar4 + 1;
  iVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
  if (iVar5 <= iVar4) {
    return;
  }
  goto LAB_038cee34;
}


