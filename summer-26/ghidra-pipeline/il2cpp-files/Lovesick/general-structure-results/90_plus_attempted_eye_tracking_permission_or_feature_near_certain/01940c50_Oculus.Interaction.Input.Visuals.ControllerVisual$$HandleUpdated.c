/*
FUNCTION_NAME: Oculus.Interaction.Input.Visuals.ControllerVisual$$HandleUpdated
ENTRY_POINT: 01940c50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Interaction_Input_Visuals_ControllerVisual__HandleUpdated(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long lVar11;
  long *unaff_x25;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  while (param_1 != 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(param_1 + 0x18) <= uVar2) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined4 *)(param_1 + (long)(int)uVar2 * 0x10 + 0x2c) = 0x3f800000;
    lVar11 = unaff_x20[0x12];
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) break;
    uVar13 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0xc);
    fVar14 = *(float *)(*(long *)(*unaff_x25 + 0xb8) + 0x14);
    FUN_0132138c(*(long *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x88),&stack0x000000a0,
                 *unaff_x21);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_01941128;
    fVar12 = *(float *)(unaff_x20 + 0x23);
    lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
    *(ulong *)(lVar11 + 0x20) =
         CONCAT44((float)((ulong)uVar13 >> 0x20) * fStack00000000000000a0 * fVar12,
                  (float)uVar13 * fStack00000000000000a0 * fVar12);
    *(float *)(lVar11 + 0x28) = fVar14 * fStack00000000000000a0 * fVar12;
    if (*(long *)(unaff_x19 + 0x50) == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x88);
    lVar11 = unaff_x20[0x11];
    FUN_0132138c(*(long *)(unaff_x19 + 0x50),uVar2,&stack0x000000a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                );
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_01941128;
    *(float *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x88);
    lVar11 = unaff_x20[0x13];
    FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar2,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                );
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_01941128;
    lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
    *(ulong *)(lVar11 + 0x28) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(ulong *)(lVar11 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    iVar3 = *(int *)(unaff_x19 + 0x88);
    if (iVar3 % 100 == 0) {
      iVar1 = *(int *)((long)unaff_x20 + 0x24);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
      if (lVar11 != 0) {
        FUN_01919300((float)iVar3 / (float)iVar1,lVar11,*(undefined8 *)StringLiteral_13935,0);
        *(long *)(unaff_x19 + 0x18) = lVar11;
        uVar7 = 2;
        goto LAB_019410f0;
      }
      break;
    }
    uVar2 = iVar3 + 1;
    *(uint *)(unaff_x19 + 0x88) = uVar2;
    unaff_x21 = (undefined8 *)OVREyeGaze_TypeInfo;
    if (unaff_x20 == (long *)0x0) break;
    if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar2) {
      FUN_0194553c();
      plVar5 = (long *)(**(code **)(*unaff_x20 + 600))();
      *(long **)(unaff_x19 + 0x70) = plVar5;
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar5 != (long *)0x0) {
        lVar11 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar8 == 0) goto LAB_01940e28;
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_01940e10;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    lVar11 = unaff_x20[0xf];
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar2,&stack0x000000a0,
                 *(undefined8 *)OVREyeGaze_TypeInfo);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_01941128;
    *(float *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x88);
    lVar11 = unaff_x20[0x10];
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar2,&stack0x000000a0,*unaff_x21);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_01941128;
    *(float *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = fStack00000000000000a0;
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x88);
    lVar11 = unaff_x20[9];
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar2,&stack0x000000a0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_01941128;
    lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
    *(ulong *)(lVar11 + 0x20) = CONCAT44(uStack00000000000000a4,fStack00000000000000a0);
    *(undefined4 *)(lVar11 + 0x28) = uStack00000000000000a8;
    lVar11 = unaff_x20[9];
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x88);
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_01941128;
    lVar9 = unaff_x20[10];
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01941128;
    lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
    uVar7 = *(undefined4 *)(lVar11 + 0x28);
    lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
    *(undefined4 *)(lVar9 + 0x28) = uVar7;
    *(undefined4 *)(lVar9 + 0x2c) = 0;
    param_1 = unaff_x20[10];
  }
  goto LAB_01940870;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_01940e10:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_01940e8c;
    }
  }
LAB_01940e28:
  puVar6 = (undefined8 *)
           FUN_00d59724(plVar5,*(long *)
                                Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                        ,0);
LAB_01940e8c:
  uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar8 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x78) = plVar5;
      if (plVar5 != (long *)0x0) {
        lVar11 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01940f54;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,0);
LAB_01940f54:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar8 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar5 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x80) = plVar5;
            if (plVar5 != (long *)0x0) {
              lVar11 = *plVar5;
              uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                    puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0194101c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,0);
LAB_0194101c:
              uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar8 & 1) == 0) {
                return 0;
              }
              plVar5 = *(long **)(unaff_x19 + 0x80);
              if (plVar5 != (long *)0x0) {
                lVar11 = *plVar5;
                uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar8 != 0) {
                  piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                      goto BufferedAudioStream__Stop;
                    }
                    uVar8 = uVar8 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,1);
BufferedAudioStream__Stop:
                uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
                uVar7 = 5;
                goto LAB_019410f0;
              }
            }
          }
        }
        else {
          plVar5 = *(long **)(unaff_x19 + 0x78);
          if (plVar5 != (long *)0x0) {
            lVar11 = *plVar5;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_019410b4;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,1);
LAB_019410b4:
            uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
            uVar7 = 4;
LAB_019410f0:
            *(undefined4 *)(unaff_x19 + 0x10) = uVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    plVar5 = *(long **)(unaff_x19 + 0x70);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar4,1);
LAB_0194108c:
      uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar7 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
      goto LAB_019410f0;
    }
  }
LAB_01940870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


