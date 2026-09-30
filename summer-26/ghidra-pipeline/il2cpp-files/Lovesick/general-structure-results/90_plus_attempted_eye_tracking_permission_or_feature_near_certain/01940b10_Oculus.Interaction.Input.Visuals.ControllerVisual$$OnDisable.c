/*
FUNCTION_NAME: Oculus.Interaction.Input.Visuals.ControllerVisual$$OnDisable
ENTRY_POINT: 01940b10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Interaction_Input_Visuals_ControllerVisual__OnDisable(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  lVar4 = FUN_00da4fb8(*unaff_x21,*(undefined4 *)((long)unaff_x20 + 0x124));
  unaff_x20[0x26] = lVar4;
  *(undefined4 *)(unaff_x19 + 0x88) = 0;
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  uVar12 = 0;
  puVar6 = (undefined8 *)OVREyeGaze_TypeInfo;
  while (OVREyeGaze_TypeInfo = (undefined *)puVar6, unaff_x20 != (long *)0x0) {
    if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar12) {
      FUN_0194553c();
      plVar5 = (long *)(**(code **)(*unaff_x20 + 600))();
      *(long **)(unaff_x19 + 0x70) = plVar5;
      puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar9 == 0) goto LAB_01940e28;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_01940e10;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    lVar4 = unaff_x20[0xf];
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar12,&stack0x000000a0,*puVar6);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(float *)(lVar4 + (long)(int)uVar12 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    uVar12 = *(uint *)(unaff_x19 + 0x88);
    lVar4 = unaff_x20[0x10];
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar12,&stack0x000000a0,*puVar6);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01941128;
    *(float *)(lVar4 + (long)(int)uVar12 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    uVar12 = *(uint *)(unaff_x19 + 0x88);
    lVar4 = unaff_x20[9];
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar12,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01941128;
    lVar4 = lVar4 + (long)(int)uVar12 * 0xc;
    *(ulong *)(lVar4 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    *(undefined4 *)(lVar4 + 0x28) = uStack00000000000000a8;
    lVar4 = unaff_x20[9];
    if (lVar4 == 0) break;
    uVar12 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01941128;
    lVar10 = unaff_x20[10];
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_01941128;
    lVar4 = lVar4 + (long)(int)uVar12 * 0xc;
    uVar8 = *(undefined4 *)(lVar4 + 0x28);
    lVar10 = lVar10 + (long)(int)uVar12 * 0x10;
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
    *(undefined4 *)(lVar10 + 0x28) = uVar8;
    *(undefined4 *)(lVar10 + 0x2c) = 0;
    lVar4 = unaff_x20[10];
    if (lVar4 == 0) break;
    uVar12 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01941128;
    *(undefined4 *)(lVar4 + (long)(int)uVar12 * 0x10 + 0x2c) = 0x3f800000;
    lVar4 = unaff_x20[0x12];
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
    fVar14 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14);
    FUN_0132138c(*(long *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x88),&stack0x000000a0,
                 *puVar6);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01941128;
    fVar13 = *(float *)(unaff_x20 + 0x23);
    lVar4 = lVar4 + (long)(int)uVar12 * 0xc;
    *(ulong *)(lVar4 + 0x20) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) * fStack00000000000000a0 * fVar13,
                  (float)uVar7 * fStack00000000000000a0 * fVar13);
    *(float *)(lVar4 + 0x28) = fVar14 * fStack00000000000000a0 * fVar13;
    if (*(long *)(unaff_x19 + 0x50) == 0) break;
    uVar12 = *(uint *)(unaff_x19 + 0x88);
    lVar4 = unaff_x20[0x11];
    FUN_0132138c(*(long *)(unaff_x19 + 0x50),uVar12,&stack0x000000a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                );
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01941128;
    *(float *)(lVar4 + (long)(int)uVar12 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    uVar12 = *(uint *)(unaff_x19 + 0x88);
    lVar4 = unaff_x20[0x13];
    FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar12,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                );
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01941128;
    lVar4 = lVar4 + (long)(int)uVar12 * 0x10;
    *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(ulong *)(lVar4 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    iVar2 = *(int *)(unaff_x19 + 0x88);
    if (iVar2 % 100 == 0) {
      iVar1 = *(int *)((long)unaff_x20 + 0x24);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
      if (lVar4 != 0) {
        FUN_01919300((float)iVar2 / (float)iVar1,lVar4,*(undefined8 *)StringLiteral_13935,0);
        *(long *)(unaff_x19 + 0x18) = lVar4;
        uVar8 = 2;
        goto LAB_019410f0;
      }
      break;
    }
    uVar12 = iVar2 + 1;
    *(uint *)(unaff_x19 + 0x88) = uVar12;
    puVar6 = (undefined8 *)OVREyeGaze_TypeInfo;
  }
  goto LAB_01940870;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_01940e10:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01940e8c;
    }
  }
LAB_01940e28:
  puVar6 = (undefined8 *)
           FUN_00d59724(plVar5,*(long *)
                                Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                        ,0);
LAB_01940e8c:
  uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar9 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x78) = plVar5;
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01940f54;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,0);
LAB_01940f54:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar5 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x80) = plVar5;
            if (plVar5 != (long *)0x0) {
              lVar4 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0194101c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,0);
LAB_0194101c:
              uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar9 & 1) == 0) {
                return 0;
              }
              plVar5 = *(long **)(unaff_x19 + 0x80);
              if (plVar5 != (long *)0x0) {
                lVar4 = *plVar5;
                uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar9 != 0) {
                  piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto BufferedAudioStream__Stop;
                    }
                    uVar9 = uVar9 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar9 != 0);
                }
                puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,1);
BufferedAudioStream__Stop:
                uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
                uVar8 = 5;
                goto LAB_019410f0;
              }
            }
          }
        }
        else {
          plVar5 = *(long **)(unaff_x19 + 0x78);
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_019410b4;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,1);
LAB_019410b4:
            uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
            uVar8 = 4;
LAB_019410f0:
            *(undefined4 *)(unaff_x19 + 0x10) = uVar8;
            return 1;
          }
        }
      }
    }
  }
  else {
    plVar5 = *(long **)(unaff_x19 + 0x70);
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar3,1);
LAB_0194108c:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar8 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
      goto LAB_019410f0;
    }
  }
LAB_01940870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


