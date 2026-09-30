/*
FUNCTION_NAME: Oculus.Interaction.Input.Visuals.ControllerVisual$$Start
ENTRY_POINT: 019409d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
Oculus_Interaction_Input_Visuals_ControllerVisual__Start
          (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint in_w9;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x26;
  float fVar15;
  float fVar16;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar4 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  param_3 = param_3 - (in_w9 ^ 1);
  *(int *)(unaff_x19 + 0x6c) = param_3;
  if (param_3 < 1) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = *(float *)(param_1 + 0x60) / (float)param_3;
  }
  *(float *)(unaff_x20 + 0x24) = fVar15;
  lVar6 = FUN_00da4fb8(*unaff_x26);
  unaff_x20[9] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x23,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0xb] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x26,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0xd] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x26,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0xe] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x21,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0xf] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x21,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0x10] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x26,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0x12] = lVar6;
  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0x11] = lVar6;
  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[10] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x23,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0xc] = lVar6;
  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0x13] = lVar6;
  lVar6 = FUN_00da4fb8(*unaff_x21,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0x26] = lVar6;
  *(undefined4 *)(unaff_x19 + 0x88) = 0;
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  uVar14 = 0;
  puVar8 = (undefined8 *)OVREyeGaze_TypeInfo;
  while (OVREyeGaze_TypeInfo = (undefined *)puVar8, unaff_x20 != (long *)0x0) {
    if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar14) {
      FUN_0194553c();
      plVar7 = (long *)(**(code **)(*unaff_x20 + 600))();
      *(long **)(unaff_x19 + 0x70) = plVar7;
      puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar11 == 0) goto LAB_01940e28;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_01940e10;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    lVar6 = unaff_x20[0xf];
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar14,&stack0x000000a0,*puVar8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar14) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(float *)(lVar6 + (long)(int)uVar14 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    uVar14 = *(uint *)(unaff_x19 + 0x88);
    lVar6 = unaff_x20[0x10];
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar14,&stack0x000000a0,*puVar8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_01941128;
    *(float *)(lVar6 + (long)(int)uVar14 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    uVar14 = *(uint *)(unaff_x19 + 0x88);
    lVar6 = unaff_x20[9];
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar14,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_01941128;
    lVar6 = lVar6 + (long)(int)uVar14 * 0xc;
    *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    *(undefined4 *)(lVar6 + 0x28) = uStack00000000000000a8;
    lVar6 = unaff_x20[9];
    if (lVar6 == 0) break;
    uVar14 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_01941128;
    lVar12 = unaff_x20[10];
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_01941128;
    lVar6 = lVar6 + (long)(int)uVar14 * 0xc;
    uVar10 = *(undefined4 *)(lVar6 + 0x28);
    lVar12 = lVar12 + (long)(int)uVar14 * 0x10;
    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
    *(undefined4 *)(lVar12 + 0x28) = uVar10;
    *(undefined4 *)(lVar12 + 0x2c) = 0;
    lVar6 = unaff_x20[10];
    if (lVar6 == 0) break;
    uVar14 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_01941128;
    *(undefined4 *)(lVar6 + (long)(int)uVar14 * 0x10 + 0x2c) = 0x3f800000;
    lVar6 = unaff_x20[0x12];
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
    fVar15 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14);
    FUN_0132138c(*(long *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x88),&stack0x000000a0,
                 *puVar8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_01941128;
    fVar16 = *(float *)(unaff_x20 + 0x23);
    lVar6 = lVar6 + (long)(int)uVar14 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)uVar9 >> 0x20) * fStack00000000000000a0 * fVar16,
                  (float)uVar9 * fStack00000000000000a0 * fVar16);
    *(float *)(lVar6 + 0x28) = fVar15 * fStack00000000000000a0 * fVar16;
    if (*(long *)(unaff_x19 + 0x50) == 0) break;
    uVar14 = *(uint *)(unaff_x19 + 0x88);
    lVar6 = unaff_x20[0x11];
    FUN_0132138c(*(long *)(unaff_x19 + 0x50),uVar14,&stack0x000000a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                );
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_01941128;
    *(float *)(lVar6 + (long)(int)uVar14 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    uVar14 = *(uint *)(unaff_x19 + 0x88);
    lVar6 = unaff_x20[0x13];
    FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar14,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                );
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_01941128;
    lVar6 = lVar6 + (long)(int)uVar14 * 0x10;
    *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(ulong *)(lVar6 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    iVar2 = *(int *)(unaff_x19 + 0x88);
    if (iVar2 % 100 == 0) {
      iVar1 = *(int *)((long)unaff_x20 + 0x24);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
      if (lVar6 != 0) {
        FUN_01919300((float)iVar2 / (float)iVar1,lVar6,*(undefined8 *)StringLiteral_13935,0);
        *(long *)(unaff_x19 + 0x18) = lVar6;
        uVar10 = 2;
        goto LAB_019410f0;
      }
      break;
    }
    uVar14 = iVar2 + 1;
    *(uint *)(unaff_x19 + 0x88) = uVar14;
    puVar8 = (undefined8 *)OVREyeGaze_TypeInfo;
  }
  goto LAB_01940870;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_01940e10:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_01940e8c;
    }
  }
LAB_01940e28:
  puVar8 = (undefined8 *)
           FUN_00d59724(plVar7,*(long *)
                                Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                        ,0);
LAB_01940e8c:
  uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if ((uVar11 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x78) = plVar7;
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01940f54;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_01940f54:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar11 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar7 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x80) = plVar7;
            if (plVar7 != (long *)0x0) {
              lVar6 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar11 != 0) {
                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0194101c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar11 != 0);
              }
              puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_0194101c:
              uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              if ((uVar11 & 1) == 0) {
                return 0;
              }
              plVar7 = *(long **)(unaff_x19 + 0x80);
              if (plVar7 != (long *)0x0) {
                lVar6 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar11 != 0) {
                  piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                      puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto BufferedAudioStream__Stop;
                    }
                    uVar11 = uVar11 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,1);
BufferedAudioStream__Stop:
                uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
                uVar10 = 5;
                goto LAB_019410f0;
              }
            }
          }
        }
        else {
          plVar7 = *(long **)(unaff_x19 + 0x78);
          if (plVar7 != (long *)0x0) {
            lVar6 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_019410b4;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,1);
LAB_019410b4:
            uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
            uVar10 = 4;
LAB_019410f0:
            *(undefined4 *)(unaff_x19 + 0x10) = uVar10;
            return 1;
          }
        }
      }
    }
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x70);
    if (plVar7 != (long *)0x0) {
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,1);
LAB_0194108c:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar10 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
      goto LAB_019410f0;
    }
  }
LAB_01940870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


