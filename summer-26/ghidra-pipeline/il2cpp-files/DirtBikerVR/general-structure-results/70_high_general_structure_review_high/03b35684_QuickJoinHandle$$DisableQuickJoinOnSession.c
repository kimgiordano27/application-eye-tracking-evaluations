/*
FUNCTION_NAME: QuickJoinHandle$$DisableQuickJoinOnSession
ENTRY_POINT: 03b35684
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void QuickJoinHandle__DisableQuickJoinOnSession
               (byte *param_1,byte *param_2,byte *param_3,ulong param_4,ulong *param_5,
               undefined8 param_6,long *param_7)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  long *unaff_x19;
  long *plVar14;
  ulong *unaff_x20;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  long unaff_x22;
  long *plVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  long unaff_x29;
  
  plVar18 = *(long **)(unaff_x22 + 0xe60);
  lVar15 = *param_7;
  *(long **)(unaff_x29 + -0x10) = plVar18;
  if (*plVar18 != -1) {
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x10;
    *(long *)(unaff_x29 + -8) = unaff_x29 + -0x28;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Rendering_DynamicArray<HDAdditionalLightData>__ctor__,
               (void *)(unaff_x29 + -8),FUN_03b5ae04);
  }
  puVar3 = Method_UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudMapResolution>__ctor__;
  lVar20 = *(long *)(lVar15 + 0x10);
  uVar12 = (long)(int)plVar18[1] - 1;
  if (((ulong)(*(long *)(lVar15 + 0x18) - lVar20 >> 3) <= uVar12) ||
     (plVar18 = *(long **)(lVar20 + uVar12 * 8), plVar18 == (long *)0x0)) {
LAB_03b35c40:
                    /* WARNING: Subroutine does not return */
    FUN_03b2758c();
  }
  lVar15 = *unaff_x19;
  *(undefined **)(unaff_x29 + -0x10) =
       Method_UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudMapResolution>__ctor__;
  if (*(long *)puVar3 != -1) {
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x10;
    *(long *)(unaff_x29 + -8) = unaff_x29 + -0x28;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudMapResolution>__ctor__
               ,(void *)(unaff_x29 + -8),FUN_03b5ae04);
  }
  lVar20 = *(long *)(lVar15 + 0x10);
  uVar12 = (long)*(int *)(puVar3 + 8) - 1;
  if (((ulong)(*(long *)(lVar15 + 0x18) - lVar20 >> 3) <= uVar12) ||
     (plVar14 = *(long **)(lVar20 + uVar12 * 8), plVar14 == (long *)0x0)) goto LAB_03b35c40;
  (**(code **)(*plVar14 + 0x28))(unaff_x29 + -0x28,plVar14);
  *unaff_x20 = param_4;
  if ((*param_1 == 0x2d) || (pbVar11 = param_1, *param_1 == 0x2b)) {
    uVar4 = (**(code **)(*plVar18 + 0x38))(plVar18);
    puVar7 = (undefined1 *)*unaff_x20;
    pbVar11 = param_1 + 1;
    *unaff_x20 = (ulong)(puVar7 + 1);
    *puVar7 = uVar4;
  }
  lVar20 = (long)param_3 - (long)pbVar11;
  lVar15 = lVar20 + -2;
  if (((lVar20 < 2) || (*pbVar11 != 0x30)) || ((pbVar11[1] | 0x20) != 0x78)) {
    pbVar16 = pbVar11;
    if (param_3 <= pbVar11) {
      pbVar21 = pbVar11;
      uVar12 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar12 = *(ulong *)(unaff_x29 + -0x20);
      }
      goto joined_r0x03b3595c;
    }
    lVar15 = 0;
    do {
      bVar2 = pbVar11[lVar15];
      if (((DAT_08bb2428 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_08bb2428), iVar6 != 0)) {
        DAT_08bb2420 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_08bb2428);
      }
      if (bVar2 - 0x3a < 0xfffffff6) {
        pbVar21 = pbVar11 + lVar15;
        break;
      }
      lVar15 = lVar15 + 1;
      pbVar21 = pbVar11 + lVar20;
    } while (lVar20 != lVar15);
  }
  else {
    uVar4 = (**(code **)(*plVar18 + 0x38))(plVar18,0x30);
    puVar7 = (undefined1 *)*unaff_x20;
    *unaff_x20 = (ulong)(puVar7 + 1);
    *puVar7 = uVar4;
    uVar4 = (**(code **)(*plVar18 + 0x38))(plVar18,pbVar11[1]);
    puVar7 = (undefined1 *)*unaff_x20;
    pbVar16 = pbVar11 + 2;
    *unaff_x20 = (ulong)(puVar7 + 1);
    *puVar7 = uVar4;
    if (param_3 <= pbVar16) {
      pbVar21 = pbVar16;
      uVar12 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar12 = *(ulong *)(unaff_x29 + -0x20);
      }
      goto joined_r0x03b3595c;
    }
    pbVar8 = pbVar16;
    do {
      bVar2 = *pbVar8;
      if (((DAT_08bb2428 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_08bb2428), iVar6 != 0)) {
        DAT_08bb2420 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_08bb2428);
      }
      if ((bVar2 - 0x3a < 0xfffffff6) &&
         (pbVar21 = pbVar8, (bVar2 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
      lVar15 = lVar15 + -1;
      pbVar8 = pbVar8 + 1;
      pbVar21 = pbVar11 + lVar20;
    } while (lVar15 != 0);
  }
  uVar12 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
  if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
    uVar12 = *(ulong *)(unaff_x29 + -0x20);
  }
joined_r0x03b3595c:
  if (uVar12 == 0) {
    (**(code **)(*plVar18 + 0x40))(plVar18,pbVar16,pbVar21,*unaff_x20);
    *unaff_x20 = (ulong)(pbVar21 + (*unaff_x20 - (long)pbVar16));
  }
  else {
    if ((pbVar16 != pbVar21) && (pbVar8 = pbVar21 + -1, pbVar11 = pbVar16, pbVar16 < pbVar8)) {
      do {
        pbVar13 = pbVar11 + 1;
        bVar2 = *pbVar11;
        *pbVar11 = *pbVar8;
        pbVar9 = pbVar8 + -1;
        *pbVar8 = bVar2;
        pbVar8 = pbVar9;
        pbVar11 = pbVar13;
      } while (pbVar13 < pbVar9);
    }
    uVar4 = (**(code **)(*plVar14 + 0x20))(plVar14);
    if (pbVar16 < pbVar21) {
      uVar17 = 0;
      uVar19 = 0;
      uVar12 = unaff_x29 - 0x28U | 1;
      lVar15 = (long)pbVar21 - (long)pbVar16;
      pbVar11 = pbVar16;
      do {
        uVar10 = (ulong)uVar17;
        uVar1 = uVar12;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar10) != '\0') {
          uVar1 = uVar12;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar19 == *(byte *)(uVar1 + uVar10)) {
            puVar7 = (undefined1 *)*unaff_x20;
            uVar19 = 0;
            *unaff_x20 = (ulong)(puVar7 + 1);
            *puVar7 = uVar4;
            uVar1 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
            if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
              uVar1 = *(ulong *)(unaff_x29 + -0x20);
            }
            if (uVar10 < uVar1 - 1) {
              uVar17 = uVar17 + 1;
            }
          }
        }
        uVar5 = (**(code **)(*plVar18 + 0x38))(plVar18,*pbVar11);
        puVar7 = (undefined1 *)*unaff_x20;
        lVar15 = lVar15 + -1;
        uVar19 = uVar19 + 1;
        pbVar11 = pbVar11 + 1;
        *unaff_x20 = (ulong)(puVar7 + 1);
        *puVar7 = uVar5;
      } while (lVar15 != 0);
    }
    if ((pbVar16 + (param_4 - (long)param_1) != (byte *)*unaff_x20) &&
       (pbVar11 = (byte *)*unaff_x20 + -1, pbVar16 + (param_4 - (long)param_1) < pbVar11)) {
      pbVar16 = pbVar16 + (param_4 - (long)param_1);
      do {
        pbVar9 = pbVar16 + 1;
        bVar2 = *pbVar16;
        *pbVar16 = *pbVar11;
        pbVar8 = pbVar11 + -1;
        *pbVar11 = bVar2;
        pbVar11 = pbVar8;
        pbVar16 = pbVar9;
      } while (pbVar9 < pbVar8);
    }
  }
  if (pbVar21 < param_3) {
    lVar15 = (long)param_3 - (long)pbVar21;
    pbVar11 = pbVar21;
    do {
      if (*pbVar11 == 0x2e) {
        uVar4 = (**(code **)(*plVar14 + 0x18))(plVar14);
        puVar7 = (undefined1 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar7 + 1);
        *puVar7 = uVar4;
        pbVar21 = pbVar11 + 1;
        break;
      }
      uVar4 = (**(code **)(*plVar18 + 0x38))(plVar18);
      puVar7 = (undefined1 *)*unaff_x20;
      lVar15 = lVar15 + -1;
      *unaff_x20 = (ulong)(puVar7 + 1);
      *puVar7 = uVar4;
      pbVar21 = param_3;
      pbVar11 = pbVar11 + 1;
    } while (lVar15 != 0);
  }
  (**(code **)(*plVar18 + 0x40))(plVar18,pbVar21,param_3,*unaff_x20);
  uVar12 = *unaff_x20;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = (ulong)(param_3 + (uVar12 - (long)pbVar21));
  pbVar11 = param_3 + (uVar12 - (long)pbVar21);
  if (param_2 != param_3) {
    pbVar11 = param_2 + (param_4 - (long)param_1);
  }
  *param_5 = (ulong)pbVar11;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


