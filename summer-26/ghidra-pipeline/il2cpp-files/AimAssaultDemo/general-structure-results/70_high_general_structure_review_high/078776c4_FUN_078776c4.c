/*
FUNCTION_NAME: FUN_078776c4
ENTRY_POINT: 078776c4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint FUN_078776c4(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_238 [24];
  undefined8 local_220 [2];
  float local_210;
  undefined1 auStack_200 [32];
  undefined8 local_1e0 [4];
  undefined8 local_1c0;
  float fStack_1b4;
  float local_1b0;
  undefined8 local_1a0 [2];
  undefined4 local_190;
  undefined8 local_180 [2];
  float local_170;
  undefined8 local_160 [4];
  undefined8 local_140 [4];
  undefined8 local_120 [4];
  undefined8 local_100 [4];
  undefined8 local_e0 [4];
  undefined8 local_c0 [4];
  undefined8 local_a0;
  float fStack_94;
  undefined4 local_90;
  
  puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_Update__;
  if ((DAT_082727b1 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_fsData>_GetEnumerator__);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_add_onGestureStarted__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_Update__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_xrOrigin__
                );
    DAT_082727b1 = 1;
  }
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__;
  uVar5 = FUN_053c9668(param_5 + 8,param_6[1],*(undefined8 *)puVar1);
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN_07862448(param_5);
    iVar4 = FUN_07862448(param_6);
    if (iVar3 == iVar4) {
      fVar14 = (float)FUN_07862538(param_5);
      fVar12 = (float)FUN_07862538(param_6);
      if (fVar14 != fVar12) goto LAB_07877b50;
      fVar14 = (float)FUN_07862588(param_5);
      fVar12 = (float)FUN_07862588(param_6);
      if (fVar14 != fVar12) goto LAB_07877b50;
      iVar3 = FUN_078625d8(param_5);
      iVar4 = FUN_078625d8(param_6);
      if (iVar3 != iVar4) goto LAB_07877b50;
      iVar3 = FUN_078624e8(param_5);
      iVar4 = FUN_078624e8(param_6);
      if (iVar3 != iVar4) goto LAB_07877b50;
      iVar3 = FUN_07862678(param_5);
      iVar4 = FUN_07862678(param_6);
      if (iVar3 != iVar4) goto LAB_07877b50;
      uVar6 = FUN_0786233c(param_5);
      uVar7 = FUN_0786233c(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_078626c8(param_5);
      uVar7 = FUN_078626c8(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862c18(param_5);
      uVar7 = FUN_07862c18(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862ddc(param_5);
      uVar7 = FUN_07862ddc(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862628(param_5);
      uVar7 = FUN_07862628(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07863638(param_5);
      uVar7 = FUN_07863638(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862a88(param_5);
      uVar7 = FUN_07862a88(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862ad8(param_5);
      uVar7 = FUN_07862ad8(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862b28(param_5);
      uVar7 = FUN_07862b28(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862b78(param_5);
      uVar7 = FUN_07862b78(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862768(param_5);
      uVar7 = FUN_07862768(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_078627b8(param_5);
      uVar7 = FUN_078627b8(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862808(param_5);
      uVar7 = FUN_07862808(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862858(param_5);
      uVar7 = FUN_07862858(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      iVar3 = FUN_07862bc8(param_5);
      iVar4 = FUN_07862bc8(param_6);
      if (iVar3 != iVar4) goto LAB_07877b50;
      iVar3 = FUN_07861c60(param_5);
      iVar4 = FUN_07861c60(param_6);
      if (iVar3 != iVar4) goto LAB_07877b50;
      iVar3 = FUN_07861cb0(param_5);
      iVar4 = FUN_07861cb0(param_6);
      if (iVar3 != iVar4) goto LAB_07877b50;
      iVar3 = FUN_07861d00(param_5);
      iVar4 = FUN_07861d00(param_6);
      if (iVar3 != iVar4) goto LAB_07877b50;
      uVar6 = FUN_07862498(param_5);
      uVar7 = FUN_07862498(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_078628a8(param_5);
      uVar7 = FUN_078628a8(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_078628f8(param_5);
      uVar7 = FUN_078628f8(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07877b50;
      uVar6 = FUN_07862948(param_5);
      uVar7 = FUN_07862948(param_6);
      uVar5 = FUN_077300b8(uVar6,uVar7,0);
      uVar8 = 0x28;
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_07862998(param_5);
        uVar7 = FUN_07862998(param_6);
        uVar5 = FUN_077300b8(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          uVar8 = 0x20;
        }
      }
    }
    else {
LAB_07877b50:
      uVar8 = 0x28;
    }
    fVar14 = (float)FUN_07862060(param_5);
    fVar12 = (float)FUN_07862060(param_6);
    if (fVar14 == fVar12) {
      fVar14 = (float)FUN_07862104(param_5);
      fVar12 = (float)FUN_07862104(param_6);
      if (fVar14 == fVar12) {
        fVar14 = (float)FUN_078621a8(param_5);
        fVar12 = (float)FUN_078621a8(param_6);
        uVar9 = 0x928;
        if (fVar14 == fVar12) {
          fVar14 = (float)FUN_078622ec(param_5);
          fVar12 = (float)FUN_078622ec(param_6);
          uVar9 = uVar8;
          if (fVar14 != fVar12) {
            uVar9 = 0x928;
          }
        }
        goto LAB_07877bd0;
      }
    }
    uVar9 = 0x928;
  }
  else {
    uVar9 = 0x20;
  }
LAB_07877bd0:
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
  ;
  uVar5 = FUN_053c91a8(param_5,*param_6,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    fVar10 = (float)FUN_0786238c(param_5);
    fVar12 = param_2;
    fVar13 = param_3;
    fVar15 = param_4;
    fVar11 = (float)FUN_0786238c(param_6);
    fVar14 = DAT_015864f0;
    param_2 = (param_2 - fVar12) * (param_2 - fVar12);
    param_3 = (param_3 - fVar13) * (param_3 - fVar13);
    param_4 = (param_4 - fVar15) * (param_4 - fVar15);
    uVar8 = uVar9 | 0x2000;
    if (param_4 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + param_2 < DAT_015864f0) {
      uVar8 = uVar9;
    }
    if ((uVar8 & 0x8080808) == 0) {
      uVar6 = FUN_078630e0(param_5);
      uVar7 = FUN_078630e0(param_6);
      if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d86398);
      }
      uVar5 = FUN_075aa744(uVar6,uVar7,0);
      if ((uVar5 & 1) == 0) {
        iVar3 = FUN_07863454(param_5);
        iVar4 = FUN_07863454(param_6);
        if (iVar3 == iVar4) {
          uVar6 = FUN_0785ebcc(param_5);
          uVar7 = FUN_0785ebcc(param_6);
          uVar5 = FUN_077300b8(uVar6,uVar7,0);
          if ((uVar5 & 1) == 0) {
            auVar16 = FUN_07863130(param_5);
            auVar17 = FUN_07863130(param_6);
            uVar5 = FUN_078815cc(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
            if ((uVar5 & 1) == 0) {
              iVar3 = FUN_07863184(param_5);
              iVar4 = FUN_07863184(param_6);
              if (iVar3 == iVar4) {
                fVar12 = (float)FUN_078634f8(param_5);
                fVar13 = (float)FUN_078634f8(param_6);
                if (fVar12 == fVar13) {
                  uVar6 = FUN_07862718(param_5);
                  uVar7 = FUN_07862718(param_6);
                  uVar5 = FUN_077300b8(uVar6,uVar7,0);
                  if ((uVar5 & 1) == 0) {
                    uVar6 = FUN_07863688(param_5);
                    uVar7 = FUN_07863688(param_6);
                    uVar5 = FUN_077300b8(uVar6,uVar7,0);
                    if ((uVar5 & 1) == 0) {
                      iVar3 = FUN_07863090(param_5);
                      iVar4 = FUN_07863090(param_6);
                      if (iVar3 == iVar4) {
                        uVar6 = FUN_07863224(param_5);
                        uVar7 = FUN_07863224(param_6);
                        uVar5 = FUN_077300b8(uVar6,uVar7,0);
                        if ((uVar5 & 1) == 0) goto LAB_07877df0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x808;
    }
LAB_07877df0:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_07862d74(&local_1c0,param_5);
      FUN_07862d74(&local_a0,param_6);
      local_c0[0] = local_1c0;
      local_e0[0] = local_a0;
      uVar6 = local_a0;
      param_2 = fStack_1b4;
      param_4 = fStack_94;
      uVar5 = FUN_07752460(local_c0,local_e0,0);
      param_3 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
        iVar3 = FUN_07863404(param_5);
        iVar4 = FUN_07863404(param_6);
        if (iVar3 == iVar4) {
          fVar10 = (float)FUN_078634a4(param_5);
          fVar12 = param_2;
          fVar13 = param_3;
          fVar15 = param_4;
          fVar11 = (float)FUN_078634a4(param_6);
          fVar12 = param_2 - fVar12;
          param_4 = param_4 - fVar15;
          param_3 = (param_3 - fVar13) * (param_3 - fVar13);
          param_2 = param_4 * param_4;
          if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14)
          goto LAB_07877eb4;
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_07877eb4:
    iVar3 = FUN_07863598(param_5);
    iVar4 = FUN_07863598(param_6);
    if (iVar3 != iVar4) {
      uVar8 = uVar8 | 0x100800;
    }
    iVar3 = FUN_078635e8(param_5);
    iVar4 = FUN_078635e8(param_6);
    uVar9 = uVar8;
    if (iVar3 != iVar4) {
      uVar9 = uVar8 | 8;
    }
  }
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__;
  uVar5 = FUN_053c9fe8(param_5 + 0x18,param_6[3],*(undefined8 *)puVar1);
  uVar8 = uVar9;
  if ((uVar5 & 1) == 0) {
    auVar16 = FUN_07862cd0(param_5);
    auVar17 = FUN_07862cd0(param_6);
    uVar5 = FUN_07730c2c(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    if ((uVar5 & 1) == 0) {
      FUN_07862c68(&local_1c0,param_5);
      FUN_07862c68(&local_a0,param_6);
      local_100[0] = local_1c0;
      local_120[0] = local_a0;
      uVar6 = local_a0;
      uVar5 = FUN_077307a0(local_100,local_120,0);
      param_2 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
        FUN_07862fd4(&local_1c0,param_5);
        FUN_07862fd4(&local_a0,param_6);
        local_140[0] = local_1c0;
        local_160[0] = local_a0;
        uVar6 = local_a0;
        uVar5 = FUN_07734d6c(local_140,local_160,0);
        param_2 = (float)uVar6;
        if ((uVar5 & 1) == 0) {
          FUN_07862e2c(&local_1c0,param_5);
          FUN_07862e2c(&local_a0,param_6);
          local_180[0] = local_1c0;
          local_170 = local_1b0;
          local_1a0[0] = local_a0;
          local_190 = local_90;
          uVar5 = FUN_077346b8(local_180,local_1a0,0);
          param_2 = (float)local_a0;
          uVar8 = uVar9 | 0x200;
          if ((uVar5 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_07877fe8;
        }
      }
    }
    uVar8 = uVar9 | 0x200;
  }
LAB_07877fe8:
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_add_onGestureStarted__
  ;
  uVar5 = FUN_053ca4a0(param_5 + 0x20,param_6[4],*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<string,_fsData>_GetEnumerator__ +
                0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_0787fa44(param_5,param_6,0);
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_xrOrigin__;
  uVar5 = FUN_053ca960(param_5 + 0x28,param_6[5],*(undefined8 *)puVar1);
  if ((uVar5 & 1) != 0) goto LAB_078783e0;
  if ((uVar8 >> 0xd & 1) == 0) {
    fVar10 = (float)FUN_07861d50(param_5);
    fVar12 = param_2;
    fVar13 = param_3;
    fVar15 = param_4;
    fVar11 = (float)FUN_07861d50(param_6);
    fVar14 = DAT_015864f0;
    fVar12 = param_2 - fVar12;
    param_4 = param_4 - fVar15;
    param_3 = (param_3 - fVar13) * (param_3 - fVar13);
    param_2 = param_4 * param_4;
    if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < DAT_015864f0)
    {
      fVar10 = (float)FUN_07861f6c(param_5);
      fVar12 = param_2;
      fVar13 = param_3;
      fVar15 = param_4;
      fVar11 = (float)FUN_07861f6c(param_6);
      fVar12 = param_2 - fVar12;
      param_4 = param_4 - fVar15;
      param_3 = (param_3 - fVar13) * (param_3 - fVar13);
      param_2 = param_4 * param_4;
      if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14) {
        fVar10 = (float)FUN_078620b0(param_5);
        fVar12 = param_2;
        fVar13 = param_3;
        fVar15 = param_4;
        fVar11 = (float)FUN_078620b0(param_6);
        fVar12 = param_2 - fVar12;
        param_4 = param_4 - fVar15;
        param_3 = (param_3 - fVar13) * (param_3 - fVar13);
        param_2 = param_4 * param_4;
        if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14) {
          fVar10 = (float)FUN_07862154(param_5);
          fVar12 = param_2;
          fVar13 = param_3;
          fVar15 = param_4;
          fVar11 = (float)FUN_07862154(param_6);
          fVar12 = param_2 - fVar12;
          param_4 = param_4 - fVar15;
          param_3 = (param_3 - fVar13) * (param_3 - fVar13);
          param_2 = param_4 * param_4;
          if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14)
          {
            fVar10 = (float)FUN_078621f8(param_5);
            fVar12 = param_2;
            fVar13 = param_3;
            fVar15 = param_4;
            fVar11 = (float)FUN_078621f8(param_6);
            fVar12 = param_2 - fVar12;
            param_4 = param_4 - fVar15;
            param_3 = (param_3 - fVar13) * (param_3 - fVar13);
            param_2 = param_4 * param_4;
            if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14
               ) goto LAB_07878208;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x2000;
  }
LAB_07878208:
  if ((uVar8 >> 0xb & 1) == 0) {
    FUN_07861da4(&local_1c0,param_5);
    FUN_07861da4(auStack_200,param_6);
    local_1e0[0] = local_1c0;
    param_2 = local_1b0;
    uVar5 = FUN_0787e754(local_1e0,auStack_200,0);
    if ((uVar5 & 1) == 0) {
      auVar16 = FUN_07861e04(param_5);
      auVar17 = FUN_07861e04(param_6);
      uVar5 = FUN_076cf610(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                           auVar17._8_8_ & 0xffffffff,0);
      if ((uVar5 & 1) == 0) {
        auVar16 = FUN_07861e5c(param_5);
        auVar17 = FUN_07861e5c(param_6);
        uVar5 = FUN_076cf610(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                             auVar17._8_8_ & 0xffffffff,0);
        if ((uVar5 & 1) == 0) {
          uVar6 = FUN_07861eb4(param_5);
          uVar7 = FUN_07861eb4(param_6);
          uVar5 = FUN_076cff64(uVar6,uVar7,0);
          if ((uVar5 & 1) == 0) {
            FUN_07861f04(&local_1c0,param_5);
            FUN_07861f04(auStack_238,param_6);
            local_220[0] = local_1c0;
            local_210 = local_1b0;
            uVar5 = FUN_076d0460(local_220,auStack_238,0);
            if ((uVar5 & 1) == 0) goto LAB_0787831c;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x800;
  }
LAB_0787831c:
  uVar6 = FUN_07861fc0(param_5);
  uVar7 = FUN_07861fc0(param_6);
  uVar5 = FUN_077300b8(uVar6,uVar7,0);
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_07862010(param_5);
    uVar7 = FUN_07862010(param_6);
    uVar5 = FUN_077300b8(uVar6,uVar7,0);
    if ((uVar5 & 1) != 0) goto LAB_07878394;
    uVar6 = FUN_0786224c(param_5);
    uVar7 = FUN_0786224c(param_6);
    uVar5 = FUN_077300b8(uVar6,uVar7,0);
    if ((uVar5 & 1) != 0) goto LAB_07878394;
    uVar6 = FUN_0786229c(param_5);
    uVar7 = FUN_0786229c(param_6);
    uVar5 = FUN_077300b8(uVar6,uVar7,0);
    uVar9 = uVar8 | 0x880;
    if ((uVar5 & 1) == 0) {
      uVar9 = uVar8;
    }
  }
  else {
LAB_07878394:
    uVar9 = uVar8 | 0x880;
  }
  fVar14 = (float)FUN_078629e8(param_5);
  fVar12 = (float)FUN_078629e8(param_6);
  uVar8 = uVar9 | 0x1000;
  if (fVar14 == fVar12) {
    uVar8 = uVar9;
  }
  iVar3 = FUN_07862a38(param_5);
  iVar4 = FUN_07862a38(param_6);
  if (iVar3 != iVar4) {
    uVar8 = uVar8 | 0x48;
  }
LAB_078783e0:
  uVar5 = FUN_053c9b28(param_5 + 0x10,param_6[2],*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN_07862d24(param_5);
    iVar4 = FUN_07862d24(param_6);
    if (iVar3 == iVar4) {
      fVar14 = (float)FUN_07863364(param_5);
      fVar12 = (float)FUN_07863364(param_6);
      uVar9 = uVar8;
      if (fVar14 != fVar12) {
        uVar9 = uVar8 | 0x808;
      }
    }
    else {
      uVar9 = uVar8 | 0x808;
    }
    fVar15 = (float)FUN_0786303c(param_5);
    fVar14 = param_2;
    fVar12 = param_3;
    fVar13 = param_4;
    fVar10 = (float)FUN_0786303c(param_6);
    uVar8 = uVar9 | 0x2000;
    if ((param_4 - fVar13) * (param_4 - fVar13) +
        (param_3 - fVar12) * (param_3 - fVar12) +
        (fVar15 - fVar10) * (fVar15 - fVar10) + (param_2 - fVar14) * (param_2 - fVar14) <
        DAT_015864f0) {
      uVar8 = uVar9;
    }
    if ((uVar8 >> 0xb & 1) == 0) {
      iVar3 = FUN_078631d4(param_5);
      iVar4 = FUN_078631d4(param_6);
      if (iVar3 == iVar4) {
        iVar3 = FUN_07863274(param_5);
        iVar4 = FUN_07863274(param_6);
        if (iVar3 == iVar4) {
          iVar3 = FUN_078632c4(param_5);
          iVar4 = FUN_078632c4(param_6);
          if (iVar3 == iVar4) {
            iVar3 = FUN_07863314(param_5);
            iVar4 = FUN_07863314(param_6);
            if (iVar3 == iVar4) {
              iVar3 = FUN_078633b4(param_5);
              iVar4 = FUN_078633b4(param_6);
              if (iVar3 == iVar4) {
                iVar3 = FUN_07863548(param_5);
                iVar4 = FUN_07863548(param_6);
                if (iVar3 == iVar4) {
                  return uVar8;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
  }
  return uVar8;
}


